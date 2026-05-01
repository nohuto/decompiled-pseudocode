/*
 * XREFs of ?GetOnComplete@?$AsyncBase@UIAsyncActionCompletedHandler@Foundation@Windows@@VNil@Details@WRL@Microsoft@@$00UDisableCausality@67@@WRL@Microsoft@@UEAAJPEAPEAUIAsyncActionCompletedHandler@Foundation@Windows@@@Z @ 0x18001E0A0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180045010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Microsoft::WRL::AsyncBase<Windows::Foundation::IAsyncActionCompletedHandler,Microsoft::WRL::Details::Nil,1,Microsoft::WRL::DisableCausality>::GetOnComplete(
        __int64 a1,
        _QWORD *a2)
{
  unsigned int v4; // ebx
  __int64 v5; // rcx
  signed __int32 v7; // [rsp+30h] [rbp+8h] BYREF

  v4 = 0;
  *a2 = 0LL;
  v7 = -2;
  _InterlockedCompareExchange(&v7, *(_DWORD *)(a1 + 48), -2);
  if ( v7 == 4 )
  {
    v4 = -2147483634;
    RoOriginateError(2147483662LL, 0LL);
  }
  else
  {
    v5 = *(_QWORD *)(a1 + 24);
    if ( v5 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
    *a2 = *(_QWORD *)(a1 + 24);
  }
  return v4;
}
