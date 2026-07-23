/*
 * XREFs of MiDeprioritizeVad @ 0x1403DAB20
 * Callers:
 *     MmAccessFault @ 0x140243610 (MmAccessFault.c)
 * Callees:
 *     ObFastDereferenceObjectDeferDelete @ 0x1402090F0 (ObFastDereferenceObjectDeferDelete.c)
 *     MiReferenceControlAreaFileWithTag @ 0x14020C860 (MiReferenceControlAreaFileWithTag.c)
 *     MiDereferenceVad @ 0x140290A60 (MiDereferenceVad.c)
 *     MiUnlockAndDereferenceVad @ 0x1403626E0 (MiUnlockAndDereferenceVad.c)
 *     KiCheckForKernelApcDelivery @ 0x140362C10 (KiCheckForKernelApcDelivery.c)
 *     MiTryLockVad @ 0x1403DAC68 (MiTryLockVad.c)
 *     MiClearVadTrimBehind @ 0x1403DAD00 (MiClearVadTrimBehind.c)
 *     MiDeprioritizeVirtualAddresses @ 0x1403DB1C8 (MiDeprioritizeVirtualAddresses.c)
 *     PfCheckDeprioritizeFile @ 0x1409DCA6C (PfCheckDeprioritizeFile.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
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
  bool v12; // zf

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
    v12 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v12 && ($727077A9B6E167EAE1398C74674DC5A5 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      KiCheckForKernelApcDelivery();
  }
}
