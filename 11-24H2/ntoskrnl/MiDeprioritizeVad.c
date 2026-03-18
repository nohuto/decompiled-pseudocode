/*
 * XREFs of MiDeprioritizeVad @ 0x1403FD204
 * Callers:
 *     MmAccessFault @ 0x140216750 (MmAccessFault.c)
 * Callees:
 *     ObFastDereferenceObjectDeferDelete @ 0x140240FA0 (ObFastDereferenceObjectDeferDelete.c)
 *     MiReferenceControlAreaFileWithTag @ 0x1402440D0 (MiReferenceControlAreaFileWithTag.c)
 *     MiDereferenceVad @ 0x140260450 (MiDereferenceVad.c)
 *     MiUnlockAndDereferenceVad @ 0x1402BAFA0 (MiUnlockAndDereferenceVad.c)
 *     KiCheckForKernelApcDelivery @ 0x1402BB4D0 (KiCheckForKernelApcDelivery.c)
 *     MiTryLockVad @ 0x1403FD34C (MiTryLockVad.c)
 *     MiClearVadTrimBehind @ 0x1403FD3E0 (MiClearVadTrimBehind.c)
 *     MiDeprioritizeVirtualAddresses @ 0x1403FD5B4 (MiDeprioritizeVirtualAddresses.c)
 *     PfCheckDeprioritizeFile @ 0x1408E5C40 (PfCheckDeprioritizeFile.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

void __fastcall MiDeprioritizeVad(unsigned int *P, unsigned __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rbx
  _KPROCESS *Process; // r14
  unsigned __int64 v6; // rsi
  unsigned __int64 v7; // rbp
  __int64 v8; // rbx
  ULONG_PTR v9; // rax
  __int64 v10; // r15
  unsigned __int64 v11; // rbp
  __int64 v12; // rdx
  __int64 v13; // rcx
  bool v14; // zf

  CurrentThread = KeGetCurrentThread();
  Process = CurrentThread->ApcState.Process;
  --CurrentThread->SpecialApcDisable;
  if ( (unsigned int)MiTryLockVad(CurrentThread, P) )
  {
    if ( (P[12] & 4) == 0 )
    {
      v6 = P[6] | ((unsigned __int64)*((unsigned __int8 *)P + 32) << 32);
      v7 = (a2 >> 12) - v6;
      if ( (P[16] & 2) != 0 )
      {
        v8 = **((_QWORD **)P + 9);
        v9 = MiReferenceControlAreaFileWithTag(v8, 0x63536D4Du, 0);
        v10 = *(_QWORD *)(v9 + 24);
        ObFastDereferenceObjectDeferDelete((__int64 *)(v8 + 64), v9);
        v11 = v7 & 0xFFFFFFFFFFFFFF00uLL;
        if ( (Process[1].DirectoryTableBase & 0x400000000000LL) != 0
          && (unsigned int)PfCheckDeprioritizeFile(Process, HIDWORD(Process[1].CpuPartitionList.Blink), v10, v11) )
        {
          MiDeprioritizeVirtualAddresses((v6 << 12) + ((v11 - 256) << 12), 256LL, &Process[2].ReadyListHead.Blink, 18LL);
        }
        else
        {
          MiClearVadTrimBehind(P, 0LL);
        }
      }
    }
    MiUnlockAndDereferenceVad(P);
  }
  else
  {
    if ( MiDereferenceVad((__int64)P) )
      ExFreePoolWithTag(P, 0);
    v14 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v14 && ($81B80DCEA5A02D890AB7B2872B48AC01 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      KiCheckForKernelApcDelivery(v13, v12);
  }
}
