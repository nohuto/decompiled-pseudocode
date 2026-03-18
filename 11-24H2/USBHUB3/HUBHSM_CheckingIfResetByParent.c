/*
 * XREFs of HUBHSM_CheckingIfResetByParent @ 0x140008B20
 * Callers:
 *     <none>
 * Callees:
 *     HUBPARENT_QueryParentIfDeviceWasReset @ 0x140007A18 (HUBPARENT_QueryParentIfDeviceWasReset.c)
 */

__int64 __fastcall HUBHSM_CheckingIfResetByParent(__int64 a1)
{
  return HUBPARENT_QueryParentIfDeviceWasReset(*(_QWORD *)(a1 + 960));
}
