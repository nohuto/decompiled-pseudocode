/*
 * XREFs of ?IsAudioFormatSupportedRemote@CAPOWrapperSrv@@UEAAJW4__MIDL___MIDL_itf_audioenginepolicy_0000_0009_0001@@PEBUtWAVEFORMATEX@@1PEAPEAU3@@Z @ 0x140006880
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ @ 0x140006CB0 (--1-$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ.c)
 *     ?Provider@AudioDgTelemetryProvider@@SAPEBU_tlgProvider_t@@XZ @ 0x1400073E4 (-Provider@AudioDgTelemetryProvider@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ??1CPerfTracker@@QEAA@XZ @ 0x14000764C (--1CPerfTracker@@QEAA@XZ.c)
 *     ??0CPerfTracker@@QEAA@PEBU_tlgProvider_t@@QEBD1@Z @ 0x1400079E0 (--0CPerfTracker@@QEAA@PEBU_tlgProvider_t@@QEBD1@Z.c)
 *     ?CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z @ 0x140007C18 (-CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14000AC24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x140058CF0 (__security_check_cookie.c)
 *     CreateAudioMediaType_Unsafe @ 0x14005B120 (CreateAudioMediaType_Unsafe.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAPOWrapperSrv::IsAudioFormatSupportedRemote(
        __int64 a1,
        int a2,
        __int64 a3,
        __int64 a4,
        struct tWAVEFORMATEX **a5)
{
  const struct _tlgProvider_t *v9; // rax
  __int64 v10; // rdx
  int v11; // eax
  unsigned int v12; // ebx
  __int64 v13; // r8
  int AudioMediaType_Unsafe; // eax
  __int64 v15; // rcx
  __int64 v16; // rax
  int v17; // eax
  __int64 v18; // rcx
  const struct tWAVEFORMATEX *v19; // rax
  int v20; // eax
  unsigned int v21; // edi
  int v23; // [rsp+20h] [rbp-E0h]
  __int64 v24; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v25; // [rsp+38h] [rbp-C8h] BYREF
  _QWORD v26[2]; // [rsp+40h] [rbp-C0h] BYREF
  LARGE_INTEGER PerformanceCount; // [rsp+50h] [rbp-B0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+188h] [rbp+88h]

  v9 = AudioDgTelemetryProvider::Provider();
  CPerfTracker::CPerfTracker(&PerformanceCount, v9, "SrvSystemEffect_IsFormatSupported", (const char *const)(a1 + 140));
  *a5 = 0LL;
  v10 = 0LL;
  v24 = 0LL;
  if ( a3 )
  {
    v11 = CreateAudioMediaType_Unsafe(a3, (unsigned int)*(unsigned __int16 *)(a3 + 16) + 18, &v24);
    v12 = v11;
    if ( v11 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x135,
        (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\apowrappersrv.cpp",
        (const char *)(unsigned int)v11,
        v23);
      if ( v24 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
      goto LABEL_20;
    }
    v10 = v24;
  }
  v13 = 0LL;
  v26[0] = 0LL;
  if ( a4 )
  {
    AudioMediaType_Unsafe = CreateAudioMediaType_Unsafe(a4, (unsigned int)*(unsigned __int16 *)(a4 + 16) + 18, v26);
    v12 = AudioMediaType_Unsafe;
    if ( AudioMediaType_Unsafe < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x13F,
        (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\apowrappersrv.cpp",
        (const char *)(unsigned int)AudioMediaType_Unsafe,
        v23);
      if ( v26[0] )
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v26[0] + 16LL))(v26[0]);
      if ( v24 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
      goto LABEL_20;
    }
    v10 = v24;
    v13 = v26[0];
  }
  v25 = 0LL;
  v15 = a1 + 8;
  v16 = *(_QWORD *)(a1 + 8);
  if ( a2 )
    v17 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64 *))(v16 + 64))(v15, v10, v13, &v25);
  else
    v17 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64 *))(v16 + 56))(v15, v10, v13, &v25);
  v12 = v17;
  if ( v17 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x14C,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\apowrappersrv.cpp",
      (const char *)(unsigned int)v17,
      v23);
    if ( v25 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 16LL))(v25);
    if ( v26[0] )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v26[0] + 16LL))(v26[0]);
    goto LABEL_18;
  }
  v18 = v25;
  if ( !v25 )
  {
LABEL_14:
    if ( v18 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
    if ( v26[0] )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v26[0] + 16LL))(v26[0]);
LABEL_18:
    if ( v24 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
    goto LABEL_20;
  }
  v19 = (const struct tWAVEFORMATEX *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v25 + 40LL))(v25);
  if ( v19 )
  {
    v20 = CloneWaveFormat(v19, a5);
    v21 = v20;
    if ( v20 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x153,
        (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\apowrappersrv.cpp",
        (const char *)(unsigned int)v20,
        v23);
      ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>(&v25);
      ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>(v26);
      ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>(&v24);
      v12 = v21;
      goto LABEL_20;
    }
    v18 = v25;
    goto LABEL_14;
  }
  v12 = -2004287480;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x151,
    (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\apowrappersrv.cpp",
    (const char *)0x88890008LL,
    v23);
  if ( v25 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 16LL))(v25);
  if ( v26[0] )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v26[0] + 16LL))(v26[0]);
  if ( v24 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
LABEL_20:
  CPerfTracker::~CPerfTracker((CPerfTracker *)&PerformanceCount);
  return v12;
}
