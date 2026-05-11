/*
 * XREFs of ?EmptyAndCancelIrpsInQueue@CSidebandDevice@@AEAAJPEAU_LIST_ENTRY@@@Z @ 0x14000F7CC
 * Callers:
 *     ?IoQueueThread@CSidebandDevice@@AEAAXXZ @ 0x140006504 (-IoQueueThread@CSidebandDevice@@AEAAXXZ.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x14000B318 (WPP_RECORDER_AND_TRACE_SF_.c)
 */

__int64 __fastcall CSidebandDevice::EmptyAndCancelIrpsInQueue(CSidebandDevice *this, struct _LIST_ENTRY *a2)
{
  PIRP i; // rax
  int v5; // edx
  int v6; // r8d
  IRP *v7; // rbx

  for ( i = IoCsqRemoveNextIrp((PIO_CSQ)(*((_QWORD *)this + 5) + 160LL), a2);
        ;
        i = IoCsqRemoveNextIrp((PIO_CSQ)(*((_QWORD *)this + 5) + 160LL), a2) )
  {
    v7 = i;
    if ( !i )
      break;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) == 0
      || (LOBYTE(v5) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
    {
      LOBYTE(v5) = 0;
    }
    if ( *(ULONG **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
      || (LOBYTE(v6) = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
    {
      LOBYTE(v6) = 0;
    }
    if ( (_BYTE)v5 || (_BYTE)v6 )
      WPP_RECORDER_AND_TRACE_SF_(WPP_GLOBAL_Control->AttachedDevice, v5, v6, WPP_GLOBAL_Control->DeviceExtension);
    v7->IoStatus.Status = -1073741536;
    v7->IoStatus.Information = 0LL;
    IofCompleteRequest(v7, 0);
  }
  return 0LL;
}
