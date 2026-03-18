/*
 * XREFs of HalpAllocateCommonBufferEntry @ 0x140411084
 * Callers:
 *     HalpAllocateCommonBufferDmarThin @ 0x140410764 (HalpAllocateCommonBufferDmarThin.c)
 *     HalpAllocateCommonBufferDmaThin @ 0x140410E18 (HalpAllocateCommonBufferDmaThin.c)
 *     HalCreateCommonBufferFromMdl @ 0x14054FDB0 (HalCreateCommonBufferFromMdl.c)
 *     HalpAllocateDomainCommonBufferInternal @ 0x140550340 (HalpAllocateDomainCommonBufferInternal.c)
 *     HalCreateCommonBufferFromMdlDmaThin @ 0x1405513C0 (HalCreateCommonBufferFromMdlDmaThin.c)
 *     HalCreateCommonBufferFromMdlDmarThin @ 0x140551960 (HalCreateCommonBufferFromMdlDmarThin.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x14024DD30 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140254B20 (KeAcquireSpinLockRaiseToDpc.c)
 *     RtlRbInsertNodeEx @ 0x1402BDA80 (RtlRbInsertNodeEx.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 */

__int64 __fastcall HalpAllocateCommonBufferEntry(
        __int64 a1,
        unsigned __int64 a2,
        __int64 a3,
        __int64 a4,
        char a5,
        __int64 a6)
{
  __int64 Pool2; // rax
  bool v11; // bl
  unsigned __int64 v12; // rdi
  KIRQL v13; // si
  unsigned __int64 v14; // rdx
  unsigned __int64 v15; // rax

  Pool2 = ExAllocatePool2(0x42uLL);
  v11 = 0;
  v12 = Pool2;
  if ( !Pool2 )
    return 3221225626LL;
  *(_QWORD *)(Pool2 + 48) = a1;
  *(_QWORD *)(Pool2 + 24) = a2;
  *(_QWORD *)(Pool2 + 40) = a3;
  *(_QWORD *)(Pool2 + 56) = a4;
  *(_BYTE *)(Pool2 + 64) = a5;
  *(_QWORD *)(Pool2 + 32) = a6;
  v13 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a4 + 80));
  v14 = *(_QWORD *)(a4 + 64);
  if ( (*(_BYTE *)(a4 + 72) & 1) != 0 )
  {
    if ( v14 )
      v14 ^= a4 + 64;
  }
  if ( v14 )
  {
    while ( 1 )
    {
      if ( *(_QWORD *)(v14 + 24) > a2 )
      {
        v15 = *(_QWORD *)v14;
        if ( (*(_BYTE *)(a4 + 72) & 1) != 0 )
        {
          if ( !v15 )
            break;
          v15 ^= v14;
        }
        if ( !v15 )
          break;
      }
      else
      {
        v15 = *(_QWORD *)(v14 + 8);
        if ( (*(_BYTE *)(a4 + 72) & 1) != 0 )
        {
          if ( !v15 )
            goto LABEL_7;
          v15 ^= v14;
        }
        if ( !v15 )
        {
LABEL_7:
          v11 = 1;
          break;
        }
      }
      v14 = v15;
    }
  }
  RtlRbInsertNodeEx((__int64 *)(a4 + 64), v14, v11, v12);
  KeReleaseSpinLock((PKSPIN_LOCK)(a4 + 80), v13);
  return 0LL;
}
