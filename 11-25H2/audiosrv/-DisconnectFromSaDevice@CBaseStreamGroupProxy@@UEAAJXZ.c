/*
 * XREFs of ?DisconnectFromSaDevice@CBaseStreamGroupProxy@@UEAAJXZ @ 0x180065060
 * Callers:
 *     ??1CSharedStreamGroupProxy@@MEAA@XZ @ 0x18002666C (--1CSharedStreamGroupProxy@@MEAA@XZ.c)
 *     ?ConnectToSaDevice@CSharedStreamGroupProxy@@UEAAJPEAUISaDeviceProxy@@W4SUBMIX_CONNECT_OPTIONS@@PEAUSystemAudioStream@@@Z @ 0x180064D60 (-ConnectToSaDevice@CSharedStreamGroupProxy@@UEAAJPEAUISaDeviceProxy@@W4SUBMIX_CONNECT_OPTIONS@@P.c)
 *     ??1CExclusiveStreamGroupProxy@@MEAA@XZ @ 0x1800EEE5C (--1CExclusiveStreamGroupProxy@@MEAA@XZ.c)
 * Callees:
 *     ??0CPerfTracker@@QEAA@PEBU_tlgProvider_t@@QEBD1@Z @ 0x18000C640 (--0CPerfTracker@@QEAA@PEBU_tlgProvider_t@@QEBD1@Z.c)
 *     ??1CPerfTracker@@QEAA@XZ @ 0x18000C978 (--1CPerfTracker@@QEAA@XZ.c)
 *     ?Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ @ 0x18000F7B0 (-Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001AC8C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x180022A54 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x1800A7AB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CBaseStreamGroupProxy::DisconnectFromSaDevice(CBaseStreamGroupProxy *this)
{
  struct _RTL_CRITICAL_SECTION *v2; // rsi
  __int64 **v3; // r15
  _QWORD *v4; // rax
  __int64 *v5; // rcx
  __int64 v6; // rax
  int v7; // eax
  unsigned int v8; // ebx
  struct AudioSrvTelemetryProvider *v9; // rax
  int v10; // eax
  __int64 *v12; // rdi
  void (__fastcall *v13)(__int64 *, __int64, __int64, _QWORD); // rbx
  unsigned int v14; // eax
  __int64 v15; // [rsp+30h] [rbp-D0h] BYREF
  _QWORD v16[9]; // [rsp+38h] [rbp-C8h] BYREF
  LARGE_INTEGER PerformanceCount; // [rsp+80h] [rbp-80h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+198h] [rbp+98h]

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 96);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 96));
  v3 = (__int64 **)((char *)this + 88);
  if ( *((_QWORD *)this + 11) )
  {
    v4 = *(_QWORD **)this;
    v16[0] = off_18016E418;
    v16[7] = v16;
    ((void (__fastcall *)(CBaseStreamGroupProxy *, _QWORD *))v4[46])(this, v16);
    v5 = *v3;
    v6 = **v3;
    v15 = 0LL;
    v7 = (*(__int64 (__fastcall **)(__int64 *, __int64 *))(v6 + 56))(v5, &v15);
    v8 = v7;
    if ( v7 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x2F8,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
        (const char *)(unsigned int)v7);
      if ( v15 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
      goto LABEL_7;
    }
    if ( v15 )
    {
      v9 = AudioSrvTelemetryProvider::Instance();
      CPerfTracker::CPerfTracker(
        &PerformanceCount,
        *((const struct _tlgProvider_t **)v9 + 1),
        "StreamGroup_DisconnectFromSaDevice",
        0LL);
      v10 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 10) + 64LL))(*((_QWORD *)this + 10), v15);
      v8 = v10;
      if ( v10 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x2FD,
          (int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
          (const char *)(unsigned int)v10);
        CPerfTracker::~CPerfTracker((CPerfTracker *)&PerformanceCount);
        if ( v15 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
LABEL_7:
        if ( v2 )
          LeaveCriticalSection(v2);
        return v8;
      }
      CPerfTracker::~CPerfTracker((CPerfTracker *)&PerformanceCount);
    }
    (*(void (__fastcall **)(__int64 *, CBaseStreamGroupProxy *))(**v3 + 184))(*v3, this);
    v12 = *v3;
    v13 = *(void (__fastcall **)(__int64 *, __int64, __int64, _QWORD))(**v3 + 88);
    v14 = (*(__int64 (__fastcall **)(CBaseStreamGroupProxy *))(*(_QWORD *)this + 176LL))(this);
    v13(v12, 2LL, 0xFFFFFFFFLL, v14);
    if ( v15 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
  }
  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)this + 11);
  if ( v2 )
    LeaveCriticalSection(v2);
  return 0LL;
}
