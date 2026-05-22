/*
 * XREFs of ?GetInstance@CUIHierarchy@@SAAEAV1@XZ @ 0x18009AFA4
 * Callers:
 *     ?OnConnected@CUIHostInputObjectProxy@@MEAAJXZ @ 0x180131A60 (-OnConnected@CUIHostInputObjectProxy@@MEAAJXZ.c)
 *     ?OnConnected@CUIComponentInputObjectProxy@@MEAAJXZ @ 0x180132780 (-OnConnected@CUIComponentInputObjectProxy@@MEAAJXZ.c)
 * Callees:
 *     atexit @ 0x18009CF54 (atexit.c)
 *     _Init_thread_footer @ 0x18009D928 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x18009D990 (_Init_thread_header.c)
 *     ??0CUIHierarchy@@AEAA@XZ @ 0x1800A8B54 (--0CUIHierarchy@@AEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
struct CUIHierarchy *CUIHierarchy::GetInstance(void)
{
  CUIHierarchy *v0; // rcx

  if ( dword_180251D54 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index)
                                   + 32LL) )
  {
    Init_thread_header(&dword_180251D54);
    if ( dword_180251D54 == -1 )
    {
      CUIHierarchy::CUIHierarchy(v0);
      atexit(CUIHierarchy::GetInstance_::_2_::_dynamic_atexit_destructor_for__instance__);
      Init_thread_footer(&dword_180251D54);
    }
  }
  return (struct CUIHierarchy *)&qword_180251D60;
}
