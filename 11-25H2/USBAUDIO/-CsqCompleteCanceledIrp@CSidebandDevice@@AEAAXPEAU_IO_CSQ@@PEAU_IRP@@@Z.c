/*
 * XREFs of ?CsqCompleteCanceledIrp@CSidebandDevice@@AEAAXPEAU_IO_CSQ@@PEAU_IRP@@@Z @ 0x14000FF24
 * Callers:
 *     ?staticCsqCompleteCanceledIrp@CSidebandDevice@@SAXPEAU_IO_CSQ@@PEAU_IRP@@@Z @ 0x140014C20 (-staticCsqCompleteCanceledIrp@CSidebandDevice@@SAXPEAU_IO_CSQ@@PEAU_IRP@@@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x14000B328 (WPP_RECORDER_AND_TRACE_SF_.c)
 */

void __fastcall CSidebandDevice::CsqCompleteCanceledIrp(CSidebandDevice *this, struct _IO_CSQ *a2, struct _IRP *a3)
{
  IRP *v3; // rbx
  char v4; // dl

  a3->IoStatus.Status = -1073741536;
  a3->IoStatus.Information = 0LL;
  v3 = a3;
  LOBYTE(a3) = 1;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) == 0
    || (v4 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    v4 = 0;
  }
  if ( *(ULONG **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
    LOBYTE(a3) = 0;
  if ( v4 || (_BYTE)a3 )
    WPP_RECORDER_AND_TRACE_SF_(WPP_GLOBAL_Control->AttachedDevice, v4, (_DWORD)a3, WPP_GLOBAL_Control->DeviceExtension);
  IofCompleteRequest(v3, 0);
}
