/*
 * XREFs of MiDrainOldAccessBuffers @ 0x1403C37E8
 * Callers:
 *     MiTrimOrAgeWorkingSet @ 0x1403C2D90 (MiTrimOrAgeWorkingSet.c)
 * Callees:
 *     MiGetVmAccessLoggingPartition @ 0x140209E80 (MiGetVmAccessLoggingPartition.c)
 *     MiEmptyPageAccessLog @ 0x140322FE0 (MiEmptyPageAccessLog.c)
 *     MiUnlockWorkingSetCoreExclusive @ 0x14037F48C (MiUnlockWorkingSetCoreExclusive.c)
 *     MiLockWorkingSetCoreExclusive @ 0x1403C3B04 (MiLockWorkingSetCoreExclusive.c)
 */

char __fastcall MiDrainOldAccessBuffers(__int64 a1, __int64 a2)
{
  _QWORD *v4; // rbp
  _QWORD *v5; // rdi
  _QWORD **v6; // rax
  _QWORD **v7; // r8
  _QWORD *v8; // rcx
  _QWORD *i; // rdx
  ULONG *VmAccessLoggingPartition; // rax
  unsigned __int64 *v11; // r8

  if ( (*(_DWORD *)(a1 + 184) & 0xF) == 1 )
  {
    v4 = &unk_140E38500;
    v5 = &unk_140E38528;
  }
  else
  {
    v4 = (_QWORD *)(a1 + 192);
    v5 = (_QWORD *)(a1 + 232);
  }
  v6 = (_QWORD **)*v5;
  if ( *v5 )
  {
    MiLockWorkingSetCoreExclusive(a1);
    v7 = (_QWORD **)*v5;
    if ( *v5 )
    {
      v8 = *v7;
      for ( i = (_QWORD *)*v5; v8; v8 = (_QWORD *)*v8 )
        i = v8;
      if ( a2 - i[2] > (unsigned __int64)PfKernelGlobals )
      {
        VmAccessLoggingPartition = MiGetVmAccessLoggingPartition(a1);
        MiEmptyPageAccessLog((__int64)VmAccessLoggingPartition, v11);
        v4[5] = 0LL;
      }
    }
    LOBYTE(v6) = MiUnlockWorkingSetCoreExclusive(a1);
  }
  return (char)v6;
}
