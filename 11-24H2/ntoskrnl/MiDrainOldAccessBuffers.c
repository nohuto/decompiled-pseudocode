/*
 * XREFs of MiDrainOldAccessBuffers @ 0x1403799CC
 * Callers:
 *     MiTrimOrAgeWorkingSet @ 0x140378F30 (MiTrimOrAgeWorkingSet.c)
 * Callees:
 *     MiEmptyPageAccessLog @ 0x140244260 (MiEmptyPageAccessLog.c)
 *     MiLockWorkingSetCoreExclusive @ 0x140379CE4 (MiLockWorkingSetCoreExclusive.c)
 *     MiUnlockWorkingSetCoreExclusive @ 0x140379DAC (MiUnlockWorkingSetCoreExclusive.c)
 *     MiGetVmAccessLoggingPartition @ 0x140399050 (MiGetVmAccessLoggingPartition.c)
 */

__int64 __fastcall MiDrainOldAccessBuffers(__int64 a1, __int64 a2)
{
  _QWORD *v4; // rbp
  __int64 *v5; // rdi
  __int64 result; // rax
  _QWORD **v7; // r8
  _QWORD *v8; // rcx
  _QWORD *i; // rdx
  __int64 VmAccessLoggingPartition; // rax
  unsigned __int64 *v11; // r8

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
    MiLockWorkingSetCoreExclusive(a1, a2);
    v7 = (_QWORD **)*v5;
    if ( *v5 )
    {
      v8 = *v7;
      for ( i = (_QWORD *)*v5; v8; v8 = (_QWORD *)*v8 )
        i = v8;
      if ( a2 - i[2] > (unsigned __int64)PfKernelGlobals )
      {
        VmAccessLoggingPartition = MiGetVmAccessLoggingPartition(a1);
        MiEmptyPageAccessLog(VmAccessLoggingPartition, v11);
        v4[5] = 0LL;
      }
    }
    return MiUnlockWorkingSetCoreExclusive(a1);
  }
  return result;
}
