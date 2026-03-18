/*
 * XREFs of MiObtainReferencedSecureVad @ 0x140262864
 * Callers:
 *     MiCheckLockUnlockByVa @ 0x14066EA6C (MiCheckLockUnlockByVa.c)
 *     MmAdjustSecuredVirtualMemorySize @ 0x1407EDB58 (MmAdjustSecuredVirtualMemorySize.c)
 *     MmCommitDecommitSecuredMemory @ 0x1407EDC74 (MmCommitDecommitSecuredMemory.c)
 *     MmUnsecureVirtualMemory @ 0x1408E51C0 (MmUnsecureVirtualMemory.c)
 *     MmStoreAllocateVirtualMemory @ 0x140A5115C (MmStoreAllocateVirtualMemory.c)
 * Callees:
 *     MiUnlockVadTree @ 0x140261370 (MiUnlockVadTree.c)
 *     MiLockVad @ 0x1402629EC (MiLockVad.c)
 *     MiReferenceVad @ 0x140262A70 (MiReferenceVad.c)
 *     MiUnlockAndDereferenceVad @ 0x1402BAFA0 (MiUnlockAndDereferenceVad.c)
 *     KiCheckForKernelApcDelivery @ 0x1402BB4D0 (KiCheckForKernelApcDelivery.c)
 *     MiLockVadTree @ 0x1402DEE70 (MiLockVadTree.c)
 *     MiWaitForVadDeletion @ 0x1402FBA58 (MiWaitForVadDeletion.c)
 *     MiLocateAddress @ 0x1402FC070 (MiLocateAddress.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 */

__int64 __fastcall MiObtainReferencedSecureVad(ULONG_PTR BugCheckParameter3, _DWORD *a2)
{
  struct _KTHREAD *CurrentThread; // rdi
  _KPROCESS *Process; // r15
  unsigned __int8 v6; // al
  ULONG_PTR v7; // rsi
  __int64 Address; // rax
  __int64 v9; // rbx
  unsigned __int8 v10; // r11
  unsigned __int64 v11; // rsi
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  bool v16; // zf
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9

  CurrentThread = KeGetCurrentThread();
  *a2 = 0;
  Process = CurrentThread->ApcState.Process;
  --CurrentThread->SpecialApcDisable;
  v6 = MiLockVadTree(0LL);
  if ( (Process[1].DirectoryTableBase & 0x2000000000LL) != 0 )
  {
    MiUnlockVadTree(0, v6);
    v16 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v16 && ($81B80DCEA5A02D890AB7B2872B48AC01 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      KiCheckForKernelApcDelivery(v19, v18, v20, v21);
    *a2 = -1073741558;
  }
  else
  {
    v7 = *(_QWORD *)(BugCheckParameter3 + 8);
    Address = MiLocateAddress(v7);
    v9 = Address;
    if ( !Address )
      KeBugCheckEx(0x1Au, 0x15000uLL, v7, BugCheckParameter3, 0LL);
    MiReferenceVad(Address);
    MiUnlockVadTree(0, v10);
    v11 = v7 >> 12;
    MiLockVad(CurrentThread, v9);
    v16 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v16 && ($81B80DCEA5A02D890AB7B2872B48AC01 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      KiCheckForKernelApcDelivery(v13, v12, v14, v15);
    if ( (*(_DWORD *)(v9 + 48) & 4) != 0 )
    {
      MiWaitForVadDeletion(v9);
      MiUnlockAndDereferenceVad((PVOID)v9);
      *a2 = (Process[1].DirectoryTableBase & 0x2000000000LL) != 0 ? -1073741558 : -1073741664;
    }
    else
    {
      if ( v11 >= (*(unsigned int *)(v9 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v9 + 32) << 32))
        && v11 <= (*(unsigned int *)(v9 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v9 + 33) << 32)) )
      {
        return v9;
      }
      MiUnlockAndDereferenceVad((PVOID)v9);
      *a2 = -1073741664;
    }
  }
  return 0LL;
}
