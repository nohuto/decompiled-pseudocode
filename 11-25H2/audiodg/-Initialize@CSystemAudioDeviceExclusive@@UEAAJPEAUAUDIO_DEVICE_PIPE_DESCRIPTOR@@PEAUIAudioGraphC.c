/*
 * XREFs of ?Initialize@CSystemAudioDeviceExclusive@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraphCallback@@K@Z @ 0x1400711B0
 * Callers:
 *     <none>
 * Callees:
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_RTL_CRITICAL_SECTION@@@Z @ 0x14001DFB0 (-reset@-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1-LeaveCritic.c)
 *     ?Add@CSystemAudioDeviceCollection@@SAHPEBGPEAVCSystemAudioDeviceBase@@@Z @ 0x14002A668 (-Add@CSystemAudioDeviceCollection@@SAHPEBGPEAVCSystemAudioDeviceBase@@@Z.c)
 *     ??1?$CSAutoLock@$00@@QEAA@XZ @ 0x14002CC20 (--1-$CSAutoLock@$00@@QEAA@XZ.c)
 *     ?ActivateEndpoint@CSystemAudioDeviceBase@@IEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@@Z @ 0x14004DC24 (-ActivateEndpoint@CSystemAudioDeviceBase@@IEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@@Z.c)
 *     ?ApplyFxStateSettings@CSystemAudioDeviceBase@@IEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@H@Z @ 0x140050A30 (-ApplyFxStateSettings@CSystemAudioDeviceBase@@IEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@H@Z.c)
 *     __security_check_cookie @ 0x140058DE0 (__security_check_cookie.c)
 *     ?AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x140065D4C (-AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     WPP_SF_Ds @ 0x14006ED64 (WPP_SF_Ds.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CSystemAudioDeviceExclusive::Initialize(
        CSystemAudioDeviceExclusive *this,
        struct AUDIO_DEVICE_PIPE_DESCRIPTOR *a2,
        struct IAudioGraphCallback *a3,
        int a4)
{
  __int128 v4; // xmm0
  int v8; // ebx
  int v9; // eax
  struct _RTL_CRITICAL_SECTION *v11; // [rsp+30h] [rbp-48h] BYREF
  __int128 v12; // [rsp+38h] [rbp-40h]
  __int128 v13; // [rsp+48h] [rbp-30h] BYREF

  v4 = *(_OWORD *)((char *)a2 + 148);
  *(_OWORD *)((char *)this + 104) = v4;
  v12 = v4;
  v13 = v4;
  EtwEventActivityIdControl(4LL, &v13);
  EnterCriticalSection((LPCRITICAL_SECTION)this + 1);
  *((_DWORD *)this + 20) = a4;
  *((_DWORD *)this + 24) = *((_DWORD *)a2 + 34);
  v11 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 40);
  v8 = CSystemAudioDeviceBase::ActivateEndpoint(this, a2);
  if ( v8 < 0 )
    goto LABEL_4;
  *((_QWORD *)this + 27) = *((_QWORD *)a2 + 4);
  *((_QWORD *)this + 28) = *((_QWORD *)a2 + 5);
  *((_DWORD *)this + 58) = *((_DWORD *)a2 + 12);
  *((_DWORD *)this + 8) = *((_DWORD *)a2 + 18);
  v9 = CSystemAudioDeviceCollection::Add(*((const unsigned __int16 **)a2 + 7), this);
  *((_DWORD *)this + 59) = v9;
  if ( !v9 )
  {
    v8 = -2147024882;
LABEL_4:
    (*(void (__fastcall **)(CSystemAudioDeviceExclusive *))(*(_QWORD *)this + 184LL))(this);
    goto LABEL_5;
  }
  v8 = CSystemAudioDeviceBase::ApplyFxStateSettings(this, a2, 0);
LABEL_5:
  wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>::reset(
    &v11,
    0LL);
  if ( v8 < 0 )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x200) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_Ds(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0xAu,
        (__int64)&WPP_b52c0565287b39bb49ec76ae70090e33_Traceguids,
        v8,
        (__int64)"CSystemAudioDeviceExclusive::Initialize");
    }
    AudDGTraceLoggingErrorHelper("CSystemAudioDeviceExclusive::Initialize", 131, v8);
  }
  CSAutoLock<1>::~CSAutoLock<1>(&v11);
  EtwEventActivityIdControl(4LL, &v13);
  return (unsigned int)v8;
}
