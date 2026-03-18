/*
 * XREFs of VidSchiSetSchedulerStatus @ 0x1400A5228
 * Callers:
 *     VidSchiWorkerThread @ 0x1400A5280 (VidSchiWorkerThread.c)
 *     VidSchiHandleControlEvent @ 0x1400FBC20 (VidSchiHandleControlEvent.c)
 *     VidSchTerminateAdapter @ 0x1400FBC90 (VidSchTerminateAdapter.c)
 *     VidSchiResume @ 0x14011580C (VidSchiResume.c)
 * Callees:
 *     <none>
 */

LONG __fastcall VidSchiSetSchedulerStatus(__int64 a1, int a2, int a3)
{
  LONG result; // eax

  *(_DWORD *)(a1 + 368) = a2;
  if ( a3 )
  {
    *(_QWORD *)(a1 + 1592) = MEMORY[0xFFFFF78000000320];
    return KeSetEvent((PRKEVENT)(a1 + 1560), 0, 0);
  }
  return result;
}
