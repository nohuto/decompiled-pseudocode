/*
 * XREFs of RtlSetSaclSecurityDescriptor @ 0x140A061E0
 * Callers:
 *     SepSetProcessTrustLabelAceForToken @ 0x14036A3B0 (SepSetProcessTrustLabelAceForToken.c)
 *     SepBuildCapeSecurityDescriptor @ 0x1404D0670 (SepBuildCapeSecurityDescriptor.c)
 *     SepInitProcessAuditSd @ 0x1405FBBC4 (SepInitProcessAuditSd.c)
 *     CmpCopySaclToVirtualKey @ 0x1407CD3BC (CmpCopySaclToVirtualKey.c)
 *     CmpGenerateAppHiveSecurityDescriptor @ 0x1407CD7FC (CmpGenerateAppHiveSecurityDescriptor.c)
 *     ObpVerifyAccessToBoundaryEntry @ 0x140999270 (ObpVerifyAccessToBoundaryEntry.c)
 *     SepInitSystemDacls @ 0x140C25CF8 (SepInitSystemDacls.c)
 *     SeMakeSystemToken @ 0x140C29020 (SeMakeSystemToken.c)
 *     ExpKeyedEventInitialization @ 0x140C326DC (ExpKeyedEventInitialization.c)
 *     ObInitSystem @ 0x140C4FF98 (ObInitSystem.c)
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
