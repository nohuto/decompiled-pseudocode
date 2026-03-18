/*
 * XREFs of UserDeactivateMITInputProcessing @ 0x1C0087D08
 * Callers:
 *     xxxDestroyThreadInfo @ 0x1C0051264 (xxxDestroyThreadInfo.c)
 *     NtMITDeactivateInputProcessing @ 0x1C01412A0 (NtMITDeactivateInputProcessing.c)
 * Callees:
 *     Win32FreePool @ 0x1C0038570 (Win32FreePool.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0050ECC (WPP_RECORDER_AND_TRACE_SF_.c)
 *     HMValidateHandleNoSecure @ 0x1C00590FC (HMValidateHandleNoSecure.c)
 *     ?HandleInputThreadStateChange@CBaseInput@@QEAAXW4InputThreadState@@@Z @ 0x1C006DC70 (-HandleInputThreadStateChange@CBaseInput@@QEAAXW4InputThreadState@@@Z.c)
 *     RawInputManagerObjectResolveHandle @ 0x1C00751C0 (RawInputManagerObjectResolveHandle.c)
 *     ?OnInputThreadStateChanged@InputExtensibilityCallout@@QEBAXW4InputThreadState@@@Z @ 0x1C0087B68 (-OnInputThreadStateChanged@InputExtensibilityCallout@@QEBAXW4InputThreadState@@@Z.c)
 *     ?CoreMsgCloseAllDestinations@InputExtensibilityCallout@@AEAAXXZ @ 0x1C00BDAA4 (-CoreMsgCloseAllDestinations@InputExtensibilityCallout@@AEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D6930 (_guard_dispatch_icall_nop.c)
 *     RIMFreePointerDevice @ 0x1C0188818 (RIMFreePointerDevice.c)
 *     ??1VirtualTouchpadProcessor@@AEAA@XZ @ 0x1C01F05A8 (--1VirtualTouchpadProcessor@@AEAA@XZ.c)
 */

__int64 UserDeactivateMITInputProcessing()
{
  char v0; // bl
  char v1; // dl
  char v2; // r8
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rdi
  __int64 v17; // rsi
  void *v18; // rcx
  __int64 v19; // rax
  char *v20; // rdi
  InputExtensibilityCallout *v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 result; // rax
  char v27; // dl
  PVOID v28; // [rsp+70h] [rbp+8h] BYREF

  v0 = 1;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) == 0
    || (v1 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    v1 = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
    || (v2 = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
  {
    v2 = 0;
  }
  if ( v1 || v2 )
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      v1,
      v2,
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      2,
      18,
      (__int64)&WPP_fb9796299f7e36879c4ad881ea88b0c0_Traceguids);
  (*(void (__fastcall **)(PKDPC))(*(_QWORD *)WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc + 8LL))(WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc);
  v7 = SGDGetUserSessionState(v4, v3, v5, v6);
  InputExtensibilityCallout::OnInputThreadStateChanged(*(_QWORD *)(v7 + 16048), 1);
  v12 = SGDGetUserSessionState(v9, v8, v10, v11);
  v16 = v12 + 3280;
  v17 = v12 + 3424;
  while ( v16 != v17 )
  {
    CBaseInput::HandleInputThreadStateChange(*(_QWORD *)(v16 + 24), 1);
    v16 += 48LL;
  }
  if ( qword_1C0296600 && (int)qword_1C0296600() >= 0 && qword_1C0296608 )
    qword_1C0296608();
  v18 = TouchExtensibility::ghInjectionDevice;
  if ( TouchExtensibility::ghInjectionDevice )
  {
    v28 = 0LL;
    if ( (int)RawInputManagerObjectResolveHandle((char *)TouchExtensibility::ghInjectionDevice, 3u, 0, &v28) >= 0 )
    {
      v19 = HMValidateHandleNoSecure((int)TouchExtensibility::hDeviceUser, 19);
      if ( v19 )
      {
        v13 = *(_QWORD *)(v19 + 472);
        if ( v13 )
          RIMFreePointerDevice(v28);
      }
    }
    TouchExtensibility::ghInjectionDevice = 0LL;
  }
  v20 = (char *)VirtualTouchpadProcessor::s_instance;
  if ( VirtualTouchpadProcessor::s_instance )
  {
    VirtualTouchpadProcessor::~VirtualTouchpadProcessor((VirtualTouchpadProcessor *)VirtualTouchpadProcessor::s_instance);
    Win32FreePool(v20);
    VirtualTouchpadProcessor::s_instance = 0LL;
  }
  v21 = *(InputExtensibilityCallout **)(SGDGetUserSessionState(v18, v13, v14, v15) + 16048);
  *(_QWORD *)v21 = 0LL;
  InputExtensibilityCallout::CoreMsgCloseAllDestinations(v21);
  result = SGDGetUserSessionState(v23, v22, v24, v25);
  *(_QWORD *)(result + 3448) = 0LL;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (result = HIDWORD(WPP_GLOBAL_Control->Timer), (result & 2) == 0)
    || (v27 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    v27 = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
    v0 = 0;
  if ( v27 || v0 )
    return WPP_RECORDER_AND_TRACE_SF_(
             WPP_GLOBAL_Control->AttachedDevice,
             v27,
             v0,
             WPP_GLOBAL_Control->DeviceExtension,
             5,
             2,
             19,
             (__int64)&WPP_fb9796299f7e36879c4ad881ea88b0c0_Traceguids);
  return result;
}
