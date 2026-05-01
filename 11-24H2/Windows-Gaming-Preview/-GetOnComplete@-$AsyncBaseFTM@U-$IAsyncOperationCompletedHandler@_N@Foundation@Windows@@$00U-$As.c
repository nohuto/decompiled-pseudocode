/*
 * XREFs of ?GetOnComplete@?$AsyncBaseFTM@U?$IAsyncOperationCompletedHandler@_N@Foundation@Windows@@$00U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@UEAAJPEAPEAU?$IAsyncOperationCompletedHandler@_N@Foundation@3@@Z @ 0x18002A090
 * Callers:
 *     ?get_Completed@?$AsyncOperation@U?$IAsyncOperation@_N@Foundation@Windows@@U?$IAsyncOperationCompletedHandler@_N@23@V?$CBasicResult@E$0A@@Internal@3@VComTaskPoolHandler@63@UINilDelegate@63@U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@UEAAJPEAPEAU?$IAsyncOperationCompletedHandler@_N@Foundation@3@@Z @ 0x1800351D0 (-get_Completed@-$AsyncOperation@U-$IAsyncOperation@_N@Foundation@Windows@@U-$IAsyncOperationComp.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180045010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Windows::Internal::AsyncBaseFTM<Windows::Foundation::IAsyncOperationCompletedHandler<bool>,1,Microsoft::WRL::AsyncOptions<-1,0,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>::GetOnComplete(
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
  _InterlockedCompareExchange(&v10, *(_DWORD *)(a1 + 56), -2);
  if ( v10 == 4 )
  {
    v3 = -2147483634;
    RoOriginateError(2147483662LL, 0LL);
  }
  else
  {
    v3 = 0;
    for ( i = *(_DWORD *)(a1 + 136); i > 0; i = *(_DWORD *)(a1 + 136) )
    {
      if ( i == _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 136), i + 1, i) )
      {
        v5 = *(_QWORD *)(a1 + 120);
        *a2 = 0LL;
        if ( v5 )
        {
          v6 = *(_QWORD *)(a1 + 120);
          if ( v6 )
            v3 = (*(__int64 (__fastcall **)(__int64, GUID *, _QWORD *))(*(_QWORD *)v6 + 24LL))(
                   v6,
                   &GUID_c1d3d1a2_ae17_5a5f_b5a2_bdcc8844889a,
                   a2);
          else
            v3 = 0;
        }
        else
        {
          v3 = -2147024809;
        }
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 136), 0xFFFFFFFF) == 1 )
        {
          _InterlockedOr(v9, 0);
          v7 = *(_QWORD *)(a1 + 120);
          *(_QWORD *)(a1 + 120) = 0LL;
          if ( v7 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
        }
        return v3;
      }
    }
  }
  return v3;
}
