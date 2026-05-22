/*
 * XREFs of ?GetInstance@KernelContextProvider@@SAPEAV1@XZ @ 0x18000D544
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_42c9e164bf5e678d8fb83ca938b11c90__void_MIT_WIN32K_INPUTDESKTOP_STATE_MESSAGE_const___::_Do_call @ 0x18000D4E0 (std--_Func_impl_no_alloc__lambda_42c9e164bf5e678d8fb83ca938b11c90__void_MIT_WIN32K_INPUTDESKTOP_.c)
 *     ??0GestureServices@@QEAA@PEAVBamoConnection@ISMBamos_AutoBamos@@@Z @ 0x18000E7D0 (--0GestureServices@@QEAA@PEAVBamoConnection@ISMBamos_AutoBamos@@@Z.c)
 *     ?TraceClients@ShellGesturesProcessor@@CAXXZ @ 0x18008A514 (-TraceClients@ShellGesturesProcessor@@CAXXZ.c)
 *     ??$IsShellClient@VDragManagerClientProxy@@@@YA_NPEAVDragManagerClientProxy@@@Z @ 0x180093B40 (--$IsShellClient@VDragManagerClientProxy@@@@YA_NPEAVDragManagerClientProxy@@@Z.c)
 *     ?RuntimeClassInitialize@ShellGesturesProcessor@@QEAAJXZ @ 0x180093B88 (-RuntimeClassInitialize@ShellGesturesProcessor@@QEAAJXZ.c)
 *     ??$IsShellClient@VShellGesturesClientProxy@@@@YA_NPEAVShellGesturesClientProxy@@@Z @ 0x180158D94 (--$IsShellClient@VShellGesturesClientProxy@@@@YA_NPEAVShellGesturesClientProxy@@@Z.c)
 *     ??$ShouldSelectClient@VDragManagerClientProxy@@@@YA_NPEAVDragManagerClientProxy@@@Z @ 0x180158DDC (--$ShouldSelectClient@VDragManagerClientProxy@@@@YA_NPEAVDragManagerClientProxy@@@Z.c)
 *     ??$ShouldSelectClient@VShellGesturesClientProxy@@@@YA_NPEAVShellGesturesClientProxy@@@Z @ 0x180158E74 (--$ShouldSelectClient@VShellGesturesClientProxy@@@@YA_NPEAVShellGesturesClientProxy@@@Z.c)
 * Callees:
 *     wil::init_once_nothrow__lambda_dcfa4c4accc7a4c0ffedb44f9f29ee27___ @ 0x18000D5DC (wil--init_once_nothrow__lambda_dcfa4c4accc7a4c0ffedb44f9f29ee27___.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E71C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     atexit @ 0x18009CF54 (atexit.c)
 *     _Init_thread_footer @ 0x18009D928 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x18009D990 (_Init_thread_header.c)
 */

struct KernelContextProvider *KernelContextProvider::GetInstance(void)
{
  __int64 v0; // rcx
  __int64 v1; // rdx
  int inited; // eax
  int v4; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  char v6; // [rsp+30h] [rbp+8h] BYREF

  v0 = (unsigned int)tls_index;
  v1 = 32LL;
  if ( dword_180251E78 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index)
                                   + 32LL) )
  {
    Init_thread_header(&dword_180251E78);
    if ( dword_180251E78 == -1 )
    {
      atexit(KernelContextProvider::GetInstance_::_2_::_dynamic_atexit_destructor_for__s_instance__);
      Init_thread_footer(&dword_180251E78);
    }
  }
  v6 = 0;
  inited = wil::init_once_nothrow__lambda_dcfa4c4accc7a4c0ffedb44f9f29ee27___(v0, v1, &v6);
  if ( inited < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x344,
      (unsigned int)"onecore\\internal\\sdk\\inc\\wil\\opensource/wil/win32_helpers.h",
      (const char *)(unsigned int)inited,
      v4);
  return qword_180251E70;
}
