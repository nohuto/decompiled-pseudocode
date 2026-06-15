/*
 * XREFs of ?SetRenderEndpoint@CBtAudioResourceManagerBase@@UEAAJPEAVCEndpointCharacteristics@@@Z @ 0x1800DD020
 * Callers:
 *     ?SetRenderEndpoint@CBtAudioResourceManager@@UEAAJPEAVCEndpointCharacteristics@@@Z @ 0x1800D2C90 (-SetRenderEndpoint@CBtAudioResourceManager@@UEAAJPEAVCEndpointCharacteristics@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001AC8C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$_AllocString@VCTCoAllocPolicy@@@@YAJPEAXKPEBGPEAPEAG@Z @ 0x180020B2C (--$_AllocString@VCTCoAllocPolicy@@@@YAJPEAXKPEBGPEAPEAG@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x180055680 (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     ??$com_weak_query_nothrow@AEAPEAVCEndpointCharacteristics@@@wil@@YAJAEAPEAVCEndpointCharacteristics@@PEAPEAUIWeakReference@@@Z @ 0x1800D31B0 (--$com_weak_query_nothrow@AEAPEAVCEndpointCharacteristics@@@wil@@YAJAEAPEAVCEndpointCharacterist.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_56664216@@@details@wil@@QEAA_NXZ @ 0x1800DD974 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_56664216@@@details@wil@@QEAA_NXZ.c)
 *     ?GetPropertyStoreProperty@CEndpointCharacteristics@@QEAAJAEBU_tagpropertykey@@PEAUtagPROPVARIANT@@@Z @ 0x18012C770 (-GetPropertyStoreProperty@CEndpointCharacteristics@@QEAAJAEBU_tagpropertykey@@PEAUtagPROPVARIANT.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CBtAudioResourceManagerBase::SetRenderEndpoint(
        CBtAudioResourceManagerBase *this,
        struct CEndpointCharacteristics *a2)
{
  void **v4; // rsi
  const WCHAR *v5; // rcx
  char v6; // bl
  __int64 v7; // rdx
  __int64 v8; // rcx
  int v9; // eax
  unsigned int v10; // esi
  int v12; // ebx
  __int64 v13; // rdx
  __int64 v14; // rcx
  struct tagPROPVARIANT pvar; // [rsp+30h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  __int64 (__fastcall ***v17)(_QWORD, GUID *, __int64 *); // [rsp+68h] [rbp+10h] BYREF

  v17 = (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))a2;
  v4 = (void **)((char *)this + 48);
  v5 = (const WCHAR *)*((_QWORD *)this + 6);
  v6 = 1;
  if ( v5 )
  {
    if ( CompareStringOrdinal(v5, -1, *((LPCWCH *)a2 + 6), -1, 1) != 2 )
    {
      v12 = -2147418113;
      v13 = 72LL;
LABEL_6:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v13,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\btaudioresourcemanagerbase.cpp",
        (const char *)(unsigned int)v12);
      return (unsigned int)v12;
    }
  }
  else
  {
    wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
      v4,
      0LL);
    v9 = _AllocString<CTCoAllocPolicy>(v8, v7, *((const WCHAR **)a2 + 6), v4);
    v10 = v9;
    if ( v9 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x44,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\btaudioresourcemanagerbase.cpp",
        (const char *)(unsigned int)v9);
      return v10;
    }
  }
  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_56664216>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_56664216>::GetImpl'::`2'::impl) )
  {
    *((_BYTE *)this + 485) = 0;
    memset(&pvar, 0, sizeof(pvar));
    CEndpointCharacteristics::GetPropertyStoreProperty(a2, &PKEY_Multicast_Target_SessionDescriptor, &pvar);
    if ( pvar.vt == 65 && pvar.lVal == 36 )
    {
      if ( *pvar.cal.pElems != 1
        || *(_OWORD *)(pvar.bstrblobVal.pData + 4) != BLUETOOTH_AUDIO_BROADCAST_PROVIDER
        || *(_QWORD *)(pvar.bstrblobVal.pData + 20) == *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1
        && *(_QWORD *)(pvar.bstrblobVal.pData + 28) == *(_QWORD *)GUID_00000000_0000_0000_0000_000000000000.Data4 )
      {
        v6 = 0;
      }
      *((_BYTE *)this + 485) = v6;
    }
    PropVariantClear((PROPVARIANT *)&pvar);
  }
  v14 = *((_QWORD *)this + 9);
  *((_QWORD *)this + 9) = 0LL;
  if ( v14 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  v12 = wil::com_weak_query_nothrow<CEndpointCharacteristics * &>(&v17, (_QWORD *)this + 9);
  if ( v12 < 0 )
  {
    v13 = 91LL;
    goto LABEL_6;
  }
  return 0LL;
}
