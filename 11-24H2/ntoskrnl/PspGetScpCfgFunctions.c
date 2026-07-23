/*
 * XREFs of PspGetScpCfgFunctions @ 0x140A26450
 * Callers:
 *     PspPrepareSystemDllInitBlock @ 0x1408DFC08 (PspPrepareSystemDllInitBlock.c)
 * Callees:
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     ZwQueryVirtualMemory @ 0x1406A7810 (ZwQueryVirtualMemory.c)
 *     PsGetScpCfgPageTypeForProcess @ 0x140A264F8 (PsGetScpCfgPageTypeForProcess.c)
 */

__int64 *__fastcall PspGetScpCfgFunctions(__int64 a1)
{
  __int64 v2; // rbx
  void *v3; // rdx
  __int64 v4; // rdx
  __int64 v5; // r8
  int ScpCfgPageTypeForProcess; // eax
  __int128 v8; // [rsp+30h] [rbp-28h] BYREF
  __int64 v9; // [rsp+40h] [rbp-18h]

  v2 = 0LL;
  v3 = PspSystemDlls[0][4];
  v8 = 0LL;
  v9 = 0LL;
  if ( ZwQueryVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, v3, MaxMemoryInfoClass, &v8, 0x18uLL, 0LL) == -1073741637 )
    return 0LL;
  if ( !v9 )
    return 0LL;
  LOBYTE(v5) = 1;
  ScpCfgPageTypeForProcess = PsGetScpCfgPageTypeForProcess(a1, v4, v5);
  if ( ScpCfgPageTypeForProcess == 3 )
    return 0LL;
  if ( ScpCfgPageTypeForProcess != 4 )
    return &PspNtdllScpFunctions;
  return (__int64 *)v2;
}
