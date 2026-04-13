/*
 * XREFs of ?GetImpersonationTokenFromProcess@CallerIdentity@@YAJPEAXKPEAPEAX@Z @ 0x180071EE4
 * Callers:
 *     ?CheckCapabilityFromProcessHandle@CallerIdentity@@YAJPEAXPEBGPEA_N@Z @ 0x180071910 (-CheckCapabilityFromProcessHandle@CallerIdentity@@YAJPEAXPEBGPEA_N@Z.c)
 * Callees:
 *     ?ResultFromWin32Bool@@YAJH@Z @ 0x180072038 (-ResultFromWin32Bool@@YAJH@Z.c)
 */

__int64 __fastcall CallerIdentity::GetImpersonationTokenFromProcess(
        CallerIdentity *this,
        void *a2,
        void **a3,
        void **a4)
{
  BOOL v5; // eax
  int v6; // ebx
  BOOL v7; // eax
  char *v8; // rcx
  void *TokenHandle; // [rsp+50h] [rbp+18h] BYREF

  *a3 = 0LL;
  TokenHandle = 0LL;
  v5 = OpenProcessToken(this, 0xEu, &TokenHandle);
  v6 = ResultFromWin32Bool(v5);
  if ( v6 >= 0 )
  {
    v7 = DuplicateTokenEx(TokenHandle, 0xCu, 0LL, SecurityImpersonation, TokenImpersonation, a3);
    v6 = ResultFromWin32Bool(v7);
  }
  v8 = (char *)TokenHandle;
  TokenHandle = 0LL;
  if ( (unsigned __int64)(v8 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    CloseHandle(v8);
  return (unsigned int)v6;
}
