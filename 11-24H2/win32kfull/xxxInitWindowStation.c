/*
 * XREFs of xxxInitWindowStation @ 0x140112ADC
 * Callers:
 *     ?xxxCreateWindowStation@@YAJPEAU_OBJECT_ATTRIBUTES@@DKPEAXKKPEAUtagKBDTABLE_MULT_INTERNAL@@PEBGIW4tagWINDOWSTATIONFLAGS@@KPEAPEAUHWINSTA__@@@Z @ 0x14028A884 (-xxxCreateWindowStation@@YAJPEAU_OBJECT_ATTRIBUTES@@DKPEAXKKPEAUtagKBDTABLE_MULT_INTERNAL@@PEBGI.c)
 * Callees:
 *     xxxSetWindowNCMetrics @ 0x140112218 (xxxSetWindowNCMetrics.c)
 *     ?xxxLoadSomeStrings@@YAXXZ @ 0x140112BF8 (-xxxLoadSomeStrings@@YAXXZ.c)
 *     SetIconMetrics @ 0x140112D38 (SetIconMetrics.c)
 *     SetMinMetrics @ 0x14011310C (SetMinMetrics.c)
 *     SetKeyboardRate @ 0x14011335C (SetKeyboardRate.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x14011349C (PopAndFreeAlwaysW32ThreadLock.c)
 *     GreTextInitialized @ 0x140113698 (GreTextInitialized.c)
 *     FinalUserInit @ 0x1401CD2B4 (FinalUserInit.c)
 */

__int64 xxxInitWindowStation()
{
  struct _UNICODE_STRING *v0; // rdi
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 UserSessionState; // rax
  unsigned int v4; // ebx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int128 v8; // [rsp+30h] [rbp-38h] BYREF
  __int64 v9; // [rsp+40h] [rbp-28h]
  __int64 v10; // [rsp+58h] [rbp-10h]

  v8 = 0LL;
  v10 = 0LL;
  v9 = -1LL;
  v0 = (struct _UNICODE_STRING *)CreateProfileUserName(&v8);
  FastGetProfileIntFromID(v0, 2LL, 606LL);
  UserSessionState = W32GetUserSessionState(v2, v1);
  SetKeyboardRate(*(unsigned int *)(UserSessionState + 12876));
  NlsKbdInitializePerSystem();
  xxxLoadSomeStrings();
  if ( !(unsigned int)GreTextInitialized() || (v4 = xxxSetWindowNCMetrics(v0, 0LL, -1)) != 0 )
  {
    SetMinMetrics(v0);
    v4 = SetIconMetrics(v0);
    if ( v4 )
    {
      v4 = FinalUserInit();
      if ( v4 )
        *(_DWORD *)(*(_QWORD *)(W32GetUserSessionState(v7, v6) + 19928) + 6984LL) = 1;
    }
  }
  if ( v9 != -1 )
    PopAndFreeAlwaysW32ThreadLock(&v8);
  return v4;
}
