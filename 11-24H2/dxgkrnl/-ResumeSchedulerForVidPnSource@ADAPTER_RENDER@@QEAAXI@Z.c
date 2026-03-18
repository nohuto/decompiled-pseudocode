/*
 * XREFs of ?ResumeSchedulerForVidPnSource@ADAPTER_RENDER@@QEAAXI@Z @ 0x1402918D8
 * Callers:
 *     ?Resume@CVidSchSuspendResume@@QEAAXXZ @ 0x140050DE8 (-Resume@CVidSchSuspendResume@@QEAAXXZ.c)
 *     ?SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIE@Z @ 0x140290CEC (-SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIE@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     McTemplateK0pt_EtwWriteTransfer @ 0x140012010 (McTemplateK0pt_EtwWriteTransfer.c)
 *     ?VidSchResumeSchedulerForSource@VIDSCH_EXPORT@@QEAAXPEAU_VIDSCH_GLOBAL@@I@Z @ 0x14004DEC4 (-VidSchResumeSchedulerForSource@VIDSCH_EXPORT@@QEAAXPEAU_VIDSCH_GLOBAL@@I@Z.c)
 */

void __fastcall ADAPTER_RENDER::ResumeSchedulerForVidPnSource(ADAPTER_RENDER *this, unsigned int a2)
{
  struct _VIDSCH_GLOBAL *v4; // rdx
  VIDSCH_EXPORT *v5; // rcx
  __int64 v6; // r8
  __int64 v7; // [rsp+20h] [rbp-38h]

  if ( (*((_DWORD *)this + 189) & a2) != a2 )
  {
    __debugbreak();
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 3072;
    DxgkLogInternalTriageEvent(
      0LL,
      262146LL,
      0xFFFFFFFFLL,
      L"(m_SourceMaskSchedulerSuspended & SourceMaskResumeScheduler) == SourceMaskResumeScheduler",
      3072LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v4 = (struct _VIDSCH_GLOBAL *)*((_QWORD *)this + 93);
  v5 = (VIDSCH_EXPORT *)*((_QWORD *)this + 92);
  *((_DWORD *)this + 189) &= ~a2;
  VIDSCH_EXPORT::VidSchResumeSchedulerForSource(v5, v4, a2);
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
  {
    LODWORD(v7) = a2;
    McTemplateK0pt_EtwWriteTransfer(
      (__int64)&DxgkControlGuid_Context,
      (__int64)&ResumeSchedulerForVidPnSource,
      v6,
      *((_QWORD *)this + 2),
      v7);
  }
}
