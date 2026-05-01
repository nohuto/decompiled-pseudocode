/*
 * XREFs of ?FireCompletion@?$AsyncBase@UIAsyncActionCompletedHandler@Foundation@Windows@@VNil@Details@WRL@Microsoft@@$00UDisableCausality@67@@WRL@Microsoft@@UEAAJXZ @ 0x1800285C0
 * Callers:
 *     <none>
 * Callees:
 *     ?FireProgressErrorPropagationPolicyFilter@?$ErrorPropagationPolicyTraits@$0?0@WRL@Microsoft@@SAJJPEAUIUnknown@@PEAX@Z @ 0x18001D79C (-FireProgressErrorPropagationPolicyFilter@-$ErrorPropagationPolicyTraits@$0-0@WRL@Microsoft@@SAJ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180045010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall Microsoft::WRL::AsyncBase<Windows::Foundation::IAsyncActionCompletedHandler,Microsoft::WRL::Details::Nil,1,Microsoft::WRL::DisableCausality>::FireCompletion(
        __int64 a1)
{
  unsigned int v2; // edi
  unsigned int v3; // eax
  __int64 v4; // rcx
  __int64 v5; // rcx
  signed __int32 v7; // [rsp+40h] [rbp+20h] BYREF
  unsigned int v8; // [rsp+48h] [rbp+28h] BYREF
  __int64 v9; // [rsp+50h] [rbp+30h] BYREF
  __int64 v10; // [rsp+58h] [rbp+38h]

  v2 = 0;
  v7 = -2;
  _InterlockedCompareExchange(&v7, *(_DWORD *)(a1 + 56), -2);
  if ( !v7 )
    _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 56), 1, 0);
  if ( *(_QWORD *)(a1 + 24) && !_InterlockedCompareExchange((volatile signed __int32 *)(a1 + 16), 1, 0) )
  {
    v10 = a1;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1);
    v9 = 0LL;
    if ( (**(int (__fastcall ***)(__int64, GUID *, __int64 *))a1)(a1, &GUID_5a648006_843a_4da9_865b_9d26e5dfad7b, &v9) >= 0 )
    {
      v8 = -2;
      _InterlockedCompareExchange((volatile signed __int32 *)&v8, *(_DWORD *)(a1 + 56), -2);
      v3 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))(**(_QWORD **)(a1 + 24) + 24LL))(
             *(_QWORD *)(a1 + 24),
             v9,
             v8);
      v2 = Microsoft::WRL::ErrorPropagationPolicyTraits<-1>::FireProgressErrorPropagationPolicyFilter(
             v3,
             *(_QWORD *)(a1 + 24));
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 32), 0xFFFFFFFF) == 1 )
      {
        v4 = *(_QWORD *)(a1 + 24);
        if ( v4 )
        {
          *(_QWORD *)(a1 + 24) = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
        }
      }
    }
    v5 = v9;
    if ( v9 )
    {
      v9 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
    }
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 16LL))(a1);
  }
  return v2;
}
