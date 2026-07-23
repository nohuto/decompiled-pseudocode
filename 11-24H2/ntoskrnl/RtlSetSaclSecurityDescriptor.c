/*
 * XREFs of RtlSetSaclSecurityDescriptor @ 0x140A04030
 * Callers:
 *     SeAccessCheckWithHint @ 0x1403B6970 (SeAccessCheckWithHint.c)
 *     SepSetProcessTrustLabelAceForToken @ 0x1403EB390 (SepSetProcessTrustLabelAceForToken.c)
 *     SeAccessCheckByType @ 0x14042DC70 (SeAccessCheckByType.c)
 *     SepCommonAccessCheckEx @ 0x140465250 (SepCommonAccessCheckEx.c)
 *     SepBuildCapeSecurityDescriptor @ 0x1404C9800 (SepBuildCapeSecurityDescriptor.c)
 *     SepInitProcessAuditSd @ 0x140605560 (SepInitProcessAuditSd.c)
 *     CmpCopySaclToVirtualKey @ 0x1407DD0CC (CmpCopySaclToVirtualKey.c)
 *     CmpGenerateAppHiveSecurityDescriptor @ 0x1407DD50C (CmpGenerateAppHiveSecurityDescriptor.c)
 *     ObpVerifyAccessToBoundaryEntry @ 0x140A40460 (ObpVerifyAccessToBoundaryEntry.c)
 *     SepInitSystemDacls @ 0x140C39108 (SepInitSystemDacls.c)
 *     SeMakeSystemToken @ 0x140C3C448 (SeMakeSystemToken.c)
 *     ExpKeyedEventInitialization @ 0x140C459EC (ExpKeyedEventInitialization.c)
 *     ObInitSystem @ 0x140C63408 (ObInitSystem.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl RtlSetSaclSecurityDescriptor(
        PSECURITY_DESCRIPTOR SecurityDescriptor,
        BOOLEAN SaclPresent,
        PACL Sacl,
        BOOLEAN SaclDefaulted)
{
  __int16 v4; // ax
  __int16 v5; // ax
  __int16 v6; // ax
  __int16 v8; // ax

  if ( *(_BYTE *)SecurityDescriptor != 1 )
    return -1073741736;
  v4 = *((_WORD *)SecurityDescriptor + 1);
  if ( v4 >= 0 )
  {
    if ( SaclPresent )
    {
      v5 = v4 | 0x10;
      *((_QWORD *)SecurityDescriptor + 3) = 0LL;
      if ( Sacl )
        *((_QWORD *)SecurityDescriptor + 3) = Sacl;
      v6 = v5 & 0xFFDF;
      *((_WORD *)SecurityDescriptor + 1) = v6;
      if ( !SaclDefaulted )
        return 0;
      v8 = v6 | 0x20;
    }
    else
    {
      v8 = v4 & 0xFFEF;
    }
    *((_WORD *)SecurityDescriptor + 1) = v8;
    return 0;
  }
  return -1073741703;
}
