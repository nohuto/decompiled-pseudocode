/*
 * XREFs of ?IsFeatureEnabled@CDesktopManager@@SA_NW4DwmFeature@1@@Z @ 0x18005AC48
 * Callers:
 *     ?ShouldShowTransition@CTopLevelWindow3D@@QEAA_NXZ @ 0x1800187EC (-ShouldShowTransition@CTopLevelWindow3D@@QEAA_NXZ.c)
 *     ?IsLivePreviewAllowed@CDesktopManager@@SA_NXZ @ 0x180084EE8 (-IsLivePreviewAllowed@CDesktopManager@@SA_NXZ.c)
 *     ?GetGlobalState@CWindowList@@AEAAJPEAUMILCMD_DWM_REDIRECTION_GETGLOBALSTATE@@@Z @ 0x1800F03A4 (-GetGlobalState@CWindowList@@AEAAJPEAUMILCMD_DWM_REDIRECTION_GETGLOBALSTATE@@@Z.c)
 * Callees:
 *     ?SLGetHelper@@YA_NPEBG@Z @ 0x18005ACF0 (-SLGetHelper@@YA_NPEBG@Z.c)
 */

char __fastcall CDesktopManager::IsFeatureEnabled(int a1)
{
  char v1; // bl
  __int64 v2; // rdi
  _BYTE *v4; // rsi
  const unsigned __int16 **v5; // r14
  __int64 v6; // rbp

  v1 = 0;
  v2 = a1;
  if ( !byte_180126988 )
  {
    v4 = byte_180129D50;
    v5 = (const unsigned __int16 **)off_1800FC8B0;
    v6 = 3LL;
    do
    {
      *v4++ = SLGetHelper(*v5++);
      --v6;
    }
    while ( v6 );
    byte_180126988 = 1;
  }
  if ( (unsigned int)v2 < 3 )
    return byte_180129D50[v2];
  if ( (int)v2 >= 0 )
    return SLGetHelper(off_1800FC8B0[v2]);
  return v1;
}
