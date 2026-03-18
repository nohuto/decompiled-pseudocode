/*
 * XREFs of UserAddAtomEx @ 0x1400D8E10
 * Callers:
 *     ?InitAtoms@GroupedProcessForegroundBoost@@YA_NXZ @ 0x14019D488 (-InitAtoms@GroupedProcessForegroundBoost@@YA_NXZ.c)
 *     Win32UserInitialize @ 0x1402E5DE4 (Win32UserInitialize.c)
 * Callees:
 *     SetLastNtError @ 0x1400BBEB4 (SetLastNtError.c)
 *     ?LkdForAtomAdditionFailure@@YAXPEAXJ@Z @ 0x1401BE3F0 (-LkdForAtomAdditionFailure@@YAXPEAXJ@Z.c)
 */

__int64 __fastcall UserAddAtomEx(__int64 a1, int a2, unsigned int a3)
{
  __int64 UserSessionState; // rax
  struct _RTL_ATOM_TABLE *v7; // rsi
  int v8; // ebx
  __int64 result; // rax
  RTL_ATOM v10; // [rsp+58h] [rbp+20h] BYREF

  UserSessionState = W32GetUserSessionState(a1);
  v10 = 0;
  v7 = *(struct _RTL_ATOM_TABLE **)(UserSessionState + 41440);
  v8 = RtlAddAtomToAtomTableEx(v7, a1, &v10, a3);
  if ( (int)(v8 + 0x80000000) >= 0 && v8 != -1073741773 )
  {
    LkdForAtomAdditionFailure(v7, v8);
    SetLastNtError(v8);
  }
  result = v10;
  if ( v10 )
  {
    if ( a2 )
    {
      RtlPinAtomInAtomTable(v7, v10);
      return v10;
    }
  }
  return result;
}
