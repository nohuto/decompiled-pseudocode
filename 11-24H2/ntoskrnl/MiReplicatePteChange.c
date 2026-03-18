/*
 * XREFs of MiReplicatePteChange @ 0x1404F761C
 * Callers:
 *     MiRewritePteWithLockBit @ 0x14020CBCC (MiRewritePteWithLockBit.c)
 *     MiAllocateWsle @ 0x14021F980 (MiAllocateWsle.c)
 *     MiUnlockNestedPageTableWritePte @ 0x140285DE4 (MiUnlockNestedPageTableWritePte.c)
 *     MiInitializeSystemPageTable @ 0x140395744 (MiInitializeSystemPageTable.c)
 *     MiDeleteSystemPageTable @ 0x140485BD0 (MiDeleteSystemPageTable.c)
 *     MiInitializeShadowPageTable @ 0x1407F6428 (MiInitializeShadowPageTable.c)
 * Callees:
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140210170 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiReleaseSpinLockExclusive @ 0x14028EE30 (MiReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14028F370 (ExAcquireSpinLockExclusive.c)
 *     MiReplicatePteChangeToProcess @ 0x14068D440 (MiReplicatePteChangeToProcess.c)
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
      ExAcquireSpinLockExclusiveAtDpcLevel(&dword_140E373C0);
    }
    else
    {
      ExAcquireSpinLockExclusive(&dword_140E373C0);
    }
  }
  for ( i = (__int64 *)qword_140E2DA58; i != &qword_140E2DA58; i = (__int64 *)*i )
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
    MiReleaseSpinLockExclusive(&dword_140E373C0, CurrentIrql);
}
