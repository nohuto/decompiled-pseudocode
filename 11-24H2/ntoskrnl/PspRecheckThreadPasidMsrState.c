/*
 * XREFs of PspRecheckThreadPasidMsrState @ 0x1408A6880
 * Callers:
 *     PspInsertThread @ 0x1408A59BC (PspInsertThread.c)
 * Callees:
 *     KeInsertQueueApc @ 0x140337240 (KeInsertQueueApc.c)
 *     KeInitializeApc @ 0x140422520 (KeInitializeApc.c)
 *     ExIsSvmPasidMsrUpdateRequiredForProcess @ 0x1408A68E4 (ExIsSvmPasidMsrUpdateRequiredForProcess.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 */

__int64 __fastcall PspRecheckThreadPasidMsrState(__int64 a1, __int64 a2)
{
  unsigned int v3; // edi
  __int64 Pool2; // rax
  __int64 v6; // rbx

  v3 = 0;
  if ( (unsigned __int8)ExIsSvmPasidMsrUpdateRequiredForProcess(a1) && *(char *)(a2 + 1449) >= 0 )
  {
    Pool2 = ExAllocatePool2(0x40uLL);
    if ( Pool2 )
    {
      v6 = Pool2 + 8;
      *(_QWORD *)(Pool2 + 96) = a2;
      *(_QWORD *)(Pool2 + 104) = Pool2;
      *(_DWORD *)Pool2 = 1;
      KeInitializeApc(Pool2 + 8, a2, 0, (__int64)ExSvmUpdateThreadPasidMsrApc, 0LL, 0LL, 0, 0LL);
      KeInsertQueueApc(v6, 0LL, 0LL, 0);
    }
    else
    {
      return (unsigned int)-1073741801;
    }
  }
  return v3;
}
