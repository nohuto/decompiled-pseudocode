/*
 * XREFs of MmStoreEvictComplete @ 0x140326BF4
 * Callers:
 *     ?SmpPageEvict@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_PAGE_KEY@@KPEAX@Z @ 0x1403270D4 (-SmpPageEvict@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_PAGE_KEY@@KPEAX@Z.c)
 *     SmEvictComplete @ 0x140483528 (SmEvictComplete.c)
 * Callees:
 *     KeSetEvent @ 0x140250100 (KeSetEvent.c)
 *     ExAcquireSpinLockExclusive @ 0x1402BEA90 (ExAcquireSpinLockExclusive.c)
 *     MiReleaseSpinLockExclusive @ 0x140329B80 (MiReleaseSpinLockExclusive.c)
 *     RtlClearBits @ 0x140337F60 (RtlClearBits.c)
 */

LONG __fastcall MmStoreEvictComplete(__int64 a1, ULONG a2, ULONG a3)
{
  int v5; // esi
  __int64 v6; // rdi
  KIRQL v7; // r15
  __int64 v8; // rdx
  LONG result; // eax

  v5 = 0;
  v6 = *(_QWORD *)(*(_QWORD *)a1 + 8LL * *(unsigned int *)(*(_QWORD *)a1 + 1204LL) + 18528);
  v7 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v6 + 200));
  RtlClearBits((PRTL_BITMAP)(*(_QWORD *)(v6 + 80) + 8LL), a2, a3);
  if ( *(_DWORD *)(v6 + 88) > a2 )
    *(_DWORD *)(v6 + 88) = a2;
  if ( !*(_DWORD *)(v6 + 12) && (*(_BYTE *)(v6 + 174) & 1) != 0 )
    v5 = 1;
  v8 = a3 + *(_DWORD *)(v6 + 12);
  *(_DWORD *)(v6 + 12) = v8;
  LOBYTE(v8) = v7;
  result = MiReleaseSpinLockExclusive(v6 + 200, v8);
  if ( v5 )
    return KeSetEvent((PRKEVENT)(*(_QWORD *)(v6 + 216) + 928LL), 0, 0);
  return result;
}
