/*
 * XREFs of ?GetDelayedAECInsertionPolicy@EffectPolicy@@SAJPEAVEffectPack@@PEAUIPropertyStore@@PEAVSystemEffectDescriptor@@U_GUID@@PEAW4INBOX_AEC_INSERTION_POLICY@@AEAU_AEC_POLICY_RESULTS@@@Z @ 0x18003A92C
 * Callers:
 *     _lambda_337836fad6503ddf3ac4b1bf88bbe274_::operator() @ 0x180130D5C (_lambda_337836fad6503ddf3ac4b1bf88bbe274_--operator().c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180008B80 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180014EAC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$MakeAndInitialize@VCCompositeSystemEffect@@UICompositeSystemEffect@@AEAPEBU_tlgProvider_t@@AEAW4APO_TYPE@@AEAW4FormatChangePosition@@AEAW4AUDIO_DIRECTION@@AEAIAEAPEBU_GUID@@@Details@WRL@Microsoft@@YAJPEAPEAUICompositeSystemEffect@@AEAPEBU_tlgProvider_t@@AEAW4APO_TYPE@@AEAW4FormatChangePosition@@AEAW4AUDIO_DIRECTION@@AEAIAEAPEBU_GUID@@@Z @ 0x18002F368 (--$MakeAndInitialize@VCCompositeSystemEffect@@UICompositeSystemEffect@@AEAPEBU_tlgProvider_t@@AE.c)
 *     ?Find@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z @ 0x1800313A0 (-Find@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z.c)
 *     ?RemoveAll@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAXXZ @ 0x180032B00 (-RemoveAll@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAXXZ.c)
 *     ?GetDefaultEffectChainClsids@SystemEffectDescriptor@@QEAAJAEAVCAudioSignalProcessingModeArray@@PEAIPEAPEAU_GUID@@@Z @ 0x18003ADB4 (-GetDefaultEffectChainClsids@SystemEffectDescriptor@@QEAAJAEAVCAudioSignalProcessingModeArray@@P.c)
 *     ?IsMicArray@EffectPolicy@@CA_NPEAUIPropertyStore@@AEAU_AEC_POLICY_RESULTS@@@Z @ 0x18003AEEC (-IsMicArray@EffectPolicy@@CA_NPEAUIPropertyStore@@AEAU_AEC_POLICY_RESULTS@@@Z.c)
 *     ??A?$span@VCAudioSignalProcessingModeArray@@$0?0@gsl@@QEBAAEAVCAudioSignalProcessingModeArray@@_K@Z @ 0x18003AFBC (--A-$span@VCAudioSignalProcessingModeArray@@$0-0@gsl@@QEBAAEAVCAudioSignalProcessingModeArray@@_.c)
 *     ??$copy_to@VCAudioSession@@@?$com_ptr_t@VCAudioSession@@Uerr_returncode_policy@wil@@@wil@@QEBAJPEAPEAVCAudioSession@@@Z @ 0x18003AFEC (--$copy_to@VCAudioSession@@@-$com_ptr_t@VCAudioSession@@Uerr_returncode_policy@wil@@@wil@@QEBAJP.c)
 *     ?IsValidMicArrayForAEC@EffectPolicy@@CA_NPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUIPropertyStore@@AEAU_AEC_POLICY_RESULTS@@@Z @ 0x18005D52C (-IsValidMicArrayForAEC@EffectPolicy@@CA_NPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audio.c)
 *     ?IsIntegratedAudioDevice@EffectPolicy@@CAJPEAUIPropertyStore@@PEAH@Z @ 0x18014B0A0 (-IsIntegratedAudioDevice@EffectPolicy@@CAJPEAUIPropertyStore@@PEAH@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=9
__int64 __fastcall EffectPolicy::GetDelayedAECInsertionPolicy(
        struct EffectPack *a1,
        struct IPropertyStore *a2,
        struct SystemEffectDescriptor *a3,
        struct _GUID *a4,
        enum INBOX_AEC_INSERTION_POLICY *a5,
        struct _AEC_POLICY_RESULTS *a6)
{
  void *v7; // rdi
  __int64 v8; // rbx
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 *v9; // r12
  struct CEndpointCharacteristics **v10; // r13
  int DefaultEffectChainClsids; // eax
  unsigned int v12; // ebx
  __int64 v13; // rax
  int v14; // eax
  __int64 v15; // rax
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v16; // edx
  _QWORD *v17; // rax
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // r10
  __int64 v22; // r11
  __int64 v23; // r12
  __int64 v24; // rcx
  __int64 v25; // rcx
  __int64 v26; // rcx
  unsigned int v28; // [rsp+40h] [rbp-89h] BYREF
  unsigned int v29; // [rsp+48h] [rbp-81h] BYREF
  __int64 v30; // [rsp+50h] [rbp-79h] BYREF
  __int64 *v31; // [rsp+58h] [rbp-71h] BYREF
  int v32; // [rsp+60h] [rbp-69h] BYREF
  BOOL v33; // [rsp+68h] [rbp-61h] BYREF
  int v34; // [rsp+70h] [rbp-59h] BYREF
  LPVOID pv; // [rsp+78h] [rbp-51h] BYREF
  __int64 v36; // [rsp+80h] [rbp-49h] BYREF
  LPVOID v37; // [rsp+88h] [rbp-41h] BYREF
  void *Block[2]; // [rsp+90h] [rbp-39h] BYREF
  struct _GUID *v39; // [rsp+A0h] [rbp-29h]
  SystemEffectDescriptor *v40; // [rsp+A8h] [rbp-21h]
  struct IPropertyStore *v41; // [rsp+B0h] [rbp-19h]
  LPVOID v42; // [rsp+B8h] [rbp-11h] BYREF
  _OWORD v43[5]; // [rsp+C0h] [rbp-9h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+118h] [rbp+4Fh]

  v39 = a4;
  v40 = a3;
  v41 = a2;
  v37 = 0LL;
  v29 = 0;
  v28 = 0;
  v7 = 0LL;
  pv = 0LL;
  v31 = 0LL;
  v30 = 0LL;
  Block[0] = 0LL;
  Block[1] = 0LL;
  v8 = 0LL;
  v36 = 0LL;
  v9 = (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 *)((char *)a3 + 48);
  v10 = (struct CEndpointCharacteristics **)((char *)a1 + 1584);
  if ( EffectPolicy::IsMicArray(a2, a6) && !EffectPolicy::IsValidMicArrayForAEC(*v10, *v9, v41, a6) )
  {
    *(_DWORD *)a5 = 2;
    *((_DWORD *)a6 + 16) = 5;
LABEL_41:
    *((_DWORD *)a6 + 15) = *(_DWORD *)a5;
    if ( v8 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
    if ( Block[0] )
      free(Block[0]);
    if ( v30 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v30 + 16LL))(v30);
    if ( v31 )
      (*(void (__fastcall **)(__int64 *))(*v31 + 16))(v31);
    v12 = 0;
    goto LABEL_50;
  }
  DefaultEffectChainClsids = SystemEffectDescriptor::GetDefaultEffectChainClsids(
                               v40,
                               (struct CAudioSignalProcessingModeArray *)Block,
                               &v28,
                               (struct _GUID **)&pv);
  v12 = DefaultEffectChainClsids;
  if ( DefaultEffectChainClsids >= 0 )
  {
    v13 = gsl::span<CAudioSignalProcessingModeArray,-1>::operator[]((char *)a1 + 1712, *(int *)v9);
    v33 = ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(v13, v39) != -1;
    v7 = pv;
    v42 = pv;
    v32 = 1;
    v34 = 2;
    *(_QWORD *)&v43[0] = 0LL;
    v14 = Microsoft::WRL::Details::MakeAndInitialize<CCompositeSystemEffect,ICompositeSystemEffect,_tlgProvider_t const * &,enum APO_TYPE &,enum FormatChangePosition &,enum AUDIO_DIRECTION &,unsigned int &,_GUID const * &>(
            &v31,
            v43,
            &v34,
            &v33,
            &v32,
            &v28,
            (__int64 *)&v42);
    v12 = v14;
    if ( v14 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x13F,
        (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\effectpolicy.cpp",
        (const char *)(unsigned int)v14);
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v36);
      ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll(Block);
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v30);
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v31);
      goto LABEL_50;
    }
    wil::com_ptr_t<CAudioSession,wil::err_returncode_policy>::copy_to<CAudioSession>((char *)*v10 + 40, &v36);
    v15 = *v31;
    v16 = *v9;
    v43[0] = *v39;
    LODWORD(v10) = 0;
    v8 = v36;
    if ( (*(int (__fastcall **)(__int64 *, __int64, _OWORD *, __int64, enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001, _QWORD, __int64 *))(v15 + 24))(
           v31,
           v36,
           v43,
           1LL,
           v16,
           0LL,
           &v30) >= 0
      && (*(int (__fastcall **)(__int64, LPVOID *, unsigned int *, _QWORD))(*(_QWORD *)v30 + 24LL))(
           v30,
           &v37,
           &v29,
           0LL) >= 0 )
    {
      *((_DWORD *)a6 + 9) = 0;
      if ( v29 )
      {
        v17 = v37;
        v10 = (struct CEndpointCharacteristics **)v29;
        v18 = *(_QWORD *)GUID_6f64adbe_8211_11e2_8c70_2c27d7f001fa.Data4;
        v19 = *(_QWORD *)&GUID_6f64adbe_8211_11e2_8c70_2c27d7f001fa.Data1;
        v20 = *(_QWORD *)GUID_6f64adbf_8211_11e2_8c70_2c27d7f001fa.Data4;
        v21 = *(_QWORD *)&GUID_6f64adbf_8211_11e2_8c70_2c27d7f001fa.Data1;
        v22 = *(_QWORD *)GUID_6f64adc0_8211_11e2_8c70_2c27d7f001fa.Data4;
        v23 = *(_QWORD *)&GUID_6f64adc0_8211_11e2_8c70_2c27d7f001fa.Data1;
        do
        {
          v24 = *v17 - v19;
          if ( *v17 == v19 )
            v24 = v17[1] - v18;
          if ( !v24 )
          {
            *((_DWORD *)a6 + 9) |= 2u;
            v18 = *(_QWORD *)GUID_6f64adbe_8211_11e2_8c70_2c27d7f001fa.Data4;
            v19 = *(_QWORD *)&GUID_6f64adbe_8211_11e2_8c70_2c27d7f001fa.Data1;
            v20 = *(_QWORD *)GUID_6f64adbf_8211_11e2_8c70_2c27d7f001fa.Data4;
            v21 = *(_QWORD *)&GUID_6f64adbf_8211_11e2_8c70_2c27d7f001fa.Data1;
            v22 = *(_QWORD *)GUID_6f64adc0_8211_11e2_8c70_2c27d7f001fa.Data4;
            v23 = *(_QWORD *)&GUID_6f64adc0_8211_11e2_8c70_2c27d7f001fa.Data1;
          }
          v25 = *v17 - v21;
          if ( *v17 == v21 )
            v25 = v17[1] - v20;
          if ( !v25 )
          {
            *((_DWORD *)a6 + 9) |= 4u;
            v18 = *(_QWORD *)GUID_6f64adbe_8211_11e2_8c70_2c27d7f001fa.Data4;
            v19 = *(_QWORD *)&GUID_6f64adbe_8211_11e2_8c70_2c27d7f001fa.Data1;
            v20 = *(_QWORD *)GUID_6f64adbf_8211_11e2_8c70_2c27d7f001fa.Data4;
            v21 = *(_QWORD *)&GUID_6f64adbf_8211_11e2_8c70_2c27d7f001fa.Data1;
            v22 = *(_QWORD *)GUID_6f64adc0_8211_11e2_8c70_2c27d7f001fa.Data4;
            v23 = *(_QWORD *)&GUID_6f64adc0_8211_11e2_8c70_2c27d7f001fa.Data1;
          }
          v26 = *v17 - v23;
          if ( *v17 == v23 )
            v26 = v17[1] - v22;
          if ( !v26 )
          {
            *((_DWORD *)a6 + 9) |= 8u;
            v18 = *(_QWORD *)GUID_6f64adbe_8211_11e2_8c70_2c27d7f001fa.Data4;
            v19 = *(_QWORD *)&GUID_6f64adbe_8211_11e2_8c70_2c27d7f001fa.Data1;
            v20 = *(_QWORD *)GUID_6f64adbf_8211_11e2_8c70_2c27d7f001fa.Data4;
            v21 = *(_QWORD *)&GUID_6f64adbf_8211_11e2_8c70_2c27d7f001fa.Data1;
            v22 = *(_QWORD *)GUID_6f64adc0_8211_11e2_8c70_2c27d7f001fa.Data4;
            v23 = *(_QWORD *)&GUID_6f64adc0_8211_11e2_8c70_2c27d7f001fa.Data1;
          }
          v17 += 2;
          v10 = (struct CEndpointCharacteristics **)((char *)v10 - 1);
        }
        while ( v10 );
      }
    }
    if ( (*((_BYTE *)a6 + 36) & 4) != 0 && (*((_DWORD *)v40 + 12) == 3 || (*((_BYTE *)a6 + 36) & 2) != 0) )
    {
      EffectPolicy::IsIntegratedAudioDevice(v41, (int *)a6 + 10);
      if ( *((_DWORD *)a6 + 1) != 2 || *((_DWORD *)a6 + 10) == (_DWORD)v10 )
      {
        if ( (*((_BYTE *)a6 + 36) & 8) != 0 )
        {
          *(_DWORD *)a5 = (_DWORD)v10;
          *((_DWORD *)a6 + 16) = 9;
        }
        else
        {
          *(_DWORD *)a5 = 3;
          *((_DWORD *)a6 + 16) = 7;
        }
      }
      else
      {
        *(_DWORD *)a5 = 2;
        *((_DWORD *)a6 + 16) = (_DWORD)v10;
      }
    }
    else
    {
      *(_DWORD *)a5 = 2;
      *((_DWORD *)a6 + 16) = 8;
    }
    goto LABEL_41;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x136,
    (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\effectpolicy.cpp",
    (const char *)(unsigned int)DefaultEffectChainClsids);
  if ( Block[0] )
    free(Block[0]);
  if ( v30 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v30 + 16LL))(v30);
  if ( v31 )
    (*(void (__fastcall **)(__int64 *))(*v31 + 16))(v31);
  v7 = pv;
LABEL_50:
  CoTaskMemFree(v7);
  CoTaskMemFree(v37);
  return v12;
}
