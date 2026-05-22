/*
 * XREFs of ?QueueInput@MPCRawInputProvider@@QEAAJAEAULegacyInputInfo@@@Z @ 0x1800CFEB0
 * Callers:
 *     ?OnHeadEventOccurred@SpectrumListener@@EEAAXUMPCMatrix4x4@@PEAUIPerceptionTimestamp@Perception@Windows@@1@Z @ 0x1800D0900 (-OnHeadEventOccurred@SpectrumListener@@EEAAXUMPCMatrix4x4@@PEAUIPerceptionTimestamp@Perception@W.c)
 *     ?OnPhraseDetected@SpectrumListener@@AEAAJPEAUIInputPriv@Internal@Spatial@Input@UI@Windows@@PEAUIPrivVoiceEventArgs@34567@@Z @ 0x1800D0A40 (-OnPhraseDetected@SpectrumListener@@AEAAJPEAUIInputPriv@Internal@Spatial@Input@UI@Windows@@PEAUI.c)
 *     ?OnSelect@SpeechRuntimeListener@@AEAAJXZ @ 0x1800D2534 (-OnSelect@SpeechRuntimeListener@@AEAAJXZ.c)
 * Callees:
 *     ?IsEnabled@ISMTracing@@SA_NE_K@Z @ 0x180012DD0 (-IsEnabled@ISMTracing@@SA_NE_K@Z.c)
 *     ?Instance@ISMTracing@@KAPEAV1@XZ @ 0x180013478 (-Instance@ISMTracing@@KAPEAV1@XZ.c)
 *     ?SetEvent@details@wil@@YAXPEAX@Z @ 0x18009ADA4 (-SetEvent@details@wil@@YAXPEAX@Z.c)
 *     ??$_Emplace_reallocate@AEAULegacyInputInfo@@@?$vector@ULegacyInputInfo@@V?$allocator@ULegacyInputInfo@@@std@@@std@@AEAAPEAULegacyInputInfo@@QEAU2@AEAU2@@Z @ 0x1800CED10 (--$_Emplace_reallocate@AEAULegacyInputInfo@@@-$vector@ULegacyInputInfo@@V-$allocator@ULegacyInpu.c)
 *     ?LogMPCRawInputReport_@ISMTracing@@QEAAXPEAULegacyInputInfo@@@Z @ 0x1800CFAD4 (-LogMPCRawInputReport_@ISMTracing@@QEAAXPEAULegacyInputInfo@@@Z.c)
 *     memcpy_0 @ 0x1801CF19C (memcpy_0.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall MPCRawInputProvider::QueueInput(MPCRawInputProvider *this, struct LegacyInputInfo *a2)
{
  ISMTracing *v4; // rcx
  _BYTE *v5; // rdx
  void *v6; // rdx

  if ( ISMTracing::IsEnabled() )
  {
    ISMTracing::Instance();
    ISMTracing::LogMPCRawInputReport_(v4, a2);
  }
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 96));
  v5 = (_BYTE *)*((_QWORD *)this + 24);
  if ( v5 == *((_BYTE **)this + 25) )
  {
    std::vector<LegacyInputInfo>::_Emplace_reallocate<LegacyInputInfo &>((__int64)this + 184, v5, a2);
  }
  else
  {
    memcpy_0(*((void **)this + 24), a2, 0xBC0uLL);
    *((_QWORD *)this + 24) += 3008LL;
  }
  if ( this != (MPCRawInputProvider *)-96LL )
    LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 96));
  wil::details::SetEvent(*((wil::details **)this + 9), v6);
  return 0LL;
}
