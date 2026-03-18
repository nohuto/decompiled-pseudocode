/*
 * XREFs of MiEmptyAccessLogs @ 0x140677E70
 * Callers:
 *     <none>
 * Callees:
 *     MiGetVmAccessLoggingPartition @ 0x140209E80 (MiGetVmAccessLoggingPartition.c)
 *     KiUnstackDetachProcess @ 0x140289470 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x140289A10 (KiStackAttachProcess.c)
 *     ExAcquireSpinLockExclusive @ 0x1402BEA90 (ExAcquireSpinLockExclusive.c)
 *     PsDereferencePartition @ 0x140302710 (PsDereferencePartition.c)
 *     MiReleaseSpinLockExclusive @ 0x140329B80 (MiReleaseSpinLockExclusive.c)
 *     MiCheckAndProcessCcAccessLog @ 0x1403C39B0 (MiCheckAndProcessCcAccessLog.c)
 *     MiDrainSystemAccessLog @ 0x1403C3E1C (MiDrainSystemAccessLog.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     PsGetNextProcess @ 0x1408DF760 (PsGetNextProcess.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

void __fastcall MiEmptyAccessLogs(__int64 a1)
{
  volatile LONG *v1; // r14
  void *v3; // rbp
  KIRQL v4; // al
  void *i; // rcx
  _QWORD *v6; // rax
  __int64 NextProcess; // rax
  __int64 v8; // rdi
  _QWORD *v9; // rdi
  __int64 v10; // rsi
  _OWORD v11[3]; // [rsp+20h] [rbp-58h] BYREF

  v1 = (volatile LONG *)(a1 + 17536);
  v3 = 0LL;
  memset(v11, 0, sizeof(v11));
  v4 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 17536));
  if ( !*(_DWORD *)(a1 + 17452) )
  {
    do
    {
      *(_DWORD *)(a1 + 17448) = 2;
      MiReleaseSpinLockExclusive(v1, v4);
      for ( i = 0LL; ; i = (void *)v8 )
      {
        NextProcess = PsGetNextProcess(i);
        v8 = NextProcess;
        if ( !NextProcess )
          break;
        if ( MiGetVmAccessLoggingPartition(NextProcess + 1024) == (ULONG *)a1 )
        {
          v6 = &unk_140E38528;
          if ( (*(_DWORD *)(v8 + 1208) & 0xF) != 1 )
            v6 = (_QWORD *)(v8 + 1256);
          if ( *v6 )
          {
            KiStackAttachProcess((_KPROCESS *)v8, 0, (__int64)v11);
            MiDrainSystemAccessLog(v8 + 1024);
            KiUnstackDetachProcess((__int64)v11, 0LL);
          }
        }
      }
      if ( (ULONG *)a1 == &MiSystemPartition )
      {
        v9 = &unk_140E379C0;
        v10 = 4LL;
        do
        {
          if ( v9[14] )
            MiDrainSystemAccessLog((__int64)v9);
          v9 += 40;
          --v10;
        }
        while ( v10 );
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
