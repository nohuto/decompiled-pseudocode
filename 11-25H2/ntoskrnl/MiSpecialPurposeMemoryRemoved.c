/*
 * XREFs of MiSpecialPurposeMemoryRemoved @ 0x1407EEE18
 * Callers:
 *     MmRemovePhysicalMemory @ 0x1407DA710 (MmRemovePhysicalMemory.c)
 *     MiSpecialPurposeMemoryTypeDereference @ 0x1407EEF94 (MiSpecialPurposeMemoryTypeDereference.c)
 * Callees:
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     PsDereferencePartition @ 0x140302710 (PsDereferencePartition.c)
 *     KiCheckForKernelApcDelivery @ 0x140320950 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x1403D62D0 (ExfTryToWakePushLock.c)
 *     KeGenericCallDpcEx @ 0x140417AB0 (KeGenericCallDpcEx.c)
 *     ZwClose @ 0x14069B320 (ZwClose.c)
 *     MiFindSpecialPurposeMemoryTypeByPartition @ 0x1407EE418 (MiFindSpecialPurposeMemoryTypeByPartition.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
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
