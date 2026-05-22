/*
 * XREFs of ?GetInstance@CUIHierarchy@@SAAEAV1@XZ @ 0x18009AE04
 * Callers:
 *     ?OnConnected@CUIHostInputObjectProxy@@MEAAJXZ @ 0x18012F240 (-OnConnected@CUIHostInputObjectProxy@@MEAAJXZ.c)
 *     ?OnConnected@CUIComponentInputObjectProxy@@MEAAJXZ @ 0x18012FF60 (-OnConnected@CUIComponentInputObjectProxy@@MEAAJXZ.c)
 * Callees:
 *     atexit @ 0x18009CD84 (atexit.c)
 *     _Init_thread_footer @ 0x18009D758 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x18009D7C0 (_Init_thread_header.c)
 *     ??0CUIHierarchy@@AEAA@XZ @ 0x1800AA054 (--0CUIHierarchy@@AEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
struct CUIHierarchy *CUIHierarchy::GetInstance(void)
{
  CUIHierarchy *v0; // rcx

  if ( dword_180247CF4 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index)
                                   + 32LL) )
  {
    Init_thread_header(&dword_180247CF4);
    if ( dword_180247CF4 == -1 )
    {
      CUIHierarchy::CUIHierarchy(v0);
      atexit(CUIHierarchy::GetInstance_::_2_::_dynamic_atexit_destructor_for__instance__);
      Init_thread_footer(&dword_180247CF4);
    }
  }
  return (struct CUIHierarchy *)&qword_180247D00;
}
