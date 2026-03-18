/*
 * XREFs of ?DxgMmsDeInitDebug@@YAXXZ @ 0x140091F00
 * Callers:
 *     DriverUnload @ 0x14004C050 (DriverUnload.c)
 * Callees:
 *     <none>
 */

void DxgMmsDeInitDebug(void)
{
  if ( P )
  {
    KeDeregisterBugCheckReasonCallback(P);
    ExFreePoolWithTag(P, 0x4B677844u);
    P = 0LL;
    qword_140081250 = 0LL;
  }
}
