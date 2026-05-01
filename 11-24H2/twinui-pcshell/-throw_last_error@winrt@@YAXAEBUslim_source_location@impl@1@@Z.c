/*
 * XREFs of ?throw_last_error@winrt@@YAXAEBUslim_source_location@impl@1@@Z @ 0x1802DFC4C
 * Callers:
 *     ?submit_threadpool_callback@impl@winrt@@YA@P6AXPEAX0@Z0@Z @ 0x18023B880 (-submit_threadpool_callback@impl@winrt@@YA@P6AXPEAX0@Z0@Z.c)
 *     ??$check_pointer@X@winrt@@YAPEAXPEAXAEBUslim_source_location@impl@0@@Z @ 0x18031C100 (--$check_pointer@X@winrt@@YAPEAXPEAXAEBUslim_source_location@impl@0@@Z.c)
 *     ?create_threadpool_timer@timespan_awaiter@impl@winrt@@AEAAXXZ @ 0x180335ED8 (-create_threadpool_timer@timespan_awaiter@impl@winrt@@AEAAXXZ.c)
 *     ?create_threadpool_wait@signal_awaiter@impl@winrt@@AEAAXXZ @ 0x180335F80 (-create_threadpool_wait@signal_awaiter@impl@winrt@@AEAAXXZ.c)
 *     ??$check_bool@H@winrt@@YAHHAEBUslim_source_location@impl@0@@Z @ 0x1803D5468 (--$check_bool@H@winrt@@YAHHAEBUslim_source_location@impl@0@@Z.c)
 *     ??$check_bool@V?$ComPtr@UIServiceProvider@@@WRL@Microsoft@@@winrt@@YA?AV?$ComPtr@UIServiceProvider@@@WRL@Microsoft@@V123@AEBUslim_source_location@impl@0@@Z @ 0x1803D5488 (--$check_bool@V-$ComPtr@UIServiceProvider@@@WRL@Microsoft@@@winrt@@YA-AV-$ComPtr@UIServiceProvid.c)
 *     ??$check_bool@_N@winrt@@YA_N_NAEBUslim_source_location@impl@0@@Z @ 0x1804515F0 (--$check_bool@_N@winrt@@YA_N_NAEBUslim_source_location@impl@0@@Z.c)
 *     Util::TryOpenFileMappingAsStreamForWindowAsync$_ResumeCoro$1 @ 0x180651870 (Util--TryOpenFileMappingAsStreamForWindowAsync$_ResumeCoro$1.c)
 * Callees:
 *     ??0hresult@winrt@@QEAA@H@Z @ 0x1801EA3A8 (--0hresult@winrt@@QEAA@H@Z.c)
 *     GetLastError_0 @ 0x1802D2A68 (GetLastError_0.c)
 *     ?hresult_from_win32@impl@winrt@@YAHI@Z @ 0x1802DF884 (-hresult_from_win32@impl@winrt@@YAHI@Z.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@AEBUslim_source_location@impl@1@@Z @ 0x1802DFA20 (-throw_hresult@winrt@@YAXUhresult@1@AEBUslim_source_location@impl@1@@Z.c)
 */

void __fastcall __noreturn winrt::throw_last_error(winrt *this, const struct winrt::impl::slim_source_location *a2)
{
  DWORD LastError_0; // eax
  int v4; // eax
  int *v5; // rax
  __int64 v6; // r8
  char v7; // [rsp+38h] [rbp+10h] BYREF

  LastError_0 = GetLastError_0();
  v4 = winrt::impl::hresult_from_win32((winrt::impl *)LastError_0);
  v5 = (int *)winrt::hresult::hresult((winrt::hresult *)&v7, v4);
  winrt::throw_hresult(*v5, (unsigned int *)this, v6);
}
