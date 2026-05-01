/*
 * XREFs of ?PutOnComplete@?$AsyncBase@UIAsyncActionCompletedHandler@Foundation@Windows@@VNil@Details@WRL@Microsoft@@$00UDisableCausality@67@@WRL@Microsoft@@UEAAJPEAUIAsyncActionCompletedHandler@Foundation@Windows@@@Z @ 0x18002C4A0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180045010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Microsoft::WRL::AsyncBase<Windows::Foundation::IAsyncActionCompletedHandler,Microsoft::WRL::Details::Nil,1,Microsoft::WRL::DisableCausality>::PutOnComplete(
        __int64 a1,
        __int64 a2)
{
  unsigned int v4; // ebx
  __int64 v5; // rcx
  __int64 v6; // rcx
  signed __int32 v8[10]; // [rsp+0h] [rbp-28h] BYREF
  signed __int32 v9; // [rsp+30h] [rbp+8h] BYREF
  signed __int32 v10; // [rsp+40h] [rbp+18h] BYREF

  v9 = -2;
  _InterlockedCompareExchange(&v9, *(_DWORD *)(a1 + 48), -2);
  if ( v9 == 4 )
  {
    v4 = -2147483634;
    v5 = 2147483662LL;
LABEL_14:
    RoOriginateError(v5, 0LL);
    return v4;
  }
  v4 = 0;
  if ( _InterlockedIncrement((volatile signed __int32 *)(a1 + 20)) != 1 )
  {
    v5 = 2147483672LL;
    v4 = -2147483624;
    goto LABEL_14;
  }
  if ( a2 )
    *(_QWORD *)(a1 + 32) = *(_QWORD *)(*(_QWORD *)a2 + 24LL);
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
  v10 = -2;
  _InterlockedCompareExchange(&v10, *(_DWORD *)(a1 + 48), -2);
  if ( (unsigned int)(v10 - 1) <= 3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 128LL))(a1);
  return v4;
}
