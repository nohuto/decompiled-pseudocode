/*
 * XREFs of ?IsRestrictedBackgroundAudioCapable@CApplication@@QEAAHXZ @ 0x180003FF0
 * Callers:
 *     ?GetPLMExemptionStatus@CApplicationManager@@QEAA?AW4_PLM_EXEMPTION@@PEAVCApplication@@W4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@@Z @ 0x180002D90 (-GetPLMExemptionStatus@CApplicationManager@@QEAA-AW4_PLM_EXEMPTION@@PEAVCApplication@@W4__MIDL__.c)
 *     ?OnStreamStopped@CApplicationManager@@QEAAJPEAVCProcess@@PEAUIAudioSessionInfo@@PEAUIAudioStreamInfo@@@Z @ 0x180004B00 (-OnStreamStopped@CApplicationManager@@QEAAJPEAVCProcess@@PEAUIAudioSessionInfo@@PEAUIAudioStream.c)
 *     ?CleanupBCMStartupLatencyGracePeriod@CApplication@@QEAAXXZ @ 0x18001F540 (-CleanupBCMStartupLatencyGracePeriod@CApplication@@QEAAXXZ.c)
 *     ?ApplySmtcRelatedPolicy@CApplication@@QEAAXXZ @ 0x180033D04 (-ApplySmtcRelatedPolicy@CApplication@@QEAAXXZ.c)
 *     ?BeginBCMStartupLatencyGracePeriod@CApplication@@QEAAXXZ @ 0x180033F70 (-BeginBCMStartupLatencyGracePeriod@CApplication@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CApplication::IsRestrictedBackgroundAudioCapable(CApplication *this)
{
  struct _RTL_CRITICAL_SECTION *v2; // rdi
  unsigned int v3; // esi
  _QWORD *v4; // rax
  __int64 v5; // r8

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
  v3 = 0;
  v4 = (_QWORD *)*((_QWORD *)this + 9);
  while ( v4 )
  {
    v5 = v4[2];
    v4 = (_QWORD *)*v4;
    if ( !*(_DWORD *)(v5 + 416) && *(_DWORD *)(v5 + 436) )
    {
      v3 = 1;
      break;
    }
  }
  if ( v2 )
    LeaveCriticalSection(v2);
  return v3;
}
