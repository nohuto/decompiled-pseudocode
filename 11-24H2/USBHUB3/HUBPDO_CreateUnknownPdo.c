/*
 * XREFs of HUBPDO_CreateUnknownPdo @ 0x140081430
 * Callers:
 *     HUBDSM_CreatingUnknownChildPDOAndReportingToPnp @ 0x140021840 (HUBDSM_CreatingUnknownChildPDOAndReportingToPnp.c)
 * Callees:
 *     HUBPDO_CreatePdoInternal @ 0x14008014C (HUBPDO_CreatePdoInternal.c)
 */

__int64 __fastcall HUBPDO_CreateUnknownPdo(_QWORD *a1)
{
  *(_DWORD *)(a1[1] + 1424LL) = 2;
  return HUBPDO_CreatePdoInternal(a1, 0);
}
