/*
 * XREFs of ??$?0AEBKAEAPEAUIRawInputProvider@@$0A@@?$pair@KV?$ComPtr@UIRawInputProvider@@@WRL@Microsoft@@@std@@QEAA@AEBKAEAPEAUIRawInputProvider@@@Z @ 0x180091C54
 * Callers:
 *     ??$emplace_back@AEBKAEAPEAUIRawInputProvider@@@?$vector@U?$pair@KV?$ComPtr@UIRawInputProvider@@@WRL@Microsoft@@@std@@V?$allocator@U?$pair@KV?$ComPtr@UIRawInputProvider@@@WRL@Microsoft@@@std@@@2@@std@@QEAA?A_TAEBKAEAPEAUIRawInputProvider@@@Z @ 0x18008B338 (--$emplace_back@AEBKAEAPEAUIRawInputProvider@@@-$vector@U-$pair@KV-$ComPtr@UIRawInputProvider@@@.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DB010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall std::pair<unsigned long,Microsoft::WRL::ComPtr<IRawInputProvider>>::pair<unsigned long,Microsoft::WRL::ComPtr<IRawInputProvider>>(
        __int64 a1,
        _DWORD *a2,
        __int64 *a3)
{
  __int64 v4; // rcx

  *(_DWORD *)a1 = *a2;
  v4 = *a3;
  *(_QWORD *)(a1 + 8) = *a3;
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
  return a1;
}
