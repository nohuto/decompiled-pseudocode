/*
 * XREFs of ?VidSchiCheckOutstandingControlEvent@@YAHPEAU_VIDSCH_GLOBAL@@@Z @ 0x140024350
 * Callers:
 *     VidSchiScheduleCommandToRun @ 0x140023BF0 (VidSchiScheduleCommandToRun.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall VidSchiCheckOutstandingControlEvent(struct _VIDSCH_GLOBAL *a1)
{
  *((_QWORD *)a1 + 194) = MEMORY[0xFFFFF78000000320];
  return KeReadStateEvent((PRKEVENT)((char *)a1 + 1504)) > 0;
}
