/*
 * XREFs of RtlGetAppContainerSidType @ 0x140984120
 * Callers:
 *     RtlIsParentOfChildAppContainer @ 0x1406EF480 (RtlIsParentOfChildAppContainer.c)
 *     RtlGetAppContainerParent @ 0x1407719D0 (RtlGetAppContainerParent.c)
 *     RtlpGetTokenNamedObjectPath @ 0x140772270 (RtlpGetTokenNamedObjectPath.c)
 *     SepValidateReferencedCachedHandles @ 0x140983B48 (SepValidateReferencedCachedHandles.c)
 *     NtCreateLowBoxToken @ 0x140ACDB00 (NtCreateLowBoxToken.c)
 * Callees:
 *     RtlSubAuthorityCountSid @ 0x140461BC0 (RtlSubAuthorityCountSid.c)
 *     RtlCompareMemory @ 0x1406A86C0 (RtlCompareMemory.c)
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
