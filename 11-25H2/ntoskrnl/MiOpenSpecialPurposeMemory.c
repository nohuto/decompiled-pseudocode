/*
 * XREFs of MiOpenSpecialPurposeMemory @ 0x1407EE868
 * Callers:
 *     NtManagePartition @ 0x14093B600 (NtManagePartition.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     ExfReleasePushLockShared @ 0x14029B450 (ExfReleasePushLockShared.c)
 *     ExfAcquirePushLockSharedEx @ 0x14029B5A0 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x140320950 (KiCheckForKernelApcDelivery.c)
 *     MiSpecialPurposeMemoryTypeDereference @ 0x1407EEF94 (MiSpecialPurposeMemoryTypeDereference.c)
 *     ObOpenObjectByPointer @ 0x140857EB0 (ObOpenObjectByPointer.c)
 *     SeSinglePrivilegeCheck @ 0x140858330 (SeSinglePrivilegeCheck.c)
 */

__int64 __fastcall MiOpenSpecialPurposeMemory(__int64 a1, __int64 a2, KPROCESSOR_MODE a3)
{
  struct _KTHREAD *CurrentThread; // rsi
  unsigned int v4; // edi
  _QWORD *v7; // r14
  __int64 *v8; // rbp
  _QWORD *i; // rcx
  bool v10; // zf
  NTSTATUS v11; // ebx

  CurrentThread = KeGetCurrentThread();
  v4 = 0;
  v7 = 0LL;
  if ( (*(_DWORD *)(a2 + 8) & (a3 != 0 ? 7666 : 73714)) == *(_DWORD *)(a2 + 8) )
  {
    if ( SeSinglePrivilegeCheck(SeLockMemoryPrivilege, a3) )
    {
      --CurrentThread->SpecialApcDisable;
      v8 = KeAbPreAcquire(a1 + 17672, 0LL);
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 17672), 17LL, 0LL) )
        ExfAcquirePushLockSharedEx((signed __int64 *)(a1 + 17672), 0, v8, a1 + 17672);
      if ( v8 )
        *((_BYTE *)v8 + 10) = 1;
      for ( i = *(_QWORD **)(a1 + 17624); i != (_QWORD *)(a1 + 17624); i = (_QWORD *)*i )
      {
        if ( i[2] == *(_QWORD *)a2 )
        {
          ++i[11];
          v7 = i;
          break;
        }
      }
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 17672), 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)(a1 + 17672));
      KeAbPostRelease(a1 + 17672);
      v10 = CurrentThread->SpecialApcDisable++ == -1;
      if ( v10
        && ($727077A9B6E167EAE1398C74674DC5A5 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      {
        KiCheckForKernelApcDelivery();
      }
      if ( v7 )
      {
        v11 = ObOpenObjectByPointer(
                *(PVOID *)(v7[8] + 184LL),
                *(_DWORD *)(a2 + 8),
                0LL,
                *(_DWORD *)(a2 + 12),
                PsPartitionType,
                0,
                (PHANDLE)(a2 + 16));
        MiSpecialPurposeMemoryTypeDereference(a1, v7);
        if ( v11 < 0 )
          return (unsigned int)v11;
      }
      else
      {
        return (unsigned int)-1073741275;
      }
    }
    else
    {
      return (unsigned int)-1073741727;
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v4;
}
