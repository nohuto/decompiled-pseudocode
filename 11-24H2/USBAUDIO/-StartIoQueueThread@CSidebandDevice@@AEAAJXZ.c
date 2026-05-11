/*
 * XREFs of ?StartIoQueueThread@CSidebandDevice@@AEAAJXZ @ 0x140012EF4
 * Callers:
 *     ?InitializeIoQueue@CSidebandDevice@@UEAAJXZ @ 0x140011B10 (-InitializeIoQueue@CSidebandDevice@@UEAAJXZ.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x140005BFC (WPP_RECORDER_AND_TRACE_SF_d.c)
 */

__int64 __fastcall CSidebandDevice::StartIoQueueThread(char *StartContext)
{
  int v2; // edx
  NTSTATUS v3; // ebx
  int v4; // r8d
  void *ThreadHandle; // [rsp+60h] [rbp+8h] BYREF

  ThreadHandle = 0LL;
  KeClearEvent((PRKEVENT)(StartContext + 176));
  *(_OWORD *)(StartContext + 200) = 0LL;
  *(_OWORD *)(StartContext + 216) = 0LL;
  KeInitializeSemaphore((PRKSEMAPHORE)(StartContext + 200), 0, 0x7FFFFFFF);
  v3 = PsCreateSystemThread(&ThreadHandle, 0x1FFFFFu, 0LL, 0LL, 0LL, CSidebandDevice::staticIoQueueThread, StartContext);
  if ( v3 >= 0 )
  {
    v3 = ObReferenceObjectByHandle(ThreadHandle, 0x1FFFFFu, 0LL, 0, (PVOID *)StartContext + 21, 0LL);
    ZwClose(ThreadHandle);
  }
  else
  {
    LOBYTE(v2) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) != 0
              && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u;
    if ( (_BYTE)v2 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v4) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_d(WPP_GLOBAL_Control->AttachedDevice, v2, v4, WPP_GLOBAL_Control->DeviceExtension);
    }
  }
  return (unsigned int)v3;
}
