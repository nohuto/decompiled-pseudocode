/*
 * XREFs of ?PutOnComplete@?$AsyncBaseFTM@UIAsyncActionCompletedHandler@Foundation@Windows@@$00UDisableCausality@WRL@Microsoft@@@Internal@Windows@@UEAAJPEAUIAsyncActionCompletedHandler@Foundation@3@@Z @ 0x18002C8E0
 * Callers:
 *     ?put_Completed@?$AsyncOperation@UIAsyncAction@Foundation@Windows@@UIAsyncActionCompletedHandler@23@VCNoResult@Internal@3@VComTaskPoolHandler@63@UINilDelegate@63@UDisableCausality@WRL@Microsoft@@@Internal@Windows@@UEAAJPEAUIAsyncActionCompletedHandler@Foundation@3@@Z @ 0x180036410 (-put_Completed@-$AsyncOperation@UIAsyncAction@Foundation@Windows@@UIAsyncActionCompletedHandler@.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180045010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Internal::AsyncBaseFTM<Windows::Foundation::IAsyncActionCompletedHandler,1,Microsoft::WRL::DisableCausality>::PutOnComplete(
        __int64 a1,
        __int64 a2)
{
  int AgileReference; // ebx
  __int64 *v5; // rbx
  __int64 v6; // rcx
  __int64 v7; // rcx
  signed __int32 v9[10]; // [rsp+0h] [rbp-28h] BYREF
  signed __int32 v10; // [rsp+30h] [rbp+8h] BYREF
  signed __int32 v11; // [rsp+40h] [rbp+18h] BYREF

  v10 = -2;
  _InterlockedCompareExchange(&v10, *(_DWORD *)(a1 + 56), -2);
  if ( v10 == 4 )
  {
    AgileReference = -2147483634;
    RoOriginateError(2147483662LL, 0LL);
    return (unsigned int)AgileReference;
  }
  if ( _InterlockedIncrement((volatile signed __int32 *)(a1 + 20)) != 1 )
    return (unsigned int)-2147483624;
  v5 = (__int64 *)(a1 + 120);
  v6 = *(_QWORD *)(a1 + 120);
  *v5 = 0LL;
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  v7 = *v5;
  if ( !a2 )
  {
    *v5 = 0LL;
    if ( v7 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
    AgileReference = 0;
    goto LABEL_14;
  }
  if ( v7 )
  {
    *v5 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  AgileReference = RoGetAgileReference(0LL, &GUID_a4ed5c81_76c9_40bd_8be6_b1d90fb20ae7, a2, v5);
  if ( AgileReference >= 0 )
  {
    *(_QWORD *)(a1 + 128) = *(_QWORD *)(*(_QWORD *)a2 + 24LL);
    _InterlockedIncrement((volatile signed __int32 *)(a1 + 136));
LABEL_14:
    _InterlockedOr(v9, 0);
    v11 = -2;
    _InterlockedCompareExchange(&v11, *(_DWORD *)(a1 + 56), -2);
    if ( (unsigned int)(v11 - 1) <= 3 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 128LL))(a1);
  }
  return (unsigned int)AgileReference;
}
