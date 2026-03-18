/*
 * XREFs of HUBDSM_CreatingChildPDOAndReportingToPnp @ 0x1400217C0
 * Callers:
 *     <none>
 * Callees:
 *     HUBPDO_CreatePdo @ 0x140080088 (HUBPDO_CreatePdo.c)
 */

__int64 __fastcall HUBDSM_CreatingChildPDOAndReportingToPnp(__int64 a1)
{
  return HUBPDO_CreatePdo(*(_QWORD *)(a1 + 960));
}
