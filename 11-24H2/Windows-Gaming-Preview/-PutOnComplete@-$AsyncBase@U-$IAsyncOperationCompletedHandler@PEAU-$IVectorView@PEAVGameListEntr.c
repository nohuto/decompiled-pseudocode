/*
 * XREFs of ?PutOnComplete@?$AsyncBase@U?$IAsyncOperationCompletedHandler@PEAU?$IVectorView@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@Collections@Foundation@Windows@@@Foundation@Windows@@VNil@Details@WRL@Microsoft@@$00U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@67@@WRL@Microsoft@@UEAAJPEAU?$IAsyncOperationCompletedHandler@PEAU?$IVectorView@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@Collections@Foundation@Windows@@@Foundation@Windows@@@Z @ 0x18001F6E0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180045010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Microsoft::WRL::AsyncBase<Windows::Foundation::IAsyncOperationCompletedHandler<Windows::Foundation::Collections::IVectorView<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *> *>,Microsoft::WRL::Details::Nil,1,Microsoft::WRL::AsyncOptions<-1,0,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>::PutOnComplete(
        __int64 a1,
        __int64 a2)
{
  unsigned int v4; // edi
  __int64 v5; // rcx
  __int64 v6; // rcx
  signed __int32 v8[8]; // [rsp+0h] [rbp-68h] BYREF
  GUID v9; // [rsp+40h] [rbp-28h] BYREF
  signed __int32 v10; // [rsp+70h] [rbp+8h] BYREF
  signed __int32 v11; // [rsp+80h] [rbp+18h] BYREF

  v10 = -2;
  _InterlockedCompareExchange(&v10, *(_DWORD *)(a1 + 56), -2);
  if ( v10 == 4 )
  {
    v4 = -2147483634;
    v5 = 2147483662LL;
LABEL_16:
    RoOriginateError(v5, 0LL);
    return v4;
  }
  v4 = 0;
  if ( _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 20), 1, 0) )
  {
    v5 = 2147483672LL;
    v4 = -2147483624;
    goto LABEL_16;
  }
  if ( a2 )
    *(_QWORD *)(a1 + 40) = *(_QWORD *)(*(_QWORD *)a2 + 24LL);
  if ( *(_QWORD *)(a1 + 24) != a2 )
  {
    if ( a2 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
    v6 = *(_QWORD *)(a1 + 24);
    *(_QWORD *)(a1 + 24) = a2;
    if ( v6 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  _InterlockedOr(v8, 0);
  _InterlockedAdd((volatile signed __int32 *)(a1 + 32), 1u);
  if ( Microsoft::WRL::gCausality )
  {
    v9 = GUID_CAUSALITY_WINDOWS_PLATFORM_ID;
    (*(void (__fastcall **)(struct Windows::Foundation::Diagnostics::IAsyncCausalityTracerStatics *, __int64, __int64, GUID *, __int64, _DWORD))(*(_QWORD *)Microsoft::WRL::gCausality + 64LL))(
      Microsoft::WRL::gCausality,
      2LL,
      2LL,
      &v9,
      a1,
      0);
  }
  v11 = -2;
  _InterlockedCompareExchange(&v11, *(_DWORD *)(a1 + 56), -2);
  if ( (unsigned int)(v11 - 1) <= 3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 128LL))(a1);
  return v4;
}
