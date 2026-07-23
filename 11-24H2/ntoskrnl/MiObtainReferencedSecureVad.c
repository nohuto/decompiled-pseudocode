/*
 * XREFs of MiObtainReferencedSecureVad @ 0x140292568
 * Callers:
 *     MiCheckLockUnlockByVa @ 0x14066FC3C (MiCheckLockUnlockByVa.c)
 *     MmAdjustSecuredVirtualMemorySize @ 0x1407EE128 (MmAdjustSecuredVirtualMemorySize.c)
 *     MmCommitDecommitSecuredMemory @ 0x1407EE244 (MmCommitDecommitSecuredMemory.c)
 *     MmUnsecureVirtualMemory @ 0x140896BF0 (MmUnsecureVirtualMemory.c)
 *     MmStoreAllocateVirtualMemory @ 0x1409145E8 (MmStoreAllocateVirtualMemory.c)
 * Callees:
 *     MiLockVadTree @ 0x140240750 (MiLockVadTree.c)
 *     MiUnlockVadTree @ 0x140291980 (MiUnlockVadTree.c)
 *     MiLockVad @ 0x1402926F0 (MiLockVad.c)
 *     MiReferenceVad @ 0x140292770 (MiReferenceVad.c)
 *     MiLocateAddress @ 0x140344F70 (MiLocateAddress.c)
 *     MiWaitForVadDeletion @ 0x140345500 (MiWaitForVadDeletion.c)
 *     MiUnlockAndDereferenceVad @ 0x1403626E0 (MiUnlockAndDereferenceVad.c)
 *     KiCheckForKernelApcDelivery @ 0x140362C10 (KiCheckForKernelApcDelivery.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 */

__int64 __fastcall MiObtainReferencedSecureVad(ULONG_PTR BugCheckParameter3, _DWORD *a2, __int64 a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // rdi
  _KPROCESS *Process; // r15
  char v8; // al
  ULONG_PTR v9; // rsi
  __int64 Address; // rax
  __int64 v11; // rbx
  unsigned __int8 v12; // r11
  unsigned __int64 v13; // rsi
  bool v14; // zf

  CurrentThread = KeGetCurrentThread();
  *a2 = 0;
  Process = CurrentThread->ApcState.Process;
  --CurrentThread->SpecialApcDisable;
  v8 = MiLockVadTree(0, (__int64)a2, a3, a4);
  if ( (Process[1].DirectoryTableBase & 0x2000000000LL) != 0 )
  {
    MiUnlockVadTree(0, v8);
    v14 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v14 && ($727077A9B6E167EAE1398C74674DC5A5 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      KiCheckForKernelApcDelivery();
    *a2 = -1073741558;
  }
  else
  {
    v9 = *(_QWORD *)(BugCheckParameter3 + 8);
    Address = MiLocateAddress(v9);
    v11 = Address;
    if ( !Address )
      KeBugCheckEx(0x1Au, 0x15000uLL, v9, BugCheckParameter3, 0LL);
    MiReferenceVad(Address);
    MiUnlockVadTree(0, v12);
    v13 = v9 >> 12;
    MiLockVad(CurrentThread, v11);
    v14 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v14 && ($727077A9B6E167EAE1398C74674DC5A5 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      KiCheckForKernelApcDelivery();
    if ( (*(_DWORD *)(v11 + 48) & 4) != 0 )
    {
      MiWaitForVadDeletion(v11);
      MiUnlockAndDereferenceVad((PVOID)v11);
      *a2 = (Process[1].DirectoryTableBase & 0x2000000000LL) != 0 ? -1073741558 : -1073741664;
    }
    else
    {
      if ( v13 >= (*(unsigned int *)(v11 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v11 + 32) << 32))
        && v13 <= (*(unsigned int *)(v11 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v11 + 33) << 32)) )
      {
        return v11;
      }
      MiUnlockAndDereferenceVad((PVOID)v11);
      *a2 = -1073741664;
    }
  }
  return 0LL;
}
