/*
 * XREFs of MiSpecialPurposeMemoryRemoved @ 0x1407FECA8
 * Callers:
 *     MmRemovePhysicalMemory @ 0x1407EA5D0 (MmRemovePhysicalMemory.c)
 *     MiSpecialPurposeMemoryTypeDereference @ 0x1407FEE24 (MiSpecialPurposeMemoryTypeDereference.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x14025F9A0 (ExfTryToWakePushLock.c)
 *     PsDereferencePartition @ 0x140275E60 (PsDereferencePartition.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1402BB4D0 (KiCheckForKernelApcDelivery.c)
 *     KeGenericCallDpcEx @ 0x140414C8C (KeGenericCallDpcEx.c)
 *     ZwClose @ 0x1406A65F0 (ZwClose.c)
 *     MiFindSpecialPurposeMemoryTypeByPartition @ 0x1407FE2A8 (MiFindSpecialPurposeMemoryTypeByPartition.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

void __fastcall MiSpecialPurposeMemoryRemoved(_QWORD *a1)
{
  HANDLE *v1; // rsi
  __int64 v3; // rax
  HANDLE *SpecialPurposeMemoryTypeByPartition; // rax
  HANDLE *v5; // rbx
  HANDLE *v6; // rcx
  HANDLE **v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  struct _KTHREAD *CurrentThread; // rax
  bool v11; // zf
  __int128 v12; // [rsp+20h] [rbp-20h] BYREF
  __int64 v13; // [rsp+30h] [rbp-10h]
  ULONG_PTR BugCheckParameter2; // [rsp+60h] [rbp+20h] BYREF
  __int64 v15; // [rsp+68h] [rbp+28h] BYREF

  v1 = 0LL;
  BugCheckParameter2 = 0LL;
  v15 = 0LL;
  v13 = 0LL;
  v3 = a1[2314];
  v12 = 0LL;
  if ( !v3 && !a1[53] )
  {
    SpecialPurposeMemoryTypeByPartition = (HANDLE *)MiFindSpecialPurposeMemoryTypeByPartition(
                                                      (__int64)a1,
                                                      &v15,
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
        HIDWORD(v13) = 0;
        *((_QWORD *)&v12 + 1) = v15;
        *(_QWORD *)&v12 = SpecialPurposeMemoryTypeByPartition;
        KeGenericCallDpcEx((__int64)MiSpecialPurposeMemoryCacheUpdateDpc, (__int64)&v12);
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
      v11 = CurrentThread->SpecialApcDisable++ == -1;
      if ( v11
        && ($81B80DCEA5A02D890AB7B2872B48AC01 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      {
        KiCheckForKernelApcDelivery(v9, v8);
      }
    }
    if ( v15 )
      PsDereferencePartition(*(_QWORD *)(v15 + 184));
    if ( v1 )
    {
      ZwClose(v1[7]);
      ExFreePoolWithTag(v1, 0);
    }
  }
}
