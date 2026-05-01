/*
 * XREFs of Windows::Internal::MakeAsyncAction_Microsoft::WRL::DisableCausality_Windows::Internal::ComTaskPoolHandler__lambda_03439e650b830430b1a78af8029ec968___ @ 0x1800242B4
 * Callers:
 *     ?SetTitleIdAsync@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAUHSTRING__@@PEAPEAUIAsyncAction@Foundation@5@@Z @ 0x18002F490 (-SetTitleIdAsync@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAUHSTRING__.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18000221C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??_L@YAXPEAX_K1P6AX0@Z2@Z @ 0x180002290 (--_L@YAXPEAX_K1P6AX0@Z2@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall Windows::Internal::MakeAsyncAction_Microsoft::WRL::DisableCausality_Windows::Internal::ComTaskPoolHandler__lambda_03439e650b830430b1a78af8029ec968___(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _QWORD *a4)
{
  char *v7; // rax
  __int64 v8; // r8
  char *v9; // rbx
  _QWORD *v10; // rcx

  v7 = (char *)operator new(0x30uLL, (const struct std::nothrow_t *)&std::nothrow);
  v9 = v7;
  if ( v7 )
  {
    *(_QWORD *)v7 = &Windows::Internal::AsyncCallbackBase<Windows::Internal::CNoResult>::`vftable';
    *((_QWORD *)v7 + 1) = *a4;
    v10 = a4 + 1;
    *((_QWORD *)v7 + 2) = 0LL;
    if ( v7 + 16 != (char *)(a4 + 1) )
    {
      *((_QWORD *)v7 + 2) = *v10;
      *v10 = 0LL;
    }
    *((_QWORD *)v7 + 3) = a4[2];
    *(_QWORD *)v7 = &off_1800499A8;
    *((_DWORD *)v7 + 8) = 0;
    `eh vector constructor iterator'(v7 + 40, 8LL, 1LL, (void (__fastcall *)(char *))Microsoft::WRL::AgileRef::AgileRef);
    *((_DWORD *)v9 + 8) = 0;
  }
  else
  {
    v9 = 0LL;
  }
  return Windows::Internal::MakeAsyncActionHelper<Windows::Internal::ComTaskPoolHandler,Microsoft::WRL::DisableCausality>(
           a1,
           a2,
           v8,
           v9);
}
