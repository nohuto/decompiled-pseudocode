/*
 * XREFs of MiSpecialPurposeMemoryRemoved @ 0x1407FF418
 * Callers:
 *     MmRemovePhysicalMemory @ 0x1407EABA0 (MmRemovePhysicalMemory.c)
 *     MiSpecialPurposeMemoryTypeDereference @ 0x1407FF594 (MiSpecialPurposeMemoryTypeDereference.c)
 * Callees:
 *     PsDereferencePartition @ 0x14022B3F0 (PsDereferencePartition.c)
 *     KeGenericCallDpcEx @ 0x140270AE8 (KeGenericCallDpcEx.c)
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x140362C10 (KiCheckForKernelApcDelivery.c)
 *     ZwClose @ 0x1406A7590 (ZwClose.c)
 *     MiFindSpecialPurposeMemoryTypeByPartition @ 0x1407FEA18 (MiFindSpecialPurposeMemoryTypeByPartition.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

void __fastcall MiSpecialPurposeMemoryRemoved(_QWORD *a1)
{
  HANDLE *v1; // rsi
  __int64 v3; // rax
  HANDLE *SpecialPurposeMemoryTypeByPartition; // rax
  HANDLE *v5; // rbx
  HANDLE *v6; // rcx
  HANDLE **v7; // rax
  struct _KTHREAD *CurrentThread; // rax
  bool v9; // zf
  __int128 v10; // [rsp+20h] [rbp-20h] BYREF
  __int64 v11; // [rsp+30h] [rbp-10h]
  ULONG_PTR BugCheckParameter2; // [rsp+60h] [rbp+20h] BYREF
  __int64 v13; // [rsp+68h] [rbp+28h] BYREF

  v1 = 0LL;
  BugCheckParameter2 = 0LL;
  v13 = 0LL;
  v11 = 0LL;
  v3 = a1[2314];
  v10 = 0LL;
  if ( !v3 && !a1[53] )
  {
    SpecialPurposeMemoryTypeByPartition = (HANDLE *)MiFindSpecialPurposeMemoryTypeByPartition(
                                                      (__int64)a1,
                                                      &v13,
                                                      (volatile signed __int64 **)&BugCheckParameter2);
    v5 = SpecialPurposeMemoryTypeByPartition;
    if ( SpecialPurposeMemoryTypeByPartition
      && !a1[2314]
      && !a1[53]
      && !SpecialPurposeMemoryTypeByPartition[11]
      && *(_QWORD *)(a1[23] + 48LL) <= 1uLL )
    {
      if ( SpecialPurposeMemoryTypeByPartition[9] )
      {
        HIDWORD(v11) = 0;
        *((_QWORD *)&v10 + 1) = v13;
        *(_QWORD *)&v10 = SpecialPurposeMemoryTypeByPartition;
        KeGenericCallDpcEx((__int64)MiSpecialPurposeMemoryCacheUpdateDpc, (__int64)&v10);
      }
      v6 = (HANDLE *)*v5;
      if ( *((HANDLE **)*v5 + 1) != v5 || (v7 = (HANDLE **)v5[1], *v7 != v5) )
        __fastfail(3u);
      *v7 = v6;
      v1 = v5;
      v6[1] = v7;
    }
    if ( BugCheckParameter2 )
    {
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)BugCheckParameter2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)BugCheckParameter2);
      KeAbPostRelease(BugCheckParameter2);
      CurrentThread = KeGetCurrentThread();
      v9 = CurrentThread->SpecialApcDisable++ == -1;
      if ( v9
        && ($727077A9B6E167EAE1398C74674DC5A5 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      {
        KiCheckForKernelApcDelivery();
      }
    }
    if ( v13 )
      PsDereferencePartition(*(_QWORD *)(v13 + 184));
    if ( v1 )
    {
      ZwClose(v1[7]);
      ExFreePoolWithTag(v1, 0);
    }
  }
}
