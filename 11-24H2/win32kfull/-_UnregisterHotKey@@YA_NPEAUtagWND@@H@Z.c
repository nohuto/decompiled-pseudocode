/*
 * XREFs of ?_UnregisterHotKey@@YA_NPEAUtagWND@@H@Z @ 0x140158E6C
 * Callers:
 *     NtUserUnregisterHotKey @ 0x140158DE0 (NtUserUnregisterHotKey.c)
 *     ?_RegisterWindowArrangementCallout@@YA_JPEAUtagWND@@H@Z @ 0x1402405A4 (-_RegisterWindowArrangementCallout@@YA_JPEAUtagWND@@H@Z.c)
 * Callees:
 *     UserSetLastError @ 0x14005FE74 (UserSetLastError.c)
 *     ?MatchHandle@tagHOTKEY@@QEBA_NPEAUtagWND@@@Z @ 0x140159358 (-MatchHandle@tagHOTKEY@@QEBA_NPEAUtagWND@@@Z.c)
 *     W32GetCurrentThreadNonPaged @ 0x14026E814 (W32GetCurrentThreadNonPaged.c)
 *     ??$FreeHotKey@PEAUCHILDHOTKEY@@@@YAXPEAUCHILDHOTKEY@@@Z @ 0x140288584 (--$FreeHotKey@PEAUCHILDHOTKEY@@@@YAXPEAUCHILDHOTKEY@@@Z.c)
 *     ??$FreeHotKey@PEAUtagHOTKEY@@@@YAXPEAUtagHOTKEY@@@Z @ 0x14028860C (--$FreeHotKey@PEAUtagHOTKEY@@@@YAXPEAUtagHOTKEY@@@Z.c)
 *     ?HKRemoveHotkeyOrMakePlaceholder@@YA_NPEAPEAUtagHOTKEY@@@Z @ 0x140288694 (-HKRemoveHotkeyOrMakePlaceholder@@YA_NPEAPEAUtagHOTKEY@@@Z.c)
 */

char __fastcall _UnregisterHotKey(struct tagWND *a1, __int64 a2)
{
  unsigned int v2; // esi
  __int64 *CurrentThreadNonPaged; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r15
  char v8; // bp
  unsigned __int64 v9; // r12
  __int64 v10; // rdx
  struct tagHOTKEY **v11; // rdi
  struct tagHOTKEY *v12; // rcx
  struct tagHOTKEY **v13; // rbx
  struct tagHOTKEY *v14; // rcx
  char *v15; // r14
  char v16; // r8
  __int64 *v17; // rax
  __int64 v18; // rsi
  __int64 *v19; // rcx
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 **v23; // rdx
  unsigned int v24; // [rsp+58h] [rbp+10h]

  v24 = a2;
  v2 = a2;
  CurrentThreadNonPaged = (__int64 *)W32GetCurrentThreadNonPaged(a1, a2);
  if ( CurrentThreadNonPaged )
    v7 = *CurrentThreadNonPaged;
  else
    v7 = 0LL;
  v8 = 0;
  v9 = 0LL;
  v11 = (struct tagHOTKEY **)(W32GetUserSessionState(v6, v5) + 12952);
  do
  {
    v12 = *v11;
    v13 = v11;
    while ( v12 )
    {
      if ( *(_QWORD *)v12 == v7 && *((_DWORD *)v12 + 10) == v2 && tagHOTKEY::MatchHandle(v12, a1) )
      {
        if ( !HKRemoveHotkeyOrMakePlaceholder(v13) )
          v13 = (struct tagHOTKEY **)((char *)*v13 + 48);
        v8 = 1;
      }
      else
      {
        v15 = (char *)v12 + 56;
        v16 = 0;
        v17 = (__int64 *)*((_QWORD *)v12 + 7);
        if ( v17 != (__int64 *)((char *)v12 + 56) )
        {
          do
          {
            v18 = *v17;
            v19 = v17 - 4;
            if ( *(v17 - 4) == v7 )
            {
              v10 = v24;
              if ( *((_DWORD *)v19 + 5) == v24 )
              {
                v10 = a1 ? *(_QWORD *)a1 : 0LL;
                if ( v19[1] == v10 )
                {
                  if ( *(__int64 **)(v18 + 8) != v17 || (v23 = (__int64 **)v17[1], *v23 != v17) )
                    __fastfail(3u);
                  *v23 = (__int64 *)v18;
                  *(_QWORD *)(v18 + 8) = v23;
                  FreeHotKey<CHILDHOTKEY *>();
                  v16 = 1;
                }
              }
            }
            v17 = (__int64 *)v18;
          }
          while ( (char *)v18 != v15 );
          v2 = v24;
        }
        v14 = *v13;
        v8 |= v16;
        if ( _bittest16((const signed __int16 *)*v13 + 17, 8u)
          && *((struct tagHOTKEY **)v14 + 7) == (struct tagHOTKEY *)((char *)v14 + 56) )
        {
          *v13 = (struct tagHOTKEY *)*((_QWORD *)v14 + 6);
          FreeHotKey<tagHOTKEY *>();
        }
        else
        {
          v13 = (struct tagHOTKEY **)((char *)v14 + 48);
        }
      }
      v12 = *v13;
    }
    ++v9;
    ++v11;
  }
  while ( v9 < 0x80 );
  if ( v8 )
  {
    if ( *(_QWORD *)(W32GetUserSessionState(0LL, v10) + 14000) )
      *(_QWORD *)(W32GetUserSessionState(v22, v21) + 14000) = 0LL;
    return 1;
  }
  else
  {
    UserSetLastError(1419);
    return 0;
  }
}
