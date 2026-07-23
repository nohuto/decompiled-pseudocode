/*
 * XREFs of EtwpTiFreeTokenIdentity @ 0x140A93010
 * Callers:
 *     EtwTiLogImpersonateClient @ 0x1408E8518 (EtwTiLogImpersonateClient.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall EtwpTiFreeTokenIdentity(__int64 a1)
{
  void *v2; // rcx
  void *v3; // rcx
  __int64 result; // rax

  v2 = *(void **)(a1 + 8);
  if ( v2 )
    ExFreePoolWithTag(v2, 0);
  v3 = *(void **)(a1 + 24);
  if ( v3 )
    ExFreePoolWithTag(v3, 0);
  result = 0LL;
  *(_OWORD *)a1 = 0LL;
  *(_OWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  return result;
}
