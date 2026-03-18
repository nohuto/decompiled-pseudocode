/*
 * XREFs of ?CreateIocpHandleForUserMode@IOCPDispatcher@@QEAAPEAXXZ @ 0x1C00878D0
 * Callers:
 *     UserActivateMITInputProcessing @ 0x1C0087624 (UserActivateMITInputProcessing.c)
 * Callees:
 *     ?IsInputThread@CInputThreadBase@@QEBA_NXZ @ 0x1C0057EC8 (-IsInputThread@CInputThreadBase@@QEBA_NXZ.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1C00744D4 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     ProtectHandle @ 0x1C0087A68 (ProtectHandle.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00D6660 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

void *__fastcall IOCPDispatcher::CreateIocpHandleForUserMode(IOCPDispatcher *this)
{
  char *DeviceObject; // rdi
  _QWORD *v2; // rbx
  NTSTATUS v3; // eax
  __int64 v4; // r9
  NTSTATUS v5; // edx
  char v7; // al

  DeviceObject = (char *)WPP_MAIN_CB.Queue.Wcb.DeviceObject;
  if ( !CInputThreadBase::IsInputThread((CInputThreadBase *)WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 3824LL);
  if ( !*((_QWORD *)DeviceObject + 363) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 3827LL);
  v2 = DeviceObject + 2912;
  if ( *((_QWORD *)DeviceObject + 364) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 3829LL);
  v3 = ZwDuplicateObject(
         (HANDLE)0xFFFFFFFFFFFFFFFFLL,
         *((HANDLE *)DeviceObject + 363),
         (HANDLE)0xFFFFFFFFFFFFFFFFLL,
         (PHANDLE)DeviceObject + 364,
         0,
         0,
         2u);
  v5 = v3;
  if ( v3 < 0 )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) == 0
      || (v7 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
    {
      v7 = 0;
    }
    if ( v7 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_AND_TRACE_SF_d(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        v7,
        WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
        (__int64)WPP_MAIN_CB.Queue.ListEntry.Flink,
        2u,
        2u,
        0x1Au,
        (__int64)&WPP_6e321a902f9d36eb099a581dd6c4de5f_Traceguids,
        v5);
  }
  else
  {
    LOBYTE(v4) = 1;
    ProtectHandle(*v2, (unsigned int)v3, 0LL, v4);
  }
  return (void *)*v2;
}
