/*
 * XREFs of HUBHSM_WritingUsb4DromReadOpcode @ 0x14000A7C0
 * Callers:
 *     <none>
 * Callees:
 *     HUBSM_AddEvent @ 0x14000A83C (HUBSM_AddEvent.c)
 *     FWUPDATE_SetMMIO @ 0x140041C74 (FWUPDATE_SetMMIO.c)
 */

__int64 __fastcall HUBHSM_WritingUsb4DromReadOpcode(__int64 a1)
{
  __int64 v1; // rbx

  v1 = *(_QWORD *)(a1 + 960);
  *(_DWORD *)(v1 + 2712) = 0;
  *(_WORD *)(v1 + 2712) = 36;
  *(_DWORD *)(v1 + 2712) |= 0x80000000;
  if ( (int)FWUPDATE_SetMMIO(v1) < 0 )
    HUBSM_AddEvent(v1 + 1272, 2004LL);
  return 1000LL;
}
