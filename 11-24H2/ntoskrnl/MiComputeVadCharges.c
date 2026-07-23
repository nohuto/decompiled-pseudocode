/*
 * XREFs of MiComputeVadCharges @ 0x140210398
 * Callers:
 *     MiDeletePartialVad @ 0x1402675A0 (MiDeletePartialVad.c)
 *     MiDeleteNewlyCreatedPartialVads @ 0x1407FF7B4 (MiDeleteNewlyCreatedPartialVads.c)
 *     MiInsertVadCharges @ 0x140918FC8 (MiInsertVadCharges.c)
 * Callees:
 *     MiVadPureReserve @ 0x140210510 (MiVadPureReserve.c)
 *     MiLocateLockedVadEvent @ 0x14026757C (MiLocateLockedVadEvent.c)
 *     MiComputeAweCharges @ 0x1406F37C8 (MiComputeAweCharges.c)
 *     MiResidentPagesForSpan @ 0x14099A484 (MiResidentPagesForSpan.c)
 */

__int64 __fastcall MiComputeVadCharges(__int64 a1, __int64 a2)
{
  __int64 v2; // r9
  __int64 result; // rax
  unsigned __int64 v4; // rcx
  int v6; // r10d
  __int64 v7; // r8

  v2 = a1;
  result = 0LL;
  v4 = *(unsigned int *)(a1 + 52) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 34) << 32);
  *(_OWORD *)a2 = 0LL;
  *(_QWORD *)(a2 + 16) = 0LL;
  if ( v4 < 0x7FFFFFFFDLL )
  {
    v6 = *(_DWORD *)(v2 + 48);
    v7 = 0LL;
    *(_QWORD *)(a2 + 16) = 136LL;
    if ( (v6 & 0x200000) == 0 && !(unsigned int)MiVadPureReserve(v2, a2, 0LL, v2) )
      *(_QWORD *)(a2 + 8) = 8
                          * ((*(unsigned int *)(v2 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v2 + 33) << 32))
                           - (*(unsigned int *)(v2 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v2 + 32) << 32)))
                          + 8;
    result = v6 & 0x70;
    if ( (_DWORD)result == 48 )
    {
      if ( (v6 & 0xC200000) != 0x8200000 )
        v7 = MiLocateLockedVadEvent(v2, 256LL) + 8;
      result = MiComputeAweCharges(v2, v7);
    }
    else
    {
      if ( (_DWORD)result != 64 && (_DWORD)result != 16 )
        goto LABEL_10;
      result = MiResidentPagesForSpan(
                 (*(unsigned int *)(v2 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v2 + 32) << 32)) << 12,
                 ((*(unsigned int *)(v2 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v2 + 33) << 32)) << 12) | 0xFFF,
                 v7);
    }
    v7 = result;
LABEL_10:
    *(_QWORD *)a2 = v7;
    return result;
  }
  if ( (*(unsigned int *)(v2 + 52) | ((unsigned __int64)*(unsigned __int8 *)(v2 + 34) << 32)) == 0x7FFFFFFFDLL )
    *(_QWORD *)(a2 + 16) = 64LL;
  return result;
}
