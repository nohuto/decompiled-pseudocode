/*
 * XREFs of VfDeadlockInitialize @ 0x140B99DEC
 * Callers:
 *     VfDeadlockPluginEntry @ 0x140B9A240 (VfDeadlockPluginEntry.c)
 * Callees:
 *     ExInitializeNPagedLookasideListInternal @ 0x1404549D0 (ExInitializeNPagedLookasideListInternal.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 *     ViDeadlockDetectionApplySettings @ 0x140B9B188 (ViDeadlockDetectionApplySettings.c)
 *     ViDeadlockPopulateLookasideCache @ 0x140B9BB5C (ViDeadlockPopulateLookasideCache.c)
 */

void VfDeadlockInitialize()
{
  __int16 v0; // bx
  _QWORD *v1; // rdx
  __int64 Pool2; // rax
  __int64 v3; // rax
  __int64 v4; // r8
  __int64 v5; // r9
  _QWORD *v6; // rcx
  _QWORD *v7; // rcx
  int v8; // ecx
  _DWORD *v9; // rdx
  int v10; // ecx
  __int16 v11; // cx
  __int16 v12; // cx
  void *v13; // rcx
  void *v14; // rcx

  v0 = 64;
  ViDeadlockGlobals = (PVOID)ExAllocatePool2(0x40uLL, 0x8180uLL, 0x6B636C44uLL);
  v1 = ViDeadlockGlobals;
  if ( ViDeadlockGlobals
    && (Pool2 = ExAllocatePool2(0x40uLL, 0x3FF0uLL, 0x6B636C44uLL),
        v1 = ViDeadlockGlobals,
        (*((_QWORD *)ViDeadlockGlobals + 2) = Pool2) != 0LL)
    && (v3 = ExAllocatePool2(0x40uLL, 0x3FF0uLL, 0x6B636C44uLL),
        v1 = ViDeadlockGlobals,
        (*((_QWORD *)ViDeadlockGlobals + 2050) = v3) != 0LL) )
  {
    ViDeadlockDatabaseLock = 0;
    v4 = 0LL;
    v5 = 1023LL;
    do
    {
      v6 = (_QWORD *)(v4 + v1[2]);
      v6[1] = v6;
      *v6 = v6;
      v7 = (_QWORD *)(v4 + v1[2050]);
      v4 += 16LL;
      v7[1] = v7;
      *v7 = v7;
      --v5;
    }
    while ( v5 );
    v8 = 4;
    v9 = ViDeadlockGlobals;
    if ( ViRecursionDepthLimitFromRegistry )
      v8 = ViRecursionDepthLimitFromRegistry;
    *((_DWORD *)ViDeadlockGlobals + 8202) = v8;
    v10 = 1000;
    if ( ViSearchedNodesLimitFromRegistry )
      v10 = ViSearchedNodesLimitFromRegistry;
    v9[8203] = v10;
    if ( KernelVerifier )
      v11 = 512;
    else
      v11 = 32;
    ExInitializeNPagedLookasideListInternal(
      (__int64)&ViDeadlockThreadLookaside,
      (PVOID (__fastcall *)(int, SIZE_T, ULONG))((unsigned __int64)ViDeadlockKernelVerifierLookasideAllocate & -(__int64)(KernelVerifier != 0)),
      (void (__stdcall *)(PVOID))VfUtilFreePoolCheckIRQL,
      512,
      56,
      1919439958,
      v11,
      VfInitializedWithoutReboot);
    if ( KernelVerifier )
      v12 = 0x2000;
    else
      v12 = 64;
    ExInitializeNPagedLookasideListInternal(
      (__int64)&ViDeadlockResourceLookaside,
      (PVOID (__fastcall *)(int, SIZE_T, ULONG))((unsigned __int64)ViDeadlockKernelVerifierLookasideAllocate & -(__int64)(KernelVerifier != 0)),
      (void (__stdcall *)(PVOID))VfUtilFreePoolCheckIRQL,
      512,
      248,
      1936020054,
      v12,
      VfInitializedWithoutReboot);
    if ( KernelVerifier )
      v0 = 0x4000;
    ExInitializeNPagedLookasideListInternal(
      (__int64)&ViDeadlockNodeLookaside,
      (PVOID (__fastcall *)(int, SIZE_T, ULONG))((unsigned __int64)ViDeadlockKernelVerifierLookasideAllocate & -(__int64)(KernelVerifier != 0)),
      (void (__stdcall *)(PVOID))VfUtilFreePoolCheckIRQL,
      512,
      208,
      1685016150,
      v0,
      VfInitializedWithoutReboot);
    if ( KernelVerifier )
    {
      ViDeadlockPopulateLookasideCache(&ViDeadlockThreadLookaside);
      ViDeadlockPopulateLookasideCache(&ViDeadlockNodeLookaside);
      ViDeadlockPopulateLookasideCache(&ViDeadlockResourceLookaside);
      ViDeadlockState |= 2u;
    }
    if ( ViVerifyAllDrivers == 1 )
      ViDeadlockState |= 4u;
    ViDeadlockDetectionApplySettings(((unsigned int)MmVerifierData >> 5) & 1);
  }
  else if ( v1 )
  {
    v13 = (void *)v1[2];
    if ( v13 )
      ExFreePoolWithTag(v13, 0);
    v14 = (void *)*((_QWORD *)ViDeadlockGlobals + 2050);
    if ( v14 )
      ExFreePoolWithTag(v14, 0);
    ExFreePoolWithTag(ViDeadlockGlobals, 0);
    ViDeadlockGlobals = 0LL;
  }
}
