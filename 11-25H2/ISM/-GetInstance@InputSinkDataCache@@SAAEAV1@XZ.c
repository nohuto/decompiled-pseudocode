/*
 * XREFs of ?GetInstance@InputSinkDataCache@@SAAEAV1@XZ @ 0x18004F4C0
 * Callers:
 *     NotifyInputSinkRemoved @ 0x18004F170 (NotifyInputSinkRemoved.c)
 *     NotifyInputSinkParented @ 0x18004F310 (NotifyInputSinkParented.c)
 *     ?Initialize@OneCoreUAPInputHost@@IEAAJPEAX@Z @ 0x18005C55C (-Initialize@OneCoreUAPInputHost@@IEAAJPEAX@Z.c)
 * Callees:
 *     atexit @ 0x18009CD84 (atexit.c)
 *     _Init_thread_footer @ 0x18009D758 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x18009D7C0 (_Init_thread_header.c)
 *     ??0?$unordered_map@_K_KU?$hash@_K@std@@U?$equal_to@_K@2@V?$allocator@U?$pair@$$CB_K_K@std@@@2@@std@@QEAA@XZ @ 0x1800A7EF4 (--0-$unordered_map@_K_KU-$hash@_K@std@@U-$equal_to@_K@2@V-$allocator@U-$pair@$$CB_K_K@std@@@2@@s.c)
 */

// Hidden C++ exception states: #wind=1
RTL_SRWLOCK *InputSinkDataCache::GetInstance(void)
{
  if ( dword_180247CF0 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index)
                                   + 32LL) )
  {
    Init_thread_header(&dword_180247CF0);
    if ( dword_180247CF0 == -1 )
    {
      std::unordered_map<unsigned __int64,unsigned __int64>::unordered_map<unsigned __int64,unsigned __int64>(&unk_180247C88);
      qword_180247CC8 = 0LL;
      xmmword_180247CD0 = 0LL;
      qword_180247CE0 = 0LL;
      byte_180247CE8 = 0;
      atexit(InputSinkDataCache::GetInstance_::_2_::_dynamic_atexit_destructor_for__instance__);
      Init_thread_footer(&dword_180247CF0);
    }
  }
  return &SRWLock;
}
