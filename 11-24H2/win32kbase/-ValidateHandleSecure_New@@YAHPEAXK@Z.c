/*
 * XREFs of ?ValidateHandleSecure_New@@YAHPEAXK@Z @ 0x1401A911C
 * Callers:
 *     ValidateHandleSecure @ 0x140099530 (ValidateHandleSecure.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140099660 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?IsHandleEntryAccessibleForIL@@YAHPEAU_HANDLEENTRY@@@Z @ 0x1400CA154 (-IsHandleEntryAccessibleForIL@@YAHPEAU_HANDLEENTRY@@@Z.c)
 *     IsHandleEntrySecure @ 0x140162894 (IsHandleEntrySecure.c)
 */

__int64 __fastcall ValidateHandleSecure_New(__int64 a1, char a2)
{
  struct tagTHREADINFO *v4; // r14
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 UserSessionState; // rbx
  __int64 v8; // rcx
  __int64 v9; // rdi
  __int64 v10; // rcx
  unsigned int v11; // ebx
  __int16 v12; // ax

  v4 = PtiCurrent(a1);
  if ( (unsigned __int64)(unsigned __int16)a1 >= *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v5) + 19928) + 8LL) )
    return 0LL;
  UserSessionState = W32GetUserSessionState(v6);
  v9 = *(_QWORD *)(UserSessionState + 19944)
     + *(_DWORD *)(W32GetUserSessionState(v8) + 19952) * (unsigned int)(unsigned __int16)a1;
  W32GetUserSessionState(v10);
  v11 = 0;
  v12 = WORD1(a1) & 0x7FFF;
  if ( (WORD1(a1) & 0x7FFF) != *(_WORD *)(v9 + 26) && v12 != 0x7FFF && (v12 || !PsGetCurrentProcessWow64Process()) )
    return 0LL;
  if ( !*(_BYTE *)(v9 + 24) || (a2 & 1) != 0 && !(unsigned int)IsHandleEntrySecure(a1, v9) || (a2 & 2) == 0 )
    return 0LL;
  if ( !*((_BYTE *)v4 + 1708) || (unsigned int)IsHandleEntryAccessibleForIL((struct _HANDLEENTRY *)v9) )
    return 1;
  return v11;
}
