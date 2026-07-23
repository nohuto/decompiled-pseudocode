/*
 * XREFs of ExpWnfQueryCurrentUserSID @ 0x1408E154C
 * Callers:
 *     ExpWnfGetCurrentScopeInstance @ 0x1408E13DC (ExpWnfGetCurrentScopeInstance.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 *     PsReferencePrimaryTokenWithTag @ 0x14031F4D0 (PsReferencePrimaryTokenWithTag.c)
 *     ObFastDereferenceObject @ 0x140324D60 (ObFastDereferenceObject.c)
 *     PsReferenceEffectiveToken @ 0x140858F20 (PsReferenceEffectiveToken.c)
 *     SeQueryUserSidToken @ 0x1408E1C90 (SeQueryUserSidToken.c)
 */

__int64 __fastcall ExpWnfQueryCurrentUserSID(__int64 a1, __int64 a2, __int64 a3, unsigned int *a4, _DWORD *a5)
{
  int v5; // ebx
  void *v9; // rdi
  int v10; // r14d
  int UserSidToken; // ebp
  void *v13; // rax
  int v14; // [rsp+30h] [rbp-28h] BYREF
  int v15[9]; // [rsp+34h] [rbp-24h] BYREF
  bool v16; // [rsp+68h] [rbp+10h] BYREF

  v5 = 0;
  v14 = 0;
  v15[0] = 0;
  if ( !a2 )
  {
    v9 = (void *)PsReferencePrimaryTokenWithTag(a1, 0x74726853u);
    v10 = 1;
LABEL_3:
    UserSidToken = SeQueryUserSidToken(v9, a3, *a4, a4);
    if ( v10 == 1 )
    {
      ObFastDereferenceObject((__int64 *)(a1 + 584), (ULONG_PTR)v9, 0x74726853u);
    }
    else if ( v9 )
    {
      ObfDereferenceObjectWithTag(v9, 0x74726853u);
    }
    if ( UserSidToken >= 0 )
    {
      LOBYTE(v5) = v10 == 1;
      *a5 = v5;
    }
    return (unsigned int)UserSidToken;
  }
  v13 = (void *)PsReferenceEffectiveToken(a2, 0x74726853u, &v14, &v16, v15, 0LL);
  v9 = v13;
  v10 = v14;
  if ( v15[0] >= 2 || v14 != 2 )
    goto LABEL_3;
  if ( v13 )
    ObfDereferenceObjectWithTag(v13, 0x74726853u);
  return 3221225637LL;
}
