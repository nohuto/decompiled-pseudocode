/*
 * XREFs of ?FireProgress@?$AsyncBaseWithProgressFTM@UIAsyncActionCompletedHandler@Foundation@Windows@@UINilDelegate@Internal@3@$00UDisableCausality@WRL@Microsoft@@@Internal@Windows@@QEAAJH@Z @ 0x180028D9C
 * Callers:
 *     ?SetProgress@?$AsyncOperation@UIAsyncAction@Foundation@Windows@@UIAsyncActionCompletedHandler@23@VCNoResult@Internal@3@VComTaskPoolHandler@63@UINilDelegate@63@UDisableCausality@WRL@Microsoft@@@Internal@Windows@@UEAAJH@Z @ 0x18002F520 (-SetProgress@-$AsyncOperation@UIAsyncAction@Foundation@Windows@@UIAsyncActionCompletedHandler@23.c)
 * Callees:
 *     ?CreateBias@?$BiasHelper@UIUnknown@@UINilDelegate@Internal@Windows@@$00@@SA?AV?$AutoStubBias@UIUnknown@@UINilDelegate@Internal@Windows@@@@PEAUIRpcOptions@@PEAUIUnknown@@PEAUINilDelegate@Internal@Windows@@@Z @ 0x18001C778 (-CreateBias@-$BiasHelper@UIUnknown@@UINilDelegate@Internal@Windows@@$00@@SA-AV-$AutoStubBias@UIU.c)
 *     ?FireProgressErrorPropagationPolicyFilter@?$ErrorPropagationPolicyTraits@$0?0@WRL@Microsoft@@SAJJPEAUIUnknown@@PEAX@Z @ 0x18001D79C (-FireProgressErrorPropagationPolicyFilter@-$ErrorPropagationPolicyTraits@$0-0@WRL@Microsoft@@SAJ.c)
 *     ?GetRpcOptions@RpcOptionsHelper@@SAJPEAUIUnknown@@PEAPEAUIRpcOptions@@@Z @ 0x18001E6E4 (-GetRpcOptions@RpcOptionsHelper@@SAJPEAUIUnknown@@PEAPEAUIRpcOptions@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180045010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=12
__int64 __fastcall Windows::Internal::AsyncBaseWithProgressFTM<Windows::Foundation::IAsyncActionCompletedHandler,Windows::Internal::INilDelegate,1,Microsoft::WRL::DisableCausality>::FireProgress(
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
  unsigned int v10; // eax
  LPSTREAM v11; // rcx
  struct IRpcOptions *v12; // rcx
  __int64 v13; // rcx
  struct IUnknown *v14; // rcx
  IUnknown *v15; // rcx
  signed __int32 v17[12]; // [rsp+0h] [rbp-50h] BYREF
  __int64 v18; // [rsp+30h] [rbp-20h]
  LPSTREAM pStm; // [rsp+38h] [rbp-18h] BYREF
  int v20; // [rsp+40h] [rbp-10h]
  struct IUnknown *v21; // [rsp+80h] [rbp+30h] BYREF
  IUnknown *v22; // [rsp+90h] [rbp+40h] BYREF
  struct IRpcOptions *v23; // [rsp+98h] [rbp+48h] BYREF

  v3 = a1;
  v4 = 0;
  v18 = a1;
  if ( a1 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1);
  v22 = 0LL;
  v5 = *(_DWORD *)(v3 + 160);
  if ( v5 > 0 )
  {
    while ( v5 != _InterlockedCompareExchange((volatile signed __int32 *)(v3 + 160), v5 + 1, v5) )
    {
      v5 = *(_DWORD *)(v3 + 160);
      if ( v5 <= 0 )
        goto LABEL_28;
    }
    v6 = **(int (__fastcall ***)(__int64, GUID *, IUnknown **))v3;
    v7 = v22;
    if ( v22 )
    {
      v22 = 0LL;
      ((void (__fastcall *)(IUnknown *))v7->lpVtbl->Release)(v7);
    }
    if ( v6(v3, &GUID_00000000_0000_0000_c000_000000000046, &v22) >= 0 )
    {
      v21 = 0LL;
      if ( *(_QWORD *)(v3 + 144) )
      {
        v21 = 0LL;
        v8 = *(_QWORD *)(v3 + 144);
        if ( v8 )
          v9 = (*(__int64 (__fastcall **)(__int64, GUID *, struct IUnknown **))(*(_QWORD *)v8 + 24LL))(
                 v8,
                 &GUID_2fafaaf9_2986_48ee_919d_98f66edf0a31,
                 &v21);
        else
          v9 = 0;
        if ( v9 >= 0 )
        {
          v23 = 0LL;
          RpcOptionsHelper::GetRpcOptions(v21, &v23);
          BiasHelper<IUnknown,Windows::Internal::INilDelegate,1>::CreateBias(&pStm, (__int64)v23, v22, (__int64)v21);
          v10 = ((__int64 (__fastcall *)(struct IUnknown *, IUnknown *, _QWORD))v21->lpVtbl[1].QueryInterface)(
                  v21,
                  v22,
                  a2);
          v4 = Microsoft::WRL::ErrorPropagationPolicyTraits<-1>::FireProgressErrorPropagationPolicyFilter(
                 v10,
                 (__int64)v21);
          if ( v20 >= 0 )
          {
            (*(void (__fastcall **)(LPSTREAM, _QWORD, _QWORD, _QWORD))(*(_QWORD *)pStm + 40LL))(pStm, 0LL, 0LL, 0LL);
            CoReleaseMarshalData(pStm);
          }
          v11 = pStm;
          if ( pStm )
          {
            pStm = 0LL;
            (*(void (__fastcall **)(LPSTREAM))(*(_QWORD *)v11 + 16LL))(v11);
          }
          v12 = v23;
          if ( v23 )
          {
            v23 = 0LL;
            ((void (__fastcall *)(struct IRpcOptions *))v12->lpVtbl->Release)(v12);
          }
        }
      }
      else
      {
        v21 = 0LL;
      }
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v3 + 160), 0xFFFFFFFF) == 1 )
      {
        _InterlockedOr(v17, 0);
        v13 = *(_QWORD *)(v3 + 144);
        *(_QWORD *)(v3 + 144) = 0LL;
        if ( v13 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
      }
      v14 = v21;
      if ( v21 )
      {
        v21 = 0LL;
        ((void (__fastcall *)(struct IUnknown *))v14->lpVtbl->Release)(v14);
      }
    }
LABEL_28:
    v3 = v18;
  }
  v15 = v22;
  if ( v22 )
  {
    v22 = 0LL;
    ((void (__fastcall *)(IUnknown *))v15->lpVtbl->Release)(v15);
  }
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  return v4;
}
