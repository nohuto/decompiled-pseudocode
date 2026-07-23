/*
 * XREFs of SepAppendAceToTokenDefaultDacl @ 0x14036B568
 * Callers:
 *     NtCreateLowBoxToken @ 0x140ACDB00 (NtCreateLowBoxToken.c)
 * Callees:
 *     RtlFindAceBySid @ 0x14036B330 (RtlFindAceBySid.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     RtlAddAce @ 0x14092B010 (RtlAddAce.c)
 *     RtlCreateAcl @ 0x140968260 (RtlCreateAcl.c)
 *     RtlAddAccessAllowedAce @ 0x1409A6F20 (RtlAddAccessAllowedAce.c)
 *     RtlQueryInformationAcl @ 0x1409EC240 (RtlQueryInformationAcl.c)
 *     SepExpandDynamic @ 0x140A4CE40 (SepExpandDynamic.c)
 *     SepAppendDefaultDacl @ 0x140A5AE20 (SepAppendDefaultDacl.c)
 *     SepFreeDefaultDacl @ 0x140A5DD10 (SepFreeDefaultDacl.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SepAppendAceToTokenDefaultDacl(__int64 a1, unsigned __int8 *a2)
{
  ACL *v2; // rsi
  int AclSize; // ebx
  NTSTATUS Acl; // edi
  ULONG v7; // r12d
  ACL *Pool2; // rax
  ACL *v9; // r14
  ULONG v10; // ebx
  ULONG AclInformation; // [rsp+30h] [rbp-58h] BYREF
  __int64 v13; // [rsp+38h] [rbp-50h] BYREF
  int v14; // [rsp+40h] [rbp-48h]

  v2 = *(ACL **)(a1 + 184);
  v13 = 0LL;
  v14 = 0;
  AclInformation = 0;
  if ( !v2 || RtlFindAceBySid((__int64)v2, a2, 0LL) )
  {
    return 0;
  }
  else
  {
    AclSize = v2->AclSize;
    Acl = RtlQueryInformationAcl(v2, &AclInformation, 4u, AclRevisionInformation);
    if ( Acl >= 0 )
    {
      Acl = RtlQueryInformationAcl(v2, &v13, 0xCu, AclSizeInformation);
      if ( Acl >= 0 )
      {
        v7 = (AclSize + 4 * a2[1] + 19) & 0xFFFFFFFC;
        Pool2 = (ACL *)ExAllocatePool2(0x100uLL);
        v9 = Pool2;
        if ( Pool2 )
        {
          v10 = AclInformation;
          Acl = RtlCreateAcl(Pool2, v7, AclInformation);
          if ( Acl >= 0 )
          {
            if ( (unsigned __int8)(v2->AclRevision - 2) <= 2u
              && v2->AceCount
              && &v2[1] < (ACL *)((char *)v2 + v2->AclSize) )
            {
              Acl = RtlAddAce(v9, v10, 0, &v2[1], HIDWORD(v13) - 8);
              if ( Acl >= 0 )
              {
                Acl = RtlAddAccessAllowedAce(v9, v10, 0x10000000u, a2);
                if ( Acl >= 0 )
                {
                  Acl = SepExpandDynamic(
                          a1,
                          (v7 + 4 * *(unsigned __int8 *)(*(_QWORD *)(a1 + 168) + 1LL) + 11) & 0xFFFFFFFC);
                  if ( Acl >= 0 )
                  {
                    SepFreeDefaultDacl(a1);
                    SepAppendDefaultDacl(a1, v9);
                  }
                }
              }
            }
            else
            {
              Acl = -1073741811;
            }
          }
          ExFreePoolWithTag(v9, 0);
        }
        else
        {
          return (unsigned int)-1073741670;
        }
      }
    }
  }
  return (unsigned int)Acl;
}
