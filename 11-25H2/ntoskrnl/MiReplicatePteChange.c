/*
 * XREFs of MiReplicatePteChange @ 0x1404F4ED8
 * Callers:
 *     MiRewritePteWithLockBit @ 0x1402110AC (MiRewritePteWithLockBit.c)
 *     MiAllocateWsle @ 0x14024B590 (MiAllocateWsle.c)
 *     MiInitializeSystemPageTable @ 0x1402D04C8 (MiInitializeSystemPageTable.c)
 *     MiUnlockNestedPageTableWritePte @ 0x1402FBBD4 (MiUnlockNestedPageTableWritePte.c)
 *     MiDeleteSystemPageTable @ 0x14038A330 (MiDeleteSystemPageTable.c)
 *     MiInitializeShadowPageTable @ 0x1407E6598 (MiInitializeShadowPageTable.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x1402BEA90 (ExAcquireSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14031F3B0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiReleaseSpinLockExclusive @ 0x140329B80 (MiReleaseSpinLockExclusive.c)
 *     MiReplicatePteChangeToProcess @ 0x140681BB0 (MiReplicatePteChangeToProcess.c)
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
      ExAcquireSpinLockExclusiveAtDpcLevel(&dword_140E37180);
    }
    else
    {
      ExAcquireSpinLockExclusive(&dword_140E37180);
    }
  }
  for ( i = (__int64 *)qword_140E2D818; i != &qword_140E2D818; i = (__int64 *)*i )
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
    MiReleaseSpinLockExclusive(&dword_140E37180, CurrentIrql);
}
