/*
 * XREFs of PsStartSiloMonitor @ 0x1407695C0
 * Callers:
 *     <none>
 * Callees:
 *     KiUnstackDetachProcess @ 0x140289470 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x140289A10 (KiStackAttachProcess.c)
 *     PdcCreateWatchdogAroundClientCall @ 0x140483BB0 (PdcCreateWatchdogAroundClientCall.c)
 *     PspGetServerSiloStatePointer @ 0x1404F8B40 (PspGetServerSiloStatePointer.c)
 *     PspAcquirePushLockExclusive @ 0x1405D9EAC (PspAcquirePushLockExclusive.c)
 *     PspReleasePushLockExclusive @ 0x1405D9F10 (PspReleasePushLockExclusive.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     PspInvokeCreateCallback @ 0x140769994 (PspInvokeCreateCallback.c)
 *     PspInvokeTerminateCallback @ 0x1407699F8 (PspInvokeTerminateCallback.c)
 *     PspGetNextSilo @ 0x1408DC664 (PspGetNextSilo.c)
 */

__int64 __fastcall PsStartSiloMonitor(__int64 a1)
{
  int v2; // edi
  __int64 v3; // rdx
  __int64 i; // rcx
  __int64 NextSilo; // rax
  __int64 v6; // r8
  __int64 v7; // rsi
  char v8; // si
  int v9; // ebp
  __int64 v10; // rdx
  __int64 j; // rcx
  __int64 v12; // rax
  __int64 v13; // rdi
  __int64 *v14; // rax
  int v15; // esi
  __int64 v16; // rdx
  __int64 k; // rcx
  __int64 v18; // rax
  __int64 v19; // rdi
  __int64 v20; // rax
  _OWORD v22[3]; // [rsp+20h] [rbp-58h] BYREF

  memset(v22, 0, sizeof(v22));
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
      KiStackAttachProcess(PsInitialSystemProcess, 0, (__int64)v22);
      v7 = PdcCreateWatchdogAroundClientCall();
      v2 = PspInvokeCreateCallback(v7, a1);
      if ( v2 < 0 && *(_QWORD *)(a1 + 32) )
        PspInvokeTerminateCallback(v7, a1);
      KiUnstackDetachProcess((__int64)v22, 0LL);
      if ( v2 >= 0 )
      {
LABEL_15:
        v8 = 0;
        v9 = 0;
        KiStackAttachProcess(PsInitialSystemProcess, 0, (__int64)v22);
        for ( j = 0LL; ; j = v13 )
        {
          LOBYTE(v10) = 1;
          v12 = PspGetNextSilo(j, v10);
          v13 = v12;
          if ( !v12 )
            break;
          if ( (unsigned int)(*(_DWORD *)PspGetServerSiloStatePointer(v12) - 1) <= 2 )
          {
            ++v9;
            if ( (int)PspInvokeCreateCallback(v13, a1) < 0 )
              v8 = 1;
          }
        }
        KiUnstackDetachProcess((__int64)v22, 0LL);
        if ( v8 )
        {
          if ( *(_QWORD *)(a1 + 32) )
          {
            v15 = 0;
            KiStackAttachProcess(PsInitialSystemProcess, 0, (__int64)v22);
            for ( k = 0LL; ; k = v19 )
            {
              LOBYTE(v16) = 1;
              v18 = PspGetNextSilo(k, v16);
              v19 = v18;
              if ( !v18 )
                break;
              if ( (unsigned int)(*(_DWORD *)PspGetServerSiloStatePointer(v18) - 1) <= 2 )
              {
                PspInvokeTerminateCallback(v19, a1);
                ++v15;
              }
            }
            if ( v9 != v15 )
              NT_ASSERT("CreateCount == TerminateCount");
            if ( *(_BYTE *)(a1 + 16) )
            {
              v20 = PdcCreateWatchdogAroundClientCall();
              PspInvokeCreateCallback(v20, a1);
            }
            KiUnstackDetachProcess((__int64)v22, 0LL);
          }
          v2 = -1073741248;
        }
        else
        {
          v14 = (__int64 *)qword_140FD9080;
          if ( *(__int64 **)qword_140FD9080 != &PspSiloMonitorList )
            __fastfail(3u);
          *(_QWORD *)a1 = &PspSiloMonitorList;
          v2 = 0;
          *(_QWORD *)(a1 + 8) = v14;
          *v14 = a1;
          qword_140FD9080 = a1;
        }
      }
    }
  }
LABEL_37:
  PspReleasePushLockExclusive();
  return (unsigned int)v2;
}
