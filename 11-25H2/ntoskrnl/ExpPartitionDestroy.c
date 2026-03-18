/*
 * XREFs of ExpPartitionDestroy @ 0x1407B04DC
 * Callers:
 *     PspTeardownPartition @ 0x14076B4B0 (PspTeardownPartition.c)
 *     ExpPartitionInitialize @ 0x1407B06B4 (ExpPartitionInitialize.c)
 * Callees:
 *     KeSetEvent @ 0x140250100 (KeSetEvent.c)
 *     KeFlushQueuedDpcs @ 0x1402670A0 (KeFlushQueuedDpcs.c)
 *     KeCancelTimer @ 0x1402ECAA0 (KeCancelTimer.c)
 *     KeCancelTimer2 @ 0x14036FE50 (KeCancelTimer2.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 *     ZwWaitForSingleObject @ 0x14069B1C0 (ZwWaitForSingleObject.c)
 *     ZwClose @ 0x14069B320 (ZwClose.c)
 *     ExpWorkQueueDestroy @ 0x1407B0908 (ExpWorkQueueDestroy.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

void __fastcall ExpPartitionDestroy(PVOID P, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int16 i; // si
  __int64 v6; // rdi
  unsigned __int16 j; // si
  _QWORD *v8; // rcx
  unsigned __int16 *v9; // r15
  __int64 v10; // rbp
  _DWORD *v11; // rdi
  __int64 v12; // rdx

  if ( *((_QWORD *)P + 2) )
  {
    for ( i = 0; i < (unsigned __int16)KeNumberNodes; ++i )
    {
      v6 = *(_QWORD *)(*((_QWORD *)P + 2) + 8LL * i);
      if ( v6 )
      {
        if ( *(_QWORD *)(v6 + 264) )
        {
          *(_DWORD *)(v6 + 272) = 1;
          KeSetEvent((PRKEVENT)(v6 + 16), 0, 0);
          ZwWaitForSingleObject(*(HANDLE *)(v6 + 264), 0, 0LL);
          ZwClose(*(HANDLE *)(v6 + 264));
        }
        KeCancelTimer2(v6 + 128, 0LL, a3, a4);
        KeCancelTimer((PKTIMER)(v6 + 40));
        KeFlushQueuedDpcs();
        ExFreePoolWithTag(*(PVOID *)(*((_QWORD *)P + 2) + 8LL * i), 0);
      }
    }
    ExFreePoolWithTag(*((PVOID *)P + 2), 0);
  }
  if ( *((_QWORD *)P + 1) )
  {
    for ( j = 0; ; ++j )
    {
      v8 = (_QWORD *)*((_QWORD *)P + 1);
      if ( j >= (unsigned __int16)KeNumberNodes )
        break;
      if ( v8[j] )
      {
        v9 = 0LL;
        v10 = 0LL;
        if ( (_UNKNOWN *)KeNodeBlock[j] != (_UNKNOWN *)((char *)&KiNodeInit + 824 * j) )
          v9 = (unsigned __int16 *)KeNodeBlock[j];
        while ( v10 < 64 )
        {
          v11 = 0LL;
          v12 = *(_QWORD *)(*((_QWORD *)P + 1) + 8LL * *v9);
          if ( (*(_QWORD *)(v12 + v10) & 1) == 0 )
            v11 = *(_DWORD **)(v12 + v10);
          if ( v11 )
          {
            if ( v11[1] )
              KeBugCheckEx(0x18Eu, 2uLL, *(_QWORD *)P, (ULONG_PTR)v11, 0LL);
            ExpWorkQueueDestroy(v11);
            ExFreePoolWithTag(v11, 0);
          }
          v10 += 8LL;
        }
        ExFreePoolWithTag(*(PVOID *)(*((_QWORD *)P + 1) + 8LL * j), 0);
      }
    }
    ExFreePoolWithTag(v8, 0);
  }
  ExFreePoolWithTag(P, 0);
}
