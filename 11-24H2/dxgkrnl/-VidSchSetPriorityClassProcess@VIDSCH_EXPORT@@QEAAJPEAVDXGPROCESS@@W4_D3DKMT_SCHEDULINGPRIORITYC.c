/*
 * XREFs of ?VidSchSetPriorityClassProcess@VIDSCH_EXPORT@@QEAAJPEAVDXGPROCESS@@W4_D3DKMT_SCHEDULINGPRIORITYCLASS@@H@Z @ 0x14005A994
 * Callers:
 *     VidSchSetPriorityClassProcessX @ 0x140187170 (VidSchSetPriorityClassProcessX.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall VIDSCH_EXPORT::VidSchSetPriorityClassProcess(
        VIDSCH_EXPORT *this,
        struct DXGPROCESS *a2,
        unsigned int a3,
        unsigned int a4)
{
  __int64 v4; // rbx

  v4 = *((_QWORD *)a2 + 8);
  if ( !v4 || (v4 = *(_QWORD *)(v4 + 8LL * (unsigned int)(*(_DWORD *)this - 1) + 16)) == 0 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 280;
    DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"pVidSchProcess", 280LL, 0LL, 0LL, 0LL, 0LL);
  }
  return (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*((_QWORD *)this + 1) + 96LL))(v4, a3, a4);
}
