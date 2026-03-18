/*
 * XREFs of _SetKeyboardState @ 0x140107EEC
 * Callers:
 *     NtUserSetKeyboardState @ 0x140144700 (NtUserSetKeyboardState.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140099660 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     SetLastNtError @ 0x1400BBEB4 (SetLastNtError.c)
 */

__int64 __fastcall SetKeyboardState(__int64 a1)
{
  char *v1; // rbx
  __int64 v2; // rcx
  __int64 v3; // r9
  char *v4; // r10
  int v5; // r8d
  int v6; // eax
  unsigned __int64 v7; // rdx
  int v8; // ecx
  int v9; // ecx
  unsigned __int64 v10; // rdx
  char v11; // al
  __int64 UserSessionState; // rax
  _BYTE *v14; // [rsp+50h] [rbp+8h]

  v14 = (_BYTE *)a1;
  v1 = (char *)a1;
  v3 = *((_QWORD *)PtiCurrent(a1) + 59);
  v4 = v1;
  v5 = 0;
  v6 = 0;
  while ( v6 < 256 )
  {
    v7 = (unsigned __int64)(unsigned __int8)v5 >> 2;
    v8 = *(unsigned __int8 *)(v7 + v3 + 280);
    if ( *v1 < 0 )
      v9 = v8 | (1 << (2 * (v5 & 3)));
    else
      v9 = v8 & ~(1 << (2 * (v5 & 3)));
    *(_BYTE *)(v7 + v3 + 280) = v9;
    v10 = (unsigned __int64)(unsigned __int8)v5 >> 2;
    v11 = 2 * (v5 & 3) + 1;
    v2 = *(unsigned __int8 *)(v10 + v3 + 280);
    if ( (*v14 & 1) != 0 )
      LODWORD(v2) = v2 | (1 << v11);
    else
      LODWORD(v2) = v2 & ~(1 << v11);
    *(_BYTE *)(v10 + v3 + 280) = v2;
    v6 = ++v5;
    v1 = ++v14;
  }
  if ( v1 != v4 )
  {
    UserSessionState = W32GetUserSessionState(v2);
    ++*(_DWORD *)(*(_QWORD *)(UserSessionState + 19928) + 6984LL);
  }
  return 1LL;
}
