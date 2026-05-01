/*
 * XREFs of _lambda_ea9241ebdeba2d86efd1d019ab7a7d43_::operator() @ 0x1801B38DC
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_ea9241ebdeba2d86efd1d019ab7a7d43___::Run @ 0x18023A1B0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_ea9241ebdeba2d86efd1d019ab7a7d43___--Run.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?GetCurrentObject@Iterator@?$ObjectArrayAdapterImpl@UIGameFocusEvents@@V?$ComPtr@UIGameFocusEvents@@@WRL@Microsoft@@@details@@AEAAXXZ @ 0x1801B39D4 (-GetCurrentObject@Iterator@-$ObjectArrayAdapterImpl@UIGameFocusEvents@@V-$ComPtr@UIGameFocusEven.c)
 *     ??0?$ObjectArrayAdapterImpl@UIGameFocusEvents@@V?$ComPtr@UIGameFocusEvents@@@WRL@Microsoft@@@details@@QEAA@PEAUIObjectArray@@@Z @ 0x1801B3A74 (--0-$ObjectArrayAdapterImpl@UIGameFocusEvents@@V-$ComPtr@UIGameFocusEvents@@@WRL@Microsoft@@@det.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall lambda_ea9241ebdeba2d86efd1d019ab7a7d43_::operator()(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // rbx
  __int64 v5; // [rsp+20h] [rbp-40h] BYREF
  int v6; // [rsp+28h] [rbp-38h]
  int v7; // [rsp+30h] [rbp-30h] BYREF
  __int64 v8; // [rsp+38h] [rbp-28h] BYREF
  __int64 *v9; // [rsp+40h] [rbp-20h]
  int v10; // [rsp+48h] [rbp-18h] BYREF
  __int64 v11; // [rsp+50h] [rbp-10h] BYREF
  __int64 *v12; // [rsp+58h] [rbp-8h]

  details::ObjectArrayAdapterImpl<IGameFocusEvents,Microsoft::WRL::ComPtr<IGameFocusEvents>>::ObjectArrayAdapterImpl<IGameFocusEvents,Microsoft::WRL::ComPtr<IGameFocusEvents>>(
    &v5,
    *(_QWORD *)a1);
  v7 = 0;
  v8 = 0LL;
  v9 = &v5;
  details::ObjectArrayAdapterImpl<IGameFocusEvents,Microsoft::WRL::ComPtr<IGameFocusEvents>>::Iterator::GetCurrentObject(&v7);
  v10 = v6;
  v11 = 0LL;
  v12 = &v5;
  details::ObjectArrayAdapterImpl<IGameFocusEvents,Microsoft::WRL::ComPtr<IGameFocusEvents>>::Iterator::GetCurrentObject(&v10);
  while ( v7 != v10 || v9 != v12 )
  {
    v3 = v8;
    if ( v8 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8);
    LOBYTE(v2) = *(_BYTE *)(a1 + 8);
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v3 + 24LL))(v3, v2);
    if ( v3 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
    ++v7;
    details::ObjectArrayAdapterImpl<IGameFocusEvents,Microsoft::WRL::ComPtr<IGameFocusEvents>>::Iterator::GetCurrentObject(&v7);
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v11);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v8);
  return Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v5);
}
