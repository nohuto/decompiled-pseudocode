/*
 * XREFs of RtlpLockAtomTable @ 0x140935D80
 * Callers:
 *     RtlAddAtomToAtomTableEx @ 0x140431DA0 (RtlAddAtomToAtomTableEx.c)
 *     RtlDestroyLowBoxAtoms @ 0x14046DCA0 (RtlDestroyLowBoxAtoms.c)
 *     RtlEmptyAtomTable @ 0x140780930 (RtlEmptyAtomTable.c)
 *     RtlQueryAtomsInAtomTable @ 0x140780A18 (RtlQueryAtomsInAtomTable.c)
 *     RtlQueryAtomInAtomTable @ 0x140935920 (RtlQueryAtomInAtomTable.c)
 *     RtlPinAtomInAtomTable @ 0x140935BE0 (RtlPinAtomInAtomTable.c)
 *     RtlDeleteAtomFromAtomTable @ 0x140935CB0 (RtlDeleteAtomFromAtomTable.c)
 *     RtlDestroyAtomTable @ 0x1409E4ED0 (RtlDestroyAtomTable.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 */

char __fastcall RtlpLockAtomTable(_DWORD *a1)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 *v2; // rdi
  _QWORD *v3; // rax
  _QWORD *v4; // rbx

  if ( !a1 || *a1 != 1836020801 )
    return 0;
  CurrentThread = KeGetCurrentThread();
  v2 = (unsigned __int64 *)(a1 + 2);
  --CurrentThread->KernelApcDisable;
  v3 = KeAbPreAcquire((__int64)(a1 + 2), 0LL);
  v4 = v3;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v2, 0LL) )
    ExfAcquirePushLockExclusiveEx(v2, (__int64)v3, (__int64)v2);
  if ( v4 )
    *((_BYTE *)v4 + 10) = 1;
  return 1;
}
