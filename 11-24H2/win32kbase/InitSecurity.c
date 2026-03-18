/*
 * XREFs of InitSecurity @ 0x1402E3DD4
 * Callers:
 *     Win32UserInitialize @ 0x1402E5DE4 (Win32UserInitialize.c)
 * Callees:
 *     AllocAce @ 0x1400175A0 (AllocAce.c)
 *     CreateSecurityDescriptor @ 0x140017B00 (CreateSecurityDescriptor.c)
 *     ?Win32AllocPoolWithQuotaZInitImpl@@YAPEAX_K0K@Z @ 0x1400183CC (-Win32AllocPoolWithQuotaZInitImpl@@YAPEAX_K0K@Z.c)
 *     GreDeleteFastMutex @ 0x14001BF40 (GreDeleteFastMutex.c)
 */

__int64 InitSecurity()
{
  PSID SeWorldSid; // rbp
  ULONG v1; // r14d
  __int64 v2; // rcx
  __int64 v3; // rax
  unsigned int v4; // edi
  void *v5; // rbx
  char *v6; // rax
  char *v7; // rsi
  void *v8; // rax
  char *v9; // rax
  char *v10; // rcx
  void *v12; // rax
  char *v13; // rax
  char *v14; // rax
  char *v15; // rbp
  struct _ACL *SecurityDescriptor; // rbx
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // rcx
  _DWORD *UserSessionState; // rax
  __int64 v21; // rdx
  _DWORD *v22; // rcx
  ULONG AceListLength; // [rsp+50h] [rbp+8h] BYREF

  SeWorldSid = SeExports->SeWorldSid;
  v1 = RtlLengthSid(SeWorldSid);
  v3 = Win32AllocPoolWithQuotaZInitImpl(v2, v1 + 8, 0x65737355u);
  v4 = 0;
  v5 = (void *)v3;
  if ( !v3 )
    return 0LL;
  *(_WORD *)(v3 + 2) = v1 + 8;
  AceListLength = v1 + 8;
  *(_WORD *)v3 = 3584;
  *(_DWORD *)(v3 + 4) = 983935;
  RtlCopySid(v1, (PSID)(v3 + 8), SeWorldSid);
  v6 = (char *)AllocAce(v5, 0, 14, 983935, SeExports->SeRestrictedSid, &AceListLength);
  v7 = v6;
  if ( !v6 )
    goto LABEL_5;
  v8 = (void *)AllocAce(v6, 0, 9, 0x10000000, SeExports->SeWorldSid, &AceListLength);
  v5 = v8;
  if ( !v8 )
    goto LABEL_11;
  v9 = (char *)AllocAce(v8, 0, 9, 0x10000000, SeExports->SeRestrictedSid, &AceListLength);
  v7 = v9;
  if ( !v9 )
  {
LABEL_5:
    v10 = (char *)v5;
LABEL_6:
    GreDeleteFastMutex(v10);
    return 0LL;
  }
  v12 = (void *)AllocAce(v9, 0, 0, 5, SeExports->SeAliasAdminsSid, &AceListLength);
  v5 = v12;
  if ( !v12 )
    goto LABEL_11;
  v13 = (char *)AllocAce(v12, 0, 0, 2, SeExports->SeWorldSid, &AceListLength);
  v7 = v13;
  if ( !v13 )
    goto LABEL_5;
  v14 = (char *)AllocAce(v13, 0, 0, 2, SeExports->SeRestrictedSid, &AceListLength);
  v15 = v14;
  if ( !v14 )
  {
LABEL_11:
    v10 = v7;
    goto LABEL_6;
  }
  SecurityDescriptor = CreateSecurityDescriptor(v14, AceListLength, 0);
  *(_QWORD *)(W32GetUserSessionState(v17) + 63576) = SecurityDescriptor;
  GreDeleteFastMutex(v15);
  W32GetUserSessionState(v18);
  UserSessionState = (_DWORD *)W32GetUserSessionState(v19);
  v21 = 24LL;
  v22 = UserSessionState + 10660;
  do
  {
    *(v22 - 2) = 0x20000;
    *(v22 - 1) = 0x20000;
    *v22 = 0x20000;
    v22[1] = 2031616;
    v22 += 4;
    --v21;
  }
  while ( v21 );
  UserSessionState[10666] = 131079;
  UserSessionState[10667] = 135160;
  UserSessionState[10668] = 0x20000;
  UserSessionState[10669] = 2035711;
  LOBYTE(v4) = *(_QWORD *)(W32GetUserSessionState(v22) + 63576) != 0LL;
  return v4;
}
