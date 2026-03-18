/*
 * XREFs of ?UnloadApiSetHost@@YAXPEAU_Win32kApiSet@@@Z @ 0x14015142C
 * Callers:
 *     FreePerSessionWin32kCall @ 0x14019DB28 (FreePerSessionWin32kCall.c)
 * Callees:
 *     <none>
 */

void __fastcall UnloadApiSetHost(struct _Win32kApiSet *a1)
{
  __int64 v2; // rcx
  __int64 v3; // r8

  v2 = *((_QWORD *)a1 + 1);
  if ( *(_QWORD *)(v2 + 40) )
  {
    v3 = *(int *)(v2 + 48);
    if ( gSessionApiSetHostRefCount[v3]-- == 1 )
      MmUnloadSystemImage(*(_QWORD *)(v2 + 40));
    *(_QWORD *)(*((_QWORD *)a1 + 1) + 40LL) = 0LL;
  }
}
