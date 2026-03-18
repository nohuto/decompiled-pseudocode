/*
 * XREFs of ?HKRemoveMatchingHotkeys@@YA_NPEAUtagTHREADINFO@@PEAUtagWND@@HW4HotkeyQueryType@@@Z @ 0x14015902C
 * Callers:
 *     DestroyThreadsHotKeys @ 0x1402896E0 (DestroyThreadsHotKeys.c)
 * Callees:
 *     ?MatchHandle@tagHOTKEY@@QEBA_NPEAUtagWND@@@Z @ 0x140159358 (-MatchHandle@tagHOTKEY@@QEBA_NPEAUtagWND@@@Z.c)
 *     ??$FreeHotKey@PEAUCHILDHOTKEY@@@@YAXPEAUCHILDHOTKEY@@@Z @ 0x140288584 (--$FreeHotKey@PEAUCHILDHOTKEY@@@@YAXPEAUCHILDHOTKEY@@@Z.c)
 *     ??$FreeHotKey@PEAUtagHOTKEY@@@@YAXPEAUtagHOTKEY@@@Z @ 0x14028860C (--$FreeHotKey@PEAUtagHOTKEY@@@@YAXPEAUtagHOTKEY@@@Z.c)
 *     ?HKRemoveHotkeyOrMakePlaceholder@@YA_NPEAPEAUtagHOTKEY@@@Z @ 0x140288694 (-HKRemoveHotkeyOrMakePlaceholder@@YA_NPEAPEAUtagHOTKEY@@@Z.c)
 */

char __fastcall HKRemoveMatchingHotkeys(__int64 a1, struct tagWND *a2, int a3, int a4)
{
  int v4; // edi
  char v8; // bp
  __int64 v9; // r8
  struct tagHOTKEY **v10; // r15
  unsigned __int64 v11; // rax
  struct tagHOTKEY *v12; // rcx
  struct tagHOTKEY **v13; // rbx
  char *v14; // r14
  __int64 *v15; // rdx
  __int64 *v16; // rcx
  __int64 v17; // rdi
  struct tagHOTKEY *v18; // rcx
  __int64 v20; // rax
  bool v21; // zf
  __int64 **v22; // rax
  unsigned __int64 v23; // [rsp+20h] [rbp-38h]

  v4 = a4;
  v8 = 0;
  v10 = (struct tagHOTKEY **)(W32GetUserSessionState(a1, a2) + 12952);
  v11 = 0LL;
  v23 = 0LL;
  do
  {
    v12 = *v10;
    v13 = v10;
    if ( !*v10 )
      goto LABEL_20;
    do
    {
      switch ( v4 )
      {
        case 0:
          if ( *(_QWORD *)v12 == a1 )
          {
LABEL_27:
            if ( !HKRemoveHotkeyOrMakePlaceholder(v13) )
              v13 = (struct tagHOTKEY **)((char *)*v13 + 48);
            v8 = 1;
            goto LABEL_18;
          }
          goto LABEL_8;
        case 1:
          goto LABEL_50;
        case 2:
          goto LABEL_24;
      }
      if ( v4 != 3 )
      {
        if ( v4 == 4 )
          goto LABEL_27;
        goto LABEL_8;
      }
      if ( *(_QWORD *)v12 == a1 )
      {
LABEL_24:
        if ( *((_DWORD *)v12 + 10) == a3 )
        {
LABEL_50:
          if ( tagHOTKEY::MatchHandle(v12, a2) )
            goto LABEL_27;
        }
      }
LABEL_8:
      v14 = (char *)v12 + 56;
      LOBYTE(v9) = 0;
      v15 = (__int64 *)*((_QWORD *)v12 + 7);
      if ( v15 == (__int64 *)((char *)v12 + 56) )
        goto LABEL_16;
      do
      {
        v16 = v15 - 4;
        v17 = *v15;
        if ( a4 )
        {
          if ( a4 != 1 )
          {
            if ( a4 != 2 )
            {
              if ( a4 != 3 )
              {
                if ( a4 != 4 )
                  goto LABEL_14;
                goto LABEL_34;
              }
              if ( *v16 != a1 )
                goto LABEL_14;
            }
            if ( *((_DWORD *)v16 + 5) != a3 )
              goto LABEL_14;
          }
          if ( a2 )
            v20 = *(_QWORD *)a2;
          else
            v20 = 0LL;
          v21 = v16[1] == v20;
        }
        else
        {
          v21 = *v16 == a1;
        }
        if ( !v21 )
          goto LABEL_14;
LABEL_34:
        if ( *(__int64 **)(v17 + 8) != v15 || (v22 = (__int64 **)v15[1], *v22 != v15) )
          __fastfail(3u);
        *v22 = (__int64 *)v17;
        *(_QWORD *)(v17 + 8) = v22;
        FreeHotKey<CHILDHOTKEY *>(v16, v15, v9);
        LOBYTE(v9) = 1;
LABEL_14:
        v15 = (__int64 *)v17;
      }
      while ( (char *)v17 != v14 );
      v4 = a4;
LABEL_16:
      v18 = *v13;
      v8 |= v9;
      if ( _bittest16((const signed __int16 *)*v13 + 17, 8u)
        && *((struct tagHOTKEY **)v18 + 7) == (struct tagHOTKEY *)((char *)v18 + 56) )
      {
        *v13 = (struct tagHOTKEY *)*((_QWORD *)v18 + 6);
        FreeHotKey<tagHOTKEY *>();
      }
      else
      {
        v13 = (struct tagHOTKEY **)((char *)v18 + 48);
      }
LABEL_18:
      v12 = *v13;
    }
    while ( *v13 );
    v11 = v23;
LABEL_20:
    ++v11;
    ++v10;
    v23 = v11;
  }
  while ( v11 < 0x80 );
  return v8;
}
