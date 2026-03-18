/*
 * XREFs of HalpPopCommonBufferEntry @ 0x1403A91F4
 * Callers:
 *     HalFreeCommonBufferDmarThin @ 0x1403A9030 (HalFreeCommonBufferDmarThin.c)
 *     HalFreeCommonBufferDmaThin @ 0x1403A9120 (HalFreeCommonBufferDmaThin.c)
 *     HalFreeCommonBufferV3 @ 0x1405501A0 (HalFreeCommonBufferV3.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x14024DD30 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140254B20 (KeAcquireSpinLockRaiseToDpc.c)
 *     RtlRbRemoveNode @ 0x1402BE130 (RtlRbRemoveNode.c)
 */

unsigned __int64 __fastcall HalpPopCommonBufferEntry(unsigned __int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rdi
  KIRQL v5; // al
  unsigned __int64 *v6; // rcx
  KIRQL v7; // bp
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // rax
  KIRQL v11; // al
  __int64 v12; // rbx
  KIRQL v13; // si
  KIRQL v14; // al
  unsigned __int64 *v15; // rcx
  KIRQL v16; // r15
  unsigned __int64 v17; // rdx
  unsigned __int64 v18; // rax

  v2 = 0LL;
  if ( !a2 )
    goto LABEL_16;
  v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 80));
  v6 = (unsigned __int64 *)(a2 + 64);
  v7 = v5;
  v8 = *(_QWORD *)(a2 + 64);
  if ( (*(_BYTE *)(a2 + 72) & 1) != 0 && v8 )
    v8 ^= (unsigned __int64)v6;
  while ( v8 )
  {
    if ( *(_QWORD *)(v8 + 24) > a1 )
    {
      v9 = *(_QWORD *)v8;
    }
    else
    {
      if ( *(_QWORD *)(v8 + 24) == a1 )
        break;
      v9 = *(_QWORD *)(v8 + 8);
    }
    if ( (*(_BYTE *)(a2 + 72) & 1) != 0 && v9 )
      v8 ^= v9;
    else
      v8 = v9;
  }
  if ( v8 )
  {
    v2 = v8;
    RtlRbRemoveNode(v6, (unsigned __int64 *)v8);
  }
  KeReleaseSpinLock((PKSPIN_LOCK)(a2 + 80), v7);
  if ( !v2 )
  {
LABEL_16:
    v11 = KeAcquireSpinLockRaiseToDpc(&HalpDmaDomainListLock);
    v12 = HalpDmaDomainList;
    v13 = v11;
    while ( (__int64 *)v12 != &HalpDmaDomainList )
    {
      v14 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v12 + 80));
      v15 = (unsigned __int64 *)(v12 + 64);
      v16 = v14;
      v17 = *(_QWORD *)(v12 + 64);
      if ( (*(_BYTE *)(v12 + 72) & 1) != 0 && v17 )
        v17 ^= (unsigned __int64)v15;
      while ( v17 && *(_QWORD *)(v17 + 24) != a1 )
      {
        if ( *(_QWORD *)(v17 + 24) <= a1 )
          v18 = *(_QWORD *)(v17 + 8);
        else
          v18 = *(_QWORD *)v17;
        if ( (*(_BYTE *)(v12 + 72) & 1) != 0 && v18 )
          v17 ^= v18;
        else
          v17 = v18;
      }
      if ( v17 )
      {
        v2 = v17;
        RtlRbRemoveNode(v15, (unsigned __int64 *)v17);
      }
      KeReleaseSpinLock((PKSPIN_LOCK)(v12 + 80), v16);
      if ( v2 )
        break;
      v12 = *(_QWORD *)v12;
    }
    KeReleaseSpinLock(&HalpDmaDomainListLock, v13);
  }
  return v2;
}
