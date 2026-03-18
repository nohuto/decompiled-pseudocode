/*
 * XREFs of ?xxxRegisterGhostWindow@@YAHPEAUHWND__@@0@Z @ 0x1C01F4878
 * Callers:
 *     NtUserRegisterGhostWindow @ 0x1C01D8E70 (NtUserRegisterGhostWindow.c)
 * Callees:
 *     InternalRemoveProp @ 0x1C0026C40 (InternalRemoveProp.c)
 *     ?IsHungWindow@@YA_NPEBUtagWND@@@Z @ 0x1C006E4C4 (-IsHungWindow@@YA_NPEBUtagWND@@@Z.c)
 *     IsWindowBeingDestroyed @ 0x1C00AD46C (IsWindowBeingDestroyed.c)
 *     HMValidateHandleNoSecure @ 0x1C00B02D0 (HMValidateHandleNoSecure.c)
 *     _GetProp @ 0x1C00B6E24 (_GetProp.c)
 *     UserSetLastError @ 0x1C00EDA4C (UserSetLastError.c)
 *     ?SetGhostFNID@@YAHPEAUtagWND@@H@Z @ 0x1C01F34C8 (-SetGhostFNID@@YAHPEAUtagWND@@H@Z.c)
 *     ?SetGhostProp@@YAHPEAUtagWND@@PEAUHWND__@@@Z @ 0x1C01F3508 (-SetGhostProp@@YAHPEAUtagWND@@PEAUHWND__@@@Z.c)
 *     ?_ShouldGhostWindow@@YA_NPEBUtagWND@@@Z @ 0x1C01F3B4C (-_ShouldGhostWindow@@YA_NPEBUtagWND@@@Z.c)
 *     ?xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1C01F410C (-xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 *     ?xxxShowGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1C01F4E00 (-xxxShowGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 */

__int64 __fastcall xxxRegisterGhostWindow(HWND a1, HWND a2, __int64 a3)
{
  unsigned int v5; // esi
  __int64 CurrentProcess; // rax
  const struct tagWND *v7; // rbx
  __int64 v8; // r9
  __int64 v9; // rax
  struct tagWND *v10; // rdi
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // r9
  __int64 v18; // r9
  __int64 v19; // r9
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int128 v24; // [rsp+20h] [rbp-48h] BYREF
  __int64 v25; // [rsp+30h] [rbp-38h]
  __int128 v26; // [rsp+38h] [rbp-30h] BYREF
  __int64 v27; // [rsp+48h] [rbp-20h]

  v5 = 0;
  CurrentProcess = PsGetCurrentProcess(a1, a2, a3);
  if ( !(unsigned int)IsProcessDwm(CurrentProcess) )
  {
    UserSetLastError(5);
    return v5;
  }
  v7 = (const struct tagWND *)HMValidateHandleNoSecure((int)a2, 1);
  if ( v7 )
  {
    v24 = 0LL;
    v25 = 0LL;
    ThreadLock(v7, &v24);
    if ( !_ShouldGhostWindow(v7) )
      goto LABEL_21;
    if ( GetProp((__int64)v7, *(unsigned __int16 *)(gpsi + 900LL), 1LL, v8) != -1 )
      goto LABEL_21;
    if ( !IsHungWindow((const struct tagTHREADINFO **)v7) )
      goto LABEL_21;
    v9 = HMValidateHandleNoSecure((int)a1, 1);
    v10 = (struct tagWND *)v9;
    if ( !v9
      || *(_QWORD *)(v9 + 16) != gptiCurrent
      || **(_WORD **)(*(_QWORD *)(v9 + 136) + 8LL) != *(_WORD *)(gpsi + 900LL) )
    {
      goto LABEL_21;
    }
    v26 = 0LL;
    v27 = 0LL;
    ThreadLock(v9, &v26);
    if ( (unsigned int)SetGhostProp(v10, a2, v11, v12) )
    {
      if ( (unsigned int)SetGhostProp(v7, a1, v15, v16) )
      {
        SetGhostFNID(v10, 1);
        xxxShowGhostWindow(v10, v7);
        if ( !(unsigned int)IsWindowBeingDestroyed((__int64)v10)
          && !(unsigned int)IsWindowBeingDestroyed((__int64)v7)
          && (HWND)GetProp((__int64)v10, *(unsigned __int16 *)(gpsi + 900LL), 1LL, v17) == a2
          && (HWND)GetProp((__int64)v7, *(unsigned __int16 *)(gpsi + 900LL), 1LL, v18) == a1 )
        {
          v5 = 1;
          goto LABEL_20;
        }
        SetGhostFNID(v10, 0);
        if ( (HWND)GetProp((__int64)v7, *(unsigned __int16 *)(gpsi + 900LL), 1LL, v19) == a1 )
          InternalRemoveProp((__int64)v7, *(unsigned __int16 *)(gpsi + 900LL), 1u);
        xxxHideGhostWindow(v10, v7);
      }
      InternalRemoveProp((__int64)v10, *(unsigned __int16 *)(gpsi + 900LL), 1u);
    }
LABEL_20:
    ThreadUnlock1(v14, v13, v15);
    if ( v5 )
    {
LABEL_23:
      ThreadUnlock1(v21, v20, v22);
      return v5;
    }
LABEL_21:
    if ( GetProp((__int64)v7, *(unsigned __int16 *)(gpsi + 900LL), 1LL, v8) == -1 )
      InternalRemoveProp((__int64)v7, *(unsigned __int16 *)(gpsi + 900LL), 1u);
    goto LABEL_23;
  }
  return v5;
}
