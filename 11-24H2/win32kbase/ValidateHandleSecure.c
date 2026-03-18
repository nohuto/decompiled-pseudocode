/*
 * XREFs of ValidateHandleSecure @ 0x140099530
 * Callers:
 *     HMValidateHandleWithDescriptor @ 0x140099270 (HMValidateHandleWithDescriptor.c)
 *     HMValidateCatHandleNoRip @ 0x140198C38 (HMValidateCatHandleNoRip.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140099660 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?IsHandleEntryAccessibleForIL@@YAHPEAU_HANDLEENTRY@@@Z @ 0x1400CA154 (-IsHandleEntryAccessibleForIL@@YAHPEAU_HANDLEENTRY@@@Z.c)
 *     IsHandleEntrySecure @ 0x140162894 (IsHandleEntrySecure.c)
 *     ?ValidateHandleSecure_New@@YAHPEAXK@Z @ 0x1401A911C (-ValidateHandleSecure_New@@YAHPEAXK@Z.c)
 *     Feature_RestrictedFlagUpdate__private_IsEnabledDeviceUsageNoInline @ 0x1401A922C (Feature_RestrictedFlagUpdate__private_IsEnabledDeviceUsageNoInline.c)
 */

__int64 __fastcall ValidateHandleSecure(void *a1, unsigned int a2)
{
  __int64 v4; // rcx
  __int64 v6; // rcx
  __int64 UserSessionState; // rbx
  __int64 v8; // rcx
  unsigned int v9; // ebp
  __int64 v10; // rbx
  __int16 v11; // ax

  if ( (unsigned int)Feature_RestrictedFlagUpdate__private_IsEnabledDeviceUsageNoInline() )
    return ValidateHandleSecure_New(a1, a2);
  v6 = *(_QWORD *)(W32GetUserSessionState(v4) + 19928);
  if ( (unsigned __int64)(unsigned __int16)a1 >= *(_QWORD *)(v6 + 8) )
    return 0LL;
  UserSessionState = W32GetUserSessionState(v6);
  v9 = *(_DWORD *)(W32GetUserSessionState(v8) + 19952) * (unsigned __int16)a1;
  v10 = v9 + *(_QWORD *)(UserSessionState + 19944);
  W32GetUserSessionState(v9);
  v11 = WORD1(a1) & 0x7FFF;
  if ( (WORD1(a1) & 0x7FFF) != *(_WORD *)(v10 + 26) && v11 != 0x7FFF && (v11 || !PsGetCurrentProcessWow64Process()) )
    return 0LL;
  if ( !*(_BYTE *)(v10 + 24) || (a2 & 1) != 0 && !(unsigned int)IsHandleEntrySecure(a1, v10) || (a2 & 2) == 0 )
    return 0LL;
  if ( *((_BYTE *)PtiCurrent() + 1708) )
    return IsHandleEntryAccessibleForIL((struct _HANDLEENTRY *)v10);
  return 1LL;
}
