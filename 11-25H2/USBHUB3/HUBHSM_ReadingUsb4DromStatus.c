/*
 * XREFs of HUBHSM_ReadingUsb4DromStatus @ 0x140009340
 * Callers:
 *     <none>
 * Callees:
 *     HUBSM_AddEvent @ 0x14000A83C (HUBSM_AddEvent.c)
 *     FWUPDATE_GetMMIO @ 0x14004180C (FWUPDATE_GetMMIO.c)
 */

__int64 __fastcall HUBHSM_ReadingUsb4DromStatus(__int64 a1)
{
  __int64 v1; // rbx

  v1 = *(_QWORD *)(a1 + 960);
  if ( (int)FWUPDATE_GetMMIO(v1, 17LL, v1 + 2712) < 0 )
    HUBSM_AddEvent(v1 + 1272, 2004LL);
  return 1000LL;
}
