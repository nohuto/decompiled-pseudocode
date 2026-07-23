/*
 * XREFs of SepRemoveAceFromTokenDefaultDacl @ 0x1403E9B40
 * Callers:
 *     NtSetInformationToken @ 0x140AD4280 (NtSetInformationToken.c)
 * Callees:
 *     RtlEqualSid @ 0x1403EB6C0 (RtlEqualSid.c)
 *     RtlDeleteAce @ 0x140A564C0 (RtlDeleteAce.c)
 */

char __fastcall SepRemoveAceFromTokenDefaultDacl(__int64 a1, void *a2)
{
  unsigned __int64 AclSize; // rax
  ACL *v3; // rdi
  ULONG AceCount; // ebp
  ACL *v6; // rbx
  ULONG i; // esi
  unsigned int AclRevision; // ecx
  int v9; // edx
  unsigned __int8 *p_AceCount; // rcx
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h] BYREF

  AclSize = (unsigned __int64)&retaddr;
  v3 = *(ACL **)(a1 + 184);
  if ( v3 )
  {
    AceCount = v3->AceCount;
    v6 = v3 + 1;
    for ( i = 0; ; ++i )
    {
      if ( i >= AceCount )
        return AclSize;
      AclRevision = v6->AclRevision;
      if ( (unsigned __int8)AclRevision <= 0x15u && (v9 = 4089359, _bittest(&v9, AclRevision)) )
      {
        p_AceCount = (unsigned __int8 *)&v6[1];
      }
      else if ( (_BYTE)AclRevision == 4 )
      {
        p_AceCount = (unsigned __int8 *)&v6[1].AceCount;
      }
      else
      {
        if ( (unsigned __int8)(AclRevision - 5) > 3u
          && (unsigned __int8)(AclRevision - 11) > 1u
          && (unsigned __int8)(AclRevision - 15) > 1u )
        {
          goto LABEL_12;
        }
        p_AceCount = (unsigned __int8 *)&v6[2 * (*(_DWORD *)&v6[1].AclRevision & 1)]
                   + ((8LL * (*(_DWORD *)&v6[1].AclRevision & 2)) | 0xC);
      }
      if ( p_AceCount )
      {
        LOBYTE(AclSize) = RtlEqualSid(p_AceCount, a2);
        if ( (_BYTE)AclSize )
        {
          if ( v6 )
            LOBYTE(AclSize) = RtlDeleteAce(v3, i);
          return AclSize;
        }
      }
LABEL_12:
      AclSize = v6->AclSize;
      v6 = (ACL *)((char *)v6 + AclSize);
    }
  }
  return AclSize;
}
