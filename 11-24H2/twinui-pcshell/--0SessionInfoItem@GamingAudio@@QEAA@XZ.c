/*
 * XREFs of ??0SessionInfoItem@GamingAudio@@QEAA@XZ @ 0x1803665E4
 * Callers:
 *     ??$Make@VSessionInfoItem@GamingAudio@@$$V@Details@WRL@Microsoft@@YA?AV?$ComPtr@VSessionInfoItem@GamingAudio@@@12@XZ @ 0x180366158 (--$Make@VSessionInfoItem@GamingAudio@@$$V@Details@WRL@Microsoft@@YA-AV-$ComPtr@VSessionInfoItem@.c)
 * Callees:
 *     memset_0 @ 0x1802D25CC (memset_0.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIAudioSessionEvents@@VFtmBase@23@@WRL@Microsoft@@QEAA@XZ @ 0x180366584 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIAudioSessionEvents@@VFtmBase@23@@WRL.c)
 */

GamingAudio::SessionInfoItem *__fastcall GamingAudio::SessionInfoItem::SessionInfoItem(
        GamingAudio::SessionInfoItem *this)
{
  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IAudioSessionEvents,Microsoft::WRL::FtmBase>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IAudioSessionEvents,Microsoft::WRL::FtmBase>((__int64)this);
  *((_DWORD *)this + 12) = 0;
  *(_QWORD *)this = &GamingAudio::SessionInfoItem::`vftable'{for `IAudioSessionEvents'};
  *((_QWORD *)this + 1) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IAudioSessionEvents,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  *((_QWORD *)this + 7) = 0LL;
  *((_DWORD *)this + 16) = 0;
  *((_DWORD *)this + 17) = 0;
  *((_DWORD *)this + 18) = 0;
  *((_DWORD *)this + 19) = 0;
  *((_DWORD *)this + 20) = 0;
  *((_DWORD *)this + 21) = 2;
  memset_0((char *)this + 88, 0, 0x82uLL);
  memset_0((char *)this + 218, 0, 0x20AuLL);
  *((_QWORD *)this + 93) = 0LL;
  *((_QWORD *)this + 94) = 0LL;
  *((_QWORD *)this + 95) = 0LL;
  _InterlockedIncrement(&GamingAudio::SessionInfoItem::s_sessionInstanceCount);
  return this;
}
