/*
 * XREFs of SeCompareTokens @ 0x140A179B8
 * Callers:
 *     EtwTiLogImpersonateClient @ 0x1408E8518 (EtwTiLogImpersonateClient.c)
 *     NtCompareTokens @ 0x140A17870 (NtCompareTokens.c)
 * Callees:
 *     SepAcquireOrderedReadLocks @ 0x1403232E0 (SepAcquireOrderedReadLocks.c)
 *     RtlEqualSid @ 0x1403EB6C0 (RtlEqualSid.c)
 *     SeTokenIsRestricted @ 0x140424A30 (SeTokenIsRestricted.c)
 *     SepReleaseOrderedReadLocks @ 0x14044A464 (SepReleaseOrderedReadLocks.c)
 *     SeTokenIsWriteRestricted @ 0x14044F500 (SeTokenIsWriteRestricted.c)
 *     SeQueryInformationToken @ 0x1408E4F90 (SeQueryInformationToken.c)
 *     SepCompareClaimAttributes @ 0x140A17C10 (SepCompareClaimAttributes.c)
 *     SepCompareSidAndAttributeArrays @ 0x140A17CFC (SepCompareSidAndAttributeArrays.c)
 *     AuthzBasepCompareLegacySecurityAttributesInformation @ 0x140A17DEC (AuthzBasepCompareLegacySecurityAttributesInformation.c)
 */

__int64 __fastcall SeCompareTokens(unsigned int *Token, unsigned int *a2, bool *a3)
{
  bool v3; // di
  NTSTATUS v7; // r14d
  __int64 v8; // rbx
  __int64 v9; // r15
  void *v10; // rdx
  void *v11; // rcx
  BOOLEAN IsRestricted; // bl
  __int64 result; // rax
  BOOLEAN v14; // bl
  PVOID TokenInformation; // [rsp+50h] [rbp+8h] BYREF
  PVOID v16; // [rsp+58h] [rbp+10h] BYREF

  v3 = 0;
  LODWORD(TokenInformation) = 0;
  LODWORD(v16) = 0;
  v7 = 0;
  if ( Token == a2 )
  {
    v3 = 1;
  }
  else
  {
    SepAcquireOrderedReadLocks((unsigned __int64)Token, (unsigned __int64)a2, (unsigned __int64)a3);
    v8 = *((_QWORD *)a2 + 19);
    v9 = *((_QWORD *)Token + 19);
    if ( RtlEqualSid(*(PSID *)v9, *(PSID *)v8) )
    {
      if ( ((*(_BYTE *)(v8 + 8) ^ *(_BYTE *)(v9 + 8)) & 0x14) == 0 )
      {
        v7 = SeQueryInformationToken(Token, TokenIsAppContainer, &TokenInformation);
        if ( v7 >= 0 )
        {
          v7 = SeQueryInformationToken(a2, TokenIsAppContainer, &v16);
          if ( v7 >= 0
            && (_DWORD)TokenInformation == (_DWORD)v16
            && (!(_DWORD)TokenInformation
             || RtlEqualSid(*((PSID *)Token + 98), *((PSID *)a2 + 98))
             && (unsigned __int8)SepCompareSidAndAttributeArrays(
                                   *((_QWORD *)Token + 99),
                                   Token[200],
                                   *((_QWORD *)a2 + 99),
                                   a2[200])) )
          {
            v10 = (void *)*((_QWORD *)a2 + 138);
            v11 = (void *)*((_QWORD *)Token + 138);
            if ( (v11 != 0LL) == (v10 != 0LL) && (!v11 || RtlEqualSid(v11, v10)) )
            {
              IsRestricted = SeTokenIsRestricted(Token);
              if ( IsRestricted == SeTokenIsRestricted(a2) )
              {
                if ( !IsRestricted
                  || (v14 = SeTokenIsWriteRestricted(a2), SeTokenIsWriteRestricted(Token) == v14)
                  && (unsigned __int8)SepCompareSidAndAttributeArrays(
                                        *((_QWORD *)Token + 20),
                                        Token[32],
                                        *((_QWORD *)a2 + 20),
                                        a2[32]) )
                {
                  if ( *((_QWORD *)Token + 9) == *((_QWORD *)a2 + 9)
                    && *((_QWORD *)Token + 8) == *((_QWORD *)a2 + 8)
                    && Token[53] == a2[53]
                    && (unsigned __int8)SepCompareSidAndAttributeArrays(
                                          *((_QWORD *)Token + 19) + 16LL,
                                          Token[31] - 1,
                                          *((_QWORD *)a2 + 19) + 16LL,
                                          a2[31] - 1)
                    && (unsigned __int8)SepCompareClaimAttributes(*((_QWORD *)Token + 137), *((_QWORD *)a2 + 137)) )
                  {
                    v3 = (unsigned __int8)AuthzBasepCompareLegacySecurityAttributesInformation(
                                            *((_QWORD *)Token + 97),
                                            *((_QWORD *)a2 + 97)) != 0;
                  }
                }
              }
            }
          }
        }
      }
    }
    SepReleaseOrderedReadLocks((__int64)Token, (__int64)a2);
  }
  result = (unsigned int)v7;
  *a3 = v3;
  return result;
}
