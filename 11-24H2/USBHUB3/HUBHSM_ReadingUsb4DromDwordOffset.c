/*
 * XREFs of HUBHSM_ReadingUsb4DromDwordOffset @ 0x140009C30
 * Callers:
 *     <none>
 * Callees:
 *     HUBSM_AddEvent @ 0x14000A83C (HUBSM_AddEvent.c)
 *     FWUPDATE_GetMMIO @ 0x14004204C (FWUPDATE_GetMMIO.c)
 */

__int64 __fastcall HUBHSM_ReadingUsb4DromDwordOffset(__int64 a1)
{
  __int64 v1; // rbx

  v1 = *(_QWORD *)(a1 + 960);
  if ( (int)FWUPDATE_GetMMIO(
              v1,
              *(_WORD *)(v1 + 2716) & 0xF,
              *(_QWORD *)(v1 + 2704) + 4LL * *(unsigned int *)(v1 + 2716)) < 0 )
    HUBSM_AddEvent(v1 + 1280, 2004LL);
  return 1000LL;
}
