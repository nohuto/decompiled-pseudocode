/*
 * XREFs of RtlSetSaclSecurityDescriptor @ 0x140A07B00
 * Callers:
 *     SepSetProcessTrustLabelAceForToken @ 0x140363E20 (SepSetProcessTrustLabelAceForToken.c)
 *     SepBuildCapeSecurityDescriptor @ 0x1404D060C (SepBuildCapeSecurityDescriptor.c)
 *     SepInitProcessAuditSd @ 0x140607F04 (SepInitProcessAuditSd.c)
 *     CmpCopySaclToVirtualKey @ 0x1407DCB7C (CmpCopySaclToVirtualKey.c)
 *     CmpGenerateAppHiveSecurityDescriptor @ 0x1407DCFBC (CmpGenerateAppHiveSecurityDescriptor.c)
 *     ObpVerifyAccessToBoundaryEntry @ 0x140A49740 (ObpVerifyAccessToBoundaryEntry.c)
 *     SepInitSystemDacls @ 0x140C36FC8 (SepInitSystemDacls.c)
 *     SeMakeSystemToken @ 0x140C3A2F0 (SeMakeSystemToken.c)
 *     ExpKeyedEventInitialization @ 0x140C43A94 (ExpKeyedEventInitialization.c)
 *     ObInitSystem @ 0x140C612B4 (ObInitSystem.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlSetSaclSecurityDescriptor(__int64 a1, char a2, __int64 a3, char a4)
{
  __int16 v4; // ax
  __int16 v5; // ax
  __int16 v6; // ax
  __int16 v8; // ax

  if ( *(_BYTE *)a1 != 1 )
    return 3221225560LL;
  v4 = *(_WORD *)(a1 + 2);
  if ( v4 >= 0 )
  {
    if ( a2 )
    {
      v5 = v4 | 0x10;
      *(_QWORD *)(a1 + 24) = 0LL;
      if ( a3 )
        *(_QWORD *)(a1 + 24) = a3;
      v6 = v5 & 0xFFDF;
      *(_WORD *)(a1 + 2) = v6;
      if ( !a4 )
        return 0LL;
      v8 = v6 | 0x20;
    }
    else
    {
      v8 = v4 & 0xFFEF;
    }
    *(_WORD *)(a1 + 2) = v8;
    return 0LL;
  }
  return 3221225593LL;
}
