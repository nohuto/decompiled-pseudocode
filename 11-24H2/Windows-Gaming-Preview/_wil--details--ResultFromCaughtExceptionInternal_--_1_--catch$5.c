/*
 * XREFs of _wil::details::ResultFromCaughtExceptionInternal_::_1_::catch$5 @ 0x18004355F
 * Callers:
 *     <none>
 * Callees:
 *     ?HrToNtStatus@details@wil@@YAJJ@Z @ 0x180006810 (-HrToNtStatus@details@wil@@YAJJ@Z.c)
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x1800098DC (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180045010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall wil::details::ResultFromCaughtExceptionInternal_::_1_::catch_5(__int64 a1, __int64 a2)
{
  unsigned __int16 *v3; // rbx
  __int64 v4; // rax

  v3 = *(unsigned __int16 **)(a2 + 152);
  if ( v3 )
  {
    v4 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a2 + 64) + 8LL))(*(_QWORD *)(a2 + 64));
    StringCchPrintfW(v3, *(_QWORD *)(a2 + 160), L"std::exception: %hs", v4);
  }
  *(_DWORD *)(a2 + 72) = -2147024322;
  *(_DWORD *)(a2 + 76) = wil::details::HrToNtStatus((wil::details *)0x8007023ELL);
  *(_DWORD *)(a2 + 80) = 0;
  return 0LL;
}
