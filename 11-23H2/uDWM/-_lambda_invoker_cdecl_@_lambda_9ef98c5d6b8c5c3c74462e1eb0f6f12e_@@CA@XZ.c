/*
 * XREFs of ?_lambda_invoker_cdecl_@_lambda_9ef98c5d6b8c5c3c74462e1eb0f6f12e_@@CA@XZ @ 0x1800A8DA0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
 */

int _lambda_9ef98c5d6b8c5c3c74462e1eb0f6f12e_::_lambda_invoker_cdecl_(void)
{
  int result; // eax
  WINBOOL fPending; // [rsp+30h] [rbp+8h] BYREF
  LPVOID Context; // [rsp+38h] [rbp+10h] BYREF

  result = InitOnceBeginInitialize(&`AnimationClockLogging::Instance'::`2'::wrapper, 1u, &fPending, &Context);
  if ( result )
  {
    if ( !fPending )
      return (*(__int64 (__fastcall **)(LPVOID, _QWORD))(*(_QWORD *)Context + 24LL))(Context, 0LL);
  }
  return result;
}
