/*
 * XREFs of PspConvertSiloToServerSilo @ 0x140762D94
 * Callers:
 *     NtSetInformationJobObject @ 0x140AC4C00 (NtSetInformationJobObject.c)
 * Callees:
 *     PsIsServerSilo @ 0x1403104CC (PsIsServerSilo.c)
 *     PsIsCurrentThreadInServerSilo @ 0x140311890 (PsIsCurrentThreadInServerSilo.c)
 *     PspJobHasChildren @ 0x1406EFBE4 (PspJobHasChildren.c)
 *     PspDeleteServerSiloGlobals @ 0x14076302C (PspDeleteServerSiloGlobals.c)
 *     PspQueueDeferredWorkAndWait @ 0x140763518 (PspQueueDeferredWorkAndWait.c)
 *     EtwTraceJobServerSiloStateChange @ 0x14079A208 (EtwTraceJobServerSiloStateChange.c)
 *     ObGetSiloRootDirectoryPath @ 0x14081B1D4 (ObGetSiloRootDirectoryPath.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x14084FA30 (ObpReferenceObjectByHandleWithTag.c)
 *     PsGetParentSilo @ 0x140862140 (PsGetParentSilo.c)
 *     PspLockJobExclusive @ 0x1408DC060 (PspLockJobExclusive.c)
 *     PspUnlockJob @ 0x1408DDFF0 (PspUnlockJob.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 */

__int64 __fastcall PspConvertSiloToServerSilo(__int64 a1, __int64 a2, ULONG_PTR a3, int a4)
{
  unsigned int v7; // ebx
  char *Pool2; // rax
  char *v10; // rdi
  int SiloRootDirectoryPath; // ebp
  struct _KTHREAD *CurrentThread; // r14
  __int64 v13; // rcx

  v7 = 0;
  if ( PsIsCurrentThreadInServerSilo() )
    return 3221225569LL;
  Pool2 = (char *)ExAllocatePool2(0x48uLL);
  v10 = Pool2;
  if ( !Pool2 )
    return 3221225626LL;
  *((_DWORD *)Pool2 + 318) = 0;
  *((_DWORD *)Pool2 + 319) = 259;
  *((_DWORD *)Pool2 + 334) = a4;
  if ( a3
    && (SiloRootDirectoryPath = ObpReferenceObjectByHandleWithTag(a3, 0x65446953u, (__int64)(Pool2 + 1280), 0LL, 0LL),
        SiloRootDirectoryPath < 0)
    || (SiloRootDirectoryPath = ObGetSiloRootDirectoryPath(a1, v10 + 1248), SiloRootDirectoryPath < 0)
    || ((CurrentThread = KeGetCurrentThread(), PspLockJobExclusive(a1, CurrentThread), !PsIsServerSilo(a1))
      ? (!PsGetParentSilo()
       ? (!PspJobHasChildren(a1)
        ? ((*(_DWORD *)(a1 + 256) & 0x400000) != 0
         ? (*(_QWORD *)(a1 + 1504) = v10, SiloRootDirectoryPath = 0)
         : (SiloRootDirectoryPath = -1073741811))
        : (SiloRootDirectoryPath = -1073740529))
       : (SiloRootDirectoryPath = -1073741791))
      : (SiloRootDirectoryPath = -1073740536),
        PspUnlockJob(a1, CurrentThread),
        SiloRootDirectoryPath < 0) )
  {
    PspDeleteServerSiloGlobals(v10);
    return (unsigned int)SiloRootDirectoryPath;
  }
  else
  {
    EtwTraceJobServerSiloStateChange(a1);
    if ( (int)PspQueueDeferredWorkAndWait(v13, a1) < 0 )
      return (unsigned int)-1073740955;
    return v7;
  }
}
