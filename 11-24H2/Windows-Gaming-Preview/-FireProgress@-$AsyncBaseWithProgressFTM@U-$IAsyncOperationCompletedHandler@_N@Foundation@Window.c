/*
 * XREFs of ?FireProgress@?$AsyncBaseWithProgressFTM@U?$IAsyncOperationCompletedHandler@_N@Foundation@Windows@@UINilDelegate@Internal@3@$00U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@QEAAJH@Z @ 0x18001D8A0
 * Callers:
 *     ?SetProgress@?$AsyncOperation@U?$IAsyncOperation@_N@Foundation@Windows@@U?$IAsyncOperationCompletedHandler@_N@23@V?$CBasicResult@E$0A@@Internal@3@VComTaskPoolHandler@63@UINilDelegate@63@U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@UEAAJH@Z @ 0x180021C70 (-SetProgress@-$AsyncOperation@U-$IAsyncOperation@_N@Foundation@Windows@@U-$IAsyncOperationComple.c)
 * Callees:
 *     ?CreateBias@?$BiasHelper@UIUnknown@@UINilDelegate@Internal@Windows@@$00@@SA?AV?$AutoStubBias@UIUnknown@@UINilDelegate@Internal@Windows@@@@PEAUIRpcOptions@@PEAUIUnknown@@PEAUINilDelegate@Internal@Windows@@@Z @ 0x18001C778 (-CreateBias@-$BiasHelper@UIUnknown@@UINilDelegate@Internal@Windows@@$00@@SA-AV-$AutoStubBias@UIU.c)
 *     ?FireProgressErrorPropagationPolicyFilter@?$ErrorPropagationPolicyTraits@$0?0@WRL@Microsoft@@SAJJPEAUIUnknown@@PEAX@Z @ 0x18001D79C (-FireProgressErrorPropagationPolicyFilter@-$ErrorPropagationPolicyTraits@$0-0@WRL@Microsoft@@SAJ.c)
 *     ?GetRpcOptions@RpcOptionsHelper@@SAJPEAUIUnknown@@PEAPEAUIRpcOptions@@@Z @ 0x18001E6E4 (-GetRpcOptions@RpcOptionsHelper@@SAJPEAUIUnknown@@PEAPEAUIRpcOptions@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180045010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=12
__int64 __fastcall Windows::Internal::AsyncBaseWithProgressFTM<Windows::Foundation::IAsyncOperationCompletedHandler<bool>,Windows::Internal::INilDelegate,1,Microsoft::WRL::AsyncOptions<-1,0,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>::FireProgress(
        __int64 a1,
        unsigned int a2)
{
  __int64 v3; // rdi
  unsigned int v4; // r14d
  signed __int32 v5; // eax
  int (__fastcall *v6)(__int64, GUID *, IUnknown **); // rsi
  IUnknown *v7; // rcx
  __int64 v8; // rcx
  int v9; // eax
  __int64 v10; // rax
  unsigned int v11; // eax
  LPSTREAM v12; // rcx
  struct IRpcOptions *v13; // rcx
  __int64 v14; // rcx
  struct IUnknown *v15; // rcx
  IUnknown *v16; // rcx
  signed __int32 v18[8]; // [rsp+0h] [rbp-70h] BYREF
  __int64 v19; // [rsp+40h] [rbp-30h]
  LPSTREAM pStm; // [rsp+48h] [rbp-28h] BYREF
  int v21; // [rsp+50h] [rbp-20h]
  GUID v22; // [rsp+60h] [rbp-10h] BYREF
  struct IUnknown *v23; // [rsp+A0h] [rbp+30h] BYREF
  IUnknown *v24; // [rsp+B0h] [rbp+40h] BYREF
  struct IRpcOptions *v25; // [rsp+B8h] [rbp+48h] BYREF

  v3 = a1;
  v4 = 0;
  v19 = a1;
  if ( a1 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1);
  v24 = 0LL;
  v5 = *(_DWORD *)(v3 + 160);
  if ( v5 > 0 )
  {
    while ( v5 != _InterlockedCompareExchange((volatile signed __int32 *)(v3 + 160), v5 + 1, v5) )
    {
      v5 = *(_DWORD *)(v3 + 160);
      if ( v5 <= 0 )
        goto LABEL_32;
    }
    v6 = **(int (__fastcall ***)(__int64, GUID *, IUnknown **))v3;
    v7 = v24;
    if ( v24 )
    {
      v24 = 0LL;
      ((void (__fastcall *)(IUnknown *))v7->lpVtbl->Release)(v7);
    }
    if ( v6(v3, &GUID_00000000_0000_0000_c000_000000000046, &v24) >= 0 )
    {
      v23 = 0LL;
      if ( *(_QWORD *)(v3 + 144) )
      {
        v23 = 0LL;
        v8 = *(_QWORD *)(v3 + 144);
        if ( v8 )
          v9 = (*(__int64 (__fastcall **)(__int64, GUID *, struct IUnknown **))(*(_QWORD *)v8 + 24LL))(
                 v8,
                 &GUID_2fafaaf9_2986_48ee_919d_98f66edf0a31,
                 &v23);
        else
          v9 = 0;
        if ( v9 >= 0 )
        {
          if ( Microsoft::WRL::gCausality )
          {
            v10 = *(_QWORD *)Microsoft::WRL::gCausality;
            v22 = GUID_CAUSALITY_WINDOWS_PLATFORM_ID;
            (*(void (__fastcall **)(struct Windows::Foundation::Diagnostics::IAsyncCausalityTracerStatics *, __int64, __int64, GUID *, __int64, int))(v10 + 72))(
              Microsoft::WRL::gCausality,
              1LL,
              2LL,
              &v22,
              v3,
              1);
          }
          v25 = 0LL;
          RpcOptionsHelper::GetRpcOptions(v23, &v25);
          BiasHelper<IUnknown,Windows::Internal::INilDelegate,1>::CreateBias(&pStm, (__int64)v25, v24, (__int64)v23);
          v11 = ((__int64 (__fastcall *)(struct IUnknown *, IUnknown *, _QWORD))v23->lpVtbl[1].QueryInterface)(
                  v23,
                  v24,
                  a2);
          v4 = Microsoft::WRL::ErrorPropagationPolicyTraits<-1>::FireProgressErrorPropagationPolicyFilter(
                 v11,
                 (__int64)v23);
          if ( Microsoft::WRL::gCausality )
            (*(void (__fastcall **)(struct Windows::Foundation::Diagnostics::IAsyncCausalityTracerStatics *, __int64, __int64, __int64))(*(_QWORD *)Microsoft::WRL::gCausality + 80LL))(
              Microsoft::WRL::gCausality,
              1LL,
              2LL,
              1LL);
          if ( v21 >= 0 )
          {
            (*(void (__fastcall **)(LPSTREAM, _QWORD, _QWORD, _QWORD))(*(_QWORD *)pStm + 40LL))(pStm, 0LL, 0LL, 0LL);
            CoReleaseMarshalData(pStm);
          }
          v12 = pStm;
          if ( pStm )
          {
            pStm = 0LL;
            (*(void (__fastcall **)(LPSTREAM))(*(_QWORD *)v12 + 16LL))(v12);
          }
          v13 = v25;
          if ( v25 )
          {
            v25 = 0LL;
            ((void (__fastcall *)(struct IRpcOptions *))v13->lpVtbl->Release)(v13);
          }
        }
      }
      else
      {
        v23 = 0LL;
      }
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v3 + 160), 0xFFFFFFFF) == 1 )
      {
        _InterlockedOr(v18, 0);
        v14 = *(_QWORD *)(v3 + 144);
        *(_QWORD *)(v3 + 144) = 0LL;
        if ( v14 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
      }
      v15 = v23;
      if ( v23 )
      {
        v23 = 0LL;
        ((void (__fastcall *)(struct IUnknown *))v15->lpVtbl->Release)(v15);
      }
    }
LABEL_32:
    v3 = v19;
  }
  v16 = v24;
  if ( v24 )
  {
    v24 = 0LL;
    ((void (__fastcall *)(IUnknown *))v16->lpVtbl->Release)(v16);
  }
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  return v4;
}
