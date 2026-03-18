/*
 * XREFs of DestroyProcessesClasses @ 0x1401C43A0
 * Callers:
 *     <none>
 * Callees:
 *     DestroyClass @ 0x1400B4778 (DestroyClass.c)
 */

__int64 __fastcall DestroyProcessesClasses(struct _CALLPROCDATA ***a1)
{
  struct _CALLPROCDATA ***i; // rdi
  __int64 result; // rax

  for ( i = a1 + 44; *i; result = DestroyClass((struct tagPROCESSINFO *)a1, i) )
    ;
  while ( a1[45] )
    result = DestroyClass((struct tagPROCESSINFO *)a1, a1 + 45);
  return result;
}
