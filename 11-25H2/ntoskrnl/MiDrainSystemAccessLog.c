/*
 * XREFs of MiDrainSystemAccessLog @ 0x1403C3E1C
 * Callers:
 *     MiCaptureAndResetWorkingSetAccessBits @ 0x1403C38AC (MiCaptureAndResetWorkingSetAccessBits.c)
 *     MiCleanWorkingSet @ 0x1403C3D9C (MiCleanWorkingSet.c)
 *     MiEmptyAccessLogs @ 0x140677E70 (MiEmptyAccessLogs.c)
 *     MiDeleteVad @ 0x1408B4F54 (MiDeleteVad.c)
 * Callees:
 *     MiGetVmAccessLoggingPartition @ 0x140209E80 (MiGetVmAccessLoggingPartition.c)
 *     MiEmptyPageAccessLog @ 0x140322FE0 (MiEmptyPageAccessLog.c)
 *     MiUnlockWorkingSetCoreExclusive @ 0x14037F48C (MiUnlockWorkingSetCoreExclusive.c)
 *     MiLockWorkingSetCoreExclusive @ 0x1403C3B04 (MiLockWorkingSetCoreExclusive.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall MiDrainSystemAccessLog(__int64 a1)
{
  __int64 v1; // rbx
  _QWORD *v2; // rbp
  __int64 *v3; // rsi
  __int64 result; // rax
  unsigned __int8 CurrentIrql; // di
  ULONG *VmAccessLoggingPartition; // rax
  unsigned __int64 *v7; // r8
  __int64 v8; // rdx

  v1 = a1;
  if ( (*(_DWORD *)(a1 + 184) & 0xF) == 1 )
  {
    v2 = &unk_140E38500;
    v3 = (__int64 *)&unk_140E38528;
  }
  else
  {
    v2 = (_QWORD *)(a1 + 192);
    v3 = (__int64 *)(a1 + 232);
  }
  result = *v3;
  if ( *v3 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags )
    {
      LOBYTE(a1) = CurrentIrql;
      KiRaiseIrqlProcessIrqlFlags(a1);
    }
    MiLockWorkingSetCoreExclusive(v1);
    if ( *v3 )
    {
      VmAccessLoggingPartition = MiGetVmAccessLoggingPartition(v1);
      MiEmptyPageAccessLog((__int64)VmAccessLoggingPartition, v7);
      v2[5] = 0LL;
    }
    MiUnlockWorkingSetCoreExclusive(v1);
    if ( KiIrqlFlags )
    {
      LOBYTE(v8) = CurrentIrql;
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v8);
    }
    result = CurrentIrql;
    __writecr8(CurrentIrql);
  }
  return result;
}
