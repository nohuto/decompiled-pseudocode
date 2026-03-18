/*
 * XREFs of MiUpdateSpecialPurposeMemoryCacheEligibility @ 0x1407FEF40
 * Callers:
 *     MmManagePartitionUpdateAttributes @ 0x1407FD274 (MmManagePartitionUpdateAttributes.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x14025F9A0 (ExfTryToWakePushLock.c)
 *     PsDereferencePartition @ 0x140275E60 (PsDereferencePartition.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1402BB4D0 (KiCheckForKernelApcDelivery.c)
 *     KeGenericCallDpcEx @ 0x140414C8C (KeGenericCallDpcEx.c)
 *     MiFindSpecialPurposeMemoryTypeByPartition @ 0x1407FE2A8 (MiFindSpecialPurposeMemoryTypeByPartition.c)
 */

__int64 __fastcall MiUpdateSpecialPurposeMemoryCacheEligibility(__int64 a1, unsigned int a2)
{
  _QWORD *SpecialPurposeMemoryTypeByPartition; // rax
  __int64 v4; // rbx
  unsigned int v5; // edi
  __int64 v6; // rdx
  __int64 v7; // rcx
  struct _KTHREAD *CurrentThread; // rax
  bool v9; // zf
  __int128 v11; // [rsp+20h] [rbp-20h] BYREF
  __int64 v12; // [rsp+30h] [rbp-10h]
  ULONG_PTR BugCheckParameter2; // [rsp+60h] [rbp+20h] BYREF
  __int64 v14; // [rsp+68h] [rbp+28h] BYREF

  BugCheckParameter2 = 0LL;
  v14 = 0LL;
  v12 = 0LL;
  v11 = 0LL;
  SpecialPurposeMemoryTypeByPartition = MiFindSpecialPurposeMemoryTypeByPartition(
                                          a1,
                                          &v14,
                                          (volatile signed __int64 **)&BugCheckParameter2);
  v4 = v14;
  if ( SpecialPurposeMemoryTypeByPartition )
  {
    if ( (a2 == 0) == (SpecialPurposeMemoryTypeByPartition[9] == 0LL) )
    {
      v5 = 255;
    }
    else
    {
      *(_QWORD *)&v11 = SpecialPurposeMemoryTypeByPartition;
      v12 = a2;
      *((_QWORD *)&v11 + 1) = v14;
      KeGenericCallDpcEx((__int64)MiSpecialPurposeMemoryCacheUpdateDpc, (__int64)&v11);
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
    v9 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v9 && ($81B80DCEA5A02D890AB7B2872B48AC01 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      KiCheckForKernelApcDelivery(v7, v6);
    v4 = v14;
  }
  if ( v4 )
    PsDereferencePartition(*(_QWORD *)(v4 + 184));
  return v5;
}
