/*
 * XREFs of ?Initialize@CVolumeHardware@@AEAAJPEAUIMMDevice@@PEBGPEAUIPartsList@@@Z @ 0x1801138A8
 * Callers:
 *     ?Make@CVolumeHardware@@SAJPEAUIMMDevice@@PEBGPEAUIControlChangeNotify@@PEAUIPartsList@@PEAPEAVIVolumeControlHandler@@@Z @ 0x180114928 (-Make@CVolumeHardware@@SAJPEAUIMMDevice@@PEBGPEAUIControlChangeNotify@@PEAUIPartsList@@PEAPEAVIV.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$03@@U1@U2@U_tlgWrapperPtrSize@@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$03@@34AEBU_tlgWrapperPtrSize@@5@Z @ 0x180004520 (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$03@@U1@U2@U_tlgWrapperPtrSize@@U3@@-$_tlgWriteTem.c)
 *     ?reset@?$unique_ptr@UKSMULTIPLE_ITEM@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@QEAAXPEAUKSMULTIPLE_ITEM@@@Z @ 0x180019F4C (-reset@-$unique_ptr@UKSMULTIPLE_ITEM@@U-$function_deleter@P6AXPEAX@Z$1-CoTaskMemFree@@YAX0@Z@wil.c)
 *     ?Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ @ 0x180023E20 (-Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ.c)
 *     _tlgKeywordOn @ 0x180048600 (_tlgKeywordOn.c)
 *     ??A?$CAtlArray@VCVolumeUnit@@V?$CElementTraits@VCVolumeUnit@@@ATL@@@ATL@@QEAAAEAVCVolumeUnit@@_K@Z @ 0x180048740 (--A-$CAtlArray@VCVolumeUnit@@V-$CElementTraits@VCVolumeUnit@@@ATL@@@ATL@@QEAAAEAVCVolumeUnit@@_K.c)
 *     _freea @ 0x18004D97C (_freea.c)
 *     __security_check_cookie @ 0x1800A3DA0 (__security_check_cookie.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_EnhancedAudioTracing_2@@@details@wil@@QEAA_NXZ @ 0x180103030 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_EnhancedAudioTracing_2@.c)
 *     _lambda_ebe2282181f4e2159926b1d117e17408_::operator() @ 0x180112DA8 (_lambda_ebe2282181f4e2159926b1d117e17408_--operator().c)
 *     ?Initialize_old@CVolumeHardware@@AEAAJPEAUIMMDevice@@PEAUIPartsList@@@Z @ 0x180113FEC (-Initialize_old@CVolumeHardware@@AEAAJPEAUIMMDevice@@PEAUIPartsList@@@Z.c)
 *     ?IsEnabled@AudioSrvTelemetryProvider@@SA_NE_K@Z @ 0x1801140E8 (-IsEnabled@AudioSrvTelemetryProvider@@SA_NE_K@Z.c)
 *     ?UIntToUShort@@YAJIPEAG@Z @ 0x180115660 (-UIntToUShort@@YAJIPEAG@Z.c)
 *     _alloca_probe @ 0x180167ED0 (_alloca_probe.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CVolumeHardware::Initialize(
        CVolumeHardware *this,
        struct IMMDevice *a2,
        const unsigned __int16 *a3,
        struct IPartsList *a4)
{
  const WCHAR *v4; // rdi
  struct IPartsList *v6; // r8
  const WCHAR *v7; // rsi
  int v8; // r15d
  unsigned __int64 v9; // rdx
  unsigned __int8 v10; // cl
  size_t v11; // rcx
  __int64 v12; // rax
  void *v13; // rsp
  WCHAR *p_Memory; // r14
  WCHAR *v15; // rax
  unsigned int v16; // r12d
  _DWORD *v17; // rax
  __int64 v18; // rdi
  float *v19; // rax
  _DWORD *v20; // rcx
  int v21; // edx
  int v22; // ecx
  __int64 v23; // r8
  __int64 v24; // r9
  int v25; // edx
  __int64 v27; // [rsp+0h] [rbp-50h] BYREF
  int Memory; // [rsp+50h] [rbp+0h] BYREF
  int v29; // [rsp+54h] [rbp+4h] BYREF
  const unsigned __int16 *v30; // [rsp+58h] [rbp+8h] BYREF
  char *v31; // [rsp+60h] [rbp+10h] BYREF
  const WCHAR *v32; // [rsp+68h] [rbp+18h] BYREF
  int *v33; // [rsp+70h] [rbp+20h] BYREF
  struct IMMDevice **v34; // [rsp+78h] [rbp+28h]
  char **v35; // [rsp+80h] [rbp+30h]
  const WCHAR *v36; // [rsp+88h] [rbp+38h] BYREF
  WCHAR *v37; // [rsp+90h] [rbp+40h] BYREF
  int v38; // [rsp+98h] [rbp+48h]
  struct IMMDevice *v39; // [rsp+E8h] [rbp+98h] BYREF

  v39 = a2;
  v4 = a3;
  v30 = a3;
  v7 = 0LL;
  if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_EnhancedAudioTracing_2>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_Servicing_EnhancedAudioTracing_2>::GetImpl'::`2'::impl) )
  {
    v31 = 0LL;
    v33 = (int *)this;
    v34 = &v39;
    v35 = &v31;
    v8 = lambda_ebe2282181f4e2159926b1d117e17408_::operator()(&v33);
    if ( !AudioSrvTelemetryProvider::IsEnabled(v10, v9)
      || (LOWORD(Memory) = 0, v8 >= 0) && (int)UIntToUShort(*((_DWORD *)this + 29), (unsigned __int16 *)&Memory) < 0 )
    {
LABEL_28:
      wistd::unique_ptr<KSMULTIPLE_ITEM,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
        (void **)&v31,
        0LL);
      return (unsigned int)v8;
    }
    v11 = (16LL * (unsigned __int16)Memory + 16) & -(__int64)(16 * (unsigned __int64)(unsigned __int16)Memory < 16 * (unsigned __int64)(unsigned __int16)Memory + 16);
    if ( v11 )
    {
      if ( v11 > 0x400 )
      {
        v15 = (WCHAR *)malloc(v11);
        p_Memory = v15;
        if ( !v15 )
          goto LABEL_15;
        *(_DWORD *)v15 = 56797;
      }
      else
      {
        v12 = v11 + 15;
        if ( v11 + 15 < v11 )
          v12 = 0xFFFFFFFFFFFFFF0LL;
        v13 = alloca(v12 & 0xFFFFFFFFFFFFFFF0uLL);
        p_Memory = (WCHAR *)&Memory;
        if ( &v27 == (__int64 *)-80LL )
          goto LABEL_15;
        Memory = 52428;
      }
      p_Memory += 8;
    }
    else
    {
      p_Memory = 0LL;
    }
LABEL_15:
    v32 = p_Memory;
    if ( p_Memory )
    {
      v16 = 0;
      if ( (_WORD)Memory )
      {
        do
        {
          v17 = (_DWORD *)ATL::CAtlArray<CVolumeUnit,ATL::CElementTraits<CVolumeUnit>>::operator[](
                            (_QWORD *)this + 10,
                            v16);
          v18 = 2LL * v16;
          *(_DWORD *)&p_Memory[4 * v18] = v17[2];
          *(_DWORD *)&p_Memory[4 * v18 + 2] = v17[3];
          *(_DWORD *)&p_Memory[4 * v18 + 4] = v17[4];
          v19 = (float *)ATL::CAtlArray<CVolumeUnit,ATL::CElementTraits<CVolumeUnit>>::operator[](
                           (_QWORD *)this + 10,
                           v16);
          *(float *)&p_Memory[8 * v16++ + 6] = fmaxf(v19[2], fminf(v19[3], v19[1]));
        }
        while ( v16 < (unsigned __int16)Memory );
        v4 = v30;
      }
      v20 = (_DWORD *)*((_QWORD *)AudioSrvTelemetryProvider::Instance() + 1);
      if ( *v20 > 4u && tlgKeywordOn((__int64)v20, 2LL) )
      {
        v37 = p_Memory;
        v38 = 16 * (unsigned __int16)Memory;
        v33 = &Memory;
        LODWORD(v34) = v21;
        if ( v31 )
          v25 = *(_DWORD *)v31;
        else
          v25 = 0;
        v29 = v25;
        if ( v31 )
          v7 = (const WCHAR *)(v31 + 4);
        v36 = v7;
        LODWORD(v30) = v8;
        v32 = v4;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperPtrSize,_tlgWrapperPtrSize>(
          v22,
          (int)&unk_1801ADE78,
          v23,
          v24,
          &v32,
          (__int64)&v30,
          &v36,
          (__int64)&v29,
          (__int64 *)&v33,
          (__int64 *)&v37);
      }
      freea(p_Memory);
    }
    goto LABEL_28;
  }
  return CVolumeHardware::Initialize_old(this, v39, v6);
}
