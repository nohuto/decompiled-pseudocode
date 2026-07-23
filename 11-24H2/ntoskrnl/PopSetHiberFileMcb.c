/*
 * XREFs of PopSetHiberFileMcb @ 0x140A72520
 * Callers:
 *     PopCreateHiberFile @ 0x140750050 (PopCreateHiberFile.c)
 *     PopResizeHiberFile @ 0x140A72354 (PopResizeHiberFile.c)
 * Callees:
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PopSetHiberFileMcb(PVOID P, unsigned int a2)
{
  unsigned int v2; // ebx
  ULONG_PTR v3; // rsi
  void *Pool2; // rax

  v2 = 0;
  v3 = a2;
  if ( P )
  {
    if ( qword_140F0BB98 )
      ExFreePoolWithTag(qword_140F0BB98, 0x72626968u);
    LODWORD(dword_140F0BBA0) = v3;
    Pool2 = (void *)ExAllocatePool2(0x40uLL, v3, 0x72626968u);
    qword_140F0BB98 = Pool2;
    if ( Pool2 )
    {
      memmove(Pool2, P, (unsigned int)dword_140F0BBA0);
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
