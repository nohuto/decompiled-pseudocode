/*
 * XREFs of ?GetOnComplete@?$AsyncBaseFTM@UIAsyncActionCompletedHandler@Foundation@Windows@@$00UDisableCausality@WRL@Microsoft@@@Internal@Windows@@UEAAJPEAPEAUIAsyncActionCompletedHandler@Foundation@3@@Z @ 0x180029FE0
 * Callers:
 *     ?get_Completed@?$AsyncOperation@UIAsyncAction@Foundation@Windows@@UIAsyncActionCompletedHandler@23@VCNoResult@Internal@3@VComTaskPoolHandler@63@UINilDelegate@63@UDisableCausality@WRL@Microsoft@@@Internal@Windows@@UEAAJPEAPEAUIAsyncActionCompletedHandler@Foundation@3@@Z @ 0x180035040 (-get_Completed@-$AsyncOperation@UIAsyncAction@Foundation@Windows@@UIAsyncActionCompletedHandler@.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180045010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Windows::Internal::AsyncBaseFTM<Windows::Foundation::IAsyncActionCompletedHandler,1,Microsoft::WRL::DisableCausality>::GetOnComplete(
        __int64 a1,
        _QWORD *a2)
{
  unsigned int v3; // edi
  signed __int32 i; // eax
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rcx
  signed __int32 v9[10]; // [rsp+0h] [rbp-28h] BYREF
  signed __int32 v10; // [rsp+30h] [rbp+8h] BYREF

  *a2 = 0LL;
  v10 = -2;
  _InterlockedCompareExchange(&v10, *(_DWORD *)(a1 + 48), -2);
  if ( v10 == 4 )
  {
    v3 = -2147483634;
    RoOriginateError(2147483662LL, 0LL);
  }
  else
  {
    v3 = 0;
    for ( i = *(_DWORD *)(a1 + 128); i > 0; i = *(_DWORD *)(a1 + 128) )
    {
      if ( i == _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 128), i + 1, i) )
      {
        v5 = *(_QWORD *)(a1 + 112);
        *a2 = 0LL;
        if ( v5 )
        {
          v6 = *(_QWORD *)(a1 + 112);
          if ( v6 )
            v3 = (*(__int64 (__fastcall **)(__int64, GUID *, _QWORD *))(*(_QWORD *)v6 + 24LL))(
                   v6,
                   &GUID_a4ed5c81_76c9_40bd_8be6_b1d90fb20ae7,
                   a2);
          else
            v3 = 0;
        }
        else
        {
          v3 = -2147024809;
        }
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 128), 0xFFFFFFFF) == 1 )
        {
          _InterlockedOr(v9, 0);
          v7 = *(_QWORD *)(a1 + 112);
          *(_QWORD *)(a1 + 112) = 0LL;
          if ( v7 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
        }
        return v3;
      }
    }
  }
  return v3;
}
