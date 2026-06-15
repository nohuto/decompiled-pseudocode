/*
 * XREFs of ?ForEachStream@CProcessSubmixProxy@@UEAAXV?$function@$$A6AXPEAUIAudioStreamInfo@@@Z@std@@@Z @ 0x180023110
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$function@$$A6AXPEAUIAudioStreamInfo@@@Z@std@@QEAA@AEBV01@@Z @ 0x18001DDF0 (--0-$function@$$A6AXPEAUIAudioStreamInfo@@@Z@std@@QEAA@AEBV01@@Z.c)
 *     ??R?$_Func_class@XPEAUIAudioStreamInfo@@@std@@QEBAXPEAUIAudioStreamInfo@@@Z @ 0x180023334 (--R-$_Func_class@XPEAUIAudioStreamInfo@@@std@@QEBAXPEAUIAudioStreamInfo@@@Z.c)
 *     _lambda_95aa79fe68308ee8971a6083ea2ebe7c_::__lambda_95aa79fe68308ee8971a6083ea2ebe7c_ @ 0x180023370 (_lambda_95aa79fe68308ee8971a6083ea2ebe7c_--__lambda_95aa79fe68308ee8971a6083ea2ebe7c_.c)
 *     ??0?$function@$$A6AXPEAUIAudioStreamInfo@@@Z@std@@QEAA@$$QEAV01@@Z @ 0x1800235CC (--0-$function@$$A6AXPEAUIAudioStreamInfo@@@Z@std@@QEAA@$$QEAV01@@Z.c)
 *     ?_Tidy@?$_Func_class@XPEAUIAudioStreamInfo@@@std@@IEAAXXZ @ 0x180023650 (-_Tidy@-$_Func_class@XPEAUIAudioStreamInfo@@@std@@IEAAXXZ.c)
 *     __security_check_cookie @ 0x1800A7AB0 (__security_check_cookie.c)
 */

__int64 __fastcall CProcessSubmixProxy::ForEachStream(__int64 a1, __int64 a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rdi
  _QWORD *v5; // rbp
  _QWORD *i; // rbx
  _BYTE v8[64]; // [rsp+20h] [rbp-A8h] BYREF
  _BYTE v9[64]; // [rsp+60h] [rbp-68h] BYREF

  v2 = (struct _RTL_CRITICAL_SECTION *)(a1 + 128);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 128));
  std::function<void (IAudioStreamInfo *)>::function<void (IAudioStreamInfo *)>((__int64)v8, a2);
  v5 = *(_QWORD **)(a1 + 176);
  for ( i = *(_QWORD **)(a1 + 168); i != v5; ++i )
    std::_Func_class<void,IAudioStreamInfo *>::operator()(v8, *i);
  std::function<void (IAudioStreamInfo *)>::function<void (IAudioStreamInfo *)>(v9, v8);
  lambda_95aa79fe68308ee8971a6083ea2ebe7c_::__lambda_95aa79fe68308ee8971a6083ea2ebe7c_(v8);
  std::_Func_class<void,IAudioStreamInfo *>::_Tidy(v9);
  if ( v2 )
    LeaveCriticalSection(v2);
  return std::_Func_class<void,IAudioStreamInfo *>::_Tidy(a2);
}
