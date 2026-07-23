/*
 * XREFs of WmipSDRegistryQueryRoutine @ 0x1408354E0
 * Callers:
 *     RtlpCallQueryRegistryRoutine @ 0x140835044 (RtlpCallQueryRegistryRoutine.c)
 * Callees:
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     SeValidSecurityDescriptor @ 0x140835560 (SeValidSecurityDescriptor.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 */

__int64 __fastcall WmipSDRegistryQueryRoutine(__int64 a1, int a2, void *a3, ULONG a4, __int64 a5, _QWORD *a6)
{
  unsigned int v6; // ebx
  ULONG_PTR v7; // rsi
  void *Pool2; // rax

  v6 = 0;
  v7 = a4;
  if ( a2 == 3 && a3 && SeValidSecurityDescriptor(a4, a3) )
  {
    Pool2 = (void *)ExAllocatePool2(0x100uLL, v7, 0x70696D57u);
    *a6 = Pool2;
    if ( Pool2 )
      memmove(Pool2, a3, v7);
    else
      return (unsigned int)-1073741670;
  }
  return v6;
}
