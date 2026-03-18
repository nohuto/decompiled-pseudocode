/*
 * XREFs of ?CleanupActivationFiltersForDesktop@@YAXPEAUtagDESKTOP@@@Z @ 0x14027590C
 * Callers:
 *     ?CleanupShellWindowManagement@@YAXPEAUtagDESKTOP@@@Z @ 0x140275990 (-CleanupShellWindowManagement@@YAXPEAUtagDESKTOP@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CleanupActivationFiltersForDesktop(struct tagDESKTOP *a1)
{
  char *v1; // rsi
  char *v2; // rbx
  __int64 v3; // rcx
  char *v4; // rdi
  char **v5; // rax

  v1 = (char *)a1 + 312;
  v2 = (char *)*((_QWORD *)a1 + 39);
  if ( v2 )
  {
    while ( v2 != v1 )
    {
      v3 = *(_QWORD *)v2;
      v4 = v2;
      v2 = (char *)v3;
      if ( *(char **)(v3 + 8) != v4 || (v5 = (char **)*((_QWORD *)v4 + 1), *v5 != v4) )
        __fastfail(3u);
      *v5 = (char *)v3;
      *(_QWORD *)(v3 + 8) = v5;
      HMAssignmentUnlock(v4 + 16);
      Win32FreePool(v4);
    }
  }
}
