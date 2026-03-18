/*
 * XREFs of MiUpdateSpecialPurposeMemoryCacheEligibility @ 0x1407EF0B0
 * Callers:
 *     MmManagePartitionUpdateAttributes @ 0x1407ED3E4 (MmManagePartitionUpdateAttributes.c)
 * Callees:
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     PsDereferencePartition @ 0x140302710 (PsDereferencePartition.c)
 *     KiCheckForKernelApcDelivery @ 0x140320950 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x1403D62D0 (ExfTryToWakePushLock.c)
 *     KeGenericCallDpcEx @ 0x140417AB0 (KeGenericCallDpcEx.c)
 *     MiFindSpecialPurposeMemoryTypeByPartition @ 0x1407EE418 (MiFindSpecialPurposeMemoryTypeByPartition.c)
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
