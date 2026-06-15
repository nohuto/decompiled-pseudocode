/*
 * XREFs of ?RuntimeClassInitialize@CSaDeviceProxy@@QEAAJPEBUSaDeviceParams@@PEAUEndpointCharacteristicsDescriptor@@PEAUIDeviceGraphObjectsStore@@W4_AUDCLNT_SHAREMODE@@KAEAUSaDeviceResourceParams@@AEBV?$vector@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@PEBU_GUID@@6@Z @ 0x1800F3468
 * Callers:
 *     ??$MakeAndInitialize@VCSaDeviceProxy@@UISaDeviceProxy@@AEAPEAUSaDeviceParams@@AEAPEAUEndpointCharacteristicsDescriptor@@PEAUIDeviceGraphObjectsStore@@AEAW4_AUDCLNT_SHAREMODE@@AEAKAEAUSaDeviceResourceParams@@AEBV?$vector@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@AEAPEBU_GUID@@AEAPEBU_GUID@@@Details@WRL@Microsoft@@YAJPEAPEAUISaDeviceProxy@@AEAPEAUSaDeviceParams@@AEAPEAUEndpointCharacteristicsDescriptor@@$$QEAPEAUIDeviceGraphObjectsStore@@AEAW4_AUDCLNT_SHAREMODE@@AEAKAEAUSaDeviceResourceParams@@AEBV?$vector@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@AEAPEBU_GUID@@8@Z @ 0x1800EDE54 (--$MakeAndInitialize@VCSaDeviceProxy@@UISaDeviceProxy@@AEAPEAUSaDeviceParams@@AEAPEAUEndpointCha.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001AC8C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0CResourcePriorityTracker@@QEAA@K@Z @ 0x180020D50 (--0CResourcePriorityTracker@@QEAA@K@Z.c)
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x180022A54 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?CloneSaDeviceParams@@YAJPEBUSaDeviceParams@@PEAPEAU1@@Z @ 0x180027724 (-CloneSaDeviceParams@@YAJPEBUSaDeviceParams@@PEAPEAU1@@Z.c)
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180064D38 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?TryGetCustomResourceManagerService@CEndpointCharacteristics@@QEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18007576C (-TryGetCustomResourceManagerService@CEndpointCharacteristics@@QEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?CreateSaDevice@@YAJPEAUEndpointCharacteristicsDescriptor@@W4_AUDCLNT_SHAREMODE@@KW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@3_J4PEBUtWAVEFORMATEX@@53PEBU4@6PEAPEAUIAudioDeviceGraph@@@Z @ 0x180089E24 (-CreateSaDevice@@YAJPEAUEndpointCharacteristicsDescriptor@@W4_AUDCLNT_SHAREMODE@@KW4__MIDL___MID.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800A7FC8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??4?$vector@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x1800EEEE0 (--4-$vector@V-$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@V-$allocator@V-$com_ptr_t@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CSaDeviceProxy::RuntimeClassInitialize(
        __int64 a1,
        const struct SaDeviceParams *a2,
        CEndpointCharacteristics **a3,
        __int64 a4,
        enum _AUDCLNT_SHAREMODE a5,
        unsigned int a6,
        __int64 a7,
        __int64 *a8,
        struct _GUID *a9,
        struct _GUID *a10)
{
  __int64 v14; // rcx
  CEndpointCharacteristics *v15; // r14
  __int64 v16; // rcx
  int v17; // eax
  unsigned int v18; // edi
  __int64 v19; // rax
  const struct tWAVEFORMATEX *v20; // rcx
  struct tWAVEFORMATEX *v21; // rdx
  __int64 v22; // r8
  __int64 v23; // r10
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v24; // r9d
  int v25; // eax
  __int64 v26; // r9
  __int64 v27; // rdx
  struct IAudioDeviceGraph *v28; // rdi
  CResourcePriorityTracker *v29; // rax
  _QWORD *v30; // rdi
  struct _GUID v32; // [rsp+70h] [rbp-29h] BYREF
  struct _GUID v33; // [rsp+80h] [rbp-19h] BYREF
  struct _GUID v34; // [rsp+90h] [rbp-9h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+2Fh]
  struct IAudioDeviceGraph *v36; // [rsp+D0h] [rbp+37h] BYREF
  struct IAudioDeviceGraph *v37; // [rsp+E0h] [rbp+47h] BYREF

  *(_DWORD *)(a1 + 152) = (*(__int64 (__fastcall **)(CEndpointCharacteristics *))(*(_QWORD *)*a3 + 56LL))(*a3);
  if ( *(_QWORD *)(a1 + 136) != a4 )
  {
    if ( a4 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)a4 + 8LL))(a4);
    v14 = *(_QWORD *)(a1 + 136);
    *(_QWORD *)(a1 + 136) = a4;
    if ( v14 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  }
  v15 = *a3;
  v16 = *(_QWORD *)(a1 + 144);
  *(_QWORD *)(a1 + 144) = 0LL;
  if ( v16 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
  CEndpointCharacteristics::TryGetCustomResourceManagerService(
    v15,
    &GUID_4d3814ae_3db5_4fb3_819c_1493075ce6e3,
    (void **)(a1 + 144));
  v17 = CloneSaDeviceParams(a2, (void ***)(a1 + 48));
  v18 = v17;
  if ( v17 >= 0 )
  {
    v36 = 0LL;
    Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)&v36);
    v19 = *(_QWORD *)(a1 + 48);
    v20 = *(const struct tWAVEFORMATEX **)(v19 + 24);
    v21 = *(struct tWAVEFORMATEX **)(v19 + 16);
    v22 = *(_QWORD *)(v19 + 40);
    v23 = *(_QWORD *)(v19 + 32);
    v24 = *(_DWORD *)(v19 + 8);
    v32 = *(struct _GUID *)(v19 + 80);
    v33 = *(struct _GUID *)(v19 + 64);
    v34 = *(struct _GUID *)(v19 + 48);
    v25 = CreateSaDevice(a3, a5, a6, v24, &v34, &v33, v23, v22, v21, v20, &v32, a9, a10, &v36);
    v18 = v25;
    if ( v25 >= 0 )
    {
      v28 = v36;
      if ( *(struct IAudioDeviceGraph **)(a1 + 104) != v36 )
      {
        v37 = v36;
        Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef((__int64 *)&v37);
        v37 = *(struct IAudioDeviceGraph **)(a1 + 104);
        *(_QWORD *)(a1 + 104) = v28;
        Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)&v37);
      }
      v29 = (CResourcePriorityTracker *)operator new(0x40uLL, (const struct std::nothrow_t *)&std::nothrow);
      v37 = v29;
      v30 = (_QWORD *)a7;
      if ( v29 )
        v29 = CResourcePriorityTracker::CResourcePriorityTracker(v29, *(_DWORD *)(a7 + 8));
      *(_QWORD *)(a1 + 56) = v29;
      if ( v29 )
      {
        *(_BYTE *)(a1 + 96) = a5 == AUDCLNT_SHAREMODE_EXCLUSIVE;
        *(_QWORD *)(a1 + 64) = *v30;
        *v30 = 0LL;
        std::vector<wil::com_ptr_t<IUnknown,wil::err_returncode_policy>>::operator=((__int64 *)(a1 + 72), a8);
        v18 = 0;
        goto LABEL_20;
      }
      v18 = -2147024882;
      v26 = 2147942414LL;
      v27 = 2828LL;
    }
    else
    {
      v26 = (unsigned int)v25;
      v27 = 2823LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v27,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
      (const char *)v26);
LABEL_20:
    Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)&v36);
    return v18;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xB02,
    (int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
    (const char *)(unsigned int)v17);
  return v18;
}
