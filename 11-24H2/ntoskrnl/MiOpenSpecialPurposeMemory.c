/*
 * XREFs of MiOpenSpecialPurposeMemory @ 0x1407FE6F8
 * Callers:
 *     NtManagePartition @ 0x140933FF0 (NtManagePartition.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x14025DE00 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1402BB4D0 (KiCheckForKernelApcDelivery.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x14034050C (ExfAcquirePushLockSharedEx.c)
 *     MiSpecialPurposeMemoryTypeDereference @ 0x1407FEE24 (MiSpecialPurposeMemoryTypeDereference.c)
 *     SeSinglePrivilegeCheck @ 0x140853E90 (SeSinglePrivilegeCheck.c)
 *     ObOpenObjectByPointer @ 0x140854F10 (ObOpenObjectByPointer.c)
 */

__int64 __fastcall MiOpenSpecialPurposeMemory(__int64 a1, __int64 a2, KPROCESSOR_MODE a3)
{
  struct _KTHREAD *CurrentThread; // rsi
  unsigned int v4; // edi
  _QWORD *v7; // r14
  _QWORD *v8; // rbp
  _QWORD *i; // rcx
  __int64 v10; // rdx
  __int64 v11; // rcx
  bool v12; // zf
  NTSTATUS v13; // ebx

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
      v12 = CurrentThread->SpecialApcDisable++ == -1;
      if ( v12
        && ($81B80DCEA5A02D890AB7B2872B48AC01 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      {
        KiCheckForKernelApcDelivery(v11, v10);
      }
      if ( v7 )
      {
        v13 = ObOpenObjectByPointer(
                *(PVOID *)(v7[8] + 184LL),
                *(_DWORD *)(a2 + 8),
                0LL,
                *(_DWORD *)(a2 + 12),
                PsPartitionType,
                0,
                (PHANDLE)(a2 + 16));
        MiSpecialPurposeMemoryTypeDereference(a1, v7);
        if ( v13 < 0 )
          return (unsigned int)v13;
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
