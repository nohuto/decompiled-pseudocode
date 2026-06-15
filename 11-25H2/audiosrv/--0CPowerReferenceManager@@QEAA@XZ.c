/*
 * XREFs of ??0CPowerReferenceManager@@QEAA@XZ @ 0x1800CBEA4
 * Callers:
 *     ?Initialize@CAudioSrv@@UEAAJJ@Z @ 0x1800CD480 (-Initialize@CAudioSrv@@UEAAJJ@Z.c)
 * Callees:
 *     ?PublishPlaybackAudioStatus@CPlaybackNotifier@@AEAAXXZ @ 0x1800164DC (-PublishPlaybackAudioStatus@CPlaybackNotifier@@AEAAXXZ.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18002203C (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?PublishCaptureAudioStatus@CCaptureNotifier@@AEAAXXZ @ 0x1800753A4 (-PublishCaptureAudioStatus@CCaptureNotifier@@AEAAXXZ.c)
 *     ??$_Get_size_of_n@$0DA@@std@@YA_K_K@Z @ 0x1800C7DF0 (--$_Get_size_of_n@$0DA@@std@@YA_K_K@Z.c)
 *     ??0CSerialWorkQueue@@QEAA@XZ @ 0x1800CBFE4 (--0CSerialWorkQueue@@QEAA@XZ.c)
 *     ??0_Mutex_base@std@@QEAA@H@Z @ 0x1800CC04C (--0_Mutex_base@std@@QEAA@H@Z.c)
 *     ??0CPdcActivationClient@@QEAA@XZ @ 0x1800FE980 (--0CPdcActivationClient@@QEAA@XZ.c)
 *     ??0CSebNotifier@@QEAA@XZ @ 0x1801036DC (--0CSebNotifier@@QEAA@XZ.c)
 *     ?Initialize@CSleepStudyPowerReferenceManager@@AEAAJXZ @ 0x180103F40 (-Initialize@CSleepStudyPowerReferenceManager@@AEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=5
CPowerReferenceManager *__fastcall CPowerReferenceManager::CPowerReferenceManager(CPowerReferenceManager *this)
{
  _QWORD *v2; // rax
  SIZE_T size_of; // rax
  _QWORD *v4; // rax

  CPdcActivationClient::CPdcActivationClient(this);
  CSebNotifier::CSebNotifier((CPowerReferenceManager *)((char *)this + 64));
  std::_Mutex_base::_Mutex_base((CPowerReferenceManager *)((char *)this + 128), 0);
  *((_QWORD *)this + 20) = 0LL;
  *((_QWORD *)this + 21) = 0LL;
  v2 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x48uLL);
  *v2 = v2;
  v2[1] = v2;
  v2[2] = v2;
  *((_WORD *)v2 + 12) = 257;
  *((_QWORD *)this + 20) = v2;
  CPlaybackNotifier::PublishPlaybackAudioStatus((CPowerReferenceManager *)((char *)this + 128));
  std::_Mutex_base::_Mutex_base((CPowerReferenceManager *)((char *)this + 176), 0);
  *((_QWORD *)this + 26) = 0LL;
  *((_QWORD *)this + 27) = 0LL;
  size_of = std::_Get_size_of_n<48>(1uLL);
  v4 = std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  *v4 = v4;
  v4[1] = v4;
  v4[2] = v4;
  *((_WORD *)v4 + 12) = 257;
  *((_QWORD *)this + 26) = v4;
  CCaptureNotifier::PublishCaptureAudioStatus((CPowerReferenceManager *)((char *)this + 176));
  *((_QWORD *)this + 28) = 0LL;
  *((_QWORD *)this + 29) = 0LL;
  CSleepStudyPowerReferenceManager::Initialize((CPowerReferenceManager *)((char *)this + 224));
  CSerialWorkQueue::CSerialWorkQueue((CPowerReferenceManager *)((char *)this + 256));
  InitializeCriticalSectionEx((LPCRITICAL_SECTION)((char *)this + 384), 0, 0);
  *((_QWORD *)this + 53) = 0LL;
  std::_Mutex_base::_Mutex_base((CPowerReferenceManager *)((char *)this + 432), 0);
  *((_QWORD *)this + 58) = 0LL;
  *((_QWORD *)this + 59) = 0LL;
  *((_QWORD *)this + 60) = 0LL;
  return this;
}
