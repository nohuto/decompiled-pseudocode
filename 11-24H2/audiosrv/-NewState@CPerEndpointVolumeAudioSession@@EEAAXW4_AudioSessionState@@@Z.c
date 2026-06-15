/*
 * XREFs of ?NewState@CPerEndpointVolumeAudioSession@@EEAAXW4_AudioSessionState@@@Z @ 0x18000A330
 * Callers:
 *     <none>
 * Callees:
 *     ?NewState@CAudioSession@@MEAAXW4_AudioSessionState@@@Z @ 0x18000BA10 (-NewState@CAudioSession@@MEAAXW4_AudioSessionState@@@Z.c)
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x18000D600 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     ?GetVolumeStrip@CPerEndpointVolumeAudioSession@@AEAAJPEAPEAUIVolumeStrip@@@Z @ 0x18001D230 (-GetVolumeStrip@CPerEndpointVolumeAudioSession@@AEAAJPEAPEAUIVolumeStrip@@@Z.c)
 *     ?DestroyVolumeStrip@CPerEndpointVolumeAudioSession@@AEAAXXZ @ 0x180072C58 (-DestroyVolumeStrip@CPerEndpointVolumeAudioSession@@AEAAXXZ.c)
 *     WPP_SF_S @ 0x1800C033C (WPP_SF_S.c)
 *     WPP_SF_q @ 0x1800C34E4 (WPP_SF_q.c)
 */

void __fastcall CPerEndpointVolumeAudioSession::NewState(CPerEndpointVolumeAudioSession *this, volatile int *a2)
{
  enum _AudioSessionState v2; // edi
  int v4; // esi
  signed __int64 v5; // rax
  signed __int64 v6; // rtt

  v2 = (int)a2;
  v4 = *((_DWORD *)this + 84);
  v5 = *((_QWORD *)this + 7);
  while ( v5 >= 0 )
  {
    if ( (_DWORD)v5 != 0x7FFFFFFF )
    {
      v6 = v5;
      v5 = _InterlockedCompareExchange64((volatile signed __int64 *)this + 7, v5 + 1, v5);
      if ( v6 != v5 )
        continue;
    }
    goto LABEL_7;
  }
  Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)(2 * v5 + 16), a2);
LABEL_7:
  CAudioSession::NewState(this, v2);
  if ( v4 == 2 )
  {
    if ( v2 != AudioSessionStateExpired )
    {
      if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
        && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_S(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          53LL,
          &WPP_ea93f1868512325b454513e390c361b8_Traceguids,
          *((_QWORD *)this + 82));
      }
      CPerEndpointVolumeAudioSession::GetVolumeStrip(this, 0LL);
      goto LABEL_20;
    }
  }
  else if ( v2 != AudioSessionStateExpired )
  {
    goto LABEL_20;
  }
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_S(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      54LL,
      &WPP_ea93f1868512325b454513e390c361b8_Traceguids,
      *((_QWORD *)this + 82));
  }
  CPerEndpointVolumeAudioSession::DestroyVolumeStrip(this);
LABEL_20:
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 55LL, &WPP_ea93f1868512325b454513e390c361b8_Traceguids, this);
  }
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::ChainInterfaces<IAudioSessionPolicyControl,IAudioSessionInfo,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,IAudioSessionInfoInternal,IAudioSessionDuckingControl,IInspectable>::Release(this);
}
