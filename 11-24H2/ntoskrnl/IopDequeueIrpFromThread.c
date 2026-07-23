/*
 * XREFs of IopDequeueIrpFromThread @ 0x1402847D0
 * Callers:
 *     IopCopyCompleteReadRequest @ 0x14025FD20 (IopCopyCompleteReadRequest.c)
 *     IopCompleteRequest @ 0x1402D51F0 (IopCompleteRequest.c)
 *     IopIoRingCompleteIrp @ 0x1403B4960 (IopIoRingCompleteIrp.c)
 *     IopfCompleteRequest @ 0x1403CCDE0 (IopfCompleteRequest.c)
 *     IoCancelFileOpen @ 0x1406F7A40 (IoCancelFileOpen.c)
 *     IopDeleteFile @ 0x14083E070 (IopDeleteFile.c)
 *     IopCloseFile @ 0x14083E330 (IopCloseFile.c)
 *     IopParseDevice @ 0x1408A7F20 (IopParseDevice.c)
 * Callees:
 *     KiReleaseSpinLockInstrumented @ 0x14027E690 (KiReleaseSpinLockInstrumented.c)
 *     KiAcquireSpinLockInstrumented @ 0x1402851B0 (KiAcquireSpinLockInstrumented.c)
 *     KxWaitForSpinLockAndAcquire @ 0x140285280 (KxWaitForSpinLockAndAcquire.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 */

_QWORD *__fastcall IopDequeueIrpFromThread(_QWORD *a1)
{
  __int64 v1; // rbx
  unsigned __int8 CurrentIrql; // si
  __int64 v4; // rdx
  _QWORD *result; // rax
  _QWORD *v6; // rcx
  __int64 retaddr; // [rsp+28h] [rbp+0h]

  v1 = a1[19];
  CurrentIrql = 0;
  if ( v1 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags )
      KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2LL);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
    {
      if ( _interlockedbittestandset64((volatile signed __int32 *)(v1 + 1560), 0LL) )
        KxWaitForSpinLockAndAcquire(v1 + 1560);
    }
    else
    {
      KiAcquireSpinLockInstrumented(v1 + 1560);
    }
  }
  v4 = a1[4];
  result = a1 + 4;
  if ( *(_QWORD **)(v4 + 8) != a1 + 4 || (v6 = (_QWORD *)a1[5], (_QWORD *)*v6 != result) )
    __fastfail(3u);
  *v6 = v4;
  *(_QWORD *)(v4 + 8) = v6;
  a1[5] = a1 + 4;
  *result = result;
  if ( v1 )
  {
    if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
      _InterlockedAnd64((volatile signed __int64 *)(v1 + 1560), 0LL);
    else
      KiReleaseSpinLockInstrumented((volatile signed __int64 *)(v1 + 1560), retaddr);
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
    result = (_QWORD *)CurrentIrql;
    __writecr8(CurrentIrql);
  }
  return result;
}
