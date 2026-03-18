/*
 * XREFs of ?IsHelpParent@@YAHPEAUtagWND@@@Z @ 0x1402F274C
 * Callers:
 *     xxxHelpLoop @ 0x1402E98E4 (xxxHelpLoop.c)
 *     ?EnumPwndDlgChildProc@@YAHPEAUtagWND@@_J@Z @ 0x1402F2700 (-EnumPwndDlgChildProc@@YAHPEAUtagWND@@_J@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IsHelpParent(struct tagWND *a1, __int64 a2)
{
  unsigned int v2; // ebx
  _BYTE *v5; // rcx

  v2 = 0;
  if ( !a1 )
    return 0LL;
  v5 = (_BYTE *)*((_QWORD *)a1 + 5);
  if ( (v5[26] & 1) != 0
    || (v5[18] & 1) != 0
    || (v5[28] & 0xF) == 7
    && *(_WORD *)(*(_QWORD *)(W32GetUserSessionState(v5, a2) + 19928) + 868LL) == *(_WORD *)(*(_QWORD *)(*((_QWORD *)a1 + 17) + 8LL)
                                                                                           + 2LL) )
  {
    return 1;
  }
  return v2;
}
