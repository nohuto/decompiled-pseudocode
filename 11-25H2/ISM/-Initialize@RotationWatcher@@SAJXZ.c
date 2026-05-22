/*
 * XREFs of ?Initialize@RotationWatcher@@SAJXZ @ 0x1801097AC
 * Callers:
 *     ?Initialize@OneCoreUAPInputHost@@IEAAJPEAX@Z @ 0x18005C55C (-Initialize@OneCoreUAPInputHost@@IEAAJPEAX@Z.c)
 * Callees:
 *     atexit @ 0x18009CD84 (atexit.c)
 *     _Init_thread_footer @ 0x18009D758 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x18009D7C0 (_Init_thread_header.c)
 *     ??0RotationWatcher@@AEAA@XZ @ 0x180109484 (--0RotationWatcher@@AEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 RotationWatcher::Initialize(void)
{
  RotationWatcher *v0; // rcx
  const char *v1; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( dword_180247E50 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index)
                                   + 32LL) )
  {
    Init_thread_header(&dword_180247E50);
    if ( dword_180247E50 == -1 )
    {
      try
      {
        RotationWatcher::RotationWatcher(v0);
        atexit(RotationWatcher::Initialize_::_3_::_dynamic_atexit_destructor_for__rotationWatcherInstance__);
        Init_thread_footer(&dword_180247E50);
      }
      catch ( ... )
      {
        return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                               retaddr,
                               (void *)0x7C,
                               (int)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\rotationwatcher\\rotationwatcher.cpp",
                               v1);
      }
    }
  }
  return 0LL;
}
