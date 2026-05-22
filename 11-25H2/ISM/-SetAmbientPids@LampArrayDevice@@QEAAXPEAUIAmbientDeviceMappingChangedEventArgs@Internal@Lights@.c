/*
 * XREFs of ?SetAmbientPids@LampArrayDevice@@QEAAXPEAUIAmbientDeviceMappingChangedEventArgs@Internal@Lights@Devices@Windows@@@Z @ 0x1800E51A0
 * Callers:
 *     ?OnLampArrayAdded@LampArrayRawInputProvider@@QEAAJPEAVPnpDevice@@@Z @ 0x1800E0A5C (-OnLampArrayAdded@LampArrayRawInputProvider@@QEAAJPEAVPnpDevice@@@Z.c)
 *     ?UpdateDeviceAmbientProcess@LampArrayRawInputProvider@@AEAAXXZ @ 0x1800E1270 (-UpdateDeviceAmbientProcess@LampArrayRawInputProvider@@AEAAXXZ.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U2@U?$_tlgWrapperByVal@$00@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@4AEBU?$_tlgWrapperByVal@$00@@@Z @ 0x1800041DC (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@U2@U-$_tlgWrapperByVal@$00@@@-$_tlgWriteTempl.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008DFBC (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18008DFDC (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??1?$out_param_t@V?$unique_ptr@$$BY0A@IU?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@@details@wil@@QEAA@XZ @ 0x1800E4ACC (--1-$out_param_t@V-$unique_ptr@$$BY0A@IU-$function_deleter@P6AXPEAX@Z$1-CoTaskMemFree@@YAX0@Z@wi.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall LampArrayDevice::SetAmbientPids(
        LampArrayDevice *this,
        struct Windows::Devices::Lights::Internal::IAmbientDeviceMappingChangedEventArgs *a2,
        __int64 a3,
        const char *a4)
{
  int v6; // eax
  __int64 v7; // rax
  int v8; // eax
  __int64 v9; // r8
  __int64 v10; // r9
  _DWORD *v11; // rcx
  unsigned int v12; // edx
  int v13; // eax
  int v14; // eax
  int v15; // [rsp+20h] [rbp-50h]
  int v16; // [rsp+40h] [rbp-30h] BYREF
  int v17; // [rsp+44h] [rbp-2Ch] BYREF
  LPVOID pv; // [rsp+48h] [rbp-28h] BYREF
  const char *v19; // [rsp+50h] [rbp-20h] BYREF
  LPVOID *p_pv; // [rsp+58h] [rbp-18h] BYREF
  __int64 v21; // [rsp+60h] [rbp-10h] BYREF
  char v22; // [rsp+68h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+18h]
  char v24; // [rsp+98h] [rbp+28h] BYREF
  char v25; // [rsp+A0h] [rbp+30h] BYREF
  unsigned int v26; // [rsp+A8h] [rbp+38h] BYREF

  if ( !a2 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x293,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\lamparraydevice.cpp",
      a4);
  v24 = 0;
  v6 = (*(__int64 (__fastcall **)(struct Windows::Devices::Lights::Internal::IAmbientDeviceMappingChangedEventArgs *, char *))(*(_QWORD *)a2 + 64LL))(
         a2,
         &v24);
  if ( v6 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x296,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\lamparraydevice.cpp",
      (const char *)(unsigned int)v6,
      v15);
  *((_BYTE *)this + 224) = v24 != 0;
  v26 = 0;
  pv = 0LL;
  v7 = *(_QWORD *)a2;
  p_pv = &pv;
  v21 = 0LL;
  v22 = 1;
  v8 = (*(__int64 (__fastcall **)(struct Windows::Devices::Lights::Internal::IAmbientDeviceMappingChangedEventArgs *, unsigned int *, __int64 *))(v7 + 56))(
         a2,
         &v26,
         &v21);
  if ( v8 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x29C,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\lamparraydevice.cpp",
      (const char *)(unsigned int)v8,
      v15);
  wil::details::out_param_t<wistd::unique_ptr<unsigned int [0],wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>::~out_param_t<wistd::unique_ptr<unsigned int [0],wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>((__int64)&p_pv);
  v11 = pv;
  v12 = v26;
  if ( v26 )
    v13 = *(_DWORD *)pv;
  else
    v13 = 0;
  *((_DWORD *)this + 54) = v13;
  if ( v12 <= 1 )
    v14 = 0;
  else
    v14 = v11[1];
  *((_DWORD *)this + 55) = v14;
  if ( (unsigned int)dword_180244248 > 5 )
  {
    v25 = *((_BYTE *)this + 224);
    v16 = *((_DWORD *)this + 55);
    v17 = *((_DWORD *)this + 54);
    v19 = "SetAmbientPids";
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>>(
      (__int64)v11,
      (__int64)&unk_180209FA5,
      v9,
      v10,
      (const unsigned __int16 **)&v19,
      (__int64)&v17,
      (__int64)&v16,
      (__int64)&v25);
    v11 = pv;
  }
  pv = 0LL;
  if ( v11 )
    CoTaskMemFree(v11);
}
