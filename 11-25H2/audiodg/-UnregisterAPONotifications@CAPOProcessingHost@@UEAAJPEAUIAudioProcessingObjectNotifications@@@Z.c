/*
 * XREFs of ?UnregisterAPONotifications@CAPOProcessingHost@@UEAAJPEAUIAudioProcessingObjectNotifications@@@Z @ 0x140017940
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14000ABF4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RemoveNotificationClients@CAPOEndpointNotificationsHandler@@QEAAXPEAVCAPOProcessingHostObject@@@Z @ 0x140017674 (-RemoveNotificationClients@CAPOEndpointNotificationsHandler@@QEAAXPEAVCAPOProcessingHostObject@@.c)
 *     ?RemoveNotificationClients@CAudioSystemEffectsPropertyChangeNotificationsHandler@@QEAAXPEAVCAPOProcessingHostObject@@@Z @ 0x140017D44 (-RemoveNotificationClients@CAudioSystemEffectsPropertyChangeNotificationsHandler@@QEAAXPEAVCAPOP.c)
 *     ?StopSendingNotifications@CAPOProcessingHostObject@@QEAAJXZ @ 0x140018790 (-StopSendingNotifications@CAPOProcessingHostObject@@QEAAJXZ.c)
 *     ?RemoveNotificationClient@CMicBoostNotificationsHandler@@QEAAXPEAVCAPOProcessingHostObject@@@Z @ 0x140055668 (-RemoveNotificationClient@CMicBoostNotificationsHandler@@QEAAXPEAVCAPOProcessingHostObject@@@Z.c)
 *     ?RemoveNotificationClient@CAPOEnvironmentStateChangedNotificationsHandler@@QEAAXPEAVCAPOProcessingHostObject@@@Z @ 0x140056538 (-RemoveNotificationClient@CAPOEnvironmentStateChangedNotificationsHandler@@QEAAXPEAVCAPOProcessi.c)
 *     ?RemoveNotificationClient@CDeviceOrientationNotificationsHandler@@QEAAXPEAVCAPOProcessingHostObject@@@Z @ 0x14005DDBC (-RemoveNotificationClient@CDeviceOrientationNotificationsHandler@@QEAAXPEAVCAPOProcessingHostObj.c)
 *     wil::scope_exit__lambda_dcd8f23db7001de4b8b4b5d17f3e3bf2___ @ 0x140061568 (wil--scope_exit__lambda_dcd8f23db7001de4b8b4b5d17f3e3bf2___.c)
 *     _lambda_dcd8f23db7001de4b8b4b5d17f3e3bf2_::_lambda_dcd8f23db7001de4b8b4b5d17f3e3bf2_ @ 0x140061780 (_lambda_dcd8f23db7001de4b8b4b5d17f3e3bf2_--_lambda_dcd8f23db7001de4b8b4b5d17f3e3bf2_.c)
 *     wil::details::lambda_call__lambda_dcd8f23db7001de4b8b4b5d17f3e3bf2___::_lambda_call__lambda_dcd8f23db7001de4b8b4b5d17f3e3bf2___ @ 0x140061AC8 (wil--details--lambda_call__lambda_dcd8f23db7001de4b8b4b5d17f3e3bf2___--_lambda_call__lambda_dcd8.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAPOProcessingHost::UnregisterAPONotifications(
        CAPOProcessingHost *this,
        struct IAudioProcessingObjectNotifications *a2)
{
  int v3; // eax
  unsigned int v4; // ebx
  __int64 v5; // rdx
  unsigned __int64 i; // r8
  __int64 v7; // r8
  _QWORD *v8; // r9
  _QWORD *v9; // rax
  _QWORD *v10; // rdx
  struct CAPOProcessingHostObject *v11; // rcx
  struct CAPOProcessingHostObject *v12; // rdi
  __int64 v13; // rax
  int v14; // eax
  __int64 ***v15; // rdi
  __int64 **j; // rbx
  __int64 **k; // rbx
  CDeviceOrientationNotificationsHandler *v18; // rcx
  __int64 ***v19; // rdi
  __int64 **m; // rbx
  __int64 ***v21; // rdi
  __int64 **n; // rbx
  _BYTE v24[16]; // [rsp+20h] [rbp-30h] BYREF
  _BYTE v25[32]; // [rsp+30h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+28h]
  struct CAPOProcessingHostObject *v27; // [rsp+88h] [rbp+38h] BYREF
  __int64 v28; // [rsp+90h] [rbp+40h] BYREF
  __int64 v29; // [rsp+98h] [rbp+48h]

  v28 = 0LL;
  v3 = (**(__int64 (__fastcall ***)(struct IAudioProcessingObjectNotifications *, GUID *, __int64 *))a2)(
         a2,
         &GUID_fd7f2b29_24d0_4b5c_b177_592c39f9ca10,
         &v28);
  v4 = v3;
  if ( v3 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x27F,
      (int)"avcore\\audiocore\\server\\audiodg\\exe\\apoprocessinghost.cpp",
      (const char *)(unsigned int)v3);
    if ( v28 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v28 + 16LL))(v28);
    return v4;
  }
  v27 = 0LL;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 144));
  v29 = v28;
  v5 = 0xCBF29CE484222325uLL;
  for ( i = 0LL; i < 8; ++i )
    v5 = 0x100000001B3LL * (*((unsigned __int8 *)&v29 + i) ^ (unsigned __int64)v5);
  v7 = 2 * (v5 & *((_QWORD *)this + 29));
  v8 = (_QWORD *)*((_QWORD *)this + 26);
  v9 = (_QWORD *)v8[2 * (v5 & *((_QWORD *)this + 29)) + 1];
  v10 = (_QWORD *)*((_QWORD *)this + 24);
  if ( v9 == v10 )
  {
LABEL_8:
    v9 = 0LL;
  }
  else
  {
    v8 = (_QWORD *)v8[v7];
    while ( v28 != v9[2] )
    {
      if ( v9 == v8 )
        goto LABEL_8;
      v9 = (_QWORD *)v9[1];
    }
  }
  if ( !v9 )
    v9 = (_QWORD *)*((_QWORD *)this + 24);
  if ( v9 != v10 )
  {
    v11 = (struct CAPOProcessingHostObject *)v9[3];
    v12 = v27;
    v27 = v11;
    if ( v11 )
      (*(void (__fastcall **)(struct CAPOProcessingHostObject *, _QWORD *, __int64, _QWORD *))(*(_QWORD *)v11 + 8LL))(
        v11,
        v10,
        v7,
        v8);
    if ( v12 )
      (*(void (__fastcall **)(struct CAPOProcessingHostObject *, _QWORD *, __int64, _QWORD *))(*(_QWORD *)v12 + 16LL))(
        v12,
        v10,
        v7,
        v8);
    if ( this != (CAPOProcessingHost *)-144LL )
      LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 144));
    v13 = lambda_dcd8f23db7001de4b8b4b5d17f3e3bf2_::_lambda_dcd8f23db7001de4b8b4b5d17f3e3bf2_(v24, &v28, &v27, v8);
    wil::scope_exit__lambda_dcd8f23db7001de4b8b4b5d17f3e3bf2___(v25, v13);
    v14 = CAPOProcessingHostObject::StopSendingNotifications(v27);
    v4 = v14;
    if ( v14 >= 0 )
    {
      EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
      v15 = (__int64 ***)*((_QWORD *)this + 11);
      for ( j = *v15; j != (__int64 **)v15; j = (__int64 **)*j )
        CAPOEndpointNotificationsHandler::RemoveNotificationClients((CAPOEndpointNotificationsHandler *)j[6], v27);
      if ( this != (CAPOProcessingHost *)-32LL )
        LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
      EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 248));
      for ( k = (__int64 **)*((_QWORD *)this + 36); k; k = (__int64 **)*k )
        CAudioSystemEffectsPropertyChangeNotificationsHandler::RemoveNotificationClients(
          (CAudioSystemEffectsPropertyChangeNotificationsHandler *)k[1],
          v27);
      if ( this != (CAPOProcessingHost *)-248LL )
        LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 248));
      v18 = (CDeviceOrientationNotificationsHandler *)*((_QWORD *)this + 37);
      if ( v18 )
        CDeviceOrientationNotificationsHandler::RemoveNotificationClient(v18, v27);
      EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 312));
      v19 = (__int64 ***)*((_QWORD *)this + 45);
      for ( m = *v19; m != (__int64 **)v19; m = (__int64 **)*m )
        CMicBoostNotificationsHandler::RemoveNotificationClient((CMicBoostNotificationsHandler *)m[6], v27);
      if ( this != (CAPOProcessingHost *)-312LL )
        LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 312));
      EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 416));
      v21 = (__int64 ***)*((_QWORD *)this + 58);
      for ( n = *v21; n != (__int64 **)v21; n = (__int64 **)*n )
        CAPOEnvironmentStateChangedNotificationsHandler::RemoveNotificationClient(
          (CAPOEnvironmentStateChangedNotificationsHandler *)n[6],
          v27);
      if ( this != (CAPOProcessingHost *)-416LL )
        LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 416));
      wil::details::lambda_call__lambda_dcd8f23db7001de4b8b4b5d17f3e3bf2___::_lambda_call__lambda_dcd8f23db7001de4b8b4b5d17f3e3bf2___(v25);
      if ( v27 )
        (*(void (__fastcall **)(struct CAPOProcessingHostObject *))(*(_QWORD *)v27 + 16LL))(v27);
      if ( v28 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v28 + 16LL))(v28);
      return 0LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x292,
      (int)"avcore\\audiocore\\server\\audiodg\\exe\\apoprocessinghost.cpp",
      (const char *)(unsigned int)v14);
    wil::details::lambda_call__lambda_dcd8f23db7001de4b8b4b5d17f3e3bf2___::_lambda_call__lambda_dcd8f23db7001de4b8b4b5d17f3e3bf2___(v25);
    if ( v27 )
      (*(void (__fastcall **)(struct CAPOProcessingHostObject *))(*(_QWORD *)v27 + 16LL))(v27);
    if ( v28 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v28 + 16LL))(v28);
    return v4;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x285,
    (int)"avcore\\audiocore\\server\\audiodg\\exe\\apoprocessinghost.cpp",
    (const char *)0x80070490LL);
  if ( this != (CAPOProcessingHost *)-144LL )
    LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 144));
  if ( v27 )
    (*(void (__fastcall **)(struct CAPOProcessingHostObject *))(*(_QWORD *)v27 + 16LL))(v27);
  if ( v28 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v28 + 16LL))(v28);
  return 2147943568LL;
}
