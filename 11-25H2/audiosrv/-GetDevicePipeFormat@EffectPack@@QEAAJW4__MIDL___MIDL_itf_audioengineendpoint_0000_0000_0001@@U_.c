/*
 * XREFs of ?GetDevicePipeFormat@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAPEAUtWAVEFORMATEX@@@Z @ 0x180068CE0
 * Callers:
 *     ?GetDeviceDefaults@@YAJPEAUEndpointCharacteristicsDescriptor@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAPEAUtWAVEFORMATEX@@3PEA_J4@Z @ 0x1800328EC (-GetDeviceDefaults@@YAJPEAUEndpointCharacteristicsDescriptor@@W4__MIDL___MIDL_itf_audioengineend.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001AC8C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18001EBF0 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ?ValidateUncompressedWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z @ 0x180033F1C (-ValidateUncompressedWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z.c)
 *     ?IsValidWfxBlob@@YAHPEAUtagPROPVARIANT@@@Z @ 0x1800608A0 (-IsValidWfxBlob@@YAHPEAUtagPROPVARIANT@@@Z.c)
 *     ?ReadFormatProperty@@YAJPEAUIPropertyStore@@AEBU_tagpropertykey@@AEAV?$unique_struct@UtagPROPVARIANT@@P6AJPEAU1@@Z$1?PropVariantClear@@YAJ0@ZP6AX0@Z$1?PropVariantInit@@YAX0@Z@wil@@@Z @ 0x180069020 (-ReadFormatProperty@@YAJPEAUIPropertyStore@@AEBU_tagpropertykey@@AEAV-$unique_struct@UtagPROPVAR.c)
 *     ?reset@?$unique_struct@UtagPROPVARIANT@@P6AJPEAU1@@Z$1?PropVariantClear@@YAJ0@ZP6AX0@Z$1?PropVariantInit@@YAX0@Z@wil@@QEAAXXZ @ 0x180084DC4 (-reset@-$unique_struct@UtagPROPVARIANT@@P6AJPEAU1@@Z$1-PropVariantClear@@YAJ0@ZP6AX0@Z$1-PropVar.c)
 *     ?RefreshDeviceFormat@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x180086E44 (-RefreshDeviceFormat@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z.c)
 *     __security_check_cookie @ 0x1800A7AB0 (__security_check_cookie.c)
 *     memcpy_0 @ 0x1800ABC38 (memcpy_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall EffectPack::GetDevicePipeFormat(
        EffectPack *this,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a2,
        struct _GUID *a3,
        struct tWAVEFORMATEX **a4)
{
  unsigned int i; // edx
  _QWORD *v8; // rcx
  __int64 v9; // rax
  int v10; // eax
  struct _RTL_CRITICAL_SECTION *v11; // rbx
  unsigned __int16 *pElems; // rsi
  __int64 v13; // rdi
  struct tWAVEFORMATEX *v14; // rax
  struct tWAVEFORMATEX *v15; // rbx
  unsigned int v17; // ebx
  struct _RTL_CRITICAL_SECTION *v18; // rbx
  int refreshed; // eax
  __int64 v20; // r9
  __int64 v21; // rdx
  struct _RTL_CRITICAL_SECTION *v22; // rbx
  int v23; // eax
  int v24; // eax
  struct _RTL_CRITICAL_SECTION *v25; // [rsp+20h] [rbp-50h] BYREF
  struct tagPROPVARIANT pvar; // [rsp+28h] [rbp-48h] BYREF
  __int128 v27; // [rsp+40h] [rbp-30h] BYREF
  __int128 v28; // [rsp+50h] [rbp-20h] BYREF
  unsigned int v29; // [rsp+60h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+28h]

  *a4 = 0LL;
  v28 = 0LL;
  v29 = 0;
  v27 = (__int128)*a3;
  for ( i = 0; i < 0xA; ++i )
  {
    v8 = &xmmword_180186BA0[i];
    v9 = *v8 - v27;
    if ( *v8 == (_QWORD)v27 )
      v9 = v8[1] - *((_QWORD *)&v27 + 1);
    if ( !v9 )
    {
      v28 = PKEY_AudioEngine_SignalProcessingMode_Specific_DevicePipeFormat;
      v10 = 602;
      if ( a2 != eKeywordDetectorConnector )
        v10 = 2;
      v29 = i + v10;
      memset(&pvar, 0, sizeof(pvar));
      v11 = (struct _RTL_CRITICAL_SECTION *)(*((_QWORD *)this + 198) + 0x2000LL);
      EnterCriticalSection(v11);
      *(_QWORD *)&v27 = v11;
      ReadFormatProperty(*(_QWORD *)(*((_QWORD *)this + 198) + 72LL), &v28, &pvar);
      if ( v11 )
        LeaveCriticalSection(v11);
      if ( pvar.vt == 65 )
        goto LABEL_12;
      wil::unique_struct<tagPROPVARIANT,long (*)(tagPROPVARIANT *),&long PropVariantClear(tagPROPVARIANT *),void (*)(tagPROPVARIANT *),&void PropVariantInit(tagPROPVARIANT *)>::reset(&pvar);
      (*(void (__fastcall **)(__int64, __int128 *, _QWORD))(*(_QWORD *)g_policyConfigInternal + 24LL))(
        g_policyConfigInternal,
        &v27,
        *(_QWORD *)(*((_QWORD *)this + 198) + 48LL));
      v18 = (struct _RTL_CRITICAL_SECTION *)(*((_QWORD *)this + 198) + 0x2000LL);
      EnterCriticalSection(v18);
      v25 = v18;
      ReadFormatProperty(*(_QWORD *)(*((_QWORD *)this + 198) + 72LL), &v28, &pvar);
      wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v25);
      if ( pvar.vt != 65 )
      {
        refreshed = EffectPack::RefreshDeviceFormat(this, a2);
        v17 = refreshed;
        if ( refreshed < 0 )
        {
          v20 = (unsigned int)refreshed;
          v21 = 7040LL;
          goto LABEL_29;
        }
        v22 = (struct _RTL_CRITICAL_SECTION *)(*((_QWORD *)this + 198) + 0x2000LL);
        EnterCriticalSection(v22);
        v25 = v22;
        v23 = (*(__int64 (__fastcall **)(_QWORD, __int128 *, struct tagPROPVARIANT *))(**(_QWORD **)(*((_QWORD *)this + 198) + 72LL)
                                                                                     + 40LL))(
                *(_QWORD *)(*((_QWORD *)this + 198) + 72LL),
                &v28,
                &pvar);
        v17 = v23;
        if ( v23 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x1B85,
            (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
            (const char *)(unsigned int)v23);
          wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v25);
          goto LABEL_30;
        }
        wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v25);
        if ( pvar.vt != 65 )
          goto LABEL_28;
      }
      LOBYTE(v24) = IsValidWfxBlob(&pvar);
      if ( v24 )
      {
        wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>((struct _RTL_CRITICAL_SECTION **)&v27);
LABEL_12:
        pElems = pvar.caui.pElems;
        if ( (unsigned int)ValidateUncompressedWaveFormatEx((const struct tWAVEFORMATEX *)pvar.bstrblobVal.pData) )
        {
          v17 = -2004287480;
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x1B8D,
            (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
            (const char *)0x88890008LL);
        }
        else
        {
          v13 = pElems[8];
          v14 = (struct tWAVEFORMATEX *)CoTaskMemAlloc(v13 + 18);
          v15 = v14;
          if ( v14 )
          {
            memcpy_0(v14, pElems, v13 + 18);
            *a4 = v15;
            PropVariantClear((PROPVARIANT *)&pvar);
            return 0LL;
          }
          *a4 = 0LL;
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x1B8F,
            (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
            (const char *)0x8007000ELL);
          v17 = -2147024882;
        }
      }
      else
      {
LABEL_28:
        v17 = -2004287480;
        v20 = 2290679816LL;
        v21 = 7049LL;
LABEL_29:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v21,
          (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
          (const char *)v20);
LABEL_30:
        wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>((struct _RTL_CRITICAL_SECTION **)&v27);
      }
      PropVariantClear((PROPVARIANT *)&pvar);
      return v17;
    }
  }
  v17 = -2147023728;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x1B64,
    (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
    (const char *)0x80070490LL);
  return v17;
}
