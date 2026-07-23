/*
 * XREFs of VrpInitializeLoadedDifferencingHives @ 0x14082A468
 * Callers:
 *     VRegSetup @ 0x140829940 (VRegSetup.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 */

__int64 VrpInitializeLoadedDifferencingHives()
{
  unsigned int v0; // ebx
  char *Pool2; // rax

  v0 = 0;
  gLoadedDiffHivesLock = 0LL;
  Pool2 = (char *)ExAllocatePool2(0x100uLL, 0x100uLL, 0x67655256u);
  if ( Pool2 )
  {
    gLoadedDiffHives = 0;
    qword_140EF00F8 = (__int64)Pool2;
    dword_140EF00F4 = 1024;
    if ( (Pool2 + 256 >= Pool2 ? 0x20 : 0) != 0 )
      memset64(Pool2, (unsigned __int64)&gLoadedDiffHives + 1, Pool2 + 256 >= Pool2 ? 0x20 : 0);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v0;
}
