/*
 * XREFs of ?Start@?$AsyncBase@UIAsyncActionCompletedHandler@Foundation@Windows@@VNil@Details@WRL@Microsoft@@$00UDisableCausality@67@@WRL@Microsoft@@MEAAJXZ @ 0x18002FA40
 * Callers:
 *     ??$MakeAsyncActionHelper@VComTaskPoolHandler@Internal@Windows@@UDisableCausality@WRL@Microsoft@@@Internal@Windows@@YAJ$$QEAVComTaskPoolHandler@01@PEAPEAUIAsyncAction@Foundation@1@W4TrustLevel@@PEAV?$AsyncCallbackBase@VCNoResult@Internal@Windows@@@01@@Z @ 0x180024458 (--$MakeAsyncActionHelper@VComTaskPoolHandler@Internal@Windows@@UDisableCausality@WRL@Microsoft@@.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180045010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Microsoft::WRL::AsyncBase<Windows::Foundation::IAsyncActionCompletedHandler,Microsoft::WRL::Details::Nil,1,Microsoft::WRL::DisableCausality>::Start(
        volatile signed __int32 *a1)
{
  signed __int32 v2; // ecx
  signed __int32 v3; // eax
  int v4; // ebx
  signed __int32 v6[6]; // [rsp+20h] [rbp-18h] BYREF

  v2 = *((_DWORD *)a1 + 12);
  v6[0] = -2;
  _InterlockedCompareExchange(v6, v2, -2);
  if ( v6[0] == -1 && (v3 = _InterlockedCompareExchange(a1 + 12, 0, -1), v3 == v6[0]) )
  {
    v4 = (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)a1 + 136LL))(a1);
    if ( v4 >= 0 )
      InitOnceExecuteOnce(
        &Microsoft::WRL::gCausalityInitOnce,
        (PINIT_ONCE_FN)Microsoft::WRL::AsyncBase<Windows::Foundation::IAsyncActionCompletedHandler,Microsoft::WRL::Details::Nil,1,Microsoft::WRL::DisableCausality>::InitCausality,
        0LL,
        0LL);
  }
  else
  {
    v4 = -2147483635;
    RoOriginateError(2147483661LL, 0LL);
  }
  return (unsigned int)v4;
}
