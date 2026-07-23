/*
 * XREFs of RtlpLockAtomTable @ 0x1408F4C90
 * Callers:
 *     RtlAddAtomToAtomTableEx @ 0x1404242E0 (RtlAddAtomToAtomTableEx.c)
 *     RtlDestroyLowBoxAtoms @ 0x140468590 (RtlDestroyLowBoxAtoms.c)
 *     RtlEmptyAtomTable @ 0x140780860 (RtlEmptyAtomTable.c)
 *     RtlQueryAtomsInAtomTable @ 0x140780948 (RtlQueryAtomsInAtomTable.c)
 *     RtlPinAtomInAtomTable @ 0x1408F42F0 (RtlPinAtomInAtomTable.c)
 *     RtlDeleteAtomFromAtomTable @ 0x1408F4840 (RtlDeleteAtomFromAtomTable.c)
 *     RtlQueryAtomInAtomTable @ 0x1408F4910 (RtlQueryAtomInAtomTable.c)
 *     RtlDestroyAtomTable @ 0x1409DF930 (RtlDestroyAtomTable.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 */

char __fastcall RtlpLockAtomTable(_DWORD *a1)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 *v2; // rdi
  char *v3; // rax
  char *v4; // rbx

  if ( !a1 || *a1 != 1836020801 )
    return 0;
  CurrentThread = KeGetCurrentThread();
  v2 = (unsigned __int64 *)(a1 + 2);
  --CurrentThread->KernelApcDisable;
  v3 = (char *)KeAbPreAcquire((__int64)(a1 + 2), 0LL);
  v4 = v3;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v2, 0LL) )
    ExfAcquirePushLockExclusiveEx(v2, v3, (__int64)v2);
  if ( v4 )
    v4[10] = 1;
  return 1;
}
