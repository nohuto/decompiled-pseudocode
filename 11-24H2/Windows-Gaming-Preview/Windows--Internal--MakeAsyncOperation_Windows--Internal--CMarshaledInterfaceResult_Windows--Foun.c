/*
 * XREFs of Windows::Internal::MakeAsyncOperation_Windows::Internal::CMarshaledInterfaceResult_Windows::Foundation::Collections::IVectorView_Windows::Gaming::Preview::GamesEnumeration::GameListEntry______Windows::Foundation::Collections::IVectorView_Windows::Gaming::Preview::GamesEnumeration::GameListEntry______Windows::Internal::ComTaskPoolHandler__lambda_88afd6bbfe2a61dd98f4359340091e1e___ @ 0x180017864
 * Callers:
 *     ?UnmergeEntryAsync@GameListFactoryServerImpl@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAUIGameListEntry@2345@PEAPEAU?$IAsyncOperation@PEAU?$IVectorView@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@Collections@Foundation@Windows@@@Foundation@5@@Z @ 0x180022040 (-UnmergeEntryAsync@GameListFactoryServerImpl@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAUI.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18000221C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??_L@YAXPEAX_K1P6AX0@Z2@Z @ 0x180002290 (--_L@YAXPEAX_K1P6AX0@Z2@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall Windows::Internal::MakeAsyncOperation_Windows::Internal::CMarshaledInterfaceResult_Windows::Foundation::Collections::IVectorView_Windows::Gaming::Preview::GamesEnumeration::GameListEntry______Windows::Foundation::Collections::IVectorView_Windows::Gaming::Preview::GamesEnumeration::GameListEntry______Windows::Internal::ComTaskPoolHandler__lambda_88afd6bbfe2a61dd98f4359340091e1e___(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        char *a4)
{
  char *v7; // rbx
  __int64 v8; // r8
  char *v9; // rdi

  v7 = (char *)operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v7 )
  {
    *(_QWORD *)v7 = &Windows::Internal::AsyncCallbackBase<Windows::Internal::CNoResult>::`vftable';
    *((_QWORD *)v7 + 1) = 0LL;
    if ( v7 + 8 != a4 )
    {
      *((_QWORD *)v7 + 1) = *(_QWORD *)a4;
      *(_QWORD *)a4 = 0LL;
    }
    v9 = a4 + 8;
    *((_QWORD *)v7 + 2) = 0LL;
    if ( v7 + 16 != v9 )
    {
      *((_QWORD *)v7 + 2) = *(_QWORD *)v9;
      *(_QWORD *)v9 = 0LL;
    }
    *(_QWORD *)v7 = &off_180047A90;
    *((_DWORD *)v7 + 6) = 0;
    `eh vector constructor iterator'(v7 + 32, 8LL, 1LL, (void (__fastcall *)(char *))Microsoft::WRL::AgileRef::AgileRef);
    *((_DWORD *)v7 + 6) = 0;
  }
  else
  {
    v7 = 0LL;
  }
  return Windows::Internal::MakeAsyncOperationHelper<Windows::Internal::CMarshaledInterfaceResult<Windows::Foundation::Collections::IVectorView<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *>>,Windows::Foundation::Collections::IVectorView<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *> *,Windows::Internal::ComTaskPoolHandler>(
           a1,
           a2,
           v8,
           v7);
}
