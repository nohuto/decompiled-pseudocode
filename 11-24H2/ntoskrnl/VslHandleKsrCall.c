/*
 * XREFs of VslHandleKsrCall @ 0x14058D56C
 * Callers:
 *     PsDispatchIumService @ 0x14048D020 (PsDispatchIumService.c)
 * Callees:
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall VslHandleKsrCall(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int128 v5; // xmm1
  __int128 v6; // xmm0
  __int128 v7; // xmm1
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  __int64 result; // rax
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  __int128 v16; // [rsp+20h] [rbp-19h] BYREF
  __int128 v17; // [rsp+30h] [rbp-9h]
  __int128 v18; // [rsp+40h] [rbp+7h]
  __int128 v19; // [rsp+50h] [rbp+17h]
  __int128 v20; // [rsp+60h] [rbp+27h]
  __int128 v21; // [rsp+70h] [rbp+37h]

  v5 = *(_OWORD *)(a1 + 24);
  v16 = *(_OWORD *)(a1 + 8);
  v6 = *(_OWORD *)(a1 + 40);
  v17 = v5;
  v7 = *(_OWORD *)(a1 + 56);
  v18 = v6;
  v8 = *(_OWORD *)(a1 + 72);
  v19 = v7;
  v9 = *(_OWORD *)(a1 + 88);
  v20 = v8;
  v21 = v9;
  result = guard_dispatch_icall_no_overrides(&v16, a2, a3, a4);
  v11 = v17;
  *(_OWORD *)(a1 + 8) = v16;
  v12 = v18;
  *(_OWORD *)(a1 + 24) = v11;
  v13 = v19;
  *(_OWORD *)(a1 + 40) = v12;
  v14 = v20;
  *(_OWORD *)(a1 + 56) = v13;
  v15 = v21;
  *(_OWORD *)(a1 + 72) = v14;
  *(_OWORD *)(a1 + 88) = v15;
  return result;
}
