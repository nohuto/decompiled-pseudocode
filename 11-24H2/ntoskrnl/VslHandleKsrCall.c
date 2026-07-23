/*
 * XREFs of VslHandleKsrCall @ 0x14058A85C
 * Callers:
 *     PsDispatchIumService @ 0x1404E66B4 (PsDispatchIumService.c)
 * Callees:
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall VslHandleKsrCall(__int64 a1, __int64 a2)
{
  __int128 v3; // xmm1
  __int128 v4; // xmm0
  __int128 v5; // xmm1
  __int128 v6; // xmm0
  __int128 v7; // xmm1
  __int64 result; // rax
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int128 v14; // [rsp+20h] [rbp-19h] BYREF
  __int128 v15; // [rsp+30h] [rbp-9h]
  __int128 v16; // [rsp+40h] [rbp+7h]
  __int128 v17; // [rsp+50h] [rbp+17h]
  __int128 v18; // [rsp+60h] [rbp+27h]
  __int128 v19; // [rsp+70h] [rbp+37h]

  v3 = *(_OWORD *)(a1 + 24);
  v14 = *(_OWORD *)(a1 + 8);
  v4 = *(_OWORD *)(a1 + 40);
  v15 = v3;
  v5 = *(_OWORD *)(a1 + 56);
  v16 = v4;
  v6 = *(_OWORD *)(a1 + 72);
  v17 = v5;
  v7 = *(_OWORD *)(a1 + 88);
  v18 = v6;
  v19 = v7;
  result = guard_dispatch_icall_no_overrides(&v14, a2);
  v9 = v15;
  *(_OWORD *)(a1 + 8) = v14;
  v10 = v16;
  *(_OWORD *)(a1 + 24) = v9;
  v11 = v17;
  *(_OWORD *)(a1 + 40) = v10;
  v12 = v18;
  *(_OWORD *)(a1 + 56) = v11;
  v13 = v19;
  *(_OWORD *)(a1 + 72) = v12;
  *(_OWORD *)(a1 + 88) = v13;
  return result;
}
