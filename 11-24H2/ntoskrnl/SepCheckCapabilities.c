/*
 * XREFs of SepCheckCapabilities @ 0x140A8926C
 * Callers:
 *     SepCreateAppContainerToken @ 0x140606A30 (SepCreateAppContainerToken.c)
 *     SeTokenCanImpersonate @ 0x1408E8180 (SeTokenCanImpersonate.c)
 *     NtCreateLowBoxToken @ 0x140AD5A60 (NtCreateLowBoxToken.c)
 * Callees:
 *     RtlEqualSid @ 0x1403EB6C0 (RtlEqualSid.c)
 *     RtlSubAuthoritySid @ 0x140445040 (RtlSubAuthoritySid.c)
 *     RtlSubAuthorityCountSid @ 0x140454FB0 (RtlSubAuthorityCountSid.c)
 *     RtlCompareMemory @ 0x1406B4930 (RtlCompareMemory.c)
 *     SeQueryInformationToken @ 0x1408E4F90 (SeQueryInformationToken.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SepCheckCapabilities(PACCESS_TOKEN Token, unsigned int a2, __int64 a3, __int64 a4, char *a5)
{
  char *v5; // rsi
  unsigned int v6; // r14d
  unsigned int v7; // ebx
  NTSTATUS v9; // edi
  PSID *v10; // rcx
  unsigned int v11; // esi
  char v12; // r15
  unsigned int v13; // eax
  BOOLEAN v14; // al
  _BYTE *v15; // rcx
  PSID v16; // rbx
  PULONG v17; // rbx
  PULONG v18; // rax
  PVOID v20; // [rsp+20h] [rbp-20h] BYREF
  PSID *v21; // [rsp+28h] [rbp-18h]
  PVOID P; // [rsp+30h] [rbp-10h] BYREF
  PVOID v23; // [rsp+38h] [rbp-8h] BYREF
  PVOID TokenInformation; // [rsp+98h] [rbp+58h] BYREF

  v5 = a5;
  v6 = 0;
  v7 = a2;
  P = 0LL;
  v23 = 0LL;
  LODWORD(TokenInformation) = 0;
  LODWORD(v20) = 0;
  *a5 = 0;
  v9 = SeQueryInformationToken(Token, TokenIsAppContainer, &TokenInformation);
  if ( v9 >= 0 )
  {
    if ( (_DWORD)TokenInformation )
    {
      v9 = SeQueryInformationToken(Token, TokenCapabilities, &P);
      if ( v9 >= 0 )
      {
        v9 = SeQueryInformationToken(Token, TokenIsLessPrivilegedAppContainer, &v20);
        if ( v9 >= 0 )
        {
          v10 = (PSID *)P;
          v11 = 0;
          v21 = (PSID *)P;
          while ( 1 )
          {
            v12 = 1;
            if ( v11 >= v7 )
              break;
            v12 = 0;
            if ( !(_DWORD)v20 )
            {
              while ( v6 < 0x12 )
              {
                if ( RtlEqualSid(*(PSID *)(a3 + 16LL * v11), (PSID)*SeLpacCapabilitySids[v6]) )
                  goto LABEL_24;
                ++v6;
              }
              v10 = v21;
              v6 = 0;
            }
            v13 = *(_DWORD *)P;
            HIDWORD(v20) = *(_DWORD *)P;
            while ( v6 < v13 )
            {
              v14 = RtlEqualSid(v10[2 * v6 + 1], *(PSID *)(a3 + 16LL * v11));
              v10 = v21;
              if ( v14 && LODWORD(v21[2 * v6 + 2]) == *(_DWORD *)(a3 + 16LL * v11 + 8) )
                goto LABEL_25;
              v13 = HIDWORD(v20);
              ++v6;
            }
            v15 = *(_BYTE **)(a3 + 16LL * v11);
            if ( v15[1] != 9 || *RtlSubAuthoritySid(v15, 0) != 3 )
              break;
            if ( !v23 )
            {
              v9 = SeQueryInformationToken(Token, TokenAppContainerSid, &v23);
              if ( v9 < 0 )
                goto LABEL_28;
            }
            v16 = *(PSID *)v23;
            if ( *RtlSubAuthorityCountSid(*(PSID *)v23) < 8u
              || (v17 = RtlSubAuthoritySid(v16, 1u),
                  v18 = RtlSubAuthoritySid(*(PSID *)(a3 + 16LL * v11), 1u),
                  RtlCompareMemory(v18, v17, 0x1CuLL) != 28) )
            {
              v12 = 0;
              break;
            }
LABEL_24:
            v10 = v21;
LABEL_25:
            v7 = a2;
            ++v11;
            v6 = 0;
          }
          *a5 = v12;
        }
      }
    }
    else
    {
      *v5 = 1;
    }
  }
LABEL_28:
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( v23 )
    ExFreePoolWithTag(v23, 0);
  return (unsigned int)v9;
}
