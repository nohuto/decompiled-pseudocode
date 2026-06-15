/*
 * XREFs of ??1CPowerReferenceManager@@QEAA@XZ @ 0x180109A64
 * Callers:
 *     ??R?$default_delete@VCPowerReferenceManager@@@std@@QEBAXPEAVCPowerReferenceManager@@@Z @ 0x1800CBC6C (--R-$default_delete@VCPowerReferenceManager@@@std@@QEBAXPEAVCPowerReferenceManager@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180008B80 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180018614 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@V?$shared_ptr@VEffectPack@@@std@@@std@@@std@@YAXPEAV?$shared_ptr@VEffectPack@@@0@QEAV10@AEAV?$allocator@V?$shared_ptr@VEffectPack@@@std@@@0@@Z @ 0x18003F674 (--$_Destroy_range@V-$allocator@V-$shared_ptr@VEffectPack@@@std@@@std@@@std@@YAXPEAV-$shared_ptr@.c)
 *     ??1CSerialWorkQueue@@QEAA@XZ @ 0x1800CBB1C (--1CSerialWorkQueue@@QEAA@XZ.c)
 *     ?Shutdown@CSerialWorkQueue@@QEAAXXZ @ 0x1800CF858 (-Shutdown@CSerialWorkQueue@@QEAAXXZ.c)
 *     ??1CCaptureNotifier@@QEAA@XZ @ 0x1801099FC (--1CCaptureNotifier@@QEAA@XZ.c)
 *     ??1CPlaybackNotifier@@QEAA@XZ @ 0x180109A30 (--1CPlaybackNotifier@@QEAA@XZ.c)
 *     ??1CSebNotifier@@QEAA@XZ @ 0x180109B4C (--1CSebNotifier@@QEAA@XZ.c)
 *     ??1CSleepStudyPowerReferenceManager@@QEAA@XZ @ 0x180109BA4 (--1CSleepStudyPowerReferenceManager@@QEAA@XZ.c)
 */

void __fastcall CPowerReferenceManager::~CPowerReferenceManager(CPowerReferenceManager *this)
{
  CSerialWorkQueue *v2; // rdi
  __int64 v3; // rcx

  v2 = (CPowerReferenceManager *)((char *)this + 256);
  CSerialWorkQueue::Shutdown((CPowerReferenceManager *)((char *)this + 256));
  v3 = *((_QWORD *)this + 58);
  if ( v3 )
  {
    std::_Destroy_range<std::allocator<std::shared_ptr<EffectPack>>>(v3, *((_QWORD *)this + 59));
    std::_Deallocate<16,0>(
      *((char **)this + 58),
      (const struct std::nothrow_t *)((*((_QWORD *)this + 60) - *((_QWORD *)this + 58)) & 0xFFFFFFFFFFFFFFF0uLL));
    *((_QWORD *)this + 58) = 0LL;
    *((_QWORD *)this + 59) = 0LL;
    *((_QWORD *)this + 60) = 0LL;
  }
  _Mtx_destroy_in_situ((CPowerReferenceManager *)((char *)this + 432));
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)this + 53);
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 384));
  CSerialWorkQueue::~CSerialWorkQueue(v2);
  CSleepStudyPowerReferenceManager::~CSleepStudyPowerReferenceManager((CPowerReferenceManager *)((char *)this + 224));
  CCaptureNotifier::~CCaptureNotifier((char **)this + 22);
  CPlaybackNotifier::~CPlaybackNotifier((char **)this + 16);
  CSebNotifier::~CSebNotifier((CPowerReferenceManager *)((char *)this + 64));
  CPdcActivationClient::~CPdcActivationClient(this);
}
