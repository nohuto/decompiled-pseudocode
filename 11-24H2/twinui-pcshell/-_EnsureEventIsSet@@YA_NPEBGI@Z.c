/*
 * XREFs of ?_EnsureEventIsSet@@YA_NPEBGI@Z @ 0x1806842C8
 * Callers:
 *     ?StartAndDisplayUserIhmProcess@@YA_N_NI@Z @ 0x1806841DC (-StartAndDisplayUserIhmProcess@@YA_N_NI@Z.c)
 * Callees:
 *     ?StartTextInputManagementService@@YA_NXZ @ 0x180684200 (-StartTextInputManagementService@@YA_NXZ.c)
 *     ?_SetSessionEvent@@YA_NPEBG@Z @ 0x1806843C8 (-_SetSessionEvent@@YA_NPEBG@Z.c)
 */

char __fastcall _EnsureEventIsSet(LPCWSTR lpName)
{
  char v2; // bl
  int i; // edi

  v2 = 0;
  if ( _SetSessionEvent(lpName) )
    return 1;
  if ( !StartTextInputManagementService() )
    return v2;
  if ( _SetSessionEvent(lpName) )
    return 1;
  for ( i = 0; i < 50; ++i )
  {
    if ( _SetSessionEvent(lpName) )
      return 1;
    Sleep(0x64u);
  }
  return v2;
}
