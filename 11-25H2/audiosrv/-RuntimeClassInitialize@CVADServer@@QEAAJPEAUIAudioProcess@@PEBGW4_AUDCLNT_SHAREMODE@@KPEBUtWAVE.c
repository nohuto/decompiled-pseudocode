/*
 * XREFs of ?RuntimeClassInitialize@CVADServer@@QEAAJPEAUIAudioProcess@@PEBGW4_AUDCLNT_SHAREMODE@@KPEBUtWAVEFORMATEX@@PEBU_GUID@@PEAUVadServerSettings@@PEAPEAGPEAUIProcessSubmixProxy@@@Z @ 0x18002BE70
 * Callers:
 *     ?AudioServerInitialize_Internal@@YAJPEAXPEBGW4_AUDCLNT_SHAREMODE@@KPEBUtWAVEFORMATEX@@PEBU_GUID@@PEAUVadServerSettings@@PEAPEAGPEAUIProcessSubmixProxy@@PEAPEAX@Z @ 0x18000E2AC (-AudioServerInitialize_Internal@@YAJPEAXPEBGW4_AUDCLNT_SHAREMODE@@KPEBUtWAVEFORMATEX@@PEBU_GUID@.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18000A850 (--3@YAXPEAX@Z.c)
 *     ?PublishApoTelemetry@@YAJPEBGU_GUID@@@Z @ 0x180012EB4 (-PublishApoTelemetry@@YAJPEBGU_GUID@@@Z.c)
 *     ?InitializePolicy@CVADServer@@IEAAJPEAUIAudioProcess@@PEAVCEndpointCharacteristics@@PEBU_GUID@@KPEAPEAG@Z @ 0x1800197F0 (-InitializePolicy@CVADServer@@IEAAJPEAUIAudioProcess@@PEAVCEndpointCharacteristics@@PEBU_GUID@@K.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001AC8C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18001EBF0 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ??$_AllocString@VCTCoAllocPolicy@@@@YAJPEAXKPEBGPEAPEAG@Z @ 0x180020B2C (--$_AllocString@VCTCoAllocPolicy@@@@YAJPEAXKPEBGPEAPEAG@Z.c)
 *     ??B?$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ @ 0x180022D84 (--B-$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ.c)
 *     ?ValidateWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z @ 0x180033D60 (-ValidateWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z.c)
 *     ??1EndpointCharacteristicsDescriptor@@QEAA@XZ @ 0x180037B80 (--1EndpointCharacteristicsDescriptor@@QEAA@XZ.c)
 *     ?ValidateVadServerSettings@@YAJPEAUVadServerSettings@@@Z @ 0x180038CF4 (-ValidateVadServerSettings@@YAJPEAUVadServerSettings@@@Z.c)
 *     ?CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z @ 0x180043970 (-CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z.c)
 *     ??1?$out_param_t@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@@details@wil@@QEAA@XZ @ 0x180058518 (--1-$out_param_t@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMem.c)
 *     ?AddHead@?$CAtlList@PEAVCVADServer@@V?$CElementTraits@PEAVCVADServer@@@ATL@@@ATL@@QEAAPEAU__POSITION@@AEBQEAVCVADServer@@@Z @ 0x18005D15C (-AddHead@-$CAtlList@PEAVCVADServer@@V-$CElementTraits@PEAVCVADServer@@@ATL@@@ATL@@QEAAPEAU__POSI.c)
 *     ??$AsWeak@VCVADServer@@@WRL@Microsoft@@YAJPEAVCVADServer@@PEAVWeakRef@01@@Z @ 0x1800657D0 (--$AsWeak@VCVADServer@@@WRL@Microsoft@@YAJPEAVCVADServer@@PEAVWeakRef@01@@Z.c)
 *     ?GetEndpointCharacteristicsDescriptor@@YAJPEBGHPEAUEndpointCharacteristicsDescriptor@@@Z @ 0x180066408 (-GetEndpointCharacteristicsDescriptor@@YAJPEBGHPEAUEndpointCharacteristicsDescriptor@@@Z.c)
 *     ?GetConnectorTypeForStream@@YA?AW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUEndpointCharacteristicsDescriptor@@KW4_AUDCLNT_SHAREMODE@@HPEBUtWAVEFORMATEX@@PEAUIProcessSubmixProxy@@@Z @ 0x1800A3C60 (-GetConnectorTypeForStream@@YA-AW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUEndp.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800A7F7C (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800A7FBC (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memcpy_0 @ 0x1800ABC38 (memcpy_0.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B279C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?IsExclusiveModeDisabled@@YAHPEBG@Z @ 0x180106BA0 (-IsExclusiveModeDisabled@@YAHPEBG@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall CVADServer::RuntimeClassInitialize(
        CVADServer *this,
        struct IAudioProcess *a2,
        unsigned __int16 *a3,
        enum _AUDCLNT_SHAREMODE a4,
        unsigned int a5,
        const struct tWAVEFORMATEX *Src,
        struct _GUID *a7,
        struct VadServerSettings *a8,
        unsigned __int16 **a9,
        struct IProcessSubmixProxy *a10)
{
  struct _RTL_CRITICAL_SECTION *v14; // rbx
  int v16; // ebx
  int EndpointCharacteristicsDescriptor; // eax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // r9
  struct VadServerSettings *v22; // rsi
  unsigned int v23; // eax
  void *v24; // rax
  void *v25; // rcx
  void *v26; // rcx
  const struct tWAVEFORMATEX *v27; // r14
  unsigned int v28; // r13d
  struct IProcessSubmixProxy *v29; // rsi
  __int64 v30; // r9
  __int64 v31; // rdx
  int v32; // eax
  __int64 v33; // rbx
  __int64 *v34; // rax
  int v35; // eax
  __int64 v36; // rcx
  int v37; // eax
  int v38; // [rsp+20h] [rbp-60h]
  struct _GUID v39; // [rsp+30h] [rbp-50h] BYREF
  struct _RTL_CRITICAL_SECTION *v40; // [rsp+40h] [rbp-40h] BYREF
  unsigned __int16 ***v41; // [rsp+48h] [rbp-38h] BYREF
  __int64 v42; // [rsp+50h] [rbp-30h] BYREF
  char v43; // [rsp+58h] [rbp-28h]
  struct CEndpointCharacteristics *v44[2]; // [rsp+60h] [rbp-20h] BYREF
  __int64 v45; // [rsp+70h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+38h]
  __int64 *v47; // [rsp+C0h] [rbp+40h] BYREF
  unsigned __int16 *v48; // [rsp+D0h] [rbp+50h]

  v48 = a3;
  *a9 = 0LL;
  v14 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 200);
  EnterCriticalSection((LPCRITICAL_SECTION)this + 5);
  v40 = v14;
  if ( !*((_DWORD *)this + 40) )
  {
    if ( (unsigned int)a4 > AUDCLNT_SHAREMODE_EXCLUSIVE )
    {
      v16 = -2147024809;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x566,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
        (const char *)0x80070057LL);
LABEL_48:
      wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v40);
      return (unsigned int)v16;
    }
    *(_OWORD *)v44 = 0LL;
    v45 = 0LL;
    EndpointCharacteristicsDescriptor = GetEndpointCharacteristicsDescriptor(
                                          a3,
                                          0,
                                          (struct EndpointCharacteristicsDescriptor *)v44);
    v16 = EndpointCharacteristicsDescriptor;
    if ( EndpointCharacteristicsDescriptor >= 0 )
    {
      if ( *((_DWORD *)this + 108) && !*((_BYTE *)v44[0] + 264) )
      {
        v16 = -2004287421;
        v21 = 2290679875LL;
        v20 = 1388LL;
        goto LABEL_10;
      }
      v41 = (unsigned __int16 ***)((char *)this + 192);
      v42 = 0LL;
      v43 = 1;
      v16 = _AllocString<CTCoAllocPolicy>(v19, v18, a3, &v42);
      wil::details::out_param_t<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>>::~out_param_t<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>>(&v41);
      if ( v16 < 0 )
      {
        v21 = (unsigned int)v16;
        v20 = 1390LL;
        goto LABEL_10;
      }
      *((_DWORD *)this + 10) = (*(__int64 (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)a2 + 40LL))(a2);
      v22 = a8;
      EndpointCharacteristicsDescriptor = ValidateVadServerSettings(a8);
      v16 = EndpointCharacteristicsDescriptor;
      if ( EndpointCharacteristicsDescriptor >= 0 )
      {
        *((_OWORD *)this + 16) = *(_OWORD *)v22;
        *((_OWORD *)this + 17) = *((_OWORD *)v22 + 1);
        *((_OWORD *)this + 18) = *((_OWORD *)v22 + 2);
        *((_OWORD *)this + 19) = *((_OWORD *)v22 + 3);
        *((_OWORD *)this + 20) = *((_OWORD *)v22 + 4);
        *((_OWORD *)this + 21) = *((_OWORD *)v22 + 5);
        *((_OWORD *)this + 22) = *((_OWORD *)v22 + 6);
        *((_OWORD *)this + 23) = *((_OWORD *)v22 + 7);
        *((_OWORD *)this + 24) = *((_OWORD *)v22 + 8);
        *((_OWORD *)this + 25) = *((_OWORD *)v22 + 9);
        *((_OWORD *)this + 26) = *((_OWORD *)v22 + 10);
        *((_QWORD *)this + 54) = *((_QWORD *)v22 + 22);
        v23 = *((_DWORD *)this + 92);
        if ( v23 )
        {
          v24 = operator new[](v23, (const struct std::nothrow_t *)&std::nothrow);
          v25 = (void *)*((_QWORD *)this + 63);
          *((_QWORD *)this + 63) = v24;
          if ( v25 )
            operator delete(v25, (const struct std::nothrow_t *)1);
          v26 = (void *)*((_QWORD *)this + 63);
          if ( !v26 )
          {
            v16 = -2147024882;
            v21 = 2147942414LL;
            v20 = 1403LL;
            goto LABEL_10;
          }
          memcpy_0(v26, *((const void **)this + 47), *((unsigned int *)this + 92));
          *((_QWORD *)this + 47) = *((_QWORD *)this + 63);
        }
        v27 = Src;
        EndpointCharacteristicsDescriptor = ValidateWaveFormatEx(Src);
        v16 = EndpointCharacteristicsDescriptor;
        if ( EndpointCharacteristicsDescriptor >= 0 )
        {
          if ( v27->nChannels > 2u && ((v27->wFormatTag - 1) & 0xFFFD) == 0 )
          {
            v16 = -2147024809;
            v21 = 2147942487LL;
            v20 = 1416LL;
            goto LABEL_10;
          }
          v28 = a5;
          EndpointCharacteristicsDescriptor = CVADServer::InitializePolicy(this, a2, v44[0], (__m128i *)a7, a5, a9);
          v16 = EndpointCharacteristicsDescriptor;
          if ( EndpointCharacteristicsDescriptor >= 0 )
          {
            v41 = &a9;
            LOBYTE(v42) = 1;
            v29 = a10;
            *((_DWORD *)this + 138) = GetConnectorTypeForStream(
                                        (struct EndpointCharacteristicsDescriptor *)v44,
                                        v28,
                                        a4,
                                        *((_DWORD *)this + 108),
                                        v27,
                                        a10);
            if ( a4 == AUDCLNT_SHAREMODE_EXCLUSIVE
              && ((unsigned int)IsExclusiveModeDisabled(*((const unsigned __int16 **)this + 24))
               || !(*(unsigned int (__fastcall **)(struct IAudioProcess *, _QWORD, __int64))(*(_QWORD *)a2 + 144LL))(
                     a2,
                     *((unsigned int *)a8 + 12),
                     1LL)) )
            {
              v16 = -2004287474;
              v30 = 2290679822LL;
              v31 = 1440LL;
            }
            else
            {
              v32 = CloneWaveFormat(v27, (struct tWAVEFORMATEX **)this + 19);
              v16 = v32;
              if ( v32 >= 0 )
              {
                *((_DWORD *)this + 60) = a4;
                v33 = *((_QWORD *)this + 62);
                *((_QWORD *)this + 62) = v29;
                if ( v29 )
                  (*(void (__fastcall **)(struct IProcessSubmixProxy *))(*(_QWORD *)v29 + 8LL))(v29);
                if ( v33 )
                  (*(void (__fastcall **)(__int64))(*(_QWORD *)v33 + 16LL))(v33);
                v47 = (__int64 *)((char *)this + 560);
                v34 = Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::WeakRef>::operator Microsoft::WRL::WeakRef *(&v47);
                v35 = Microsoft::WRL::AsWeak<CVADServer>(this, v34);
                v16 = v35;
                if ( v35 >= 0 )
                {
                  EnterCriticalSection(&g_csVadList);
                  *(_QWORD *)&v39.Data1 = &g_csVadList;
                  v47 = (__int64 *)this;
                  ATL::CAtlList<CVADServer *,ATL::CElementTraits<CVADServer *>>::AddHead(v36, &v47);
                  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>((struct _RTL_CRITICAL_SECTION **)&v39);
                  LOBYTE(v42) = 0;
                  *((_DWORD *)this + 40) = 1;
                  v39 = *(struct _GUID *)*((_QWORD *)v44[1] + 196);
                  v37 = PublishApoTelemetry((CEndpointStoreCache *)v48, &v39);
                  if ( v37 < 0 )
                    wil::details::in1diag3::_Log_Hr(
                      retaddr,
                      (void *)0x5BD,
                      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
                      (const char *)(unsigned int)v37,
                      v38);
                  EndpointCharacteristicsDescriptor::~EndpointCharacteristicsDescriptor((EndpointCharacteristicsDescriptor *)v44);
                  v16 = 0;
                  goto LABEL_48;
                }
                v30 = (unsigned int)v35;
                v31 = 1460LL;
              }
              else
              {
                v30 = (unsigned int)v32;
                v31 = 1446LL;
              }
            }
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)v31,
              (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
              (const char *)v30);
            operator delete(*a9);
            *a9 = 0LL;
            goto LABEL_11;
          }
          v20 = 1421LL;
        }
        else
        {
          v20 = 1413LL;
        }
      }
      else
      {
        v20 = 1395LL;
      }
    }
    else
    {
      v20 = 1385LL;
    }
    v21 = (unsigned int)EndpointCharacteristicsDescriptor;
LABEL_10:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v20,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
      (const char *)v21);
LABEL_11:
    EndpointCharacteristicsDescriptor::~EndpointCharacteristicsDescriptor((EndpointCharacteristicsDescriptor *)v44);
    goto LABEL_48;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x563,
    (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
    (const char *)0x88890002LL);
  if ( v14 )
    LeaveCriticalSection(v14);
  return 2290679810LL;
}
