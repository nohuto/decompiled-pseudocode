/*
 * XREFs of ?FxLibraryCleanup@@YAXXZ @ 0x140085308
 * Callers:
 *     DriverEntry @ 0x140085A50 (DriverEntry.c)
 *     DriverUnload @ 0x140085CC0 (DriverUnload.c)
 * Callees:
 *     <none>
 */

void FxLibraryCleanup(void)
{
  if ( *((_QWORD *)&WPP_GLOBAL_WDF_Control.Reserved + 1) )
  {
    IoDeleteDevice(*((PDEVICE_OBJECT *)&WPP_GLOBAL_WDF_Control.Reserved + 1));
    *((_QWORD *)&WPP_GLOBAL_WDF_Control.Reserved + 1) = 0LL;
  }
  if ( qword_1400C80D0 )
  {
    ExFreePoolWithTag(qword_1400C80D0, 0);
    qword_1400C80D0 = 0LL;
  }
}
