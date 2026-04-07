/*
 * XREFs of ?_lambda_invoker_cdecl_@_lambda_830a858705f438bc5eb56dc5316ebd68_@@CA@XZ @ 0x18010FFE0
 * Callers:
 *     <none>
 * Callees:
 *     InitOnceBeginInitialize_0 @ 0x18005D66A (InitOnceBeginInitialize_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
 */

int _lambda_830a858705f438bc5eb56dc5316ebd68_::_lambda_invoker_cdecl_(void)
{
  int result; // eax
  WINBOOL fPending; // [rsp+30h] [rbp+8h] BYREF
  LPVOID Context; // [rsp+38h] [rbp+10h] BYREF

  result = InitOnceBeginInitialize_0(&`ScalingCompatLogging::Instance'::`2'::wrapper, 1u, &fPending, &Context);
  if ( result )
  {
    if ( !fPending )
      return (*(__int64 (__fastcall **)(LPVOID, _QWORD))(*(_QWORD *)Context + 24LL))(Context, 0LL);
  }
  return result;
}
