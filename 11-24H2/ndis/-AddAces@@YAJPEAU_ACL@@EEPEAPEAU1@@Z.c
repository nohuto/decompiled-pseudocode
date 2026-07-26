/*
 * XREFs of ?AddAces@@YAJPEAU_ACL@@EEPEAPEAU1@@Z @ 0x14018CC54
 * Callers:
 *     ?CreateDeviceDriverSecurityDescriptor@@YAJPEAXEEPEAU_ACL@@@Z @ 0x14018CEB8 (-CreateDeviceDriverSecurityDescriptor@@YAJPEAXEEPEAU_ACL@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1400E70B0 (__security_check_cookie.c)
 */

__int64 __fastcall AddAces(PACL Acl, __int64 a2, char a3, struct _ACL **a4)
{
  int AclSize; // r14d
  struct _ACL *v5; // rdi
  GENERIC_MAPPING *FileObjectGenericMapping; // rax
  ULONG v10; // eax
  _DWORD *Pool2; // rax
  _DWORD *v12; // rsi
  NTSTATUS v14; // ebx
  ULONG v15; // ebx
  ACL *v16; // rax
  signed int i; // r14d
  ACCESS_MASK AccessMask; // [rsp+20h] [rbp-20h] BYREF
  PVOID Ace; // [rsp+28h] [rbp-18h] BYREF
  _SID_IDENTIFIER_AUTHORITY IdentifierAuthority; // [rsp+30h] [rbp-10h] BYREF

  AclSize = Acl->AclSize;
  v5 = 0LL;
  Ace = 0LL;
  AccessMask = 0x10000000;
  FileObjectGenericMapping = IoGetFileObjectGenericMapping();
  *(_DWORD *)IdentifierAuthority.Value = 0;
  *(_WORD *)&IdentifierAuthority.Value[4] = 1280;
  RtlMapGenericMask(&AccessMask, FileObjectGenericMapping);
  v10 = RtlLengthRequiredSid(2u);
  Pool2 = (_DWORD *)ExAllocatePool2(256LL, v10, 1935885390LL);
  v12 = Pool2;
  if ( !Pool2 )
    return 3221225626LL;
  v14 = RtlInitializeSid(Pool2, &IdentifierAuthority, 2u);
  if ( !v14 )
  {
    v12[2] = 32;
    v12[3] = 556;
    v15 = RtlLengthSid(v12) + AclSize + 16;
    if ( a3 )
      v15 += RtlLengthSid(SeExports->SeLocalServiceSid) + 16;
    v16 = (ACL *)ExAllocatePool2(256LL, v15, 1633895502LL);
    v5 = v16;
    if ( v16 )
    {
      v14 = RtlCreateAcl(v16, v15, 2u);
      if ( v14 >= 0 )
      {
        for ( i = 0; i < Acl->AceCount; ++i )
        {
          v14 = RtlGetAce(Acl, i, &Ace);
          if ( v14 < 0 )
            goto LABEL_18;
          v14 = RtlAddAccessAllowedAce(v5, 2u, *((_DWORD *)Ace + 1), (char *)Ace + 8);
          if ( v14 < 0 )
            goto LABEL_18;
        }
        v14 = RtlAddAccessAllowedAce(v5, 2u, AccessMask, v12);
        if ( v14 >= 0 )
        {
          if ( a3 )
            v14 = RtlAddAccessAllowedAce(v5, 2u, AccessMask, SeExports->SeLocalServiceSid);
          *a4 = v5;
        }
      }
    }
    else
    {
      v14 = -1073741670;
    }
  }
LABEL_18:
  ExFreePoolWithTag(v12, 0);
  if ( v14 < 0 )
  {
    if ( v5 )
      ExFreePoolWithTag(v5, 0);
  }
  return (unsigned int)v14;
}
