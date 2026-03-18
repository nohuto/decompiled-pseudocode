/*
 * XREFs of PopSetHiberFileMcb @ 0x140A78220
 * Callers:
 *     PopCreateHiberFile @ 0x140751D30 (PopCreateHiberFile.c)
 *     PopResizeHiberFile @ 0x140A78054 (PopResizeHiberFile.c)
 * Callees:
 *     memmove @ 0x1406BFC40 (memmove.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PopSetHiberFileMcb(PVOID P, int a2)
{
  unsigned int v2; // ebx
  void *Pool2; // rax

  v2 = 0;
  if ( P )
  {
    if ( qword_140F0AD58 )
      ExFreePoolWithTag(qword_140F0AD58, 0x72626968u);
    LODWORD(dword_140F0AD60) = a2;
    Pool2 = (void *)ExAllocatePool2(0x40uLL);
    qword_140F0AD58 = Pool2;
    if ( Pool2 )
    {
      memmove(Pool2, P, (unsigned int)dword_140F0AD60);
      ExFreePoolWithTag(P, 0);
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v2;
}
