/*
 * XREFs of MiUpdateSpecialPurposeMemoryCacheEligibility @ 0x1407FF6B0
 * Callers:
 *     MmManagePartitionUpdateAttributes @ 0x1407FD9E4 (MmManagePartitionUpdateAttributes.c)
 * Callees:
 *     PsDereferencePartition @ 0x14022B3F0 (PsDereferencePartition.c)
 *     KeGenericCallDpcEx @ 0x140270AE8 (KeGenericCallDpcEx.c)
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x140362C10 (KiCheckForKernelApcDelivery.c)
 *     MiFindSpecialPurposeMemoryTypeByPartition @ 0x1407FEA18 (MiFindSpecialPurposeMemoryTypeByPartition.c)
 */

__int64 __fastcall MiUpdateSpecialPurposeMemoryCacheEligibility(__int64 a1, unsigned int a2)
{
  _QWORD *SpecialPurposeMemoryTypeByPartition; // rax
  __int64 v4; // rbx
  unsigned int v5; // edi
  struct _KTHREAD *CurrentThread; // rax
  bool v7; // zf
  __int128 v9; // [rsp+20h] [rbp-20h] BYREF
  __int64 v10; // [rsp+30h] [rbp-10h]
  ULONG_PTR BugCheckParameter2; // [rsp+60h] [rbp+20h] BYREF
  __int64 v12; // [rsp+68h] [rbp+28h] BYREF

  BugCheckParameter2 = 0LL;
  v12 = 0LL;
  v10 = 0LL;
  v9 = 0LL;
  SpecialPurposeMemoryTypeByPartition = MiFindSpecialPurposeMemoryTypeByPartition(
                                          a1,
                                          &v12,
                                          (volatile signed __int64 **)&BugCheckParameter2);
  v4 = v12;
  if ( SpecialPurposeMemoryTypeByPartition )
  {
    if ( (a2 == 0) == (SpecialPurposeMemoryTypeByPartition[9] == 0LL) )
    {
      v5 = 255;
    }
    else
    {
      *(_QWORD *)&v9 = SpecialPurposeMemoryTypeByPartition;
      v10 = a2;
      *((_QWORD *)&v9 + 1) = v12;
      KeGenericCallDpcEx((__int64)MiSpecialPurposeMemoryCacheUpdateDpc, (__int64)&v9);
      v5 = 0;
    }
  }
  else
  {
    v5 = -1073740640;
  }
  if ( BugCheckParameter2 )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)BugCheckParameter2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)BugCheckParameter2);
    KeAbPostRelease(BugCheckParameter2);
    CurrentThread = KeGetCurrentThread();
    v7 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v7 && ($727077A9B6E167EAE1398C74674DC5A5 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      KiCheckForKernelApcDelivery();
    v4 = v12;
  }
  if ( v4 )
    PsDereferencePartition(*(_QWORD *)(v4 + 184));
  return v5;
}
