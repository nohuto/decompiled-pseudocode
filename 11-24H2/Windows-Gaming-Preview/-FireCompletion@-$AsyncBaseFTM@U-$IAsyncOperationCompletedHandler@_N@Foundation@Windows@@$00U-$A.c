/*
 * XREFs of ?FireCompletion@?$AsyncBaseFTM@U?$IAsyncOperationCompletedHandler@_N@Foundation@Windows@@$00U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@UEAAJXZ @ 0x1800286E0
 * Callers:
 *     ?FireCompletion@?$AsyncBaseWithProgressFTM@U?$IAsyncOperationCompletedHandler@_N@Foundation@Windows@@UINilDelegate@Internal@3@$00U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@UEAAJXZ @ 0x180028CE0 (-FireCompletion@-$AsyncBaseWithProgressFTM@U-$IAsyncOperationCompletedHandler@_N@Foundation@Wind.c)
 *     ?InvokeFireCompletion@?$AsyncOperation@U?$IAsyncOperation@_N@Foundation@Windows@@U?$IAsyncOperationCompletedHandler@_N@23@V?$CBasicResult@E$0A@@Internal@3@VComTaskPoolHandler@63@UINilDelegate@63@U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@UEAAJXZ @ 0x18002B350 (-InvokeFireCompletion@-$AsyncOperation@U-$IAsyncOperation@_N@Foundation@Windows@@U-$IAsyncOperat.c)
 *     ?_AfterComplete@?$AsyncOperation@U?$IAsyncOperation@_N@Foundation@Windows@@U?$IAsyncOperationCompletedHandler@_N@23@V?$CBasicResult@E$0A@@Internal@3@VComTaskPoolHandler@63@UINilDelegate@63@U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@AEAAXXZ @ 0x18002FD98 (-_AfterComplete@-$AsyncOperation@U-$IAsyncOperation@_N@Foundation@Windows@@U-$IAsyncOperationCom.c)
 * Callees:
 *     ?FireProgressErrorPropagationPolicyFilter@?$ErrorPropagationPolicyTraits@$0?0@WRL@Microsoft@@SAJJPEAUIUnknown@@PEAX@Z @ 0x18001D79C (-FireProgressErrorPropagationPolicyFilter@-$ErrorPropagationPolicyTraits@$0-0@WRL@Microsoft@@SAJ.c)
 *     ?GetRpcOptions@RpcOptionsHelper@@SAJPEAUIUnknown@@PEAPEAUIRpcOptions@@@Z @ 0x18001E6E4 (-GetRpcOptions@RpcOptionsHelper@@SAJPEAUIUnknown@@PEAPEAUIRpcOptions@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180045010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Windows::Internal::AsyncBaseFTM<Windows::Foundation::IAsyncOperationCompletedHandler<bool>,1,Microsoft::WRL::AsyncOptions<-1,0,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>::FireCompletion(
        __int64 a1)
{
  unsigned int v2; // r15d
  __int64 v3; // rdi
  void (__fastcall *v4)(struct Windows::Foundation::Diagnostics::IAsyncCausalityTracerStatics *, _QWORD, __int64, GUID *, __int64, signed __int32); // r10
  __int64 v5; // rcx
  int v6; // eax
  __int64 v7; // rax
  IUnknown *v8; // rdi
  struct IUnknown *v9; // rcx
  unsigned int v10; // eax
  __int64 v11; // rcx
  LPSTREAM v12; // rcx
  struct IRpcOptions *v13; // rcx
  struct IUnknown *v14; // rcx
  LPUNKNOWN v15; // rcx
  signed __int32 v17[8]; // [rsp+0h] [rbp-69h] BYREF
  LPUNKNOWN pUnk; // [rsp+40h] [rbp-29h] BYREF
  struct IRpcOptions *v19; // [rsp+48h] [rbp-21h] BYREF
  __int64 v20; // [rsp+50h] [rbp-19h]
  LPSTREAM ppstm; // [rsp+58h] [rbp-11h] BYREF
  HRESULT v22; // [rsp+60h] [rbp-9h]
  GUID v23; // [rsp+70h] [rbp+7h] BYREF
  GUID v24; // [rsp+80h] [rbp+17h] BYREF
  signed __int32 v25; // [rsp+D0h] [rbp+67h] BYREF
  signed __int32 v26; // [rsp+D8h] [rbp+6Fh] BYREF
  unsigned int v27; // [rsp+E0h] [rbp+77h] BYREF
  struct IUnknown *v28; // [rsp+E8h] [rbp+7Fh] BYREF

  v2 = 0;
  v25 = -2;
  _InterlockedCompareExchange(&v25, *(_DWORD *)(a1 + 56), -2);
  if ( !v25 )
    _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 56), 1, 0);
  if ( *(int *)(a1 + 136) > 0 && _InterlockedIncrement((volatile signed __int32 *)(a1 + 16)) == 1 )
  {
    v3 = a1;
    v20 = a1;
    if ( a1 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1);
    pUnk = 0LL;
    if ( Microsoft::WRL::gCausality )
    {
      v26 = 0;
      _InterlockedCompareExchange(&v26, *(_DWORD *)(a1 + 56), 0);
      v4 = *(void (__fastcall **)(struct Windows::Foundation::Diagnostics::IAsyncCausalityTracerStatics *, _QWORD, __int64, GUID *, __int64, signed __int32))(*(_QWORD *)Microsoft::WRL::gCausality + 56LL);
      v23 = GUID_CAUSALITY_WINDOWS_PLATFORM_ID;
      v4(Microsoft::WRL::gCausality, 0LL, 2LL, &v23, a1, v26);
      v3 = v20;
    }
    if ( (**(int (__fastcall ***)(__int64, GUID *, LPUNKNOWN *))a1)(
           a1,
           &GUID_cdb5efb3_5788_509d_9be1_71ccb8a3362a,
           &pUnk) >= 0 )
    {
      v27 = -2;
      _InterlockedCompareExchange((volatile signed __int32 *)&v27, *(_DWORD *)(a1 + 56), -2);
      v28 = 0LL;
      if ( *(_QWORD *)(a1 + 120) )
      {
        v28 = 0LL;
        v5 = *(_QWORD *)(a1 + 120);
        if ( v5 )
          v6 = (*(__int64 (__fastcall **)(__int64, GUID *, struct IUnknown **))(*(_QWORD *)v5 + 24LL))(
                 v5,
                 &GUID_c1d3d1a2_ae17_5a5f_b5a2_bdcc8844889a,
                 &v28);
        else
          v6 = 0;
        if ( v6 >= 0 )
        {
          if ( Microsoft::WRL::gCausality )
          {
            v7 = *(_QWORD *)Microsoft::WRL::gCausality;
            v24 = GUID_CAUSALITY_WINDOWS_PLATFORM_ID;
            (*(void (__fastcall **)(struct Windows::Foundation::Diagnostics::IAsyncCausalityTracerStatics *, _QWORD, __int64, GUID *, __int64, _DWORD))(v7 + 72))(
              Microsoft::WRL::gCausality,
              0LL,
              2LL,
              &v24,
              a1,
              0);
          }
          v19 = 0LL;
          RpcOptionsHelper::GetRpcOptions(v28, &v19);
          v8 = pUnk;
          ppstm = 0LL;
          v22 = 0;
          v9 = v28;
          if ( v19 && v28 )
          {
            v22 = CreateStreamOnHGlobal(0LL, 1, &ppstm);
            if ( v22 >= 0 )
              v22 = CoMarshalInterface(ppstm, &GUID_00000000_0000_0000_c000_000000000046, v8, 0, 0LL, 1u);
            v9 = v28;
          }
          else
          {
            v22 = -2147467262;
          }
          v10 = ((__int64 (__fastcall *)(struct IUnknown *, LPUNKNOWN, _QWORD))v9->lpVtbl[1].QueryInterface)(
                  v9,
                  pUnk,
                  v27);
          v2 = Microsoft::WRL::ErrorPropagationPolicyTraits<-1>::FireProgressErrorPropagationPolicyFilter(
                 v10,
                 (__int64)v28);
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 136), 0xFFFFFFFF) == 1 )
          {
            _InterlockedOr(v17, 0);
            v11 = *(_QWORD *)(a1 + 120);
            *(_QWORD *)(a1 + 120) = 0LL;
            if ( v11 )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
          }
          if ( Microsoft::WRL::gCausality )
            (*(void (__fastcall **)(struct Windows::Foundation::Diagnostics::IAsyncCausalityTracerStatics *, _QWORD, __int64))(*(_QWORD *)Microsoft::WRL::gCausality + 80LL))(
              Microsoft::WRL::gCausality,
              0LL,
              2LL);
          if ( v22 >= 0 )
          {
            (*(void (__fastcall **)(LPSTREAM, _QWORD, _QWORD, _QWORD))(*(_QWORD *)ppstm + 40LL))(ppstm, 0LL, 0LL, 0LL);
            CoReleaseMarshalData(ppstm);
          }
          v12 = ppstm;
          if ( ppstm )
          {
            ppstm = 0LL;
            (*(void (__fastcall **)(LPSTREAM))(*(_QWORD *)v12 + 16LL))(v12);
          }
          v13 = v19;
          if ( v19 )
          {
            v19 = 0LL;
            ((void (__fastcall *)(struct IRpcOptions *))v13->lpVtbl->Release)(v13);
          }
        }
        v14 = v28;
      }
      else
      {
        v14 = 0LL;
      }
      if ( v14 )
      {
        v28 = 0LL;
        ((void (__fastcall *)(struct IUnknown *))v14->lpVtbl->Release)(v14);
      }
      v3 = v20;
    }
    v15 = pUnk;
    if ( pUnk )
    {
      pUnk = 0LL;
      ((void (__fastcall *)(LPUNKNOWN))v15->lpVtbl->Release)(v15);
    }
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
  return v2;
}
