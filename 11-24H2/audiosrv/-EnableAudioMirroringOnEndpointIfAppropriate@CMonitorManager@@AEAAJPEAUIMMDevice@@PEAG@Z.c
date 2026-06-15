/*
 * XREFs of ?EnableAudioMirroringOnEndpointIfAppropriate@CMonitorManager@@AEAAJPEAUIMMDevice@@PEAG@Z @ 0x180009268
 * Callers:
 *     ?DoHandleDefaultDeviceChanged@CMonitorManager@@AEAAXW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@PEBG@Z @ 0x180008BD8 (-DoHandleDefaultDeviceChanged@CMonitorManager@@AEAAXW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_00.c)
 * Callees:
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180019F28 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall CMonitorManager::EnableAudioMirroringOnEndpointIfAppropriate(
        CMonitorManager *this,
        struct IMMDevice *a2,
        unsigned __int16 *a3)
{
  struct IMMDeviceVtbl *lpVtbl; // rax
  int v8; // ebx
  struct IMMDeviceVtbl *v9; // rax
  bool v10; // zf
  PROPVARIANT v11[2]; // [rsp+20h] [rbp-30h] BYREF
  __int64 v12; // [rsp+30h] [rbp-20h]
  PROPVARIANT pvar[2]; // [rsp+38h] [rbp-18h] BYREF
  __int64 v14; // [rsp+48h] [rbp-8h]
  __int64 v15; // [rsp+88h] [rbp+38h] BYREF
  LPVOID pv; // [rsp+98h] [rbp+48h] BYREF

  v15 = 0LL;
  *(_OWORD *)v11 = 0LL;
  v12 = 0LL;
  *(_OWORD *)pvar = 0LL;
  v14 = 0LL;
  if ( !a2 )
  {
    PropVariantClear(pvar);
    PropVariantClear(v11);
    if ( v15 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
    return 2147500035LL;
  }
  lpVtbl = a2->lpVtbl;
  v15 = 0LL;
  v8 = ((__int64 (__fastcall *)(struct IMMDevice *, __int64, __int64 *))lpVtbl->OpenPropertyStore)(a2, 2LL, &v15);
  if ( v8 < 0 )
    goto LABEL_29;
  if ( a3 )
  {
    v9 = a2->lpVtbl;
    pv = 0LL;
    v8 = ((__int64 (__fastcall *)(struct IMMDevice *, LPVOID *))v9->GetId)(a2, &pv);
    if ( v8 < 0 )
      goto LABEL_8;
    if ( (unsigned int)_o__wcsicmp(a3, pv) )
    {
      v8 = (*(__int64 (__fastcall **)(__int64, void *, PROPVARIANT *))(*(_QWORD *)v15 + 40LL))(
             v15,
             &PKEY_MonitorOutput,
             v11);
      if ( v8 < 0 )
      {
        if ( pv )
          CoTaskMemFree(pv);
        goto LABEL_29;
      }
      if ( LOWORD(v11[0]) != 31 || !v11[1] || (unsigned int)_o__wcsicmp(a3, v11[1]) )
      {
        if ( (unsigned int)_o__wcsicmp(a3, pv) )
        {
          if ( (unsigned int)_o__wcsicmp(a3, v11[1]) )
          {
            PropVariantClear(v11);
            LOWORD(v11[0]) = 31;
            v11[1] = a3;
            v8 = (*(__int64 (__fastcall **)(__int64, void *, PROPVARIANT *))(*(_QWORD *)v15 + 48LL))(
                   v15,
                   &PKEY_MonitorOutput,
                   v11);
            LOWORD(v11[0]) = 0;
            if ( v8 < 0 )
            {
LABEL_8:
              wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>(&pv);
              goto LABEL_29;
            }
          }
        }
      }
    }
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>(&pv);
  }
  v8 = (*(__int64 (__fastcall **)(__int64, void *, PROPVARIANT *))(*(_QWORD *)v15 + 40LL))(
         v15,
         &PKEY_MonitorEnabled,
         pvar);
  if ( v8 < 0 )
    goto LABEL_29;
  if ( LOWORD(pvar[0]) != 11 )
  {
LABEL_26:
    LOWORD(pvar[0]) = 11;
    v10 = *((_BYTE *)this + 352) == 0;
    LOWORD(pvar[1]) = -1;
    if ( v10 )
      LOWORD(pvar[1]) = 0;
    v8 = (*(__int64 (__fastcall **)(__int64, void *, PROPVARIANT *))(*(_QWORD *)v15 + 48LL))(
           v15,
           &PKEY_MonitorEnabled,
           pvar);
    goto LABEL_29;
  }
  if ( !*((_BYTE *)this + 352) )
  {
    if ( !LOWORD(pvar[1]) )
      goto LABEL_29;
    goto LABEL_26;
  }
  if ( LOWORD(pvar[1]) != 0xFFFF )
    goto LABEL_26;
LABEL_29:
  PropVariantClear(pvar);
  PropVariantClear(v11);
  if ( v15 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
  return (unsigned int)v8;
}
