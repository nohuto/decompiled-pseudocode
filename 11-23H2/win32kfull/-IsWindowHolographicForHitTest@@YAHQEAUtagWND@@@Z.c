/*
 * XREFs of ?IsWindowHolographicForHitTest@@YAHQEAUtagWND@@@Z @ 0x1C0122850
 * Callers:
 *     ?IsWindowActivateable@@YA_NPEBUtagWND@@@Z @ 0x1C00A40E8 (-IsWindowActivateable@@YA_NPEBUtagWND@@@Z.c)
 *     ?xxxDCEWindowHitTestIndirect@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@_NPEAUtagDCE_WINDOW_HIT_TEST_ARGS@@@Z @ 0x1C0121950 (-xxxDCEWindowHitTestIndirect@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@_NPEAUtagDCE_WINDOW_HIT_TEST_.c)
 *     ?IsCompositionInputWindowForHitTest@@YAHPEAUtagWND@@@Z @ 0x1C0122588 (-IsCompositionInputWindowForHitTest@@YAHPEAUtagWND@@@Z.c)
 * Callees:
 *     _GetTopLevelWindow @ 0x1C00AE7B0 (_GetTopLevelWindow.c)
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C00EB194 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?IS_USERCRIT_OWNED_AT_ALL@@YA_NXZ @ 0x1C011E808 (-IS_USERCRIT_OWNED_AT_ALL@@YA_NXZ.c)
 *     _IsTopLevelWindow @ 0x1C0122A20 (_IsTopLevelWindow.c)
 *     ?IS_USERCRIT_OWNED_EXCLUSIVE@@YA_NXZ @ 0x1C0122A54 (-IS_USERCRIT_OWNED_EXCLUSIVE@@YA_NXZ.c)
 *     __security_check_cookie @ 0x1C01381F0 (__security_check_cookie.c)
 */

_BOOL8 __fastcall IsWindowHolographicForHitTest(struct tagWND *const a1)
{
  struct tagWND *v1; // rbx
  __int64 v2; // rcx
  __int64 v3; // rax
  __int64 v4; // rax
  int v5; // esi
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rsi
  __int64 v11; // r14
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  _DWORD *Prop; // rdi
  int v17; // edi
  tagObjLock **v19; // rsi
  int v20; // r12d
  __int128 v21; // [rsp+48h] [rbp-41h] BYREF
  char v22; // [rsp+58h] [rbp-31h]
  char v23; // [rsp+60h] [rbp-29h]
  __int128 v24; // [rsp+70h] [rbp-19h]

  v1 = a1;
  if ( !a1 )
    return 0LL;
  v24 = 0LL;
  while ( 1 )
  {
    v2 = *((_QWORD *)v1 + 13);
    if ( !v2 )
      return 0LL;
    v3 = *((_QWORD *)v1 + 3);
    if ( v3 )
    {
      v4 = *(_QWORD *)(v3 + 8);
      if ( v4 )
      {
        if ( v2 == *(_QWORD *)(v4 + 24) )
          break;
      }
    }
    v1 = (struct tagWND *)*((_QWORD *)v1 + 13);
  }
  if ( !v1 )
    return 0LL;
  v5 = 0;
  if ( !(unsigned int)IsTopLevelWindow(v1)
    && ((*(_BYTE *)(*((_QWORD *)v1 + 5) + 26LL) & 8) == 0 || !GetTopLevelWindow(v7)) )
  {
    goto LABEL_13;
  }
  v10 = *((_QWORD *)v1 + 18);
  v21 = 0LL;
  v22 = 0;
  v11 = *(unsigned __int16 *)&WPP_MAIN_CB.DeviceQueue.Busy;
  v23 = 0;
  if ( !IS_USERCRIT_OWNED_EXCLUSIVE() && IS_USERCRIT_OWNED_AT_ALL(v13, v12, v14, v15) )
  {
    v23 = 1;
    if ( v10 == gObjDummyLock )
      v10 = 0LL;
    *(_QWORD *)&v21 = v10;
    v19 = (tagObjLock **)&v21;
    v20 = 0;
    do
    {
      if ( *v19 )
        tagObjLock::LockExclusive(*v19);
      ++v20;
      ++v19;
    }
    while ( !v20 );
    v22 = 1;
  }
  Prop = (_DWORD *)RealGetProp(*((_QWORD *)v1 + 18), v11, 1LL);
  if ( v23 && v22 )
  {
    v7 = v21;
    if ( (_QWORD)v21 )
      tagObjLock::UnLockExclusive((tagObjLock *)v21);
    v22 = 0;
  }
  v5 = 1;
  if ( Prop )
  {
    v17 = *Prop & 0x7FFFF;
  }
  else
  {
LABEL_13:
    LOWORD(v17) = 0;
    if ( !*((_QWORD *)v1 + 2) )
      PtiCurrentShared(v7, v6, v8, v9);
    if ( !v5 )
      return 0LL;
  }
  return (v17 & 0x2000) != 0;
}
