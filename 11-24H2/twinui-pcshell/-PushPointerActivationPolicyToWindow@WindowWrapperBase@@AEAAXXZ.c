/*
 * XREFs of ?PushPointerActivationPolicyToWindow@WindowWrapperBase@@AEAAXXZ @ 0x180441478
 * Callers:
 *     ?SetWindowId@WindowWrapperBase@@AEAAXUWindowId@WindowManagement@ApplicationModel@Internal@Windows@@W4WindowCreatedType@@@Z @ 0x1804433A4 (-SetWindowId@WindowWrapperBase@@AEAAXUWindowId@WindowManagement@ApplicationModel@Internal@Window.c)
 *     ?put_PointerActivationPolicy@WindowWrapperBase@@UEAAJW4PointerActivationPolicy@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x180444EE0 (-put_PointerActivationPolicy@WindowWrapperBase@@UEAAJW4PointerActivationPolicy@ViewManagerIntero.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002D354 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_d7884d2305cb98080a7771b114819b2a___ @ 0x18043C514 (Windows--Internal--ComTaskPool--RunSynchronousTaskOnMTA__lambda_d7884d2305cb98080a7771b114819b2a.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall WindowWrapperBase::PushPointerActivationPolicyToWindow(WindowWrapperBase *this)
{
  DWORD CurrentThreadId; // eax
  __int64 v3; // rcx
  int v4; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  WindowWrapperBase *v6; // [rsp+30h] [rbp+8h] BYREF

  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 35) + 224LL))(*((_QWORD *)this + 35));
  if ( *((_DWORD *)this + 74) )
  {
    v6 = this;
    CurrentThreadId = GetCurrentThreadId();
    v4 = Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_d7884d2305cb98080a7771b114819b2a___(
           v3,
           CurrentThreadId,
           &v6);
    if ( v4 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0xBA3,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
        (const char *)(unsigned int)v4);
  }
}
