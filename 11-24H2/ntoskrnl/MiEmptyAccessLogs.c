/*
 * XREFs of MiEmptyAccessLogs @ 0x140683670
 * Callers:
 *     <none>
 * Callees:
 *     PsDereferencePartition @ 0x140275E60 (PsDereferencePartition.c)
 *     MiReleaseSpinLockExclusive @ 0x14028EE30 (MiReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14028F370 (ExAcquireSpinLockExclusive.c)
 *     KiStackAttachProcess @ 0x1403209E0 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x140321EC0 (KiUnstackDetachProcess.c)
 *     MiCheckAndProcessCcAccessLog @ 0x140379B9C (MiCheckAndProcessCcAccessLog.c)
 *     MiGetVmAccessLoggingPartition @ 0x140399050 (MiGetVmAccessLoggingPartition.c)
 *     MiDrainSystemAccessLog @ 0x140469AF0 (MiDrainSystemAccessLog.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     PsGetNextProcess @ 0x1408EEB70 (PsGetNextProcess.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
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
  __int64 NextProcess; // rax
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // rdi
  _QWORD *v13; // rdi
  __int64 v14; // rsi
  _OWORD v15[3]; // [rsp+20h] [rbp-58h] BYREF

  v1 = (volatile LONG *)(a1 + 17536);
  v3 = 0LL;
  memset(v15, 0, sizeof(v15));
  v4 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 17536));
  if ( !*(_DWORD *)(a1 + 17452) )
  {
    do
    {
      *(_DWORD *)(a1 + 17448) = 2;
      MiReleaseSpinLockExclusive(v1, v4);
      for ( i = 0LL; ; i = (void *)v12 )
      {
        NextProcess = PsGetNextProcess(i);
        v12 = NextProcess;
        if ( !NextProcess )
          break;
        if ( MiGetVmAccessLoggingPartition(NextProcess + 1024) == (ULONG *)a1 )
        {
          v6 = &unk_140E38768;
          if ( (*(_DWORD *)(v12 + 1208) & 0xF) != 1 )
            v6 = (_QWORD *)(v12 + 1256);
          if ( *v6 )
          {
            KiStackAttachProcess((_KPROCESS *)v12, 0, (__int64)v15);
            MiDrainSystemAccessLog(v12 + 1024, v7, v8);
            KiUnstackDetachProcess((__int64)v15, 0);
          }
        }
      }
      if ( (ULONG *)a1 == &MiSystemPartition )
      {
        v13 = &unk_140E37C00;
        v14 = 4LL;
        do
        {
          if ( v13[14] )
            MiDrainSystemAccessLog((__int64)v13, v10, v11);
          v13 += 40;
          --v14;
        }
        while ( v14 );
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
