/*
 * XREFs of ?HasOwnedWindowInTree@@YAHPEAUtagWND@@0@Z @ 0x1401572E0
 * Callers:
 *     SetWindowGroupBand @ 0x1401571C4 (SetWindowGroupBand.c)
 *     ?HasOwnedWindowInTree@@YAHPEAUtagWND@@0@Z @ 0x1401572E0 (-HasOwnedWindowInTree@@YAHPEAUtagWND@@0@Z.c)
 * Callees:
 *     ?HasOwnedWindowInTree@@YAHPEAUtagWND@@0@Z @ 0x1401572E0 (-HasOwnedWindowInTree@@YAHPEAUtagWND@@0@Z.c)
 */

__int64 __fastcall HasOwnedWindowInTree(struct tagWND **a1, struct tagWND *a2)
{
  struct tagWND *i; // r8
  struct tagWND *j; // rax
  struct tagWND *v5; // rax
  struct tagWND *k; // rbx

  for ( i = (struct tagWND *)a1; i; i = v5 )
  {
    for ( j = i; j; j = (struct tagWND *)*((_QWORD *)j + 13) )
    {
      if ( j == a2 )
        return 1LL;
    }
    v5 = 0LL;
    if ( *((struct tagWND **)i + 15) != i )
      v5 = (struct tagWND *)*((_QWORD *)i + 15);
  }
  for ( k = a1[14]; ; k = (struct tagWND *)*((_QWORD *)k + 11) )
  {
    if ( !k )
      return 0LL;
    if ( (unsigned int)HasOwnedWindowInTree(k, a2) )
      break;
  }
  return 1LL;
}
