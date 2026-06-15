/*
 * XREFs of ?RuntimeClassInitialize@CBridgeToApoAuxInput@@QEAAJPEAUIDeviceGraphObjectCache@@PEAUBRIDGE_STREAM_DESCRIPTOR@@PEAUIAudioProcessingObject@@PEAUIAudioMediaType@@I@Z @ 0x140032CF4
 * Callers:
 *     ??$MakeAndInitialize@VCBridgeToApoAuxInput@@UIBridgeSourceEndpointConsumer@@AEAPEAUIDeviceGraphObjectCache@@AEAPEAUBRIDGE_STREAM_DESCRIPTOR@@AEAPEAUIAudioProcessingObject@@AEAPEAUIAudioMediaType@@AEAI@Details@WRL@Microsoft@@YAJPEAPEAUIBridgeSourceEndpointConsumer@@AEAPEAUIDeviceGraphObjectCache@@AEAPEAUBRIDGE_STREAM_DESCRIPTOR@@AEAPEAUIAudioProcessingObject@@AEAPEAUIAudioMediaType@@AEAI@Z @ 0x14004A8D4 (--$MakeAndInitialize@VCBridgeToApoAuxInput@@UIBridgeSourceEndpointConsumer@@AEAPEAUIDeviceGraphO.c)
 * Callees:
 *     ??1?$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ @ 0x140006C80 (--1-$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ.c)
 *     ?CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z @ 0x140007BE8 (-CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14000ABF4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetMaxSupportedConnectionVersion@@YAIPEAUIAudioProcessingObject@@@Z @ 0x14000F00C (-GetMaxSupportedConnectionVersion@@YAIPEAUIAudioProcessingObject@@@Z.c)
 *     ?reset@?$unique_ptr@UKSMULTIPLE_ITEM@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@QEAAXPEAUKSMULTIPLE_ITEM@@@Z @ 0x140027A18 (-reset@-$unique_ptr@UKSMULTIPLE_ITEM@@U-$function_deleter@P6AXPEAX@Z$1-CoTaskMemFree@@YAX0@Z@wil.c)
 *     ?FillAuxiliaryInputInitStruct@@YAJPEAUBRIDGE_STREAM_DESCRIPTOR@@PEAUIAudioProcessingObject@@AEAUAPOInitSystemEffects2@@@Z @ 0x1400333F0 (-FillAuxiliaryInputInitStruct@@YAJPEAUBRIDGE_STREAM_DESCRIPTOR@@PEAUIAudioProcessingObject@@AEAU.c)
 *     ?GetAPOProcessingHostInstance@@YAJPEAPEAUIAPOProcessingHost@@@Z @ 0x140034710 (-GetAPOProcessingHostInstance@@YAJPEAPEAUIAPOProcessingHost@@@Z.c)
 *     _lambda_9ea61389800d10a92a31feda1ef8f987_::operator() @ 0x140034AB8 (_lambda_9ea61389800d10a92a31feda1ef8f987_--operator().c)
 *     __security_check_cookie @ 0x140058DE0 (__security_check_cookie.c)
 *     memset_0 @ 0x14005A1D4 (memset_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=12
__int64 __fastcall CBridgeToApoAuxInput::RuntimeClassInitialize(
        CBridgeToApoAuxInput *this,
        struct IDeviceGraphObjectCache *a2,
        struct BRIDGE_STREAM_DESCRIPTOR *a3,
        struct IAudioProcessingObject *a4,
        struct IAudioMediaType *a5,
        unsigned int a6)
{
  const struct tWAVEFORMATEX *v9; // rax
  int inited; // ebx
  _QWORD *v11; // r14
  __int64 v12; // rcx
  __int64 v13; // rcx
  unsigned __int32 v14; // edi
  int APOProcessingHostInstance; // eax
  struct IAPOProcessingHost *v16; // rbx
  __int64 v17; // rax
  int v18; // eax
  unsigned int v19; // r12d
  int v20; // eax
  unsigned int v21; // r14d
  int v23; // eax
  int MaxSupportedConnectionVersion; // ecx
  int v25; // eax
  __int64 v26; // rdx
  int v27; // eax
  __int64 v28; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v29; // [rsp+38h] [rbp-C8h] BYREF
  struct IAPOProcessingHost *v30; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v31; // [rsp+48h] [rbp-B8h] BYREF
  void **v32; // [rsp+50h] [rbp-B0h] BYREF
  struct tWAVEFORMATEX *v33; // [rsp+58h] [rbp-A8h] BYREF
  char v34; // [rsp+60h] [rbp-A0h]
  int v35[2]; // [rsp+68h] [rbp-98h] BYREF
  __int64 v36; // [rsp+70h] [rbp-90h]
  unsigned int v37; // [rsp+78h] [rbp-88h]
  int v38; // [rsp+7Ch] [rbp-84h]
  struct IAudioMediaType *v39; // [rsp+80h] [rbp-80h]
  __int64 v40; // [rsp+88h] [rbp-78h]
  APOInitSystemEffects2 v41; // [rsp+90h] [rbp-70h] BYREF
  __int128 v42; // [rsp+F0h] [rbp-10h] BYREF
  __int128 v43; // [rsp+100h] [rbp+0h]
  __int128 v44; // [rsp+110h] [rbp+10h]
  __m256i v45; // [rsp+120h] [rbp+20h]
  _OWORD v46[3]; // [rsp+140h] [rbp+40h] BYREF
  __m256i v47; // [rsp+170h] [rbp+70h]
  BOOL v48; // [rsp+190h] [rbp+90h]
  wil::details::in1diag3 *retaddr; // [rsp+1E8h] [rbp+E8h]

  v32 = (void **)((char *)this + 16);
  v33 = 0LL;
  v34 = 1;
  v9 = (const struct tWAVEFORMATEX *)((__int64 (__fastcall *)(struct IAudioMediaType *, struct IDeviceGraphObjectCache *))a5->lpVtbl->GetAudioFormat)(
                                       a5,
                                       a2);
  inited = CloneWaveFormat(v9, &v33);
  if ( v34 )
    wistd::unique_ptr<KSMULTIPLE_ITEM,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
      v32,
      v33);
  if ( inited < 0 )
  {
    v26 = 64LL;
LABEL_35:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v26,
      (int)"avcore\\audiocore\\server\\audiodg\\exe\\apoendpoint.cpp",
      (const char *)(unsigned int)inited);
    return (unsigned int)inited;
  }
  v11 = (_QWORD *)((char *)this + 24);
  v12 = *((_QWORD *)this + 3);
  *((_QWORD *)this + 3) = 0LL;
  if ( v12 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  inited = ((__int64 (__fastcall *)(struct IAudioProcessingObject *, GUID *, char *))a4->lpVtbl->QueryInterface)(
             a4,
             &GUID_4ceb0aab_fa19_48ed_a857_87771ae1b768,
             (char *)this + 24);
  if ( inited < 0 )
  {
    v26 = 65LL;
    goto LABEL_35;
  }
  v13 = *((_QWORD *)this + 4);
  *((_QWORD *)this + 4) = 0LL;
  if ( v13 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  inited = ((__int64 (__fastcall *)(struct IAudioProcessingObject *, GUID *, char *))a4->lpVtbl->QueryInterface)(
             a4,
             &GUID_f851809c_c177_49a0_b1b2_b66f017943ab,
             (char *)this + 32);
  if ( inited < 0 )
  {
    v26 = 66LL;
    goto LABEL_35;
  }
  do
    v14 = _InterlockedIncrement((volatile signed __int32 *)&g_AuxiliaryInputId);
  while ( !v14 );
  memset_0(&v41, 0, sizeof(v41));
  inited = FillAuxiliaryInputInitStruct(a3, a4, &v41);
  if ( inited < 0 )
  {
    v26 = 73LL;
    goto LABEL_35;
  }
  v32 = (void **)&v41;
  LOBYTE(v33) = 1;
  *(_QWORD *)v35 = 0LL;
  v38 = 0;
  v40 = 1094927443LL;
  v36 = 0LL;
  v37 = a6;
  v39 = a5;
  v29 = 0LL;
  if ( ((__int64 (__fastcall *)(struct IAudioProcessingObject *, GUID *, __int64 *))a4->lpVtbl->QueryInterface)(
         a4,
         &GUID_c58b31cd_fc6a_4255_bc1f_ad29bb0a4a17,
         &v29) < 0 )
  {
    v23 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, APOInitSystemEffects2 *, int *))(*(_QWORD *)*v11 + 24LL))(
            *v11,
            v14,
            88LL,
            &v41,
            v35);
    inited = v23;
    if ( v23 >= 0 )
    {
LABEL_27:
      *((_DWORD *)this + 10) = v14;
      MaxSupportedConnectionVersion = GetMaxSupportedConnectionVersion(a4);
      if ( MaxSupportedConnectionVersion == 1 )
      {
        v25 = 1094930515;
      }
      else
      {
        v25 = 1094930505;
        if ( MaxSupportedConnectionVersion == 2 )
          v25 = 1094930482;
      }
      *((_DWORD *)this + 11) = v25;
      if ( v29 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v29 + 16LL))(v29);
      LOBYTE(v33) = 0;
      lambda_9ea61389800d10a92a31feda1ef8f987_::operator()(&v32);
      return 0LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x86,
      (int)"avcore\\audiocore\\server\\audiodg\\exe\\apoendpoint.cpp",
      (const char *)(unsigned int)v23);
    ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>(&v29);
    if ( v41.pAPOEndpointProperties )
    {
      ((void (__fastcall *)(IPropertyStore *))v41.pAPOEndpointProperties->lpVtbl->Release)(v41.pAPOEndpointProperties);
      v41.pAPOEndpointProperties = 0LL;
    }
    if ( v41.pAPOSystemEffectsProperties )
    {
      ((void (__fastcall *)(IPropertyStore *))v41.pAPOSystemEffectsProperties->lpVtbl->Release)(v41.pAPOSystemEffectsProperties);
      v41.pAPOSystemEffectsProperties = 0LL;
    }
    if ( v41.pDeviceCollection )
      ((void (*)(void))v41.pDeviceCollection->lpVtbl->Release)();
    return (unsigned int)inited;
  }
  DWORD1(v43) = 0;
  memset_0((char *)&v42 + 4, 0, 0x4CuLL);
  v42 = *(_OWORD *)&v41.APOInit.cbSize;
  LODWORD(v43) = *(_DWORD *)&v41.APOInit.clsid.Data4[4];
  LODWORD(v42) = 80;
  *((_QWORD *)&v43 + 1) = v41.pAPOEndpointProperties;
  *((_QWORD *)&v44 + 1) = v41.pDeviceCollection;
  v45.m256i_i64[0] = *(_QWORD *)&v41.nSoftwareIoDeviceInCollection;
  *(GUID *)&v45.m256i_u64[1] = v41.AudioProcessingMode;
  v45.m256i_i32[6] = v41.InitializeForDiscoveryOnly;
  v30 = 0LL;
  APOProcessingHostInstance = GetAPOProcessingHostInstance(&v30);
  inited = APOProcessingHostInstance;
  if ( APOProcessingHostInstance < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x67,
      (int)"avcore\\audiocore\\server\\audiodg\\exe\\apoendpoint.cpp",
      (const char *)(unsigned int)APOProcessingHostInstance);
    ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)&v30);
    ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>(&v29);
    if ( v41.pAPOEndpointProperties )
    {
      ((void (__fastcall *)(IPropertyStore *))v41.pAPOEndpointProperties->lpVtbl->Release)(v41.pAPOEndpointProperties);
      v41.pAPOEndpointProperties = 0LL;
    }
    if ( v41.pAPOSystemEffectsProperties )
    {
      ((void (__fastcall *)(IPropertyStore *))v41.pAPOSystemEffectsProperties->lpVtbl->Release)(v41.pAPOSystemEffectsProperties);
      v41.pAPOSystemEffectsProperties = 0LL;
    }
    if ( v41.pDeviceCollection )
      ((void (__fastcall *)(IMMDeviceCollection *))v41.pDeviceCollection->lpVtbl->Release)(v41.pDeviceCollection);
    return (unsigned int)inited;
  }
  v28 = 0LL;
  v16 = v30;
  v17 = *(_QWORD *)v30;
  v28 = 0LL;
  v18 = (*(__int64 (__fastcall **)(struct IAPOProcessingHost *, struct IAudioProcessingObject *, __int64 *))(v17 + 56))(
          v30,
          a4,
          &v28);
  v19 = v18;
  if ( v18 >= 0 )
  {
    *(_QWORD *)&v44 = v28;
    v31 = 0LL;
    if ( ((__int64 (__fastcall *)(struct IAudioProcessingObject *, GUID *, __int64 *))a4->lpVtbl->QueryInterface)(
           a4,
           &GUID_f235855f_f06d_45b3_a63f_ee4b71509dc2,
           &v31) < 0 )
    {
      v20 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, __int128 *, int *))(*(_QWORD *)*v11 + 24LL))(
              *v11,
              v14,
              80LL,
              &v42,
              v35);
      v21 = v20;
      if ( v20 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x81,
          (int)"avcore\\audiocore\\server\\audiodg\\exe\\apoendpoint.cpp",
          (const char *)(unsigned int)v20);
        if ( v31 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v31 + 16LL))(v31);
        if ( v28 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v28 + 16LL))(v28);
        if ( v16 )
          (*(void (__fastcall **)(struct IAPOProcessingHost *))(*(_QWORD *)v16 + 16LL))(v16);
        if ( v29 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v29 + 16LL))(v29);
        LOBYTE(v33) = 0;
        lambda_9ea61389800d10a92a31feda1ef8f987_::operator()(&v32);
        return v21;
      }
      goto LABEL_61;
    }
    memset_0((char *)v46 + 4, 0, 0x54uLL);
    v46[0] = v42;
    v46[1] = v43;
    v46[2] = v44;
    v47 = v45;
    v48 = *(_DWORD *)a3 == 3;
    v27 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, _OWORD *, int *))(*(_QWORD *)*v11 + 24LL))(
            *v11,
            v14,
            88LL,
            v46,
            v35);
    inited = v27;
    if ( v27 >= 0 )
    {
LABEL_61:
      ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>(&v31);
      ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>(&v28);
      ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)&v30);
      goto LABEL_27;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x7D,
      (int)"avcore\\audiocore\\server\\audiodg\\exe\\apoendpoint.cpp",
      (const char *)(unsigned int)v27);
    ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>(&v31);
    ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>(&v28);
    ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)&v30);
    ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>(&v29);
    if ( v41.pAPOEndpointProperties )
    {
      ((void (__fastcall *)(IPropertyStore *))v41.pAPOEndpointProperties->lpVtbl->Release)(v41.pAPOEndpointProperties);
      v41.pAPOEndpointProperties = 0LL;
    }
    if ( v41.pAPOSystemEffectsProperties )
    {
      ((void (__fastcall *)(IPropertyStore *))v41.pAPOSystemEffectsProperties->lpVtbl->Release)(v41.pAPOSystemEffectsProperties);
      v41.pAPOSystemEffectsProperties = 0LL;
    }
    if ( v41.pDeviceCollection )
      ((void (__fastcall *)(IMMDeviceCollection *))v41.pDeviceCollection->lpVtbl->Release)(v41.pDeviceCollection);
    return (unsigned int)inited;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x6A,
    (int)"avcore\\audiocore\\server\\audiodg\\exe\\apoendpoint.cpp",
    (const char *)(unsigned int)v18);
  ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>(&v28);
  ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)&v30);
  ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>(&v29);
  if ( v41.pAPOEndpointProperties )
  {
    ((void (__fastcall *)(IPropertyStore *))v41.pAPOEndpointProperties->lpVtbl->Release)(v41.pAPOEndpointProperties);
    v41.pAPOEndpointProperties = 0LL;
  }
  if ( v41.pAPOSystemEffectsProperties )
  {
    ((void (__fastcall *)(IPropertyStore *))v41.pAPOSystemEffectsProperties->lpVtbl->Release)(v41.pAPOSystemEffectsProperties);
    v41.pAPOSystemEffectsProperties = 0LL;
  }
  if ( v41.pDeviceCollection )
    ((void (__fastcall *)(IMMDeviceCollection *))v41.pDeviceCollection->lpVtbl->Release)(v41.pDeviceCollection);
  return v19;
}
