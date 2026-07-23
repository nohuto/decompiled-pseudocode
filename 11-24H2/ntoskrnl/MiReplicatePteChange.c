/*
 * XREFs of MiReplicatePteChange @ 0x1404F4EFC
 * Callers:
 *     MiUnlockNestedPageTableWritePte @ 0x1402023A0 (MiUnlockNestedPageTableWritePte.c)
 *     MiAllocateWsle @ 0x14024C6D0 (MiAllocateWsle.c)
 *     MiRewritePteWithLockBit @ 0x140335F2C (MiRewritePteWithLockBit.c)
 *     MiInitializeSystemPageTable @ 0x14038F158 (MiInitializeSystemPageTable.c)
 *     MiDeleteSystemPageTable @ 0x1404811C0 (MiDeleteSystemPageTable.c)
 *     MiInitializeShadowPageTable @ 0x1407F6B9C (MiInitializeShadowPageTable.c)
 * Callees:
 *     MiReleaseSpinLockExclusive @ 0x14029EA30 (MiReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14029EF70 (ExAcquireSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1403394D0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiReplicatePteChangeToProcess @ 0x14068E570 (MiReplicatePteChangeToProcess.c)
 */

void __fastcall MiReplicatePteChange(__int64 a1, int a2)
{
  _KPROCESS *Process; // rbp
  unsigned __int8 CurrentIrql; // bl
  __int64 *i; // rdi
  __int64 *v7; // rcx
  int v8; // eax

  Process = KeGetCurrentThread()->ApcState.Process;
  if ( a2 )
  {
    CurrentIrql = 17;
  }
  else
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql == 2 )
    {
      CurrentIrql = 17;
      ExAcquireSpinLockExclusiveAtDpcLevel(&SpinLock);
    }
    else
    {
      ExAcquireSpinLockExclusive(&SpinLock);
    }
  }
  for ( i = (__int64 *)qword_140E2DB98; i != &qword_140E2DB98; i = (__int64 *)*i )
  {
    v7 = i - 168;
    v8 = *((_DWORD *)i - 211);
    if ( (v8 & 0x800000) == 0 )
    {
      if ( (v8 & 0xC00) != 0 && (v8 & 0x80u) == 0 )
      {
        if ( v7 != (__int64 *)Process )
          MiReplicatePteChangeToProcess(v7, a1);
      }
      else
      {
        _InterlockedOr((volatile signed __int32 *)v7 + 125, 0x800000u);
      }
    }
  }
  if ( !a2 )
    MiReleaseSpinLockExclusive(&SpinLock, CurrentIrql);
}
