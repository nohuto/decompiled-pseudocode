/*
 * XREFs of DWP_SetHotKey @ 0x14019DDF4
 * Callers:
 *     ?xxxDestroyWindow_Phase2@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@H@Z @ 0x14024FA00 (-xxxDestroyWindow_Phase2@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@H@Z.c)
 *     xxxRealDefWindowProc @ 0x140252B3C (xxxRealDefWindowProc.c)
 * Callees:
 *     ?HotKeyHelper@@YAPEAPEAUtagHOTKEYSTRUCT@@PEAUtagWND@@@Z @ 0x14019DF5C (-HotKeyHelper@@YAPEAPEAUtagHOTKEYSTRUCT@@PEAUtagWND@@@Z.c)
 *     HotKeyToWindow @ 0x140210288 (HotKeyToWindow.c)
 */

__int64 __fastcall DWP_SetHotKey(struct tagWND *a1, unsigned int a2)
{
  int v2; // esi
  __int64 v5; // rcx
  struct tagHOTKEYSTRUCT **v6; // r14
  struct tagHOTKEYSTRUCT *v7; // rdi
  struct tagWND *v9; // rax
  __int64 v10; // rax
  struct tagHOTKEYSTRUCT *v11; // rdi
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 UserSessionState; // rax
  _QWORD v18[5]; // [rsp+20h] [rbp-28h] BYREF

  v2 = 0;
  if ( (unsigned __int8)a2 <= 0x20u )
  {
    v5 = 0x108000200LL;
    if ( _bittest64(&v5, a2) )
      return 0xFFFFFFFFLL;
  }
  if ( (_BYTE)a2 == 0xE7 )
    return 0xFFFFFFFFLL;
  if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0x40) == 0 )
  {
    if ( a2 )
    {
      v9 = (struct tagWND *)HotKeyToWindow(a2);
      if ( v9 )
      {
        if ( v9 != a1 )
          v2 = 1;
      }
    }
    v6 = HotKeyHelper(a1);
    v7 = *v6;
    if ( *v6 )
    {
      if ( a2 )
      {
        *((_DWORD *)v7 + 2) = a2;
      }
      else
      {
        *v6 = (struct tagHOTKEYSTRUCT *)*((_QWORD *)v7 + 2);
        HMAssignmentUnlock(v7);
        Win32FreePool(v7);
        UserSessionState = W32GetUserSessionState(v16, v15);
        --*(_DWORD *)(UserSessionState + 16312);
      }
      return (unsigned int)(v2 + 1);
    }
    if ( !a2 )
      return 1LL;
    v10 = Win32AllocPoolZInit(24LL, 1802007381LL);
    v11 = (struct tagHOTKEYSTRUCT *)v10;
    if ( v10 )
    {
      *(_QWORD *)(v10 + 16) = 0LL;
      *(_QWORD *)v10 = 0LL;
      *(_DWORD *)(v10 + 8) = a2;
      v18[0] = v10;
      v18[1] = a1;
      HMAssignmentLock(v18, 0LL);
      *v6 = v11;
      v14 = W32GetUserSessionState(v13, v12);
      ++*(_DWORD *)(v14 + 16312);
      return (unsigned int)(v2 + 1);
    }
  }
  return 0LL;
}
