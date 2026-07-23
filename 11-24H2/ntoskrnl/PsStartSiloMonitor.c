/*
 * XREFs of PsStartSiloMonitor @ 0x140779370
 * Callers:
 *     <none>
 * Callees:
 *     KiStackAttachProcess @ 0x1402C9570 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1402CAA50 (KiUnstackDetachProcess.c)
 *     PdcCreateWatchdogAroundClientCall @ 0x14047F700 (PdcCreateWatchdogAroundClientCall.c)
 *     PspGetServerSiloStatePointer @ 0x1404F8AA0 (PspGetServerSiloStatePointer.c)
 *     PspAcquirePushLockExclusive @ 0x1405E367C (PspAcquirePushLockExclusive.c)
 *     PspReleasePushLockExclusive @ 0x1405E36E0 (PspReleasePushLockExclusive.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     PspInvokeCreateCallback @ 0x140779744 (PspInvokeCreateCallback.c)
 *     PspInvokeTerminateCallback @ 0x1407797A8 (PspInvokeTerminateCallback.c)
 *     PspGetNextSilo @ 0x14085D264 (PspGetNextSilo.c)
 */

__int64 __fastcall PsStartSiloMonitor(__int64 a1)
{
  int v2; // edi
  __int64 v3; // rdx
  __int64 i; // rcx
  __int64 NextSilo; // rax
  __int64 v6; // r8
  __int64 v7; // rsi
  __int64 v8; // r8
  __int64 v9; // r9
  char v10; // si
  int v11; // ebp
  __int64 v12; // rdx
  __int64 j; // rcx
  __int64 v14; // rax
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rdi
  __int64 *v18; // rax
  int v19; // esi
  __int64 v20; // rdx
  __int64 k; // rcx
  __int64 v22; // rax
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rdi
  __int64 v26; // rax
  _OWORD v28[3]; // [rsp+20h] [rbp-58h] BYREF

  memset(v28, 0, sizeof(v28));
  v2 = 0;
  PspAcquirePushLockExclusive();
  if ( !*(_QWORD *)a1 && !*(_QWORD *)(a1 + 8) )
  {
    if ( !*(_BYTE *)(a1 + 17) )
    {
      for ( i = 0LL; ; i = v6 )
      {
        LOBYTE(v3) = 1;
        NextSilo = PspGetNextSilo(i, v3);
        if ( !NextSilo )
          break;
        if ( (unsigned int)(*(_DWORD *)PspGetServerSiloStatePointer(NextSilo) - 1) <= 2 )
        {
          v2 = -1073741637;
          goto LABEL_37;
        }
      }
    }
    if ( *(_QWORD *)(a1 + 24) )
    {
      if ( !*(_BYTE *)(a1 + 16) )
        goto LABEL_15;
      KiStackAttachProcess(PsInitialSystemProcess, 0, (__int64)v28);
      v7 = PdcCreateWatchdogAroundClientCall();
      v2 = PspInvokeCreateCallback(v7, a1);
      if ( v2 < 0 && *(_QWORD *)(a1 + 32) )
        PspInvokeTerminateCallback(v7, a1);
      KiUnstackDetachProcess((__int64)v28, 0, v8, v9);
      if ( v2 >= 0 )
      {
LABEL_15:
        v10 = 0;
        v11 = 0;
        KiStackAttachProcess(PsInitialSystemProcess, 0, (__int64)v28);
        for ( j = 0LL; ; j = v17 )
        {
          LOBYTE(v12) = 1;
          v14 = PspGetNextSilo(j, v12);
          v17 = v14;
          if ( !v14 )
            break;
          if ( (unsigned int)(*(_DWORD *)PspGetServerSiloStatePointer(v14) - 1) <= 2 )
          {
            ++v11;
            if ( (int)PspInvokeCreateCallback(v17, a1) < 0 )
              v10 = 1;
          }
        }
        KiUnstackDetachProcess((__int64)v28, 0, v15, v16);
        if ( v10 )
        {
          if ( *(_QWORD *)(a1 + 32) )
          {
            v19 = 0;
            KiStackAttachProcess(PsInitialSystemProcess, 0, (__int64)v28);
            for ( k = 0LL; ; k = v25 )
            {
              LOBYTE(v20) = 1;
              v22 = PspGetNextSilo(k, v20);
              v25 = v22;
              if ( !v22 )
                break;
              if ( (unsigned int)(*(_DWORD *)PspGetServerSiloStatePointer(v22) - 1) <= 2 )
              {
                PspInvokeTerminateCallback(v25, a1);
                ++v19;
              }
            }
            if ( v11 != v19 )
              NT_ASSERT("CreateCount == TerminateCount");
            if ( *(_BYTE *)(a1 + 16) )
            {
              v26 = PdcCreateWatchdogAroundClientCall();
              PspInvokeCreateCallback(v26, a1);
            }
            KiUnstackDetachProcess((__int64)v28, 0, v23, v24);
          }
          v2 = -1073741248;
        }
        else
        {
          v18 = (__int64 *)qword_140FDA060;
          if ( *(__int64 **)qword_140FDA060 != &PspSiloMonitorList )
            __fastfail(3u);
          *(_QWORD *)a1 = &PspSiloMonitorList;
          v2 = 0;
          *(_QWORD *)(a1 + 8) = v18;
          *v18 = a1;
          qword_140FDA060 = a1;
        }
      }
    }
  }
LABEL_37:
  PspReleasePushLockExclusive();
  return (unsigned int)v2;
}
