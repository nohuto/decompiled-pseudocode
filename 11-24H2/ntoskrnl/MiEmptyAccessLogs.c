/*
 * XREFs of MiEmptyAccessLogs @ 0x140684820
 * Callers:
 *     <none>
 * Callees:
 *     PsDereferencePartition @ 0x14022B3F0 (PsDereferencePartition.c)
 *     MiReleaseSpinLockExclusive @ 0x14029EA30 (MiReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14029EF70 (ExAcquireSpinLockExclusive.c)
 *     KiStackAttachProcess @ 0x1402C9570 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1402CAA50 (KiUnstackDetachProcess.c)
 *     MiGetVmAccessLoggingPartition @ 0x140351780 (MiGetVmAccessLoggingPartition.c)
 *     MiCheckAndProcessCcAccessLog @ 0x14044B1B4 (MiCheckAndProcessCcAccessLog.c)
 *     MiDrainSystemAccessLog @ 0x140462A14 (MiDrainSystemAccessLog.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     PsGetNextProcess @ 0x1408603A0 (PsGetNextProcess.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

void __fastcall MiEmptyAccessLogs(__int64 a1)
{
  volatile LONG *v1; // r14
  void *v3; // rbp
  KIRQL v4; // al
  void *i; // rcx
  _QWORD *v6; // rax
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 NextProcess; // rax
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rdi
  _QWORD *v17; // rdi
  __int64 v18; // rsi
  _OWORD v19[3]; // [rsp+20h] [rbp-58h] BYREF

  v1 = (volatile LONG *)(a1 + 17536);
  v3 = 0LL;
  memset(v19, 0, sizeof(v19));
  v4 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 17536));
  if ( !*(_DWORD *)(a1 + 17452) )
  {
    do
    {
      *(_DWORD *)(a1 + 17448) = 2;
      MiReleaseSpinLockExclusive(v1, v4);
      for ( i = 0LL; ; i = (void *)v16 )
      {
        NextProcess = PsGetNextProcess(i);
        v16 = NextProcess;
        if ( !NextProcess )
          break;
        if ( MiGetVmAccessLoggingPartition(NextProcess + 1024) == (ULONG *)a1 )
        {
          v6 = &unk_140E388A8;
          if ( (*(_DWORD *)(v16 + 1208) & 0xF) != 1 )
            v6 = (_QWORD *)(v16 + 1256);
          if ( *v6 )
          {
            KiStackAttachProcess((_KPROCESS *)v16, 0, (__int64)v19);
            MiDrainSystemAccessLog(v16 + 1024, v7, v8, v9);
            KiUnstackDetachProcess((__int64)v19, 0, v10, v11);
          }
        }
      }
      if ( (ULONG *)a1 == &MiSystemPartition )
      {
        v17 = &unk_140E37D40;
        v18 = 4LL;
        do
        {
          if ( v17[14] )
            MiDrainSystemAccessLog((__int64)v17, v13, v14, v15);
          v17 += 40;
          --v18;
        }
        while ( v18 );
      }
      MiCheckAndProcessCcAccessLog(a1, 0LL, 1);
      v4 = ExAcquireSpinLockExclusive(v1);
    }
    while ( *(_DWORD *)(a1 + 17448) != 2 );
    if ( !*(_DWORD *)(a1 + 17452) )
    {
      v3 = *(void **)(a1 + 17464);
      *(_QWORD *)(a1 + 17464) = 0LL;
    }
  }
  *(_DWORD *)(a1 + 17448) = 0;
  MiReleaseSpinLockExclusive(v1, v4);
  PsDereferencePartition(*(_QWORD *)(a1 + 184));
  if ( v3 )
    ExFreePoolWithTag(v3, 0);
}
