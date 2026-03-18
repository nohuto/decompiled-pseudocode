/*
 * XREFs of ?zzzSetWindowsHookAW_New@@YAPEAUHHOOK__@@HP6A_JXZW4tagHookFlags@@@Z @ 0x140283C58
 * Callers:
 *     NtUserSetWindowsHookAW @ 0x14029F6E0 (NtUserSetWindowsHookAW.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?zzzSetWindowsHookEx_New@@YAPEAUHHOOK__@@PEAXPEBGPEAUtagTHREADINFO@@HP6A_JXZW4tagHookFlags@@PEAH@Z @ 0x140283CE0 (-zzzSetWindowsHookEx_New@@YAPEAUHHOOK__@@PEAXPEBGPEAUtagTHREADINFO@@HP6A_JXZW4tagHookFlags@@PEAH.c)
 */

__int64 __fastcall zzzSetWindowsHookAW_New(__int64 a1, __int64 a2, int a3)
{
  __int64 v5; // rsi
  struct tagTHREADINFO *v6; // rax
  __int64 result; // rax
  int v8; // [rsp+68h] [rbp+20h] BYREF

  v8 = 0;
  v5 = (int)a1;
  v6 = PtiCurrent(a1, a2);
  result = zzzSetWindowsHookEx_New(0LL, 0LL, v6, (unsigned int)v5, a2, a3, &v8);
  if ( !result )
    return -1LL;
  if ( v8 )
    return result & -(__int64)((dword_140353514[v5] & 8) != 0);
  return result;
}
