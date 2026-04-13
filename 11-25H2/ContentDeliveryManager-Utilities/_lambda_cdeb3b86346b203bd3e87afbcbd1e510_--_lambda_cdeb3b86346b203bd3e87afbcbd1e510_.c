/*
 * XREFs of _lambda_cdeb3b86346b203bd3e87afbcbd1e510_::_lambda_cdeb3b86346b203bd3e87afbcbd1e510_ @ 0x1800495EC
 * Callers:
 *     Windows::Internal::MakeOpLambda_0_Windows::Internal::CNoResult__lambda_cdeb3b86346b203bd3e87afbcbd1e510___ @ 0x180047A54 (Windows--Internal--MakeOpLambda_0_Windows--Internal--CNoResult__lambda_cdeb3b86346b203bd3e87afbc.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall lambda_cdeb3b86346b203bd3e87afbcbd1e510_::_lambda_cdeb3b86346b203bd3e87afbcbd1e510_(
        __int64 a1,
        __int64 a2)
{
  _QWORD *v2; // r8
  _QWORD *v3; // r8
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rax
  _QWORD *v7; // rdx

  *(_QWORD *)a1 = *(_QWORD *)a2;
  v2 = (_QWORD *)(a2 + 8);
  *(_QWORD *)(a1 + 8) = 0LL;
  if ( a1 + 8 != a2 + 8 )
  {
    *(_QWORD *)(a1 + 8) = *v2;
    *v2 = 0LL;
  }
  *(_DWORD *)(a1 + 16) = *(_DWORD *)(a2 + 16);
  v3 = (_QWORD *)(a2 + 88);
  *(_QWORD *)(a1 + 24) = *(_QWORD *)(a2 + 24);
  *(_QWORD *)(a2 + 24) = 0LL;
  *(_BYTE *)(a2 + 32) = 1;
  v4 = *(_QWORD *)(a2 + 40);
  *(_BYTE *)(a1 + 32) = 0;
  *(_QWORD *)(a1 + 40) = v4;
  *(_QWORD *)(a2 + 40) = 0LL;
  *(_BYTE *)(a2 + 48) = 1;
  v5 = *(_QWORD *)(a2 + 56);
  *(_BYTE *)(a1 + 48) = 0;
  *(_QWORD *)(a1 + 56) = v5;
  *(_QWORD *)(a2 + 56) = 0LL;
  *(_BYTE *)(a2 + 64) = 1;
  v6 = *(_QWORD *)(a2 + 72);
  *(_BYTE *)(a1 + 64) = 0;
  *(_QWORD *)(a1 + 72) = v6;
  *(_BYTE *)(a1 + 80) = 0;
  *(_QWORD *)(a1 + 88) = 0LL;
  *(_QWORD *)(a2 + 72) = 0LL;
  *(_BYTE *)(a2 + 80) = 1;
  if ( a1 + 88 != a2 + 88 )
  {
    *(_QWORD *)(a1 + 88) = *v3;
    *v3 = 0LL;
  }
  v7 = (_QWORD *)(a2 + 96);
  *(_QWORD *)(a1 + 96) = 0LL;
  if ( (_QWORD *)(a1 + 96) != v7 )
  {
    *(_QWORD *)(a1 + 96) = *v7;
    *v7 = 0LL;
  }
  return a1;
}
