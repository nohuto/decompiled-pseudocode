/*
 * XREFs of MmStoreEvictComplete @ 0x1402E9818
 * Callers:
 *     ?SmpPageEvict@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_PAGE_KEY@@KPEAX@Z @ 0x1402E8F50 (-SmpPageEvict@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_PAGE_KEY@@KPEAX@Z.c)
 *     SmEvictComplete @ 0x1402EA434 (SmEvictComplete.c)
 * Callees:
 *     KeSetEvent @ 0x140227B30 (KeSetEvent.c)
 *     MiReleaseSpinLockExclusive @ 0x14029EA30 (MiReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14029EF70 (ExAcquireSpinLockExclusive.c)
 *     RtlClearBits @ 0x1402EA360 (RtlClearBits.c)
 */

LONG __fastcall MmStoreEvictComplete(__int64 a1, ULONG a2, ULONG a3)
{
  int v5; // esi
  __int64 v6; // rdi
  KIRQL v7; // r15
  LONG result; // eax

  v5 = 0;
  v6 = *(_QWORD *)(*(_QWORD *)a1 + 8LL * *(unsigned int *)(*(_QWORD *)a1 + 1204LL) + 18528);
  v7 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v6 + 200));
  RtlClearBits((PRTL_BITMAP)(*(_QWORD *)(v6 + 80) + 8LL), a2, a3);
  if ( *(_DWORD *)(v6 + 88) > a2 )
    *(_DWORD *)(v6 + 88) = a2;
  if ( !*(_DWORD *)(v6 + 12) && (*(_BYTE *)(v6 + 174) & 1) != 0 )
    v5 = 1;
  *(_DWORD *)(v6 + 12) += a3;
  result = MiReleaseSpinLockExclusive((_DWORD *)(v6 + 200), v7);
  if ( v5 )
    return KeSetEvent((PRKEVENT)(*(_QWORD *)(v6 + 216) + 928LL), 0, 0);
  return result;
}
