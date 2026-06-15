/*
 * XREFs of ?AttemptToUpdateEndpointInterfaceId@ApplicationSpecificEndpointInfo@@AEAAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@W4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_0001@@PEAPEAG@Z @ 0x180047970
 * Callers:
 *     ?GetPersistedDefaultAudioEndpoint@ApplicationSpecificEndpointInfo@@UEAAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@W4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_0001@@PEAPEAG@Z @ 0x18000E5B0 (-GetPersistedDefaultAudioEndpoint@ApplicationSpecificEndpointInfo@@UEAAJW4__MIDL___MIDL_itf_mmde.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180007BD4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x180010054 (--1-$unique_storage@U-$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1-RegCloseKey@@YAJ0@ZU-$integral.c)
 *     ?GetAppKey@ApplicationSpecificEndpointInfo@@AEAAJK_NPEAPEAUHKEY__@@@Z @ 0x1800100B0 (-GetAppKey@ApplicationSpecificEndpointInfo@@AEAAJK_NPEAPEAUHKEY__@@@Z.c)
 *     ?StringCbPrintfW@@YAJPEAG_KPEBGZZ @ 0x180010430 (-StringCbPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAUHKEY__@@@Z @ 0x1800173A8 (-reset@-$unique_storage@U-$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1-RegCloseKey@@YAJ0@ZU-$inte.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x180017420 (--1-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_constan.c)
 *     ??1?$com_ptr_t@UIAudioSessionPolicyControl@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001765C (--1-$com_ptr_t@UIAudioSessionPolicyControl@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x18001BA28 (-Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z.c)
 *     __security_check_cookie @ 0x180020100 (__security_check_cookie.c)
 *     ?GetPersistentId@ApplicationSpecificEndpointInfo@@CAJPEAUIMMDevice@@PEAPEAG@Z @ 0x180047F7C (-GetPersistentId@ApplicationSpecificEndpointInfo@@CAJPEAUIMMDevice@@PEAPEAG@Z.c)
 *     ?ReadKey@ApplicationSpecificEndpointInfo@@CAJPEAUHKEY__@@PEBGPEAPEAG@Z @ 0x18004863C (-ReadKey@ApplicationSpecificEndpointInfo@@CAJPEAUHKEY__@@PEBGPEAPEAG@Z.c)
 *     ?UpdateState@ApplicationSpecificEndpointInfo@@AEAAJW4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_0001@@W4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@PEBG@Z @ 0x180048CC8 (-UpdateState@ApplicationSpecificEndpointInfo@@AEAAJW4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_00.c)
 *     ?WritePersistedEndpoint@ApplicationSpecificEndpointInfo@@AEAAJPEAUHKEY__@@PEBG1@Z @ 0x180048DEC (-WritePersistedEndpoint@ApplicationSpecificEndpointInfo@@AEAAJPEAUHKEY__@@PEBG1@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18004F010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=12
__int64 __fastcall ApplicationSpecificEndpointInfo::AttemptToUpdateEndpointInterfaceId(
        ApplicationSpecificEndpointInfo *a1,
        unsigned int a2,
        unsigned int a3,
        unsigned __int16 **a4)
{
  int v8; // esi
  int v9; // eax
  int Key; // ebx
  unsigned int v11; // eax
  HRESULT v12; // eax
  __int64 v13; // rax
  int v14; // eax
  __int64 v15; // rdx
  unsigned int v16; // edi
  const WCHAR *v17; // rbx
  __int64 v18; // rax
  int v19; // eax
  int PersistentId; // eax
  unsigned __int16 *v21; // rax
  int InterfaceIdFromMMDevice; // eax
  int updated; // eax
  ApplicationSpecificEndpointInfo *v25; // rcx
  __int64 v26; // rdx
  LPVOID *ppv; // [rsp+20h] [rbp-89h]
  HKEY hkey; // [rsp+30h] [rbp-79h] BYREF
  __int64 *v30; // [rsp+38h] [rbp-71h] BYREF
  struct IMMDevice *v31; // [rsp+40h] [rbp-69h] BYREF
  LPVOID v32; // [rsp+48h] [rbp-61h] BYREF
  PCNZWCH lpString1; // [rsp+50h] [rbp-59h] BYREF
  unsigned int v34; // [rsp+58h] [rbp-51h] BYREF
  HKEY v35; // [rsp+60h] [rbp-49h] BYREF
  unsigned __int16 *v36; // [rsp+68h] [rbp-41h] BYREF
  char v37; // [rsp+71h] [rbp-38h]
  PCNZWCH lpString2; // [rsp+78h] [rbp-31h] BYREF
  unsigned __int16 v39[12]; // [rsp+80h] [rbp-29h] BYREF
  WCHAR Value[12]; // [rsp+98h] [rbp-11h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+108h] [rbp+5Fh]

  v8 = 0;
  *a4 = 0LL;
  lpString2 = 0LL;
  v36 = 0LL;
  v9 = StringCbPrintfW(Value, 0x18uLL, L"%03d_%03d_p", a3, a2);
  Key = v9;
  if ( v9 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x37C,
      (int)"avcore\\audiocore\\server\\audiosrv\\applicationspecificendpointinfo\\applicationspecificendpointinfo.cpp",
      (const char *)(unsigned int)v9);
    goto LABEL_27;
  }
  hkey = 0LL;
  v11 = RpcImpersonateClient(0LL);
  if ( v11 )
  {
    Key = wil::details::in1diag3::Return_Win32(
            retaddr,
            (void *)0x380,
            (int)"avcore\\audiocore\\server\\audiosrv\\applicationspecificendpointinfo\\applicationspecificendpointinfo.cpp",
            (const char *)v11);
LABEL_5:
    wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>(&hkey);
    goto LABEL_27;
  }
  v37 = 1;
  wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>::reset(
    &hkey,
    0LL);
  if ( (int)ApplicationSpecificEndpointInfo::GetAppKey(a1, 0x20019u, 0, &hkey) < 0 )
    goto LABEL_25;
  Key = ApplicationSpecificEndpointInfo::ReadKey(hkey, Value, (unsigned __int16 **)&lpString2);
  if ( Key < 0 )
  {
LABEL_8:
    RpcRevertToSelf();
    goto LABEL_5;
  }
  v32 = 0LL;
  v12 = CoCreateInstance(&CLSID_MMDeviceEnumerator, 0LL, 0x17u, &GUID_a95664d2_9614_4f35_a746_de8db63617e6, &v32);
  Key = v12;
  if ( v12 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x389,
      (int)"avcore\\audiocore\\server\\audiosrv\\applicationspecificendpointinfo\\applicationspecificendpointinfo.cpp",
      (const char *)(unsigned int)v12);
LABEL_11:
    wil::com_ptr_t<IAudioSessionPolicyControl,wil::err_returncode_policy>::~com_ptr_t<IAudioSessionPolicyControl,wil::err_returncode_policy>((__int64 *)&v32);
    goto LABEL_8;
  }
  v30 = 0LL;
  v13 = *(_QWORD *)v32;
  v30 = 0LL;
  v14 = (*(__int64 (__fastcall **)(LPVOID, _QWORD, __int64, __int64 **))(v13 + 24))(v32, a2, 1LL, &v30);
  Key = v14;
  if ( v14 < 0 )
  {
    v15 = 908LL;
    goto LABEL_14;
  }
  v34 = 0;
  v14 = (*(__int64 (__fastcall **)(__int64 *, unsigned int *))(*v30 + 24))(v30, &v34);
  Key = v14;
  if ( v14 < 0 )
  {
    v15 = 911LL;
LABEL_14:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v15,
      (int)"avcore\\audiocore\\server\\audiosrv\\applicationspecificendpointinfo\\applicationspecificendpointinfo.cpp",
      (const char *)(unsigned int)v14);
LABEL_15:
    wil::com_ptr_t<IAudioSessionPolicyControl,wil::err_returncode_policy>::~com_ptr_t<IAudioSessionPolicyControl,wil::err_returncode_policy>((__int64 *)&v30);
    goto LABEL_11;
  }
  v16 = 0;
  if ( !v34 )
    goto LABEL_24;
  v17 = lpString2;
  while ( 1 )
  {
    v31 = 0LL;
    v18 = *v30;
    v31 = 0LL;
    v19 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, struct IMMDevice **))(v18 + 32))(v30, v16, &v31);
    v8 = v19;
    if ( v19 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x394,
        (int)"avcore\\audiocore\\server\\audiosrv\\applicationspecificendpointinfo\\applicationspecificendpointinfo.cpp",
        (const char *)(unsigned int)v19);
      goto LABEL_41;
    }
    lpString1 = 0LL;
    PersistentId = ApplicationSpecificEndpointInfo::GetPersistentId(v31, (unsigned __int16 **)&lpString1);
    v8 = PersistentId;
    if ( PersistentId < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x397,
        (int)"avcore\\audiocore\\server\\audiosrv\\applicationspecificendpointinfo\\applicationspecificendpointinfo.cpp",
        (const char *)(unsigned int)PersistentId);
      wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>((void **)&lpString1);
LABEL_41:
      wil::com_ptr_t<IAudioSessionPolicyControl,wil::err_returncode_policy>::~com_ptr_t<IAudioSessionPolicyControl,wil::err_returncode_policy>((__int64 *)&v31);
      wil::com_ptr_t<IAudioSessionPolicyControl,wil::err_returncode_policy>::~com_ptr_t<IAudioSessionPolicyControl,wil::err_returncode_policy>((__int64 *)&v30);
      wil::com_ptr_t<IAudioSessionPolicyControl,wil::err_returncode_policy>::~com_ptr_t<IAudioSessionPolicyControl,wil::err_returncode_policy>((__int64 *)&v32);
      goto LABEL_26;
    }
    if ( CompareStringW(0x7Fu, 1u, lpString1, -1, v17, -1) == 2 )
      break;
    wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>((void **)&lpString1);
    wil::com_ptr_t<IAudioSessionPolicyControl,wil::err_returncode_policy>::~com_ptr_t<IAudioSessionPolicyControl,wil::err_returncode_policy>((__int64 *)&v31);
    ++v16;
    v8 = 0;
    if ( v16 >= v34 )
      goto LABEL_24;
  }
  InterfaceIdFromMMDevice = mmdDevGetInterfaceIdFromMMDevice(v31, &v36);
  Key = InterfaceIdFromMMDevice;
  v8 = 0;
  if ( InterfaceIdFromMMDevice < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x39C,
      (int)"avcore\\audiocore\\server\\audiosrv\\applicationspecificendpointinfo\\applicationspecificendpointinfo.cpp",
      (const char *)(unsigned int)InterfaceIdFromMMDevice);
LABEL_30:
    wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>((void **)&lpString1);
    wil::com_ptr_t<IAudioSessionPolicyControl,wil::err_returncode_policy>::~com_ptr_t<IAudioSessionPolicyControl,wil::err_returncode_policy>((__int64 *)&v31);
    goto LABEL_15;
  }
  v35 = 0LL;
  wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>::reset(
    &v35,
    0LL);
  if ( (int)ApplicationSpecificEndpointInfo::GetAppKey(a1, 0x2001Fu, 0, &v35) >= 0 )
  {
    LODWORD(ppv) = a2;
    updated = StringCbPrintfW(v39, 0x14uLL, L"%03d_%03d", a3, ppv);
    Key = updated;
    if ( updated < 0 )
    {
      v26 = 933LL;
LABEL_34:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v26,
        (int)"avcore\\audiocore\\server\\audiosrv\\applicationspecificendpointinfo\\applicationspecificendpointinfo.cpp",
        (const char *)(unsigned int)updated);
      wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>(&v35);
      goto LABEL_30;
    }
    updated = ApplicationSpecificEndpointInfo::WritePersistedEndpoint(v25, v35, v39, v36);
    Key = updated;
    if ( updated < 0 )
    {
      v26 = 936LL;
      goto LABEL_34;
    }
  }
  updated = ApplicationSpecificEndpointInfo::UpdateState(a1, a3, a2, v36);
  Key = updated;
  if ( updated < 0 )
  {
    v26 = 940LL;
    goto LABEL_34;
  }
  wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>(&v35);
  wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>((void **)&lpString1);
  wil::com_ptr_t<IAudioSessionPolicyControl,wil::err_returncode_policy>::~com_ptr_t<IAudioSessionPolicyControl,wil::err_returncode_policy>((__int64 *)&v31);
LABEL_24:
  wil::com_ptr_t<IAudioSessionPolicyControl,wil::err_returncode_policy>::~com_ptr_t<IAudioSessionPolicyControl,wil::err_returncode_policy>((__int64 *)&v30);
  wil::com_ptr_t<IAudioSessionPolicyControl,wil::err_returncode_policy>::~com_ptr_t<IAudioSessionPolicyControl,wil::err_returncode_policy>((__int64 *)&v32);
LABEL_25:
  v21 = v36;
  v36 = 0LL;
  *a4 = v21;
LABEL_26:
  RpcRevertToSelf();
  wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>(&hkey);
  Key = v8;
LABEL_27:
  wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>((void **)&v36);
  wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>((void **)&lpString2);
  return (unsigned int)Key;
}
