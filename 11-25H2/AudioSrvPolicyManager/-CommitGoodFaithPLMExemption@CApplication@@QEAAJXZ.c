/*
 * XREFs of ?CommitGoodFaithPLMExemption@CApplication@@QEAAJXZ @ 0x1800344D8
 * Callers:
 *     ?OnStreamStarted@CApplicationManager@@QEAAJPEAVCProcess@@PEAUIAudioSessionInfo@@PEAUIAudioStreamInfo@@@Z @ 0x180002360 (-OnStreamStarted@CApplicationManager@@QEAAJPEAVCProcess@@PEAUIAudioSessionInfo@@PEAUIAudioStream.c)
 * Callees:
 *     ?ApplyPBMPolicy@CApplicationManager@@QEAAJPEAVCApplication@@IH@Z @ 0x180004230 (-ApplyPBMPolicy@CApplicationManager@@QEAAJPEAVCApplication@@IH@Z.c)
 *     ?CleanupGoodFaithExemptionTimer@CApplication@@QEAAJXZ @ 0x1800343D8 (-CleanupGoodFaithExemptionTimer@CApplication@@QEAAJXZ.c)
 */

__int64 __fastcall CApplication::CommitGoodFaithPLMExemption(CApplication *this)
{
  CApplicationManager *v2; // rcx

  CApplication::CleanupGoodFaithExemptionTimer((const wchar_t **)this);
  if ( *((_DWORD *)this + 155) == 2 )
  {
    *(_QWORD *)((char *)this + 620) = 0LL;
    *(_QWORD *)((char *)this + 628) = 0LL;
    *(_QWORD *)((char *)this + 636) = 0LL;
    *((_DWORD *)this + 161) = 1;
  }
  v2 = g_ApplicationManager;
  *((_DWORD *)this + 108) = 0;
  CApplicationManager::ApplyPBMPolicy(v2, this, 0xD1u, 0);
  return 0LL;
}
