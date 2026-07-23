/*
 * XREFs of MiDeleteSegmentPages @ 0x140203D4C
 * Callers:
 *     MiInitializeImageExtents @ 0x1407F0928 (MiInitializeImageExtents.c)
 *     MiSegmentDelete @ 0x140A0B944 (MiSegmentDelete.c)
 * Callees:
 *     MiDeleteSubsectionPages @ 0x140203EB8 (MiDeleteSubsectionPages.c)
 *     MiGetCommittedPages @ 0x140204018 (MiGetCommittedPages.c)
 *     MiReleaseSpinLockExclusive @ 0x14029EA30 (MiReleaseSpinLockExclusive.c)
 *     MiReturnCommit @ 0x14029EB80 (MiReturnCommit.c)
 *     ExAcquireSpinLockExclusive @ 0x14029EF70 (ExAcquireSpinLockExclusive.c)
 *     MiReturnResident @ 0x140338A10 (MiReturnResident.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140338DA0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KeYieldProcessorEx @ 0x1403EFB70 (KeYieldProcessorEx.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     MiDeleteFileExtentList @ 0x1407F08AC (MiDeleteFileExtentList.c)
 */

__int64 __fastcall MiDeleteSegmentPages(__int64 a1)
{
  BOOL v1; // esi
  __int64 v2; // r14
  __int64 v4; // rbp
  _QWORD *v5; // rbx
  __int16 v6; // r15
  __int64 v7; // rdx
  unsigned __int64 v8; // rsi
  volatile LONG *v9; // rcx
  __int64 v10; // rdx
  __int64 result; // rax
  __int64 v12; // rbx
  void *v13; // rcx
  int v14; // [rsp+40h] [rbp+8h] BYREF

  v1 = 0;
  v2 = 0LL;
  v4 = *((_QWORD *)qword_140E300C8 + (*(_WORD *)(a1 + 60) & 0x3FF));
  if ( *(_QWORD *)(a1 + 64) )
    v1 = (*(_DWORD *)(a1 + 56) & 0x20) == 0;
  v5 = (_QWORD *)(a1 + 128);
  v6 = *(_WORD *)(*(_QWORD *)a1 + 12LL);
  while ( v5 )
  {
    v2 += MiDeleteSubsectionPages((ULONG_PTR)v5);
    if ( v1 )
    {
      if ( *(_QWORD *)(*v5 + 64LL) )
      {
        if ( (*(_BYTE *)(*v5 + 62LL) & 0xC) == 8 )
        {
          v13 = (void *)v5[14];
          if ( v13 )
          {
            MiDeleteFileExtentList(v13);
            v5[14] = 0LL;
          }
        }
      }
    }
    v5 = (_QWORD *)v5[2];
  }
  v14 = 0;
  v8 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 72));
  while ( 1 )
  {
    v9 = (volatile LONG *)(a1 + 72);
    if ( !*(_QWORD *)(a1 + 32) )
      break;
    LOBYTE(v7) = v8;
    MiReleaseSpinLockExclusive(v9, v7);
    KeYieldProcessorEx(&v14);
    ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 72));
  }
  ExReleaseSpinLockExclusiveFromDpcLevel(v9);
  if ( (_BYTE)v8 != 17 )
  {
    if ( KiIrqlFlags )
    {
      LOBYTE(v10) = v8;
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v10);
    }
    __writecr8(v8);
  }
  result = MiGetCommittedPages(a1);
  v12 = result;
  if ( result )
  {
    if ( (v6 & 0x400) != 0 )
      MiReturnResident(v4, result - v2);
    result = MiReturnCommit(v4, v12 - v2, 0LL);
    _InterlockedAdd64((volatile signed __int64 *)(v4 + 19640), -v12);
  }
  return result;
}
