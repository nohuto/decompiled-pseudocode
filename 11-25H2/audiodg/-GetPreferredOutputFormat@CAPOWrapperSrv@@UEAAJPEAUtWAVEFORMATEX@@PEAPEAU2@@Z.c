/*
 * XREFs of ?GetPreferredOutputFormat@CAPOWrapperSrv@@UEAAJPEAUtWAVEFORMATEX@@PEAPEAU2@@Z @ 0x1400640A0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ @ 0x140006C80 (--1-$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ.c)
 *     ?Provider@AudioDgTelemetryProvider@@SAPEBU_tlgProvider_t@@XZ @ 0x1400073B4 (-Provider@AudioDgTelemetryProvider@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ??1CPerfTracker@@QEAA@XZ @ 0x14000761C (--1CPerfTracker@@QEAA@XZ.c)
 *     ??0CPerfTracker@@QEAA@PEBU_tlgProvider_t@@QEBD1@Z @ 0x1400079B0 (--0CPerfTracker@@QEAA@PEBU_tlgProvider_t@@QEBD1@Z.c)
 *     ?CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z @ 0x140007BE8 (-CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14000ABF4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0?$CComQIPtr@UIAudioProcessingObjectPreferredFormatSupport@@$1?_GUID_51cbd3c4_f1f3_4d2f_a0e1_7e9c4dd0feb3@@3U__s_GUID@@B@ATL@@QEAA@PEAUIUnknown@@@Z @ 0x140043B14 (--0-$CComQIPtr@UIAudioProcessingObjectPreferredFormatSupport@@$1-_GUID_51cbd3c4_f1f3_4d2f_a0e1_7.c)
 *     __security_check_cookie @ 0x140058DE0 (__security_check_cookie.c)
 *     CreateAudioMediaType_Unsafe @ 0x14005B210 (CreateAudioMediaType_Unsafe.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CAPOWrapperSrv::GetPreferredOutputFormat(CAPOWrapperSrv *this, struct tWAVEFORMATEX *a2, LPVOID *a3)
{
  const struct _tlgProvider_t *v6; // rax
  __int64 v7; // rdx
  unsigned int v8; // ebx
  int cbSize; // edx
  int v10; // eax
  void (__fastcall ***v11)(_QWORD, GUID *, _QWORD *); // rdx
  int v12; // eax
  const struct tWAVEFORMATEX *v13; // rax
  int v14; // eax
  struct IAudioMediaType *v16; // [rsp+20h] [rbp-E0h] BYREF
  __int64 v17; // [rsp+28h] [rbp-D8h] BYREF
  __int64 v18; // [rsp+30h] [rbp-D0h] BYREF
  LPVOID pv; // [rsp+38h] [rbp-C8h] BYREF
  LARGE_INTEGER PerformanceCount; // [rsp+40h] [rbp-C0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+168h] [rbp+68h]

  v6 = AudioDgTelemetryProvider::Provider((__int64)this);
  CPerfTracker::CPerfTracker(
    &PerformanceCount,
    v6,
    "SrvSystemEffect_GetPreferredOutputFormat",
    (const char *const)this + 140);
  if ( a3 )
  {
    *a3 = 0LL;
    if ( !a2 )
    {
      v7 = 578LL;
      goto LABEL_5;
    }
    cbSize = a2->cbSize;
    v16 = 0LL;
    v10 = CreateAudioMediaType_Unsafe(a2, cbSize + 18, &v16);
    v8 = v10;
    if ( v10 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x249,
        (int)"avcore\\audiocore\\server\\audiodg\\exe\\apowrappersrv.cpp",
        (const char *)(unsigned int)v10);
LABEL_8:
      ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)&v16);
      goto LABEL_21;
    }
    v17 = 0LL;
    v11 = (void (__fastcall ***)(_QWORD, GUID *, _QWORD *))*((_QWORD *)this + 12);
    if ( v11 )
    {
      ATL::CComQIPtr<IAudioProcessingObjectPreferredFormatSupport,&__s_GUID const _GUID_51cbd3c4_f1f3_4d2f_a0e1_7e9c4dd0feb3>::CComQIPtr<IAudioProcessingObjectPreferredFormatSupport,&__s_GUID const _GUID_51cbd3c4_f1f3_4d2f_a0e1_7e9c4dd0feb3>(
        &v18,
        v11);
      if ( v18 )
      {
        v12 = (*(__int64 (__fastcall **)(__int64, struct IAudioMediaType *, __int64 *))(*(_QWORD *)v18 + 32LL))(
                v18,
                v16,
                &v17);
        v8 = v12;
        if ( v12 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x251,
            (int)"avcore\\audiocore\\server\\audiodg\\exe\\apowrappersrv.cpp",
            (const char *)(unsigned int)v12);
          ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>(&v18);
LABEL_13:
          ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>(&v17);
          goto LABEL_8;
        }
      }
      ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>(&v18);
      if ( v17 )
      {
        v13 = (const struct tWAVEFORMATEX *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v17 + 40LL))(v17);
        if ( !v13 )
        {
          v8 = -2004287480;
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x258,
            (int)"avcore\\audiocore\\server\\audiodg\\exe\\apowrappersrv.cpp",
            (const char *)0x88890008LL);
          goto LABEL_13;
        }
        pv = 0LL;
        v14 = CloneWaveFormat(v13, (struct tWAVEFORMATEX **)&pv);
        v8 = v14;
        if ( v14 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x25B,
            (int)"avcore\\audiocore\\server\\audiodg\\exe\\apowrappersrv.cpp",
            (const char *)(unsigned int)v14);
          CoTaskMemFree(pv);
          goto LABEL_13;
        }
        *a3 = pv;
        CoTaskMemFree(0LL);
      }
    }
    ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>(&v17);
    ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)&v16);
    v8 = 0;
    goto LABEL_21;
  }
  v7 = 575LL;
LABEL_5:
  v8 = -2147024809;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v7,
    (int)"avcore\\audiocore\\server\\audiodg\\exe\\apowrappersrv.cpp",
    (const char *)0x80070057LL);
LABEL_21:
  CPerfTracker::~CPerfTracker((CPerfTracker *)&PerformanceCount);
  return v8;
}
