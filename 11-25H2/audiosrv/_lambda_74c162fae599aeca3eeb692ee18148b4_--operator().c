/*
 * XREFs of _lambda_74c162fae599aeca3eeb692ee18148b4_::operator() @ 0x1800F699C
 * Callers:
 *     ?ActivateMulticastSession@DummyBroadcastProvider@@UEAAJAEAV?$vector@V?$com_ptr_t@VCEndpointCharacteristics@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCEndpointCharacteristics@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@AEBU_GUID@@@Z @ 0x1800F7100 (-ActivateMulticastSession@DummyBroadcastProvider@@UEAAJAEAV-$vector@V-$com_ptr_t@VCEndpointChara.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001AC8C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001D964 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ??$copy_to@VCAudioSession@@@?$com_ptr_t@VCAudioSession@@Uerr_returncode_policy@wil@@@wil@@QEBAJPEAPEAVCAudioSession@@@Z @ 0x18004E288 (--$copy_to@VCAudioSession@@@-$com_ptr_t@VCAudioSession@@Uerr_returncode_policy@wil@@@wil@@QEBAJP.c)
 *     ?reset@?$com_ptr_t@UIMMDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18005B488 (-reset@-$com_ptr_t@UIMMDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?SetPropertyStoreProperty@CEndpointCharacteristics@@QEAAJAEBU_tagpropertykey@@AEBUtagPROPVARIANT@@@Z @ 0x1800A5D30 (-SetPropertyStoreProperty@CEndpointCharacteristics@@QEAAJAEBU_tagpropertykey@@AEBUtagPROPVARIANT.c)
 *     __security_check_cookie @ 0x1800A7AB0 (__security_check_cookie.c)
 *     ??$_Emplace_reallocate@AEBU_GUID@@@?$vector@U_GUID@@V?$allocator@U_GUID@@@std@@@std@@AEAAPEAU_GUID@@QEAU2@AEBU2@@Z @ 0x1800C89FC (--$_Emplace_reallocate@AEBU_GUID@@@-$vector@U_GUID@@V-$allocator@U_GUID@@@std@@@std@@AEAAPEAU_GU.c)
 *     ?GetPropertyStoreProperty@CEndpointCharacteristics@@QEAAJAEBU_tagpropertykey@@PEAUtagPROPVARIANT@@@Z @ 0x18012C770 (-GetPropertyStoreProperty@CEndpointCharacteristics@@QEAAJAEBU_tagpropertykey@@PEAUtagPROPVARIANT.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4 #try_helpers=1
__int64 __fastcall lambda_74c162fae599aeca3eeb692ee18148b4_::operator()(_QWORD *a1)
{
  HRESULT v2; // eax
  unsigned int v3; // ebx
  int v5; // esi
  CEndpointCharacteristics ***v6; // rax
  CEndpointCharacteristics **v7; // rdi
  CEndpointCharacteristics **v8; // r15
  int PropertyStoreProperty; // eax
  unsigned int v10; // ebx
  __int64 v11; // rcx
  char *v12; // rdx
  __int64 v13; // rbx
  CEndpointCharacteristics *v14; // rbx
  LPVOID ppv; // [rsp+30h] [rbp-88h] BYREF
  __int64 v16; // [rsp+38h] [rbp-80h] BYREF
  struct tagPROPVARIANT pvar; // [rsp+40h] [rbp-78h] BYREF
  struct tagPROPVARIANT v18; // [rsp+58h] [rbp-60h] BYREF
  int v19; // [rsp+70h] [rbp-48h] BYREF
  GUID v20; // [rsp+74h] [rbp-44h]
  __int128 v21; // [rsp+84h] [rbp-34h]
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+0h]

  v21 = 0LL;
  v19 = 1;
  v20 = DUMMY_MULTICAST_PROVIDER;
  v21 = *(_OWORD *)a1[1];
  *(_OWORD *)&pvar.vt = 0LL;
  pvar.vt = 65;
  pvar.lVal = 36;
  pvar.bstrblobVal.pData = (BYTE *)&v19;
  ppv = 0LL;
  v2 = CoCreateInstance(
         &GUID_06cca63e_9941_441b_b004_39f999ada412,
         0LL,
         0x17u,
         &GUID_6ca19947_8747_46ab_879e_349c4dbb88fb,
         &ppv);
  v3 = v2;
  if ( v2 >= 0 )
  {
    v5 = 0;
    v6 = (CEndpointCharacteristics ***)a1[2];
    v7 = *v6;
    v8 = v6[1];
    while ( v7 != v8 )
    {
      memset(&v18, 0, sizeof(v18));
      PropertyStoreProperty = CEndpointCharacteristics::GetPropertyStoreProperty(*v7, &PKEY_Device_ContainerId, &v18);
      v10 = PropertyStoreProperty;
      if ( PropertyStoreProperty < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xF4,
          (int)"avcore\\audiocore\\server\\audiosrv\\dll\\dummybroadcastprovider.cpp",
          (const char *)(unsigned int)PropertyStoreProperty);
        PropVariantClear((PROPVARIANT *)&v18);
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&ppv);
        PropVariantClear((PROPVARIANT *)&pvar);
        return v10;
      }
      if ( v18.vt != 72 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xF5,
          (int)"avcore\\audiocore\\server\\audiosrv\\dll\\dummybroadcastprovider.cpp",
          (const char *)0x8000FFFFLL);
        PropVariantClear((PROPVARIANT *)&v18);
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&ppv);
        PropVariantClear((PROPVARIANT *)&pvar);
        return 2147549183LL;
      }
      v11 = a1[3];
      v12 = *(char **)(v11 + 8);
      if ( v12 == *(char **)(v11 + 16) )
      {
        std::vector<_GUID>::_Emplace_reallocate<_GUID const &>(v11, v12, v18.hVal.QuadPart);
      }
      else
      {
        *(_OWORD *)v12 = *(_OWORD *)v18.hVal.QuadPart;
        *(_QWORD *)(v11 + 8) += 16LL;
      }
      v13 = 0LL;
      v16 = 0LL;
      if ( !v5 )
      {
        v14 = *v7;
        wil::com_ptr_t<IMMDevice,wil::err_returncode_policy>::reset(&v16);
        wil::com_ptr_t<CAudioSession,wil::err_returncode_policy>::copy_to<CAudioSession>((__int64 *)v14 + 5, &v16);
        v13 = v16;
        (*(void (__fastcall **)(LPVOID, __int64, _QWORD))(*(_QWORD *)ppv + 48LL))(ppv, v16, 0LL);
        CEndpointCharacteristics::SetPropertyStoreProperty(*v7, &PKEY_Multicast_Target_SessionDescriptor, &pvar);
        (*(void (__fastcall **)(LPVOID, __int64, __int64))(*(_QWORD *)ppv + 48LL))(ppv, v13, 1LL);
      }
      CEndpointCharacteristics::SetPropertyStoreProperty(*v7, &PKEY_Multicast_Child_SessionDescriptor, &pvar);
      if ( v5 )
        (*(void (__fastcall **)(LPVOID, __int64, _QWORD))(*(_QWORD *)ppv + 48LL))(ppv, v13, 0LL);
      ++v5;
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v16);
      PropVariantClear((PROPVARIANT *)&v18);
      ++v7;
    }
    pvar.vt = 0;
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&ppv);
    PropVariantClear((PROPVARIANT *)&pvar);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xEE,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\dummybroadcastprovider.cpp",
      (const char *)(unsigned int)v2);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&ppv);
    PropVariantClear((PROPVARIANT *)&pvar);
    return v3;
  }
}
