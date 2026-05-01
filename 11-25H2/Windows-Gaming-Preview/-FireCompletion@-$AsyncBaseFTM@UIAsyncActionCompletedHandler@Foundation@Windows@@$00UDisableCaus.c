/*
 * XREFs of ?FireCompletion@?$AsyncBaseFTM@UIAsyncActionCompletedHandler@Foundation@Windows@@$00UDisableCausality@WRL@Microsoft@@@Internal@Windows@@UEAAJXZ @ 0x1800288B0
 * Callers:
 *     ?FireCompletion@?$AsyncBaseWithProgressFTM@UIAsyncActionCompletedHandler@Foundation@Windows@@UINilDelegate@Internal@3@$00UDisableCausality@WRL@Microsoft@@@Internal@Windows@@UEAAJXZ @ 0x180028BA0 (-FireCompletion@-$AsyncBaseWithProgressFTM@UIAsyncActionCompletedHandler@Foundation@Windows@@UIN.c)
 *     ?InvokeFireCompletion@?$AsyncOperation@UIAsyncAction@Foundation@Windows@@UIAsyncActionCompletedHandler@23@VCNoResult@Internal@3@VComTaskPoolHandler@63@UINilDelegate@63@UDisableCausality@WRL@Microsoft@@@Internal@Windows@@UEAAJXZ @ 0x18002B210 (-InvokeFireCompletion@-$AsyncOperation@UIAsyncAction@Foundation@Windows@@UIAsyncActionCompletedH.c)
 *     ?_AfterComplete@?$AsyncOperation@UIAsyncAction@Foundation@Windows@@UIAsyncActionCompletedHandler@23@VCNoResult@Internal@3@VComTaskPoolHandler@63@UINilDelegate@63@UDisableCausality@WRL@Microsoft@@@Internal@Windows@@AEAAXXZ @ 0x18002FC90 (-_AfterComplete@-$AsyncOperation@UIAsyncAction@Foundation@Windows@@UIAsyncActionCompletedHandler.c)
 * Callees:
 *     ?FireProgressErrorPropagationPolicyFilter@?$ErrorPropagationPolicyTraits@$0?0@WRL@Microsoft@@SAJJPEAUIUnknown@@PEAX@Z @ 0x18001D66C (-FireProgressErrorPropagationPolicyFilter@-$ErrorPropagationPolicyTraits@$0-0@WRL@Microsoft@@SAJ.c)
 *     ?GetRpcOptions@RpcOptionsHelper@@SAJPEAUIUnknown@@PEAPEAUIRpcOptions@@@Z @ 0x18001E574 (-GetRpcOptions@RpcOptionsHelper@@SAJPEAUIUnknown@@PEAPEAUIRpcOptions@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180045010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=13
__int64 __fastcall Windows::Internal::AsyncBaseFTM<Windows::Foundation::IAsyncActionCompletedHandler,1,Microsoft::WRL::DisableCausality>::FireCompletion(
        __int64 a1)
{
  __int64 v1; // rdi
  unsigned int v2; // esi
  __int64 v3; // rcx
  int v4; // eax
  IUnknown *v5; // rsi
  struct IUnknown *v6; // rcx
  unsigned int v7; // eax
  __int64 v8; // rcx
  LPSTREAM v9; // rcx
  struct IRpcOptions *v10; // rcx
  struct IUnknown *v11; // rcx
  LPUNKNOWN v12; // rcx
  signed __int32 v14[8]; // [rsp+0h] [rbp-50h] BYREF
  struct IRpcOptions *v15; // [rsp+30h] [rbp-20h] BYREF
  __int64 v16; // [rsp+38h] [rbp-18h]
  LPSTREAM ppstm; // [rsp+40h] [rbp-10h] BYREF
  HRESULT v18; // [rsp+48h] [rbp-8h]
  signed __int32 v19; // [rsp+80h] [rbp+30h] BYREF
  unsigned int v20; // [rsp+88h] [rbp+38h] BYREF
  struct IUnknown *v21; // [rsp+90h] [rbp+40h] BYREF
  LPUNKNOWN pUnk; // [rsp+98h] [rbp+48h] BYREF

  v1 = a1;
  v2 = 0;
  v19 = -2;
  _InterlockedCompareExchange(&v19, *(_DWORD *)(a1 + 48), -2);
  if ( !v19 )
    _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 48), 1, 0);
  if ( *(int *)(a1 + 128) > 0 && _InterlockedIncrement((volatile signed __int32 *)(a1 + 16)) == 1 )
  {
    v16 = a1;
    if ( a1 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1);
    pUnk = 0LL;
    if ( (**(int (__fastcall ***)(__int64, GUID *, LPUNKNOWN *))v1)(
           v1,
           &GUID_5a648006_843a_4da9_865b_9d26e5dfad7b,
           &pUnk) >= 0 )
    {
      v20 = -2;
      _InterlockedCompareExchange((volatile signed __int32 *)&v20, *(_DWORD *)(v1 + 48), -2);
      v21 = 0LL;
      if ( *(_QWORD *)(v1 + 112) )
      {
        v21 = 0LL;
        v3 = *(_QWORD *)(v1 + 112);
        if ( v3 )
          v4 = (*(__int64 (__fastcall **)(__int64, GUID *, struct IUnknown **))(*(_QWORD *)v3 + 24LL))(
                 v3,
                 &GUID_a4ed5c81_76c9_40bd_8be6_b1d90fb20ae7,
                 &v21);
        else
          v4 = 0;
        if ( v4 >= 0 )
        {
          v15 = 0LL;
          RpcOptionsHelper::GetRpcOptions(v21, &v15);
          v5 = pUnk;
          ppstm = 0LL;
          v18 = 0;
          v6 = v21;
          if ( v15 && v21 )
          {
            v18 = CreateStreamOnHGlobal(0LL, 1, &ppstm);
            if ( v18 >= 0 )
              v18 = CoMarshalInterface(ppstm, &GUID_00000000_0000_0000_c000_000000000046, v5, 0, 0LL, 1u);
            v6 = v21;
          }
          else
          {
            v18 = -2147467262;
          }
          v7 = ((__int64 (__fastcall *)(struct IUnknown *, LPUNKNOWN, _QWORD))v6->lpVtbl[1].QueryInterface)(
                 v6,
                 pUnk,
                 v20);
          v2 = Microsoft::WRL::ErrorPropagationPolicyTraits<-1>::FireProgressErrorPropagationPolicyFilter(
                 v7,
                 (__int64)v21);
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v1 + 128), 0xFFFFFFFF) == 1 )
          {
            _InterlockedOr(v14, 0);
            v8 = *(_QWORD *)(v1 + 112);
            *(_QWORD *)(v1 + 112) = 0LL;
            if ( v8 )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
          }
          if ( v18 >= 0 )
          {
            (*(void (__fastcall **)(LPSTREAM, _QWORD, _QWORD, _QWORD))(*(_QWORD *)ppstm + 40LL))(ppstm, 0LL, 0LL, 0LL);
            CoReleaseMarshalData(ppstm);
          }
          v9 = ppstm;
          if ( ppstm )
          {
            ppstm = 0LL;
            (*(void (__fastcall **)(LPSTREAM))(*(_QWORD *)v9 + 16LL))(v9);
          }
          v10 = v15;
          if ( v15 )
          {
            v15 = 0LL;
            ((void (__fastcall *)(struct IRpcOptions *))v10->lpVtbl->Release)(v10);
          }
        }
        v11 = v21;
      }
      else
      {
        v11 = 0LL;
      }
      if ( v11 )
      {
        v21 = 0LL;
        ((void (__fastcall *)(struct IUnknown *))v11->lpVtbl->Release)(v11);
      }
      v1 = v16;
    }
    v12 = pUnk;
    if ( pUnk )
    {
      pUnk = 0LL;
      ((void (__fastcall *)(LPUNKNOWN))v12->lpVtbl->Release)(v12);
    }
    if ( v1 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v1 + 16LL))(v1);
  }
  return v2;
}
