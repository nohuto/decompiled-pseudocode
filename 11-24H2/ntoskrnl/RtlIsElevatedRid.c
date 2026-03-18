/*
 * XREFs of RtlIsElevatedRid @ 0x1409B2C30
 * Callers:
 *     SepGetTokenElevation @ 0x1404478C8 (SepGetTokenElevation.c)
 *     SepRemoveDisabledGroupsAndPrivileges @ 0x1409B29B4 (SepRemoveDisabledGroupsAndPrivileges.c)
 * Callees:
 *     RtlSubAuthoritySid @ 0x14044FDD0 (RtlSubAuthoritySid.c)
 *     RtlSubAuthorityCountSid @ 0x1404600D0 (RtlSubAuthorityCountSid.c)
 */

char __fastcall RtlIsElevatedRid(__int64 a1)
{
  PSID v1; // rbx
  int v2; // edi
  ULONG v3; // edx
  __int64 i; // rax

  if ( a1 )
  {
    if ( (*(_DWORD *)(a1 + 8) & 0x30) == 0 )
    {
      v1 = *(PSID *)a1;
      v2 = *RtlSubAuthorityCountSid(*(PSID *)a1);
      if ( (_BYTE)v2 )
      {
        if ( *RtlSubAuthoritySid(v1, 0) - 80 > 0x1F )
        {
          v3 = *RtlSubAuthoritySid(v1, v2 - 1);
          for ( i = 0LL; (unsigned int)i < 0x13; i = (unsigned int)(i + 1) )
          {
            if ( v3 == *((_DWORD *)qword_14002B790 + i) )
              return 1;
          }
        }
      }
    }
  }
  return 0;
}
