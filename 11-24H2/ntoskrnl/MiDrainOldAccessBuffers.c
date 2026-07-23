/*
 * XREFs of MiDrainOldAccessBuffers @ 0x14045F56C
 * Callers:
 *     MiTrimOrAgeWorkingSet @ 0x1402F35B0 (MiTrimOrAgeWorkingSet.c)
 * Callees:
 *     MiEmptyPageAccessLog @ 0x14020C9F0 (MiEmptyPageAccessLog.c)
 *     MiLockWorkingSetCoreExclusive @ 0x140296038 (MiLockWorkingSetCoreExclusive.c)
 *     MiUnlockWorkingSetCoreExclusive @ 0x140296808 (MiUnlockWorkingSetCoreExclusive.c)
 *     MiGetVmAccessLoggingPartition @ 0x140351780 (MiGetVmAccessLoggingPartition.c)
 */

char __fastcall MiDrainOldAccessBuffers(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD *v6; // rbp
  _QWORD *v7; // rdi
  _QWORD **v8; // rax
  _QWORD **v9; // r8
  _QWORD *v10; // rcx
  _QWORD *i; // rdx
  ULONG *VmAccessLoggingPartition; // rax
  unsigned __int64 *v13; // r8

  if ( (*(_DWORD *)(a1 + 184) & 0xF) == 1 )
  {
    v6 = &unk_140E38880;
    v7 = &unk_140E388A8;
  }
  else
  {
    v6 = (_QWORD *)(a1 + 192);
    v7 = (_QWORD *)(a1 + 232);
  }
  v8 = (_QWORD **)*v7;
  if ( *v7 )
  {
    MiLockWorkingSetCoreExclusive(a1, a2, a3, a4);
    v9 = (_QWORD **)*v7;
    if ( *v7 )
    {
      v10 = *v9;
      for ( i = (_QWORD *)*v7; v10; v10 = (_QWORD *)*v10 )
        i = v10;
      if ( a2 - i[2] > (unsigned __int64)PfKernelGlobals )
      {
        VmAccessLoggingPartition = MiGetVmAccessLoggingPartition(a1);
        MiEmptyPageAccessLog((__int64)VmAccessLoggingPartition, v13);
        v6[5] = 0LL;
      }
    }
    LOBYTE(v8) = MiUnlockWorkingSetCoreExclusive(a1);
  }
  return (char)v8;
}
