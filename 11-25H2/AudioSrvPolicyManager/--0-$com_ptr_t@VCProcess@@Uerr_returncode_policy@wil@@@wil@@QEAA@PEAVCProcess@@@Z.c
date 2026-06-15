/*
 * XREFs of ??0?$com_ptr_t@VCProcess@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCProcess@@@Z @ 0x180017B80
 * Callers:
 *     ?NotifyDialogSessionStateChange@CWindowsPolicyManager@@UEAAJPEAUIAudioProcess@@_N@Z @ 0x18002AC50 (-NotifyDialogSessionStateChange@CWindowsPolicyManager@@UEAAJPEAUIAudioProcess@@_N@Z.c)
 *     ?NotifyVoipCallStateChange@CWindowsPolicyManager@@UEAAJPEAUIAudioProcess@@_N@Z @ 0x18002B0D0 (-NotifyVoipCallStateChange@CWindowsPolicyManager@@UEAAJPEAUIAudioProcess@@_N@Z.c)
 *     ??$construct@V?$com_ptr_t@VCProcess@@Uerr_returncode_policy@wil@@@wil@@AEAPEAVCProcess@@@?$_Default_allocator_traits@V?$allocator@U?$_Flist_node@V?$com_ptr_t@VCProcess@@Uerr_returncode_policy@wil@@@wil@@PEAX@std@@@std@@@std@@SAXAEAV?$allocator@U?$_Flist_node@V?$com_ptr_t@VCProcess@@Uerr_returncode_policy@wil@@@wil@@PEAX@std@@@1@QEAV?$com_ptr_t@VCProcess@@Uerr_returncode_policy@wil@@@wil@@AEAPEAVCProcess@@@Z @ 0x180032BBC (--$construct@V-$com_ptr_t@VCProcess@@Uerr_returncode_policy@wil@@@wil@@AEAPEAVCProcess@@@-$_Defa.c)
 *     ?InactivityTimerCallback@CProcess@@SAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x1800352B0 (-InactivityTimerCallback@CProcess@@SAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z.c)
 *     ?ProcessTerminationWatcherCallback@CProcess@@SAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WAIT@@J@Z @ 0x180035CB0 (-ProcessTerminationWatcherCallback@CProcess@@SAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WAIT@@J@Z.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall wil::com_ptr_t<CProcess,wil::err_returncode_policy>::com_ptr_t<CProcess,wil::err_returncode_policy>(
        _QWORD *a1,
        __int64 a2)
{
  signed __int32 i; // eax

  *a1 = a2;
  if ( a2 )
  {
    for ( i = *(_DWORD *)(a2 + 20);
          i != 0x7FFFFFFF && i != _InterlockedCompareExchange((volatile signed __int32 *)(a2 + 20), i + 1, i);
          i = *(_DWORD *)(a2 + 20) )
    {
      ;
    }
  }
  return a1;
}
