/*
 * XREFs of EtwpTiQueryTokenIdentity @ 0x140A69F44
 * Callers:
 *     EtwTiLogImpersonateClient @ 0x1408E8518 (EtwTiLogImpersonateClient.c)
 * Callees:
 *     SeQueryInformationToken @ 0x1408E4F90 (SeQueryInformationToken.c)
 *     EtwpTiSerializeTokenGroups @ 0x140A69FE8 (EtwpTiSerializeTokenGroups.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall EtwpTiQueryTokenIdentity(__int64 a1, void *a2)
{
  NTSTATUS v3; // ebx
  __int64 v4; // rax
  PVOID v5; // rcx
  PVOID TokenInformation; // [rsp+30h] [rbp+8h] BYREF

  TokenInformation = 0LL;
  v3 = SeQueryInformationToken(a2, MaxTokenInfoClass, &TokenInformation);
  if ( v3 < 0
    || (v3 = EtwpTiSerializeTokenGroups(
               *((_QWORD *)TokenInformation + 9),
               *((unsigned int *)TokenInformation + 16),
               a1 + 32,
               a1 + 24),
        v3 < 0) )
  {
    v5 = TokenInformation;
  }
  else
  {
    v4 = *((_QWORD *)TokenInformation + 7);
    *(_QWORD *)(a1 + 8) = TokenInformation;
    v5 = 0LL;
    *(_QWORD *)(a1 + 16) = (unsigned int)v4 + ((__int64)SHIDWORD(v4) << 32);
    TokenInformation = 0LL;
  }
  if ( v5 )
    ExFreePoolWithTag(v5, 0);
  *(_DWORD *)a1 = v3;
  return (unsigned int)v3;
}
