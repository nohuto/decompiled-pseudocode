/*
 * XREFs of CmpCheckKeyOwnerForPca @ 0x140868640
 * Callers:
 *     CmpCheckOpenAccessOnKeyBody @ 0x140852140 (CmpCheckOpenAccessOnKeyBody.c)
 *     CmpDoParseKey @ 0x14086E7B0 (CmpDoParseKey.c)
 * Callees:
 *     RtlEqualSid @ 0x140364150 (RtlEqualSid.c)
 *     CmpGetSecurityCacheEntryForKcbStack @ 0x140869130 (CmpGetSecurityCacheEntryForKcbStack.c)
 */

BOOLEAN __fastcall CmpCheckKeyOwnerForPca(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  void *v4; // rdx

  if ( !CmpTrustedInstallerSid )
    return 0;
  v2 = CmpGetSecurityCacheEntryForKcbStack(a1, a2, 0LL) + 32;
  if ( *(_BYTE *)v2 != 1 )
    return 0;
  if ( *(__int16 *)(v2 + 2) >= 0 )
  {
    v4 = *(void **)(v2 + 8);
  }
  else
  {
    v3 = *(unsigned int *)(v2 + 4);
    if ( !(_DWORD)v3 )
      return 0;
    v4 = (void *)(v2 + v3);
  }
  if ( v4 )
    return RtlEqualSid(CmpTrustedInstallerSid, v4);
  return 0;
}
