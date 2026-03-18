/*
 * XREFs of RtlpLockAtomTable @ 0x14091EAC0
 * Callers:
 *     RtlAddAtomToAtomTableEx @ 0x140435780 (RtlAddAtomToAtomTableEx.c)
 *     RtlDestroyLowBoxAtoms @ 0x14046F170 (RtlDestroyLowBoxAtoms.c)
 *     RtlEmptyAtomTable @ 0x1407716E0 (RtlEmptyAtomTable.c)
 *     RtlQueryAtomsInAtomTable @ 0x1407717C8 (RtlQueryAtomsInAtomTable.c)
 *     RtlDestroyAtomTable @ 0x14091D100 (RtlDestroyAtomTable.c)
 *     RtlPinAtomInAtomTable @ 0x14091DD10 (RtlPinAtomInAtomTable.c)
 *     RtlDeleteAtomFromAtomTable @ 0x14091E690 (RtlDeleteAtomFromAtomTable.c)
 *     RtlQueryAtomInAtomTable @ 0x14091E760 (RtlQueryAtomInAtomTable.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 */

char __fastcall RtlpLockAtomTable(_DWORD *a1)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 *v2; // rdi
  __int64 *v3; // rax
  __int64 *v4; // rbx

  if ( !a1 || *a1 != 1836020801 )
    return 0;
  CurrentThread = KeGetCurrentThread();
  v2 = (unsigned __int64 *)(a1 + 2);
  --CurrentThread->KernelApcDisable;
  v3 = KeAbPreAcquire((__int64)(a1 + 2), 0LL);
  v4 = v3;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v2, 0LL) )
    ExfAcquirePushLockExclusiveEx(v2, v3, (__int64)v2);
  if ( v4 )
    *((_BYTE *)v4 + 10) = 1;
  return 1;
}
