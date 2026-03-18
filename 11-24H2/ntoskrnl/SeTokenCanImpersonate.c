/*
 * XREFs of SeTokenCanImpersonate @ 0x140910A30
 * Callers:
 *     PsImpersonateClient @ 0x1409102D0 (PsImpersonateClient.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402595A0 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseResourceLite @ 0x14025A450 (ExReleaseResourceLite.c)
 *     SepAcquireOrderedReadLocks @ 0x140343E00 (SepAcquireOrderedReadLocks.c)
 *     RtlSidDominatesForTrust @ 0x140359950 (RtlSidDominatesForTrust.c)
 *     SepSidInToken @ 0x1403624E0 (SepSidInToken.c)
 *     RtlEqualSid @ 0x140364150 (RtlEqualSid.c)
 *     SepSidInTokenSidHash @ 0x1403DF2C0 (SepSidInTokenSidHash.c)
 *     RtlSidDominates @ 0x1403F9CB0 (RtlSidDominates.c)
 *     SepCopyTokenIntegrity @ 0x1404194A0 (SepCopyTokenIntegrity.c)
 *     SeTokenIsRestricted @ 0x140432500 (SeTokenIsRestricted.c)
 *     SeTokenIsWriteRestricted @ 0x14045A0B0 (SeTokenIsWriteRestricted.c)
 *     SepLogUnmatchedSessionFlagImpersonationAttempt @ 0x1404CEAE4 (SepLogUnmatchedSessionFlagImpersonationAttempt.c)
 *     RtlIsParentOfChildAppContainer @ 0x1406FB2C0 (RtlIsParentOfChildAppContainer.c)
 *     SeQueryInformationToken @ 0x14090D870 (SeQueryInformationToken.c)
 *     RtlQueryElevationFlags @ 0x140911360 (RtlQueryElevationFlags.c)
 *     RtlIsMultiSessionSku @ 0x1409113D0 (RtlIsMultiSessionSku.c)
 *     SeTokenIsElevated @ 0x140A15590 (SeTokenIsElevated.c)
 *     SepCheckCapabilities @ 0x140A8CD3C (SepCheckCapabilities.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SeTokenCanImpersonate(__int64 Token, __int64 a2, int a3, _BYTE *a4)
{
  __int64 result; // rax
  unsigned __int64 v7; // r8
  _BYTE *v8; // r11
  __int64 v9; // rdx
  int IsElevated; // esi
  __int64 v11; // rcx
  char v12; // r14
  bool v13; // zf
  int v14; // eax
  void *v15; // r14
  void *v16; // r15
  void *v17; // rbx
  void *v18; // rdi
  unsigned __int8 *v19; // r14
  bool v20; // si
  unsigned __int8 *v21; // r14
  unsigned __int8 *v22; // r14
  bool v23; // sf
  char v24; // al
  void *Buf2[2]; // [rsp+30h] [rbp-28h] BYREF
  void *Buf1[2]; // [rsp+40h] [rbp-18h] BYREF
  PVOID TokenInformation; // [rsp+80h] [rbp+28h] BYREF
  int v28; // [rsp+88h] [rbp+30h] BYREF
  __int64 v29; // [rsp+90h] [rbp+38h] BYREF

  LOBYTE(TokenInformation) = 0;
  LOBYTE(v29) = 0;
  v28 = 0;
  *a4 = 0;
  *(_OWORD *)Buf1 = 0LL;
  *(_OWORD *)Buf2 = 0LL;
  if ( a3 < 2 )
    return 0LL;
  if ( *(_DWORD *)(a2 + 24) != 998 || *(_DWORD *)(a2 + 28) )
  {
    result = RtlSidDominatesForTrust(*(_QWORD *)(Token + 1104), *(_QWORD *)(a2 + 1104), (bool *)&v29);
    if ( (int)result < 0 )
      return result;
    if ( !(_BYTE)v29 )
      *v8 = 1;
    if ( (*(_DWORD *)(Token + 64) & *(_DWORD *)(Token + 72) & 0x20000000) != 0 )
      return 0LL;
    SepAcquireOrderedReadLocks(Token, a2, v7);
    SepCopyTokenIntegrity(Token, (__int64)Buf1);
    SepCopyTokenIntegrity(a2, (__int64)Buf2);
    IsElevated = RtlSidDominates((char *)Buf1[0], (char *)Buf2[0], &TokenInformation);
    if ( IsElevated < 0 )
    {
LABEL_30:
      ExReleaseResourceLite(*(PERESOURCE *)(Token + 48));
      KeLeaveCriticalRegionThread();
      ExReleaseResourceLite(*(PERESOURCE *)(a2 + 48));
      KeLeaveCriticalRegionThread();
      return (unsigned int)IsElevated;
    }
    if ( (_BYTE)TokenInformation )
    {
      if ( *(_DWORD *)(a2 + 120) == *(_DWORD *)(Token + 120) )
      {
        v11 = *(unsigned int *)(*(_QWORD *)(a2 + 216) + 40LL);
        if ( (v11 & 0x10) == 0 && !(unsigned __int8)RtlIsMultiSessionSku(v11, v9) )
        {
          v19 = (unsigned __int8 *)SeDefaultAccountAliasSid;
          v20 = SepSidInToken(Token, 0LL, (unsigned __int8 *)SeDefaultAccountAliasSid, 0, 0, 0);
          if ( v20 && SeTokenIsRestricted((PACCESS_TOKEN)Token) )
            v20 = SepSidInToken(Token, 0LL, v19, 0, 1, 0);
          if ( SepAllowSessionImpersonationCap && (*(_DWORD *)(Token + 200) & 0x4000) == 0 )
          {
            v21 = (unsigned __int8 *)SeSessionImpersonationCapabilityGroupSid;
            if ( SepSidInToken(Token, 0LL, (unsigned __int8 *)SeSessionImpersonationCapabilityGroupSid, 0, 0, 0)
              && (!SeTokenIsRestricted((PACCESS_TOKEN)Token) || SepSidInToken(Token, 0LL, v21, 0, 1, 0)) )
            {
              goto LABEL_35;
            }
            if ( v20 )
              goto LABEL_35;
          }
          if ( (*(_DWORD *)(a2 + 200) & 0x4000) != 0 )
          {
            v22 = (unsigned __int8 *)SeConstrainedImpersonationCapabilityGroupSid;
            if ( (SepSidInToken(Token, 0LL, (unsigned __int8 *)SeConstrainedImpersonationCapabilityGroupSid, 0, 0, 0)
               && (!SeTokenIsRestricted((PACCESS_TOKEN)Token) || SepSidInToken(Token, 0LL, v22, 0, 1, 0))
               || v20)
              && (*(_DWORD *)(Token + 200) & 0x4000) == 0 )
            {
              goto LABEL_35;
            }
            LOBYTE(v29) = SepSidInTokenSidHash(
                            Token + 808,
                            0LL,
                            (unsigned __int8 *)SeConstrainedImpersonationCapabilitySid,
                            0,
                            1,
                            0);
            if ( (_BYTE)v29 )
            {
              v23 = (int)SepCheckCapabilities((PACCESS_TOKEN)Token, (__int64)&v29) < 0;
              v24 = v29;
              if ( !v23 )
              {
                if ( (_BYTE)v29 )
                {
LABEL_35:
                  IsElevated = 0;
                  goto LABEL_30;
                }
                v24 = RtlEqualSid(*(PSID *)(Token + 784), *(PSID *)(a2 + 784));
              }
              if ( v24 )
                goto LABEL_35;
            }
          }
        }
      }
      if ( *(_DWORD *)(Token + 24) == *(_DWORD *)(a2 + 224) && *(_DWORD *)(Token + 28) == *(_DWORD *)(a2 + 228) )
        goto LABEL_35;
      if ( RtlEqualSid(**(PSID **)(Token + 152), **(PSID **)(a2 + 152)) )
      {
        if ( (int)RtlQueryElevationFlags(&v28) < 0 || (v28 & 1) == 0 )
          goto LABEL_27;
        v12 = 0;
        TokenInformation = 0LL;
        v13 = *(_DWORD *)(a2 + 192) == 2;
        LOBYTE(v29) = 0;
        if ( !v13 || *(int *)(a2 + 196) >= 2 )
        {
          IsElevated = SeQueryInformationToken((PACCESS_TOKEN)a2, TokenElevation, &TokenInformation);
          if ( IsElevated >= 0 && *(_DWORD *)TokenInformation )
          {
            v12 = 1;
            LOBYTE(v29) = 1;
          }
          if ( TokenInformation )
            ExFreePoolWithTag(TokenInformation, 0);
          if ( IsElevated < 0 )
            goto LABEL_30;
        }
        if ( v12 )
        {
          IsElevated = SeTokenIsElevated(Token, &v29);
          if ( IsElevated < 0 )
            goto LABEL_30;
          if ( !(_BYTE)v29 && (*(_DWORD *)(*(_QWORD *)(Token + 216) + 40LL) & 4) != 0 )
            goto LABEL_33;
        }
        if ( (*(_DWORD *)(*(_QWORD *)(Token + 216) + 40LL) & 4) != 0
          && (*(_DWORD *)(*(_QWORD *)(a2 + 216) + 40LL) & 4) == 0 )
        {
          SepLogUnmatchedSessionFlagImpersonationAttempt(Token, a2);
        }
        else
        {
LABEL_27:
          IsElevated = 0;
          if ( (*(_DWORD *)(Token + 200) & 0x4000) == 0
            || (*(_DWORD *)(a2 + 200) & 0x4000) != 0
            && ((v15 = *(void **)(a2 + 784), v16 = *(void **)(Token + 784), RtlEqualSid(v16, v15))
             || RtlIsParentOfChildAppContainer(v16, v15)) )
          {
            if ( !SeTokenIsRestricted((PACCESS_TOKEN)Token)
              || SeTokenIsRestricted((PACCESS_TOKEN)a2)
              && (SeTokenIsWriteRestricted((PACCESS_TOKEN)Token) || !SeTokenIsWriteRestricted((PACCESS_TOKEN)a2)) )
            {
              v14 = *(_DWORD *)(a2 + 120);
              if ( *(_DWORD *)(Token + 120) == v14 || v14 )
                goto LABEL_30;
            }
          }
        }
      }
    }
LABEL_33:
    IsElevated = -1073741727;
    goto LABEL_30;
  }
  if ( (*(_DWORD *)(Token + 200) & 0x4000) == 0 )
    return 0LL;
  if ( (*(_DWORD *)(a2 + 200) & 0x4000) != 0 )
  {
    v17 = *(void **)(a2 + 784);
    v18 = *(void **)(Token + 784);
    if ( RtlEqualSid(v18, v17) || RtlIsParentOfChildAppContainer(v18, v17) )
      return 0LL;
  }
  return 3221225569LL;
}
