/*
 * XREFs of HUBHSM_Configuring @ 0x140008E20
 * Callers:
 *     <none>
 * Callees:
 *     HUBUCX_GetControllerInfo @ 0x1400274B8 (HUBUCX_GetControllerInfo.c)
 */

__int64 __fastcall HUBHSM_Configuring(__int64 a1)
{
  HUBUCX_GetControllerInfo(*(_QWORD *)(a1 + 960));
  return 1000LL;
}
