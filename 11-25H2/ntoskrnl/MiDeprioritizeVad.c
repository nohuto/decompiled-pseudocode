/*
 * XREFs of MiDeprioritizeVad @ 0x1402A2F94
 * Callers:
 *     MmAccessFault @ 0x1402B5880 (MmAccessFault.c)
 * Callees:
 *     MiDeprioritizeVirtualAddresses @ 0x1402A2C38 (MiDeprioritizeVirtualAddresses.c)
 *     MiTryLockVad @ 0x1402A30DC (MiTryLockVad.c)
 *     MiClearVadTrimBehind @ 0x1402A3230 (MiClearVadTrimBehind.c)
 *     MiDereferenceVad @ 0x1402A8080 (MiDereferenceVad.c)
 *     ObFastDereferenceObjectDeferDelete @ 0x1402C2260 (ObFastDereferenceObjectDeferDelete.c)
 *     MiUnlockAndDereferenceVad @ 0x1403205C0 (MiUnlockAndDereferenceVad.c)
 *     KiCheckForKernelApcDelivery @ 0x140320950 (KiCheckForKernelApcDelivery.c)
 *     MiReferenceControlAreaFileWithTag @ 0x140323330 (MiReferenceControlAreaFileWithTag.c)
 *     PfCheckDeprioritizeFile @ 0x1408B5CCC (PfCheckDeprioritizeFile.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

void __fastcall MiDeprioritizeVad(unsigned int *P, unsigned __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rbx
  _KPROCESS *Process; // r14
  unsigned __int64 v6; // rsi
  unsigned __int64 v7; // rbp
  __int64 v8; // rbx
  __int64 v9; // rax
  __int64 v10; // r15
  unsigned __int64 v11; // rbp
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  bool v16; // zf

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
        v9 = MiReferenceControlAreaFileWithTag(v8, 1666411853LL, 0LL);
        v10 = *(_QWORD *)(v9 + 24);
        ObFastDereferenceObjectDeferDelete(v8 + 64, v9, 1666411853LL);
        v11 = v7 & 0xFFFFFFFFFFFFFF00uLL;
        if ( (Process[1].DirectoryTableBase & 0x400000000000LL) != 0
          && (unsigned int)PfCheckDeprioritizeFile(Process, HIDWORD(Process[1].CpuPartitionList.Blink), v10, v11) )
        {
          MiDeprioritizeVirtualAddresses(
            (v6 << 12) + ((v11 - 256) << 12),
            256LL,
            (__int64)&Process[2].ReadyListHead.Blink,
            18);
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
    if ( (unsigned int)MiDereferenceVad(P) )
      ExFreePoolWithTag(P, 0);
    v16 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v16 && ($727077A9B6E167EAE1398C74674DC5A5 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      KiCheckForKernelApcDelivery(v13, v12, v14, v15);
  }
}
