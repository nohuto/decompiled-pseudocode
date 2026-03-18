/*
 * XREFs of VidSchiResume @ 0x140115A2C
 * Callers:
 *     VidSchiHandleControlEvent @ 0x1400FAE64 (VidSchiHandleControlEvent.c)
 * Callees:
 *     VidSchiSetSchedulerStatus @ 0x1400A6AA8 (VidSchiSetSchedulerStatus.c)
 */

LONG __fastcall VidSchiResume(__int64 a1)
{
  LONG result; // eax

  result = VidSchiSetSchedulerStatus(a1, 1, 1);
  if ( *(_DWORD *)(a1 + 780) )
  {
    *(_QWORD *)(a1 + 1480) = MEMORY[0xFFFFF78000000320];
    return KeSetEvent((PRKEVENT)(a1 + 1448), 0, 0);
  }
  return result;
}
