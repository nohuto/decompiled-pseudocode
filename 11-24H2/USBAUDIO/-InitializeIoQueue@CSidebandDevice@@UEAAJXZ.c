/*
 * XREFs of ?InitializeIoQueue@CSidebandDevice@@UEAAJXZ @ 0x140011B10
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x140005BFC (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x14000B318 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?StartIoQueueThread@CSidebandDevice@@AEAAJXZ @ 0x140012EF4 (-StartIoQueueThread@CSidebandDevice@@AEAAJXZ.c)
 *     ?StopIoQueueThread@CSidebandDevice@@AEAAJXZ @ 0x140013040 (-StopIoQueueThread@CSidebandDevice@@AEAAJXZ.c)
 */

__int64 __fastcall CSidebandDevice::InitializeIoQueue(CSidebandDevice *this)
{
  char v2; // bl
  char v3; // dl
  char v4; // r8
  int v5; // edx
  NTSTATUS started; // edi
  int v7; // r8d
  void *v8; // r8

  v2 = 1;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) == 0
    || (v3 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    v3 = 0;
  }
  if ( *(ULONG **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
    || (v4 = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
  {
    v4 = 0;
  }
  if ( v3 || v4 )
    WPP_RECORDER_AND_TRACE_SF_(WPP_GLOBAL_Control->AttachedDevice, v3, v4, WPP_GLOBAL_Control->DeviceExtension);
  started = CSidebandDevice::StartIoQueueThread(this);
  if ( started >= 0 )
  {
    started = IoCsqInitializeEx(
                (PIO_CSQ)(*((_QWORD *)this + 5) + 160LL),
                (PIO_CSQ_INSERT_IRP_EX)CSidebandDevice::staticCsqInsertIrpEx,
                (PIO_CSQ_REMOVE_IRP)CSidebandDevice::staticCsqRemoveIrp,
                CSidebandDevice::staticCsqPeekNextIrp,
                CSidebandDevice::staticCsqAcquireLock,
                (PIO_CSQ_RELEASE_LOCK)CSidebandDevice::staticCsqReleaseLock,
                CSidebandDevice::staticCsqCompleteCanceledIrp);
    if ( started < 0 )
    {
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) == 0
        || (LOBYTE(v5) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
      {
        LOBYTE(v5) = 0;
      }
      if ( (_BYTE)v5 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v7) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_d(WPP_GLOBAL_Control->AttachedDevice, v5, v7, WPP_GLOBAL_Control->DeviceExtension);
      }
      CSidebandDevice::StopIoQueueThread(this);
    }
  }
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) == 0
    || (LOBYTE(v5) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    LOBYTE(v5) = 0;
  }
  if ( *(ULONG **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
    v2 = 0;
  if ( (_BYTE)v5 || v2 )
  {
    v8 = &WPP_309f1687d4053247ca5427ea11d9cc71_Traceguids;
    LOBYTE(v8) = v2;
    WPP_RECORDER_AND_TRACE_SF_d(WPP_GLOBAL_Control->AttachedDevice, v5, (_DWORD)v8, WPP_GLOBAL_Control->DeviceExtension);
  }
  return (unsigned int)started;
}
