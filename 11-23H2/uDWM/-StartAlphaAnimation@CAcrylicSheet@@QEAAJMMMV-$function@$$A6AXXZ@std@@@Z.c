/*
 * XREFs of ?StartAlphaAnimation@CAcrylicSheet@@QEAAJMMMV?$function@$$A6AXXZ@std@@@Z @ 0x1800A3448
 * Callers:
 *     ?StartHideAnimation@UserResizeVisual@implementation@Transitions@Udwm@winrt@@QEAAXUUnloadDelegate@345@@Z @ 0x180104670 (-StartHideAnimation@UserResizeVisual@implementation@Transitions@Udwm@winrt@@QEAAXUUnloadDelegate.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180065FCC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?_Tidy@?$_Func_class@X$$V@std@@IEAAXXZ @ 0x18006B904 (-_Tidy@-$_Func_class@X$$V@std@@IEAAXXZ.c)
 *     ??4?$function@$$A6AXXZ@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800A23B4 (--4-$function@$$A6AXXZ@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ??R?$_Func_class@X$$V@std@@QEBAXXZ @ 0x1800A23F0 (--R-$_Func_class@X$$V@std@@QEBAXXZ.c)
 *     ?StartAlphaAnimation@CAcrylicSheet@@QEAAJMMM@Z @ 0x1800A330C (-StartAlphaAnimation@CAcrylicSheet@@QEAAJMMM@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAcrylicSheet::StartAlphaAnimation(CAcrylicSheet *this, float a2, float a3, float a4, __int64 a5)
{
  char *v6; // rdi
  int started; // eax
  __int64 v8; // rdx
  unsigned int v9; // ebx
  __int64 v10; // rdx

  v6 = (char *)this + 336;
  std::function<void (void)>::operator=((__int64)this + 336, a5);
  started = CAcrylicSheet::StartAlphaAnimation(this, a2, a3, a4);
  v9 = started;
  if ( started < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, started, 0x2B7u);
    std::_Func_class<void,>::operator()((__int64)v6);
    std::_Func_class<void,>::_Tidy((__int64)v6, v10);
  }
  std::_Func_class<void,>::_Tidy(a5, v8);
  return v9;
}
