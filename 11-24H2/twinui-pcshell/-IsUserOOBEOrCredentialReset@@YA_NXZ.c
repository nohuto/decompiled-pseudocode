/*
 * XREFs of ?IsUserOOBEOrCredentialReset@@YA_NXZ @ 0x180104610
 * Callers:
 *     ?IsStartScreenFilterEnabled@@YA_NXZ @ 0x1801045B4 (-IsStartScreenFilterEnabled@@YA_NXZ.c)
 *     ?UpdateFocusOnDismiss@CBaseTrayFlyoutExperienceManager@@AEAAJXZ @ 0x1803CC8B4 (-UpdateFocusOnDismiss@CBaseTrayFlyoutExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     ?IsUserOOBE@@YA_NXZ @ 0x180104990 (-IsUserOOBE@@YA_NXZ.c)
 *     ?IsCredentialReset@@YA_NXZ @ 0x1802B06A0 (-IsCredentialReset@@YA_NXZ.c)
 */

char IsUserOOBEOrCredentialReset(void)
{
  char v0; // bl

  v0 = 0;
  if ( IsUserOOBE() || IsCredentialReset() )
    return 1;
  return v0;
}
