/*
 * XREFs of ?RuntimeClassInitialize@CBridgeSourceEndpoint@@QEAAJPEAUIDeviceGraphObjectCache@@_JPEAUIAudioMediaType@@I@Z @ 0x140067970
 * Callers:
 *     ??$MakeAndInitialize@VCBridgeSourceEndpoint@@UIAudioEndpointRT@@AEAPEAUIDeviceGraphObjectCache@@AEA_JAEAPEAUIAudioMediaType@@AEAI@Details@WRL@Microsoft@@YAJPEAPEAUIAudioEndpointRT@@AEAPEAUIDeviceGraphObjectCache@@AEA_JAEAPEAUIAudioMediaType@@AEAI@Z @ 0x14004A9D8 (--$MakeAndInitialize@VCBridgeSourceEndpoint@@UIAudioEndpointRT@@AEAPEAUIDeviceGraphObjectCache@@.c)
 * Callees:
 *     ?CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z @ 0x140007BE8 (-CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14000ABF4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$com_ptr_t@U?$IVector@PEAVAudioDeviceModule@Devices@Media@Windows@@@Collections@Foundation@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x14000ED80 (-reset@-$com_ptr_t@U-$IVector@PEAVAudioDeviceModule@Devices@Media@Windows@@@Collections@Foundati.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x140012DA8 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??4?$com_ptr_t@UISubmix@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAUISubmix@@@Z @ 0x1400192CC (--4-$com_ptr_t@UISubmix@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAUISubmix@@@Z.c)
 *     ??1?$CSAutoLock@$00@@QEAA@XZ @ 0x14002CC20 (--1-$CSAutoLock@$00@@QEAA@XZ.c)
 *     ??1?$out_param_t@V?$unique_ptr@UAPO_REG_PROPERTIES@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@@details@wil@@QEAA@XZ @ 0x14003DC14 (--1-$out_param_t@V-$unique_ptr@UAPO_REG_PROPERTIES@@U-$function_deleter@P6AXPEAX@Z$1-CoTaskMemFr.c)
 *     ?InternalAddRef@?$ComPtr@U?$IAsyncOperationCompletedHandler@PEAVModuleCommandResult@Devices@Media@Windows@@@Foundation@Windows@@@WRL@Microsoft@@IEBAXXZ @ 0x140041D70 (-InternalAddRef@-$ComPtr@U-$IAsyncOperationCompletedHandler@PEAVModuleCommandResult@Devices@Medi.c)
 *     ??$AsWeak@VCBridgeSourceEndpoint@@@WRL@Microsoft@@YAJPEAVCBridgeSourceEndpoint@@PEAVWeakRef@01@@Z @ 0x140066D84 (--$AsWeak@VCBridgeSourceEndpoint@@@WRL@Microsoft@@YAJPEAVCBridgeSourceEndpoint@@PEAVWeakRef@01@@.c)
 *     ??$_Emplace_reallocate@AEA_JAEAVWeakRef@WRL@Microsoft@@@?$vector@UBridgeEndpointRecord@@V?$allocator@UBridgeEndpointRecord@@@std@@@std@@AEAAPEAUBridgeEndpointRecord@@QEAU2@AEA_JAEAVWeakRef@WRL@Microsoft@@@Z @ 0x140066EF8 (--$_Emplace_reallocate@AEA_JAEAVWeakRef@WRL@Microsoft@@@-$vector@UBridgeEndpointRecord@@V-$alloc.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CBridgeSourceEndpoint::RuntimeClassInitialize(
        CBridgeSourceEndpoint *this,
        struct IDeviceGraphObjectCache *a2,
        __int64 a3,
        struct IAudioMediaType *a4,
        unsigned int a5)
{
  const struct tWAVEFORMATEX *v9; // rax
  int v10; // ebx
  __int64 v11; // rdx
  unsigned int v12; // r12d
  __int64 v13; // rsi
  __int64 (__fastcall *v14)(__int64, _DWORD *, char *); // rdi
  const struct tWAVEFORMATEX *v15; // rax
  int v16; // eax
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v20; // [rsp+20h] [rbp-30h] BYREF
  _DWORD v21[2]; // [rsp+28h] [rbp-28h] BYREF
  struct IAudioMediaType *v22; // [rsp+30h] [rbp-20h]
  char *v23; // [rsp+38h] [rbp-18h] BYREF
  struct tWAVEFORMATEX *v24; // [rsp+40h] [rbp-10h] BYREF
  char v25; // [rsp+48h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+38h]
  __int64 v27; // [rsp+90h] [rbp+40h] BYREF
  __int64 v28; // [rsp+A0h] [rbp+50h] BYREF
  struct _RTL_CRITICAL_SECTION *v29; // [rsp+A8h] [rbp+58h] BYREF

  v28 = a3;
  v23 = (char *)this + 72;
  v24 = 0LL;
  v25 = 1;
  v9 = (const struct tWAVEFORMATEX *)((__int64 (__fastcall *)(struct IAudioMediaType *))a4->lpVtbl->GetAudioFormat)(a4);
  v10 = CloneWaveFormat(v9, &v24);
  wil::details::out_param_t<wistd::unique_ptr<APO_REG_PROPERTIES,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>::~out_param_t<wistd::unique_ptr<APO_REG_PROPERTIES,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>((__int64)&v23);
  if ( v10 < 0 )
  {
    v11 = 83LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v11,
      (int)"avcore\\audiocore\\server\\audiodg\\exe\\bridgesourceendpoint.cpp",
      (const char *)(unsigned int)v10);
    return (unsigned int)v10;
  }
  wil::com_ptr_t<ISubmix,wil::err_returncode_policy>::operator=((__int64 *)this + 10, (__int64)a2);
  v21[1] = 0;
  v12 = a5;
  v21[0] = a5;
  v22 = a4;
  v13 = *((_QWORD *)this + 10);
  v14 = *(__int64 (__fastcall **)(__int64, _DWORD *, char *))(*(_QWORD *)v13 + 40LL);
  wil::com_ptr_t<Windows::Foundation::Collections::IVector<Windows::Media::Devices::AudioDeviceModule *>,wil::err_returncode_policy>::reset((__int64 *)this + 11);
  v10 = v14(v13, v21, (char *)this + 88);
  if ( v10 < 0 )
  {
    v11 = 92LL;
    goto LABEL_3;
  }
  v23 = (char *)this + 72;
  v24 = 0LL;
  v25 = 1;
  v15 = (const struct tWAVEFORMATEX *)((__int64 (__fastcall *)(struct IAudioMediaType *))a4->lpVtbl->GetAudioFormat)(a4);
  v10 = CloneWaveFormat(v15, &v24);
  wil::details::out_param_t<wistd::unique_ptr<APO_REG_PROPERTIES,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>::~out_param_t<wistd::unique_ptr<APO_REG_PROPERTIES,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>((__int64)&v23);
  if ( v10 < 0 )
  {
    v11 = 93LL;
    goto LABEL_3;
  }
  v20 = 0LL;
  v29 = 0LL;
  v27 = 0LL;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v29);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v20);
  v16 = Microsoft::WRL::AsWeak<CBridgeSourceEndpoint>((__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))this, &v27);
  v10 = v16;
  if ( v16 >= 0 )
  {
    EnterCriticalSection(&g_lockBridgeEndpointRegistry);
    v29 = &g_lockBridgeEndpointRegistry;
    v18 = xmmword_1400C4758;
    if ( (_QWORD)xmmword_1400C4758 == *((_QWORD *)&xmmword_1400C4758 + 1) )
    {
      std::vector<BridgeEndpointRecord>::_Emplace_reallocate<__int64 &,Microsoft::WRL::WeakRef &>(
        v17,
        xmmword_1400C4758,
        &v28,
        &v27);
    }
    else
    {
      *(_QWORD *)xmmword_1400C4758 = a3;
      *(_QWORD *)(v18 + 8) = v27;
      Microsoft::WRL::ComPtr<Windows::Foundation::IAsyncOperationCompletedHandler<Windows::Media::Devices::ModuleCommandResult *>>::InternalAddRef((__int64 *)(v18 + 8));
      *(_QWORD *)&xmmword_1400C4758 = xmmword_1400C4758 + 16;
    }
    CSAutoLock<1>::~CSAutoLock<1>(&v29);
    *((_DWORD *)this + 16) = v12;
    v10 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x61,
      (int)"avcore\\audiocore\\server\\audiodg\\exe\\bridgesourceendpoint.cpp",
      (const char *)(unsigned int)v16);
  }
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v27);
  return (unsigned int)v10;
}
