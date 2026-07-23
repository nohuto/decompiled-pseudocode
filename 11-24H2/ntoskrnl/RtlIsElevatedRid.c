/*
 * XREFs of RtlIsElevatedRid @ 0x1409A9FC0
 * Callers:
 *     SepGetTokenElevation @ 0x14043FFE8 (SepGetTokenElevation.c)
 *     SepRemoveDisabledGroupsAndPrivileges @ 0x1409A9D44 (SepRemoveDisabledGroupsAndPrivileges.c)
 * Callees:
 *     RtlSubAuthoritySid @ 0x140445040 (RtlSubAuthoritySid.c)
 *     RtlSubAuthorityCountSid @ 0x140454FB0 (RtlSubAuthorityCountSid.c)
 */

BOOLEAN __cdecl RtlIsElevatedRid(PSID_AND_ATTRIBUTES SidAttr)
{
  PSID Sid; // rbx
  int v2; // edi
  ULONG v3; // edx
  __int64 i; // rax

  if ( SidAttr )
  {
    if ( (SidAttr->Attributes & 0x30) == 0 )
    {
      Sid = SidAttr->Sid;
      v2 = *RtlSubAuthorityCountSid(SidAttr->Sid);
      if ( (_BYTE)v2 )
      {
        if ( *RtlSubAuthoritySid(Sid, 0) - 80 > 0x1F )
        {
          v3 = *RtlSubAuthoritySid(Sid, v2 - 1);
          for ( i = 0LL; (unsigned int)i < 0x13; i = (unsigned int)(i + 1) )
          {
            if ( v3 == *((_DWORD *)qword_14002BBF0 + i) )
              return 1;
          }
        }
      }
    }
  }
  return 0;
}
