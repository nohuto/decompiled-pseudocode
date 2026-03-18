/*
 * XREFs of ?IsChildSameThread@@YAHPEAUtagWND@@0@Z @ 0x14027F830
 * Callers:
 *     ?ImeCanDestroyDefIMEforChild@@YAHPEAUtagWND@@0@Z @ 0x1401BF794 (-ImeCanDestroyDefIMEforChild@@YAHPEAUtagWND@@0@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IsChildSameThread(struct tagWND *a1, struct tagWND *a2)
{
  __int64 v2; // r14
  struct tagWND *i; // rsi
  struct tagWND *v5; // rdi
  __int16 *v6; // rcx
  __int16 v7; // bx
  __int16 *v8; // rbx
  __int16 v9; // bx
  __int64 v10; // rax
  struct tagWND *v11; // rdi
  int v12; // ebp
  __int16 *v13; // rbx
  __int16 v14; // bx
  __int16 *v15; // rbx
  __int16 v16; // bx

  v2 = *((_QWORD *)a2 + 2);
  for ( i = (struct tagWND *)*((_QWORD *)a1 + 14); i; i = (struct tagWND *)*((_QWORD *)i + 11) )
  {
    if ( (*(_BYTE *)(*((_QWORD *)i + 5) + 31LL) & 0xC0) != 0x40 )
    {
      v5 = i;
      v6 = *(__int16 **)(*((_QWORD *)i + 17) + 8LL);
      v7 = *v6;
      a1 = *(struct tagWND **)(W32GetUserSessionState(v6, a2) + 19928);
      if ( v7 == *((_WORD *)a1 + 453) )
        continue;
      while ( v5 )
      {
        v8 = *(__int16 **)(*((_QWORD *)v5 + 17) + 8LL);
        if ( (v8[5] & 1) != 0 )
          goto LABEL_25;
        v9 = *v8;
        a1 = *(struct tagWND **)(W32GetUserSessionState(a1, a2) + 19928);
        if ( v9 == *((_WORD *)a1 + 449) )
          goto LABEL_25;
        v5 = (struct tagWND *)*((_QWORD *)v5 + 15);
      }
    }
    if ( i != a2 && *((_QWORD *)i + 2) == v2 )
    {
      v10 = *((_QWORD *)i + 5);
      v11 = i;
      v12 = 0;
      while ( 1 )
      {
        LOBYTE(a1) = *(_BYTE *)(v10 + 31) & 0xC0;
        if ( (_BYTE)a1 != 64 || *((_QWORD *)v11 + 2) != v2 )
          break;
        v13 = *(__int16 **)(*((_QWORD *)v11 + 17) + 8LL);
        if ( (v13[5] & 1) != 0
          || (v14 = *v13, a1 = *(struct tagWND **)(W32GetUserSessionState(a1, a2) + 19928), v14 == *((_WORD *)a1 + 449)) )
        {
          v12 = 1;
        }
        v11 = (struct tagWND *)*((_QWORD *)v11 + 13);
        v10 = *((_QWORD *)v11 + 5);
      }
      LOBYTE(a1) = *(_BYTE *)(*((_QWORD *)v11 + 5) + 31LL) & 0xC0;
      if ( (_BYTE)a1 != 64 )
      {
        do
        {
          if ( *((_QWORD *)v11 + 2) != v2 )
            break;
          v15 = *(__int16 **)(*((_QWORD *)v11 + 17) + 8LL);
          if ( (v15[5] & 1) == 0 )
          {
            v16 = *v15;
            a1 = *(struct tagWND **)(W32GetUserSessionState(a1, a2) + 19928);
            if ( v16 != *((_WORD *)a1 + 449) )
              continue;
          }
          v12 = 1;
          v11 = (struct tagWND *)*((_QWORD *)v11 + 15);
        }
        while ( v11 );
      }
      if ( !v12 )
        return 1LL;
    }
LABEL_25:
    ;
  }
  return 0LL;
}
