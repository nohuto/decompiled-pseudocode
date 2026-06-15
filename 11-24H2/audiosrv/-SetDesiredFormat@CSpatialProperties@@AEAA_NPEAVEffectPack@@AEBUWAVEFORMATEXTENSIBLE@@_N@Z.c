/*
 * XREFs of ?SetDesiredFormat@CSpatialProperties@@AEAA_NPEAVEffectPack@@AEBUWAVEFORMATEXTENSIBLE@@_N@Z @ 0x18013E970
 * Callers:
 *     ?ProcessPropertyChange@CSpatialProperties@@QEAAXPEAVEffectPack@@AEBU_tagpropertykey@@PEAUSpatialAudioRelatedGlobalSettings@@PEBUtWAVEFORMATEX@@PEAH@Z @ 0x18013DE0C (-ProcessPropertyChange@CSpatialProperties@@QEAAXPEAVEffectPack@@AEBU_tagpropertykey@@PEAUSpatial.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapperByVal@$01@@U?$_tlgWrapperByVal@$03@@U4@U3@U3@U4@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapperByVal@$01@@AEBU?$_tlgWrapperByVal@$03@@65564@Z @ 0x180006C0C (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByRef@$0BA@@@U-$_tlgWrapperByVal@$01@@U-$_tlgWrapperByVa.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSz@G@@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapperByVal@$03@@U4@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapperByVal@$03@@6@Z @ 0x180007A68 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapSz@G@@U-$_tlgWrapperByRef@$0BA@@@U-$_tlgWrapperByVa.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180020710 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     _tlgKeywordOn @ 0x180048600 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1800A3DA0 (__security_check_cookie.c)
 *     memset_0 @ 0x1800A4EB4 (memset_0.c)
 *     ?SetDeviceFormatAndSpatialSettings@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@PEBUSpatialAudioSettings@@_N@Z @ 0x180137A54 (-SetDeviceFormatAndSpatialSettings@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000.c)
 */

