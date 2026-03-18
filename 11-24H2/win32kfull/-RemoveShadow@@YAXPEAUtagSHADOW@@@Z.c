/*
 * XREFs of ?RemoveShadow@@YAXPEAUtagSHADOW@@@Z @ 0x1402C8850
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall RemoveShadow(struct tagSHADOW *a1, __int64 a2)
{
  struct tagSHADOW **i; // rdx
  struct tagSHADOW *v4; // rbx

  for ( i = (struct tagSHADOW **)(W32GetUserSessionState(a1, a2) + 63424); ; i = (struct tagSHADOW **)((char *)v4 + 16) )
  {
    v4 = *i;
    if ( !*i )
      break;
    if ( v4 == a1 )
    {
      *i = (struct tagSHADOW *)*((_QWORD *)v4 + 2);
      HMAssignmentUnlock(a1);
      HMAssignmentUnlock((char *)a1 + 8);
      Win32FreePool(v4);
      return;
    }
  }
}
