/*
 * XREFs of xxxInitWindowStation @ 0x1C0096B94
 * Callers:
 *     xxxCreateWindowStation @ 0x1C002BE34 (xxxCreateWindowStation.c)
 * Callees:
 *     FinalUserInit @ 0x1C0096C84 (FinalUserInit.c)
 *     GreTextInitialized @ 0x1C00CD5A0 (GreTextInitialized.c)
 *     SetIconMetrics @ 0x1C00D1B34 (SetIconMetrics.c)
 *     SetMinMetrics @ 0x1C00D1D50 (SetMinMetrics.c)
 *     xxxSetWindowNCMetrics @ 0x1C00D1EA0 (xxxSetWindowNCMetrics.c)
 *     SetKeyboardRate @ 0x1C00D8C70 (SetKeyboardRate.c)
 *     ?xxxLoadSomeStrings@@YAXXZ @ 0x1C00DFDE4 (-xxxLoadSomeStrings@@YAXXZ.c)
 */

__int64 xxxInitWindowStation()
{
  struct _UNICODE_STRING *v0; // rdi
  __int64 v1; // rcx
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rcx
  unsigned int v9; // ebx
  __int128 v11; // [rsp+30h] [rbp-28h] BYREF
  __int64 v12; // [rsp+40h] [rbp-18h]

  v11 = 0LL;
  v12 = 0LL;
  v0 = (struct _UNICODE_STRING *)CreateProfileUserName(&v11);
  FastGetProfileIntFromID(v0, 2LL, 606LL, 0LL);
  v2 = SGDGetUserSessionState(v1);
  SetKeyboardRate(*(unsigned int *)(v2 + 12612));
  NlsKbdInitializePerSystem(v4, v3);
  xxxLoadSomeStrings();
  if ( !(unsigned int)GreTextInitialized(v6, v5) || (v9 = xxxSetWindowNCMetrics(v0, 0LL)) != 0 )
  {
    SetMinMetrics(v0);
    v9 = SetIconMetrics(v0);
    if ( v9 )
    {
      v9 = FinalUserInit(v8, v7);
      if ( v9 )
        *(_DWORD *)(gpsi + 6984LL) = 1;
    }
  }
  FreeProfileUserName(v0, &v11);
  return v9;
}
