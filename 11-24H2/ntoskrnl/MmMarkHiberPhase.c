/*
 * XREFs of MmMarkHiberPhase @ 0x140B64E88
 * Callers:
 *     PopMarkComponentsBootPhase @ 0x140B5F714 (PopMarkComponentsBootPhase.c)
 * Callees:
 *     MiWalkPageTables @ 0x14020F7D0 (MiWalkPageTables.c)
 *     MiGetAnyMultiplexedVm @ 0x140439200 (MiGetAnyMultiplexedVm.c)
 *     MiIsRetpolineEnabled @ 0x14043F7B4 (MiIsRetpolineEnabled.c)
 *     MiQuerySystemBase @ 0x140454FBC (MiQuerySystemBase.c)
 *     PoSetHiberRange @ 0x14046AD10 (PoSetHiberRange.c)
 *     MiMarkHiberProtectedImages @ 0x140673DC0 (MiMarkHiberProtectedImages.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     MiMarkKernelPageTablePages @ 0x140B64878 (MiMarkKernelPageTablePages.c)
 *     MiMarkNonPagedHiberPhasePages @ 0x140B648FC (MiMarkNonPagedHiberPhasePages.c)
 */

__int64 MmMarkHiberPhase()
{
  __int64 v0; // rax
  void *KernelWaitTime; // r8
  __int64 v2; // rbx
  __int64 v3; // rdi
  void *v4; // r8
  _QWORD *v5; // rax
  _QWORD *i; // rbx
  _QWORD **v7; // rax
  void *v8; // r8
  _QWORD *v9; // rcx
  _QWORD *v10; // rcx
  char *AnyMultiplexedVm; // rax
  int v13[2]; // [rsp+30h] [rbp-C8h] BYREF
  char v14; // [rsp+39h] [rbp-BFh]
  char *v15; // [rsp+50h] [rbp-A8h]
  unsigned __int64 v16; // [rsp+58h] [rbp-A0h]
  __int64 v17; // [rsp+60h] [rbp-98h]
  __int64 (__fastcall *v18)(__int64, unsigned __int64 *, int); // [rsp+D8h] [rbp-20h]
  __int64 v19; // [rsp+100h] [rbp+8h] BYREF

  v19 = 0LL;
  MiMarkKernelPageTablePages();
  PoSetHiberRange(0LL, 0x14000u, (PVOID)(PsInitialSystemProcess->DirectoryTableBase >> 12), 1uLL, 0x74706D4Du);
  MiMarkNonPagedHiberPhasePages(0xFFFFDE0000000000uLL, (MxPfnAllocation << 12) + MmPfnDatabase - 1, 0x200u);
  if ( _bittest64(&MiFlags, 0x23u) )
  {
    v0 = MiQuerySystemBase(5, &v19);
    MiMarkNonPagedHiberPhasePages(v0, v0 + v19 - 1, 0x200u);
  }
  PoSetHiberRange(0LL, 0x14000u, qword_140E37480[0], 1uLL, 0x61676D4Du);
  PoSetHiberRange(0LL, 0x10000u, KeGetCurrentThread()->ApcState.Process, 0x840uLL, 0x62706D4Du);
  KernelWaitTime = (void *)KeGetCurrentThread()->ApcState.Process[2].KernelWaitTime;
  if ( KernelWaitTime )
    PoSetHiberRange(0LL, 0x10000u, KernelWaitTime, 0x1000uLL, 0x62706D4Du);
  PoSetHiberRange(0LL, 0x10000u, Base, (unsigned int)(dword_140E2D87C << 12), 0x62706D4Du);
  if ( MiIsRetpolineEnabled() )
    PoSetHiberRange(
      0LL,
      0x10000u,
      qword_140E2D8A0,
      8 * (((unsigned __int64)qword_140E2D898 >> 6) + ((qword_140E2D898 & 0x3F) != 0)),
      0x62706D4Du);
  MiMarkNonPagedHiberPhasePages(qword_140E2F198, qword_140E2F198 + qword_140E2F1A0 - 1, 0);
  PoSetHiberRange(0LL, 0x10000u, &MiState, 0xD000uLL, 0x74536D4Du);
  PoSetHiberRange(0LL, 0x10000u, qword_140E300C8, 8LL * qword_140E300A8->SizeOfBitMap, 0x70536D4Du);
  PoSetHiberRange(
    0LL,
    0x10000u,
    qword_140E300A8->Buffer,
    8 * (((unsigned __int64)qword_140E300A8->SizeOfBitMap >> 6) + ((qword_140E300A8->SizeOfBitMap & 0x3F) != 0)),
    0x70536D4Du);
  PoSetHiberRange(0LL, 0x10000u, (PVOID)0xFFFFF78000000000LL, 0x1000uLL, 0x64736D4Du);
  PoSetHiberRange(0LL, 0x10000u, MmUnloadedDrivers, 0x7D0uLL, 0x64736D4Du);
  v2 = 0LL;
  v3 = 50LL;
  do
  {
    v4 = *(void **)((char *)MmUnloadedDrivers + v2 + 8);
    if ( v4 )
      PoSetHiberRange(0LL, 0x10000u, v4, *(unsigned __int16 *)((char *)MmUnloadedDrivers + v2), 0x64736D4Du);
    v2 += 40LL;
    --v3;
  }
  while ( v3 );
  v5 = (_QWORD *)qword_140E37300;
  i = 0LL;
  while ( v5 )
  {
    i = v5;
    v5 = (_QWORD *)*v5;
  }
  while ( i )
  {
    v7 = (_QWORD **)i[1];
    v8 = i;
    v9 = i;
    if ( v7 )
    {
      v10 = *v7;
      for ( i = (_QWORD *)i[1]; v10; v10 = (_QWORD *)*v10 )
        i = v10;
    }
    else
    {
      while ( 1 )
      {
        i = (_QWORD *)(i[2] & 0xFFFFFFFFFFFFFFFCuLL);
        if ( !i || (_QWORD *)*i == v9 )
          break;
        v9 = i;
      }
    }
    PoSetHiberRange(0LL, 0x10000u, v8, 0x4B0uLL, 0x6F496D4Du);
  }
  memset_0(v13, 0, 0xC0uLL);
  v13[0] = 8961;
  v18 = MiMarkHiberNotCachedPte;
  AnyMultiplexedVm = MiGetAnyMultiplexedVm(4);
  v17 = -1LL;
  v15 = AnyMultiplexedVm;
  v16 = 0xFFFF800000000000uLL;
  v14 = 17;
  MiWalkPageTables(v13);
  return MiMarkHiberProtectedImages();
}