char __fastcall CSpatialProperties::SetDesiredFormat(
        LPCRITICAL_SECTION lpCriticalSection,
        struct EffectPack *this,
        const struct WAVEFORMATEXTENSIBLE *a3,
        char a4)
{
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  char v12; // bl
  __int64 v13; // r8
  __int64 v14; // r9
  __int128 v15; // xmm0
  PRTL_CRITICAL_SECTION_DEBUG v16; // rax
  const struct SpatialAudioSettings *v17; // r14
  int v18; // r15d
  int v19; // r12d
  __int128 v20; // xmm1
  __int64 v21; // xmm0_8
  _DWORD *v22; // rcx
  int v23; // ecx
  __int64 v24; // r8
  __int64 v25; // r9
  __int128 *v26; // rax
  __int128 v27; // xmm0
  PRTL_CRITICAL_SECTION_DEBUG v28; // rax
  WORD wValidBitsPerSample; // [rsp+70h] [rbp-90h] BYREF
  WORD wBitsPerSample; // [rsp+72h] [rbp-8Eh] BYREF
  WORD nChannels; // [rsp+74h] [rbp-8Ch] BYREF
  DWORD nSamplesPerSec; // [rsp+78h] [rbp-88h] BYREF
  struct _RTL_CRITICAL_SECTION *v34; // [rsp+80h] [rbp-80h] BYREF
  DWORD nAvgBytesPerSec; // [rsp+88h] [rbp-78h] BYREF
  __int64 p_SubFormat; // [rsp+90h] [rbp-70h] BYREF
  const WCHAR *v37; // [rsp+98h] [rbp-68h] BYREF
  const WCHAR *v38; // [rsp+A0h] [rbp-60h] BYREF
  __int128 v39; // [rsp+A8h] [rbp-58h] BYREF
  _BYTE v40[32]; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v41; // [rsp+D8h] [rbp-28h]
  _OWORD v42[4]; // [rsp+E0h] [rbp-20h] BYREF
  PRTL_CRITICAL_SECTION_DEBUG DebugInfo; // [rsp+120h] [rbp+20h]

  memset_0(v42, 0, 0x48uLL);
  EnterCriticalSection(lpCriticalSection);
  v8 = *(_OWORD *)&lpCriticalSection[2].OwningThread;
  v34 = lpCriticalSection;
  v9 = *(_OWORD *)&lpCriticalSection[2].SpinCount;
  v42[0] = v8;
  v10 = *(_OWORD *)&lpCriticalSection[3].LockCount;
  v42[1] = v9;
  v11 = *(_OWORD *)&lpCriticalSection[3].LockSemaphore;
  v42[2] = v10;
  DebugInfo = lpCriticalSection[4].DebugInfo;
  v42[3] = v11;
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v34);
  v12 = 0;
  if ( **(_DWORD **)&lpCriticalSection[1].LockCount > 4u
    && tlgKeywordOn(*(_QWORD *)&lpCriticalSection[1].LockCount, 16LL) )
  {
    p_SubFormat = (__int64)&a3->SubFormat;
    nAvgBytesPerSec = a3->Format.nAvgBytesPerSec;
    wValidBitsPerSample = a3->Samples.wValidBitsPerSample;
    wBitsPerSample = a3->Format.wBitsPerSample;
    nSamplesPerSec = a3->Format.nSamplesPerSec;
    LODWORD(v34) = a3->dwChannelMask;
    nChannels = a3->Format.nChannels;
    v15 = *(_OWORD *)*((_QWORD *)this + 196);
    v37 = (const WCHAR *)&v39;
    v16 = lpCriticalSection[1].DebugInfo;
    v39 = v15;
    v38 = *(const WCHAR **)&v16[1].Type;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByRef<16>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByRef<16>>(
      v13,
      (int)&unk_1801B0534,
      v13,
      v14,
      &v38,
      (__int64 *)&v37,
      (__int64)&nChannels,
      (__int64)&v34,
      (__int64)&nSamplesPerSec,
      (__int64)&wBitsPerSample,
      (__int64)&wValidBitsPerSample,
      (__int64)&nAvgBytesPerSec,
      &p_SubFormat);
  }
  v17 = (const struct SpatialAudioSettings *)((unsigned __int64)v42 & -(__int64)(a4 != 0));
  v18 = 1;
  v19 = EffectPack::SetDeviceFormatAndSpatialSettings(this, 0, &a3->Format, v17, 0);
  if ( v19 < 0 && a3->dwChannelMask == 1599 )
  {
    v20 = *(_OWORD *)&a3->Format.cbSize;
    *(_OWORD *)v40 = *(_OWORD *)&a3->Format.wFormatTag;
    v21 = *(_QWORD *)a3->SubFormat.Data4;
    *(_OWORD *)&v40[16] = v20;
    *(_DWORD *)&v40[20] = 255;
    v41 = v21;
    v18 = EffectPack::SetDeviceFormatAndSpatialSettings(this, 0, (struct tWAVEFORMATEX *)v40, v17, 0);
  }
  v22 = *(_DWORD **)&lpCriticalSection[1].LockCount;
  if ( *v22 > 4u && tlgKeywordOn((__int64)v22, 0x400000000010LL) )
  {
    v26 = (__int128 *)*((_QWORD *)this + 196);
    LODWORD(v34) = v18;
    nSamplesPerSec = v19;
    v27 = *v26;
    v38 = (const WCHAR *)&v39;
    v28 = lpCriticalSection[1].DebugInfo;
    v39 = v27;
    v37 = *(const WCHAR **)&v28[1].Type;
    p_SubFormat = 2048LL;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<unsigned short>,_tlgWrapperByRef<16>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v23,
      (int)&unk_1801B03FE,
      v24,
      v25,
      (__int64)&p_SubFormat,
      &v37,
      (__int64 *)&v38,
      (__int64)&nSamplesPerSec,
      (__int64)&v34);
  }
  if ( v19 >= 0 || !v18 )
    return 1;
  return v12;
}
