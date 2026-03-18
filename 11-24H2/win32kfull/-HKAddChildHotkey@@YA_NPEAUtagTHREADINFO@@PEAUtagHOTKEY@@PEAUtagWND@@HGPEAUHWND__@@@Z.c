/*
 * XREFs of ?HKAddChildHotkey@@YA_NPEAUtagTHREADINFO@@PEAUtagHOTKEY@@PEAUtagWND@@HGPEAUHWND__@@@Z @ 0x140209500
 * Callers:
 *     ?_RegisterHotKey@@YA_NPEAUtagWND@@P6A?AW4tagHotKeyCallBackResult@@_K_J@ZHIIPEAUHWND__@@@Z @ 0x140288B94 (-_RegisterHotKey@@YA_NPEAUtagWND@@P6A-AW4tagHotKeyCallBackResult@@_K_J@ZHIIPEAUHWND__@@@Z.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 */

char __fastcall HKAddChildHotkey(
        struct tagTHREADINFO *a1,
        struct tagHOTKEY *a2,
        struct tagWND *a3,
        int a4,
        unsigned __int16 a5,
        HWND a6)
{
  struct tagHOTKEY *v9; // rdi
  __int64 v10; // rsi
  struct tagHOTKEY *v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rbx
  __int64 v16; // rcx
  __int64 v17; // r8
  struct tagTHREADINFO *v18; // rdx
  struct tagTHREADINFO *v19; // rax
  char *v20; // rax
  char **v21; // rcx

  if ( (a5 & 0xBF7F) != 0 )
    return 0;
  v9 = (struct tagHOTKEY *)((char *)a2 + 56);
  v10 = 0LL;
  v11 = (struct tagHOTKEY *)*((_QWORD *)a2 + 7);
  if ( v11 != (struct tagHOTKEY *)((char *)a2 + 56) )
  {
    while ( v11 != v9 )
    {
      v16 = 0LL;
      if ( a3 )
        v16 = *(_QWORD *)a3;
      v17 = *((_QWORD *)v11 - 3);
      v18 = (struct tagTHREADINFO *)*((_QWORD *)v11 - 4);
      if ( v17 == v16 )
      {
        if ( v18 != a1 )
          return 0;
        if ( *((_DWORD *)v11 - 3) == a4 )
        {
          if ( *((_WORD *)v11 - 8) == a5 )
            return 0;
          *((_WORD *)v11 - 8) = a5;
          return 1;
        }
        if ( v17 == v16 )
          return 0;
      }
      if ( v18 == a1 )
        return 0;
      v11 = *(struct tagHOTKEY **)v11;
    }
  }
  v14 = Win32AllocPoolZInit(48LL, 1802007381LL);
  if ( !v14 )
    return 0;
  v19 = PtiCurrent(v13, v12);
  *(_QWORD *)v14 = v19;
  ++*((_DWORD *)v19 + 239);
  if ( a3 )
    v10 = *(_QWORD *)a3;
  *(_QWORD *)(v14 + 24) = a6;
  v20 = (char *)(v14 + 32);
  *(_QWORD *)(v14 + 8) = v10;
  *(_DWORD *)(v14 + 20) = a4;
  *(_WORD *)(v14 + 16) = a5;
  v21 = (char **)*((_QWORD *)v9 + 1);
  if ( *v21 != (char *)v9 )
    __fastfail(3u);
  *(_QWORD *)v20 = v9;
  *(_QWORD *)(v14 + 40) = v21;
  *v21 = v20;
  *((_QWORD *)v9 + 1) = v20;
  return 1;
}
