/*
 * XREFs of ?WorkerThreadProc@LampArrayRawInputProvider@@AEAAJXZ @ 0x180060240
 * Callers:
 *     ?WorkerThreadProcThunk@LampArrayRawInputProvider@@CAKPEAX@Z @ 0x180084BE0 (-WorkerThreadProcThunk@LampArrayRawInputProvider@@CAKPEAX@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000F254 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?UpdateFromActiveViewClient@LampArrayDevice@@QEAAJPEAK@Z @ 0x180060434 (-UpdateFromActiveViewClient@LampArrayDevice@@QEAAJPEAK@Z.c)
 *     ?ProcessDeviceNotifications@PnpDeviceWatcher@@QEAAJPEAK@Z @ 0x18006065C (-ProcessDeviceNotifications@PnpDeviceWatcher@@QEAAJPEAK@Z.c)
 *     ?Create@SipcServer@@SAJAEBU_GUID@@W4SIPC_SERVICE_BOUNDARY@@P6AXPEAUISIPCServer@@PEBUSIPC_CLIENT_INFO@@PEAX@Z44PEAPEAU4@@Z @ 0x180060B68 (-Create@SipcServer@@SAJAEBU_GUID@@W4SIPC_SERVICE_BOUNDARY@@P6AXPEAUISIPCServer@@PEBUSIPC_CLIENT_.c)
 *     ?Initialize@PnpDeviceWatcher@@QEAAJPEAVLampArrayRawInputProvider@@@Z @ 0x18008D4BC (-Initialize@PnpDeviceWatcher@@QEAAJPEAVLampArrayRawInputProvider@@@Z.c)
 *     ?Shutdown@PnpDeviceWatcher@@QEAAXXZ @ 0x18008D5B0 (-Shutdown@PnpDeviceWatcher@@QEAAXXZ.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x18008D698 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008F754 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18009D650 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DB010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall LampArrayRawInputProvider::WorkerThreadProc(LampArrayRawInputProvider *this)
{
  PnpDeviceWatcher *v1; // rbp
  int v3; // eax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  _QWORD *v7; // r14
  unsigned int LastError; // ebx
  unsigned int v9; // esi
  _QWORD *v10; // rbx
  LampArrayDevice *v11; // rcx
  DWORD v12; // r9d
  const char *v13; // r9
  __int64 v14; // rdx
  BOOL bAlertable; // [rsp+20h] [rbp-58h]
  unsigned int v17; // [rsp+30h] [rbp-48h] BYREF
  unsigned int v18; // [rsp+34h] [rbp-44h] BYREF
  HANDLE Handles[3]; // [rsp+38h] [rbp-40h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  v1 = (LampArrayRawInputProvider *)((char *)this + 192);
  v3 = PnpDeviceWatcher::Initialize((LampArrayRawInputProvider *)((char *)this + 192), this);
  v7 = (_QWORD *)((char *)this + 40);
  LastError = v3;
  if ( v3 < 0 )
  {
    v14 = 547LL;
LABEL_18:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v14,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\lamparrayrawinputprovider.cpp",
      (const char *)(unsigned int)v3,
      bAlertable);
    goto LABEL_19;
  }
  v3 = SipcServer::Create(v5, v4, v6, this);
  LastError = v3;
  if ( v3 < 0 )
  {
    v14 = 556LL;
    goto LABEL_18;
  }
  Handles[0] = (HANDLE)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v7 + 40LL))(*v7);
  Handles[1] = *((HANDLE *)this + 41);
  Handles[2] = *((HANDLE *)this + 42);
  while ( !*((_BYTE *)this + 184) )
  {
    v3 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v7 + 32LL))(*v7);
    LastError = v3;
    if ( v3 < 0 )
    {
      v14 = 569LL;
      goto LABEL_18;
    }
    v18 = -1;
    v3 = PnpDeviceWatcher::ProcessDeviceNotifications(v1, &v18);
    LastError = v3;
    if ( v3 < 0 )
    {
      v14 = 573LL;
      goto LABEL_18;
    }
    v9 = -1;
    v10 = (_QWORD *)*((_QWORD *)this + 9);
    while ( v10 != (_QWORD *)((char *)this + 72) )
    {
      v11 = (LampArrayDevice *)v10[2];
      v17 = 0;
      if ( (unsigned int)LampArrayDevice::UpdateFromActiveViewClient(v11, &v17) == -2147024882 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x241,
          (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\lamparrayrawinputprovider.cpp",
          (const char *)0x8007000ELL,
          bAlertable);
        LastError = -2147024882;
        goto LABEL_19;
      }
      v10 = (_QWORD *)*v10;
      if ( v17 < v9 )
        v9 = v17;
    }
    v12 = v18;
    if ( v9 < v18 )
      v12 = v9;
    if ( WaitForMultipleObjectsEx(3u, Handles, 0, v12, 1) == -1 )
    {
      LastError = wil::details::in1diag3::Return_GetLastError(
                    retaddr,
                    (void *)0x247,
                    (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\lamparray"
                                  "rawinputprovider.cpp",
                    v13);
      goto LABEL_19;
    }
  }
  LastError = 0;
LABEL_19:
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 5);
  PnpDeviceWatcher::Shutdown(v1);
  return LastError;
}
