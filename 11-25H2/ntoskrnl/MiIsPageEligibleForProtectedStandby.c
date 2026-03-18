/*
 * XREFs of MiIsPageEligibleForProtectedStandby @ 0x1404306E0
 * Callers:
 *     MiCanBatchHardFaultPages @ 0x14023E1D4 (MiCanBatchHardFaultPages.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiIsPageEligibleForProtectedStandby(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // r8
  _BOOL8 result; // rax

  result = !_bittest64((const signed __int64 *)(a2 + 40), 0x35u)
        && (!byte_140E3C8A6
         || (v2 = (0xAAAAAAAAAAAAAAABuLL * ((a2 + 0x220000000000LL) >> 4)) >> 9, !*(_BYTE *)(qword_140E3CF00 + 2 * v2))
         || *(_BYTE *)(qword_140E3CF00 + 2 * v2) == 10)
        && a1
        && (*(_BYTE *)(a2 + 35) & 0x10) == 0
        && (*(_DWORD *)(a2 + 32) & 0x40000000) == 0
        && *((_QWORD *)qword_140E2FD48 + ((*(_QWORD *)(a1 + 40) >> 43) & 0x3FFLL)) == *((_QWORD *)qword_140E2FD48
                                                                                      + ((*(_QWORD *)(a2 + 40) >> 43) & 0x3FFLL))
        && (HIBYTE(*(_DWORD *)(a2 + 32)) & 7u) < 5;
  return result;
}
