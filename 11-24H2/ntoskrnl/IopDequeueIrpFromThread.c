/*
 * XREFs of IopDequeueIrpFromThread @ 0x1402541C0
 * Callers:
 *     IopCopyCompleteReadRequest @ 0x140268870 (IopCopyCompleteReadRequest.c)
 *     IopCompleteRequest @ 0x1402A5AC0 (IopCompleteRequest.c)
 *     IopIoRingCompleteIrp @ 0x1403C5DA0 (IopIoRingCompleteIrp.c)
 *     IopfCompleteRequest @ 0x1403DBB10 (IopfCompleteRequest.c)
 *     IoCancelFileOpen @ 0x1406F9E00 (IoCancelFileOpen.c)
 *     IopDeleteFile @ 0x140841DB0 (IopDeleteFile.c)
 *     IopCloseFile @ 0x140842070 (IopCloseFile.c)
 *     IopParseDevice @ 0x14089F880 (IopParseDevice.c)
 * Callees:
 *     KiReleaseSpinLockInstrumented @ 0x14024E080 (KiReleaseSpinLockInstrumented.c)
 *     KiAcquireSpinLockInstrumented @ 0x140254BA0 (KiAcquireSpinLockInstrumented.c)
 *     KxWaitForSpinLockAndAcquire @ 0x140254C70 (KxWaitForSpinLockAndAcquire.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
 */

_QWORD *__fastcall IopDequeueIrpFromThread(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  unsigned __int8 CurrentIrql; // si
  __int64 v6; // rdx
  _QWORD *result; // rax
  _QWORD *v8; // rcx
  __int64 retaddr; // [rsp+28h] [rbp+0h]

  v3 = a1[19];
  CurrentIrql = 0;
  if ( v3 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags )
      KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2LL, a3);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
    {
      if ( _interlockedbittestandset64((volatile signed __int32 *)(v3 + 1560), 0LL) )
        KxWaitForSpinLockAndAcquire(v3 + 1560);
    }
    else
    {
      KiAcquireSpinLockInstrumented(v3 + 1560);
    }
  }
  v6 = a1[4];
  result = a1 + 4;
  if ( *(_QWORD **)(v6 + 8) != a1 + 4 || (v8 = (_QWORD *)a1[5], (_QWORD *)*v8 != result) )
    __fastfail(3u);
  *v8 = v6;
  *(_QWORD *)(v6 + 8) = v8;
  a1[5] = a1 + 4;
  *result = result;
  if ( v3 )
  {
    if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
      _InterlockedAnd64((volatile signed __int64 *)(v3 + 1560), 0LL);
    else
      KiReleaseSpinLockInstrumented((volatile signed __int64 *)(v3 + 1560), retaddr);
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
    result = (_QWORD *)CurrentIrql;
    __writecr8(CurrentIrql);
  }
  return result;
}
