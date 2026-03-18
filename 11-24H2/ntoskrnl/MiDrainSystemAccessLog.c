/*
 * XREFs of MiDrainSystemAccessLog @ 0x140469AF0
 * Callers:
 *     MiCaptureAndResetWorkingSetAccessBits @ 0x140379A98 (MiCaptureAndResetWorkingSetAccessBits.c)
 *     MiCleanWorkingSet @ 0x140469A70 (MiCleanWorkingSet.c)
 *     MiEmptyAccessLogs @ 0x140683670 (MiEmptyAccessLogs.c)
 *     MiDeleteVad @ 0x1408E5390 (MiDeleteVad.c)
 * Callees:
 *     MiEmptyPageAccessLog @ 0x140244260 (MiEmptyPageAccessLog.c)
 *     MiLockWorkingSetCoreExclusive @ 0x140379CE4 (MiLockWorkingSetCoreExclusive.c)
 *     MiUnlockWorkingSetCoreExclusive @ 0x140379DAC (MiUnlockWorkingSetCoreExclusive.c)
 *     MiGetVmAccessLoggingPartition @ 0x140399050 (MiGetVmAccessLoggingPartition.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall MiDrainSystemAccessLog(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  _QWORD *v4; // rbp
  __int64 *v5; // rsi
  __int64 result; // rax
  unsigned __int8 CurrentIrql; // di
  __int64 v8; // rdx
  ULONG *VmAccessLoggingPartition; // rax
  unsigned __int64 *v10; // r8
  __int64 v11; // rdx

  v3 = a1;
  if ( (*(_DWORD *)(a1 + 184) & 0xF) == 1 )
  {
    v4 = &unk_140E38740;
    v5 = (__int64 *)&unk_140E38768;
  }
  else
  {
    v4 = (_QWORD *)(a1 + 192);
    v5 = (__int64 *)(a1 + 232);
  }
  result = *v5;
  if ( *v5 )
  {
    CurrentIrql = KeGetCurrentIrql();
    v8 = 2LL;
    __writecr8(2uLL);
    if ( KiIrqlFlags )
    {
      LOBYTE(a1) = CurrentIrql;
      KiRaiseIrqlProcessIrqlFlags(a1, 2LL);
    }
    MiLockWorkingSetCoreExclusive(v3, v8, a3);
    if ( *v5 )
    {
      VmAccessLoggingPartition = MiGetVmAccessLoggingPartition(v3);
      MiEmptyPageAccessLog((__int64)VmAccessLoggingPartition, v10);
      v4[5] = 0LL;
    }
    MiUnlockWorkingSetCoreExclusive(v3);
    if ( KiIrqlFlags )
    {
      LOBYTE(v11) = CurrentIrql;
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v11);
    }
    result = CurrentIrql;
    __writecr8(CurrentIrql);
  }
  return result;
}
