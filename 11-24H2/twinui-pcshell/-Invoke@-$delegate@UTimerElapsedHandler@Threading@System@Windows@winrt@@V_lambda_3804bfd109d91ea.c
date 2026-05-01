/*
 * XREFs of ?Invoke@?$delegate@UTimerElapsedHandler@Threading@System@Windows@winrt@@V_lambda_3804bfd109d91ea783e715dd384c2590_@@@impl@winrt@@UEAAHPEAX@Z @ 0x18036AC40
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall winrt::impl::delegate<winrt::Windows::System::Threading::TimerElapsedHandler,_lambda_3804bfd109d91ea783e715dd384c2590_>::Invoke(
        __int64 a1,
        __int64 a2)
{
  __int64 result; // rax
  int v3; // [rsp+20h] [rbp-28h] BYREF
  __int64 v4; // [rsp+28h] [rbp-20h] BYREF

  try
  {
    v4 = a2;
    (*(void (__fastcall **)(_QWORD, __int64 *))(a1 + 24))(*(_QWORD *)(a1 + 16), &v4);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)*winrt::to_hresult(&v3);
  }
  return result;
}
