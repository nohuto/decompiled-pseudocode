/*
 * XREFs of PopSetHiberFileMcb @ 0x140A7644C
 * Callers:
 *     PopCreateHiberFile @ 0x140745C64 (PopCreateHiberFile.c)
 *     PopResizeHiberFile @ 0x140A76280 (PopResizeHiberFile.c)
 * Callees:
 *     memmove @ 0x1406B4940 (memmove.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PopSetHiberFileMcb(PVOID P, int a2)
{
  unsigned int v2; // ebx
  void *Pool2; // rax

  v2 = 0;
  if ( P )
  {
    if ( qword_140F0AD78 )
      ExFreePoolWithTag(qword_140F0AD78, 0x72626968u);
    LODWORD(dword_140F0AD80) = a2;
    Pool2 = (void *)ExAllocatePool2(0x40uLL);
    qword_140F0AD78 = Pool2;
    if ( Pool2 )
    {
      memmove(Pool2, P, (unsigned int)dword_140F0AD80);
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
