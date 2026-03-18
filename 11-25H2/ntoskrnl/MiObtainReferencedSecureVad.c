/*
 * XREFs of MiObtainReferencedSecureVad @ 0x1402A6B28
 * Callers:
 *     MiCheckLockUnlockByVa @ 0x140662F2C (MiCheckLockUnlockByVa.c)
 *     MmAdjustSecuredVirtualMemorySize @ 0x1407DDCB8 (MmAdjustSecuredVirtualMemorySize.c)
 *     MmCommitDecommitSecuredMemory @ 0x1407DDDD4 (MmCommitDecommitSecuredMemory.c)
 *     MmUnsecureVirtualMemory @ 0x1408B48C0 (MmUnsecureVirtualMemory.c)
 *     MmStoreAllocateVirtualMemory @ 0x140A54708 (MmStoreAllocateVirtualMemory.c)
 * Callees:
 *     MiWaitForVadDeletion @ 0x1402A668C (MiWaitForVadDeletion.c)
 *     MiLockVad @ 0x1402A6CB4 (MiLockVad.c)
 *     MiReferenceVad @ 0x1402A7A40 (MiReferenceVad.c)
 *     MiUnlockVadTree @ 0x1402A8690 (MiUnlockVadTree.c)
 *     MiLockVadTree @ 0x1402B54D0 (MiLockVadTree.c)
 *     MiLocateAddress @ 0x1402B57D0 (MiLocateAddress.c)
 *     MiUnlockAndDereferenceVad @ 0x1403205C0 (MiUnlockAndDereferenceVad.c)
 *     KiCheckForKernelApcDelivery @ 0x140320950 (KiCheckForKernelApcDelivery.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 */

__int64 __fastcall MiObtainReferencedSecureVad(ULONG_PTR BugCheckParameter3, _DWORD *a2)
{
  struct _KTHREAD *CurrentThread; // rdi
  _KPROCESS *Process; // r15
  char v6; // al
  __int64 v7; // rdx
  ULONG_PTR v8; // rsi
  __int64 Address; // rax
  __int64 v10; // rbx
  char v11; // r11
  __int64 v12; // rdx
  unsigned __int64 v13; // rsi
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  bool v18; // zf
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9

  CurrentThread = KeGetCurrentThread();
  *a2 = 0;
  Process = CurrentThread->ApcState.Process;
  --CurrentThread->SpecialApcDisable;
  v6 = MiLockVadTree(0LL);
  if ( (Process[1].DirectoryTableBase & 0x2000000000LL) != 0 )
  {
    LOBYTE(v7) = v6;
    MiUnlockVadTree(0LL, v7);
    v18 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v18 && ($727077A9B6E167EAE1398C74674DC5A5 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      KiCheckForKernelApcDelivery(v21, v20, v22, v23);
    *a2 = -1073741558;
    return 0LL;
  }
  v8 = *(_QWORD *)(BugCheckParameter3 + 8);
  Address = MiLocateAddress(v8);
  v10 = Address;
  if ( !Address )
    KeBugCheckEx(0x1Au, 0x15000uLL, v8, BugCheckParameter3, 0LL);
  MiReferenceVad(Address);
  LOBYTE(v12) = v11;
  MiUnlockVadTree(0LL, v12);
  v13 = v8 >> 12;
  MiLockVad(CurrentThread, v10);
  v18 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v18 && ($727077A9B6E167EAE1398C74674DC5A5 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery(v15, v14, v16, v17);
  if ( (*(_DWORD *)(v10 + 48) & 4) != 0 )
  {
    MiWaitForVadDeletion(v10);
    MiUnlockAndDereferenceVad((PVOID)v10);
    *a2 = (Process[1].DirectoryTableBase & 0x2000000000LL) != 0 ? -1073741558 : -1073741664;
    return 0LL;
  }
  if ( v13 < (*(unsigned int *)(v10 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v10 + 32) << 32))
    || v13 > (*(unsigned int *)(v10 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v10 + 33) << 32)) )
  {
    MiUnlockAndDereferenceVad((PVOID)v10);
    *a2 = -1073741664;
    return 0LL;
  }
  return v10;
}
