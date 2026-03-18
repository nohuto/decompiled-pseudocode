/*
 * XREFs of RtlGetAppContainerSidType @ 0x1408F2D70
 * Callers:
 *     RtlIsParentOfChildAppContainer @ 0x1406FB2C0 (RtlIsParentOfChildAppContainer.c)
 *     RtlGetAppContainerParent @ 0x140780C20 (RtlGetAppContainerParent.c)
 *     RtlpGetTokenNamedObjectPath @ 0x1407814C0 (RtlpGetTokenNamedObjectPath.c)
 *     SepValidateReferencedCachedHandles @ 0x1408F2790 (SepValidateReferencedCachedHandles.c)
 *     NtCreateLowBoxToken @ 0x140AD8020 (NtCreateLowBoxToken.c)
 * Callees:
 *     RtlSubAuthorityCountSid @ 0x1404600D0 (RtlSubAuthorityCountSid.c)
 *     RtlCompareMemory @ 0x1406B3990 (RtlCompareMemory.c)
 */

__int64 __fastcall RtlGetAppContainerSidType(char *Sid, _DWORD *a2)
{
  UCHAR v4; // cl

  if ( (unsigned __int8)Sid[1] >= 2u
    && *Sid == 1
    && RtlCompareMemory(Sid + 2, &RtlpAppPackageAuthority, 6uLL) == 6
    && *((_DWORD *)Sid + 2) == 2 )
  {
    v4 = *RtlSubAuthorityCountSid(Sid);
    if ( v4 == 8 )
    {
      *a2 = 2;
      return 0LL;
    }
    if ( v4 == 12 )
    {
      *a2 = 1;
      return 0LL;
    }
    *a2 = 3;
  }
  else
  {
    *a2 = 0;
  }
  return 3221266944LL;
}
