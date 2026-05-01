/*
 * XREFs of SnapInteraction::SendTelemetryAsync$_ResumeCoro$1 @ 0x180271730
 * Callers:
 *     SnapInteraction::SendTelemetryAsync$_InitCoro$2 @ 0x1802716BC (SnapInteraction--SendTelemetryAsync$_InitCoro$2.c)
 * Callees:
 *     ??1?$com_ptr@UISnapComponent@@@winrt@@QEAA@XZ @ 0x18004E0E8 (--1-$com_ptr@UISnapComponent@@@winrt@@QEAA@XZ.c)
 *     ?SendTelemetry@SnapInteraction@@YAXAEBU?$com_ptr@UIApplicationView@@@winrt@@AEBV?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@chrono@std@@@Z @ 0x1800CCB54 (-SendTelemetry@SnapInteraction@@YAXAEBU-$com_ptr@UIApplicationView@@@winrt@@AEBV-$duration@_JU-$.c)
 *     ?await_suspend@awaitable@?1??resume_background@winrt@@YA@XZ@QEBAXU?$coroutine_handle@X@experimental@std@@@Z @ 0x1802135EC (-await_suspend@awaitable@-1--resume_background@winrt@@YA@XZ@QEBAXU-$coroutine_handle@X@experimen.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D1AB8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall SnapInteraction::SendTelemetryAsync__ResumeCoro_1(__int64 a1, __int64 a2, void *a3)
{
  __int64 v3; // rbx
  const char *v4; // r9
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  try
  {
    v3 = a1;
    switch ( *(_WORD *)(a1 + 8) )
    {
      case 0xFFFF:
      case 3:
      case 5:
        goto LABEL_4;
      case 2:
        *(_WORD *)(a1 + 8) = 4;
        `winrt::resume_background'::`2'::awaitable::await_suspend(a1, (void (*)(void *, void *))a1, a3);
        break;
      case 4:
        try
        {
          SnapInteraction::SendTelemetry(
            (__int64 (__fastcall ****)(ApplicationViewHelpers *, GUID *, __int64 *))(a1 + 17),
            (__int64 *)(a1 + 25));
        }
        catch ( ... )
        {
          wil::details::in1diag3::Log_CaughtException(
            retaddr,
            (void *)0x26,
            (unsigned int)"pcshell\\twinui\\snapcomponent\\lib\\interactiontracker.cpp",
            v4);
          v3 = a1;
        }
LABEL_4:
        winrt::com_ptr<ISnapComponent>::~com_ptr<ISnapComponent>((__int64 *)(v3 + 17));
        if ( *(_WORD *)(v3 + 10) )
          operator delete((void *)v3, (const struct std::nothrow_t *)0x30);
        break;
      default:
        __debugbreak();
        break;
    }
  }
  catch ( ... )
  {
    *(_WORD *)(a1 + 8) = -1;
    std::experimental::coroutine_traits<winrt::fire_and_forget,winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance *>::promise_type::unhandled_exception();
  }
}
