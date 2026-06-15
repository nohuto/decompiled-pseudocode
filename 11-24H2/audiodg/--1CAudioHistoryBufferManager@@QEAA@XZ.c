/*
 * XREFs of ??1CAudioHistoryBufferManager@@QEAA@XZ @ 0x140065E00
 * Callers:
 *     ?reset@?$unique_ptr@VCAudioHistoryBufferManager@@U?$default_delete@VCAudioHistoryBufferManager@@@wistd@@@wistd@@QEAAXPEAVCAudioHistoryBufferManager@@@Z @ 0x1400666E0 (-reset@-$unique_ptr@VCAudioHistoryBufferManager@@U-$default_delete@VCAudioHistoryBufferManager@@.c)
 *     _dynamic_atexit_destructor_for__g_AudioHistoryManager___0 @ 0x1400974F0 (_dynamic_atexit_destructor_for__g_AudioHistoryManager___0.c)
 * Callees:
 *     ?RemoveAll@?$CAtlMap@_KV?$com_ptr_t@UICPAudioHistoryControl@@Uerr_returncode_policy@wil@@@wil@@V?$CElementTraits@_K@ATL@@V?$CElementTraits@V?$com_ptr_t@UICPAudioHistoryControl@@Uerr_returncode_policy@wil@@@wil@@@4@@ATL@@QEAAXXZ @ 0x140066560 (-RemoveAll@-$CAtlMap@_KV-$com_ptr_t@UICPAudioHistoryControl@@Uerr_returncode_policy@wil@@@wil@@V.c)
 */

void __fastcall CAudioHistoryBufferManager::~CAudioHistoryBufferManager(struct _RTL_CRITICAL_SECTION *this)
{
  ATL::CAtlMap<unsigned __int64,wil::com_ptr_t<ICPAudioHistoryControl,wil::err_returncode_policy>,ATL::CElementTraits<unsigned __int64>,ATL::CElementTraits<wil::com_ptr_t<ICPAudioHistoryControl,wil::err_returncode_policy>>>::RemoveAll(&this[1]);
  DeleteCriticalSection(this);
}
