/*
 * XREFs of _lambda_8c8d8a0fec920bf09b1ee4078e580ac3_::__lambda_8c8d8a0fec920bf09b1ee4078e580ac3_ @ 0x1804F8B88
 * Callers:
 *     ?LogViewDiagnosticInfo@GamingPosturePositioner@@CAXPEAUIApplicationView@@AEBV?$function@$$A6AXPEAUHWND__@@PEBG1KUtagRECT@@@Z@std@@@Z @ 0x180502520 (-LogViewDiagnosticInfo@GamingPosturePositioner@@CAXPEAUIApplicationView@@AEBV-$func_ea_180502520.c)
 *     ?LogViewDiagnosticInfo@GamingPosturePositioner@@CAXPEAUIApplicationView@@AEBV?$function@$$A6AXPEAUHWND__@@PEBG1KUtagRECT@@KK@Z@std@@@Z @ 0x1805025B0 (-LogViewDiagnosticInfo@GamingPosturePositioner@@CAXPEAUIApplicationView@@AEBV-$func_ea_1805025B0.c)
 *     std::_Func_impl_no_alloc__lambda_8c8d8a0fec920bf09b1ee4078e580ac3__void_HWND_____unsigned_short_const___unsigned_short_const___unsigned_long_::_Delete_this @ 0x180507600 (std--_Func_impl_no_alloc__lambda_8c8d8a0fec920bf09b1ee4078e580ac3__void_HWND_____un_ea_180507600.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall lambda_8c8d8a0fec920bf09b1ee4078e580ac3_::__lambda_8c8d8a0fec920bf09b1ee4078e580ac3_(
        __int64 a1,
        __int64 a2)
{
  __int64 v3; // rcx
  __int64 result; // rax

  v3 = *(_QWORD *)(a1 + 56);
  if ( v3 )
  {
    LOBYTE(a2) = v3 != a1;
    result = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v3 + 32LL))(v3, a2);
    *(_QWORD *)(a1 + 56) = 0LL;
  }
  return result;
}
