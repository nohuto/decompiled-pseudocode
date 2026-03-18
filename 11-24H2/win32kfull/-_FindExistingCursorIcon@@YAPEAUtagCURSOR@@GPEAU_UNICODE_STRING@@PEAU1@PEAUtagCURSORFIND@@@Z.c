/*
 * XREFs of ?_FindExistingCursorIcon@@YAPEAUtagCURSOR@@GPEAU_UNICODE_STRING@@PEAU1@PEAUtagCURSORFIND@@@Z @ 0x14015C854
 * Callers:
 *     NtUserFindExistingCursorIcon @ 0x140294EB0 (NtUserFindExistingCursorIcon.c)
 * Callees:
 *     W32GetCurrentThreadNonPaged @ 0x14026E814 (W32GetCurrentThreadNonPaged.c)
 *     ?ResStrCmp@@YAHREAU_UNICODE_STRING@@PEAU1@@Z @ 0x14028A3A4 (-ResStrCmp@@YAHREAU_UNICODE_STRING@@PEAU1@@Z.c)
 */

struct tagCURSOR *__fastcall _FindExistingCursorIcon(
        __int64 a1,
        struct _UNICODE_STRING *a2,
        struct tagCURSOR *a3,
        struct tagCURSORFIND *a4)
{
  __int64 v4; // rbx
  __int16 v8; // r14
  __int64 *CurrentThreadNonPaged; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 i; // rdi
  int v14; // eax
  int v15; // eax
  int v16; // eax
  int v17; // ecx
  int v18; // eax

  v4 = 0LL;
  v8 = a1;
  if ( *((_DWORD *)a4 + 2) && (_WORD)a1 )
  {
    CurrentThreadNonPaged = (__int64 *)W32GetCurrentThreadNonPaged(a1, a2);
    if ( CurrentThreadNonPaged )
      v11 = *CurrentThreadNonPaged;
    else
      v11 = 0LL;
    if ( (*(_DWORD *)(v11 + 1360) & 0x8000000) != 0 )
      v11 = *(_QWORD *)(v11 + 1680);
    for ( i = *(_QWORD *)(*(_QWORD *)(v11 + 464) + 728LL); i; i = *(_QWORD *)(i + 32) )
    {
      if ( a3 && (struct tagCURSOR *)i == a3 )
        return a3;
      if ( v8 == *(_WORD *)(i + 72)
        && (*(_DWORD *)(i + 80) & 0x1004) == 4
        && *(_WORD *)(i + 74) == *((_WORD *)a4 + 4)
        && (unsigned int)ResStrCmp(a2, (struct _UNICODE_STRING *)(i + 56)) )
      {
        if ( (*(_DWORD *)(i + 80) & 8) != 0 )
          return (struct tagCURSOR *)i;
        v14 = *((_DWORD *)a4 + 3);
        if ( !v14 || *(_DWORD *)(i + 140) == v14 )
        {
          v11 = *((unsigned int *)a4 + 4);
          if ( !(_DWORD)v11 || *(_DWORD *)(i + 144) >> 1 == (_DWORD)v11 )
          {
            v15 = *((_DWORD *)a4 + 5);
            if ( !v15 || *(_DWORD *)(i + 136) == v15 )
              return (struct tagCURSOR *)i;
          }
        }
      }
    }
    for ( i = *(_QWORD *)(W32GetUserSessionState(v11, v10) + 36336); i; i = *(_QWORD *)(i + 32) )
    {
      if ( a3 && (struct tagCURSOR *)i == a3 )
        return a3;
      if ( v8 == *(_WORD *)(i + 72)
        && (*(_DWORD *)(i + 80) & 0x1004) == 4
        && *(_WORD *)(i + 74) == *((_WORD *)a4 + 4)
        && (unsigned int)ResStrCmp(a2, (struct _UNICODE_STRING *)(i + 56)) )
      {
        if ( (*(_DWORD *)(i + 80) & 8) != 0 )
          return (struct tagCURSOR *)i;
        v16 = *((_DWORD *)a4 + 3);
        if ( !v16 || *(_DWORD *)(i + 140) == v16 )
        {
          v17 = *((_DWORD *)a4 + 4);
          if ( !v17 || *(_DWORD *)(i + 144) >> 1 == v17 )
          {
            v18 = *((_DWORD *)a4 + 5);
            if ( !v18 || *(_DWORD *)(i + 136) == v18 )
              return (struct tagCURSOR *)i;
          }
        }
      }
    }
  }
  return (struct tagCURSOR *)v4;
}
