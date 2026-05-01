/*
 * XREFs of ??1dispatcher_handler@details@wil@@QEAA@XZ @ 0x1801D6110
 * Callers:
 *     ?await_suspend@awaitable@?1???$resume_foreground@UDispatcherQueue@System@Windows@winrt@@@wil@@YA?A_PAEBUDispatcherQueue@System@Windows@winrt@@W4DispatcherQueuePriority@456@@Z@QEAAXU?$coroutine_handle@X@experimental@std@@@Z @ 0x1801D6024 (-await_suspend@awaitable@-1---$resume_foreground@UDispatcherQueue@System@Windows@winrt@@@wil@@YA.c)
 *     ??1?$implements_delegate@UDispatcherQueueHandler@System@Windows@winrt@@Udispatcher_handler@details@wil@@@impl@winrt@@QEAA@XZ @ 0x1805B1598 (--1-$implements_delegate@UDispatcherQueueHandler@System@Windows@winrt@@Udispatcher_handler@detai.c)
 *     __wil::resume_foreground_winrt::Windows::System::DispatcherQueue__::_2_::awaitable::await_suspend_::_1_::dtor$2 @ 0x1806D81E3 (__wil--resume_foreground_winrt--Windows--System--DispatcherQueue__--_2_--awaitable--await_suspen.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall wil::details::dispatcher_handler::~dispatcher_handler(wil::details::dispatcher_handler *this)
{
  void (__fastcall ***v1)(_QWORD); // rax
  void (__fastcall ***v2)(_QWORD); // rax
  void (__fastcall **v3)(_QWORD); // rdx

  v1 = *(void (__fastcall ****)(_QWORD))this;
  if ( *(_QWORD *)this )
  {
    if ( *v1 )
    {
      *((_BYTE *)v1 + 8) = 1;
      v2 = *(void (__fastcall ****)(_QWORD))this;
      *(_QWORD *)this = 0LL;
      v3 = *v2;
      *v2 = 0LL;
      (*v3)(v3);
    }
  }
}
