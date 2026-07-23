/*
 * XREFs of MiDrainSystemAccessLog @ 0x140462A14
 * Callers:
 *     MiCaptureAndResetWorkingSetAccessBits @ 0x140462890 (MiCaptureAndResetWorkingSetAccessBits.c)
 *     MiCleanWorkingSet @ 0x140462994 (MiCleanWorkingSet.c)
 *     MiEmptyAccessLogs @ 0x140684820 (MiEmptyAccessLogs.c)
 *     MiDeleteVad @ 0x140895840 (MiDeleteVad.c)
 * Callees:
 *     MiEmptyPageAccessLog @ 0x14020C9F0 (MiEmptyPageAccessLog.c)
 *     MiLockWorkingSetCoreExclusive @ 0x140296038 (MiLockWorkingSetCoreExclusive.c)
 *     MiUnlockWorkingSetCoreExclusive @ 0x140296808 (MiUnlockWorkingSetCoreExclusive.c)
 *     MiGetVmAccessLoggingPartition @ 0x140351780 (MiGetVmAccessLoggingPartition.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall MiDrainSystemAccessLog(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbx
  _QWORD *v5; // rbp
  __int64 *v6; // rsi
  __int64 result; // rax
  unsigned __int8 CurrentIrql; // di
  __int64 v9; // rdx
  ULONG *VmAccessLoggingPartition; // rax
  unsigned __int64 *v11; // r8
  __int64 v12; // rdx

  v4 = a1;
  if ( (*(_DWORD *)(a1 + 184) & 0xF) == 1 )
  {
    v5 = &unk_140E38880;
    v6 = (__int64 *)&unk_140E388A8;
  }
  else
  {
    v5 = (_QWORD *)(a1 + 192);
    v6 = (__int64 *)(a1 + 232);
  }
  result = *v6;
  if ( *v6 )
  {
    CurrentIrql = KeGetCurrentIrql();
    v9 = 2LL;
    __writecr8(2uLL);
    if ( KiIrqlFlags )
    {
      LOBYTE(a1) = CurrentIrql;
      KiRaiseIrqlProcessIrqlFlags(a1, 2LL);
    }
    MiLockWorkingSetCoreExclusive(v4, v9, a3, a4);
    if ( *v6 )
    {
      VmAccessLoggingPartition = MiGetVmAccessLoggingPartition(v4);
      MiEmptyPageAccessLog((__int64)VmAccessLoggingPartition, v11);
      v5[5] = 0LL;
    }
    MiUnlockWorkingSetCoreExclusive(v4);
    if ( KiIrqlFlags )
    {
      LOBYTE(v12) = CurrentIrql;
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v12);
    }
    result = CurrentIrql;
    __writecr8(CurrentIrql);
  }
  return result;
}
