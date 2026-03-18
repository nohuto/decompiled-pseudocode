/*
 * XREFs of PopFxStaticWorkPoolThread @ 0x1405D1F40
 * Callers:
 *     <none>
 * Callees:
 *     KeSetActualBasePriorityThread @ 0x14020A160 (KeSetActualBasePriorityThread.c)
 *     PopFxProcessWorkPool @ 0x1404EB530 (PopFxProcessWorkPool.c)
 */

NTSTATUS __fastcall PopFxStaticWorkPoolThread(char *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rdx

  KeSetActualBasePriorityThread((ULONG_PTR)KeGetCurrentThread(), 16, a3);
  v4 = 0LL;
  do
  {
    if ( !_InterlockedCompareExchange64(
            (volatile signed __int64 *)&a1[8 * v4 + 264],
            (signed __int64)KeGetCurrentThread(),
            0LL) )
      break;
    v4 = (unsigned int)(v4 + 1);
  }
  while ( !(_DWORD)v4 );
  return PopFxProcessWorkPool(a1, v4);
}
