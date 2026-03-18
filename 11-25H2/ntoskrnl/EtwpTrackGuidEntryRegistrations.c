/*
 * XREFs of EtwpTrackGuidEntryRegistrations @ 0x1409FED50
 * Callers:
 *     EtwpSetProviderBinaryTracking @ 0x1409FEC84 (EtwpSetProviderBinaryTracking.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140206F00 (KeLeaveCriticalRegion.c)
 *     KiUnstackDetachProcess @ 0x140289470 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x140289A10 (KiStackAttachProcess.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     ExfReleasePushLock @ 0x1402BCA80 (ExfReleasePushLock.c)
 *     ExReleaseRundownProtection_0 @ 0x140324280 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x140326750 (ExAcquireRundownProtection_0.c)
 *     PsAttachSiloToCurrentThread @ 0x14043C9E0 (PsAttachSiloToCurrentThread.c)
 *     PsDetachSiloFromCurrentThread @ 0x140443110 (PsDetachSiloFromCurrentThread.c)
 *     PsGetProcessServerSilo @ 0x140447CD0 (PsGetProcessServerSilo.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     EtwpProviderArrivalCallback @ 0x140899014 (EtwpProviderArrivalCallback.c)
 */

__int64 __fastcall EtwpTrackGuidEntryRegistrations(_DWORD *a1, _QWORD *a2, char a3)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 *v4; // rdi
  char v5; // r15
  __int64 *v8; // rax
  __int64 *v9; // rbx
  unsigned int v10; // ecx
  _QWORD *v11; // rsi
  struct _KTHREAD *v12; // rax
  __int64 v13; // rbp
  unsigned __int64 *v14; // rbx
  __int64 *v15; // rax
  __int64 *v16; // r15
  __int64 v17; // rcx
  struct _LIST_ENTRY *ProcessServerSilo; // rax
  struct _LIST_ENTRY *v19; // rbx
  signed __int64 *v20; // rbx
  signed __int64 v21; // rax
  signed __int64 v22; // rdx
  signed __int64 v23; // rtt
  signed __int64 v24; // rax
  signed __int64 v25; // rdx
  unsigned __int64 v26; // rtt
  _OWORD v29[3]; // [rsp+28h] [rbp-70h] BYREF

  CurrentThread = KeGetCurrentThread();
  v4 = a2 + 51;
  v5 = a3;
  --CurrentThread->KernelApcDisable;
  v8 = KeAbPreAcquire((__int64)(a2 + 51), 0LL);
  v9 = v8;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v4, 0LL) )
    ExfAcquirePushLockExclusiveEx(v4, v8, (__int64)v4);
  if ( v9 )
    *((_BYTE *)v9 + 10) = 1;
  v10 = 0;
  a2[52] = KeGetCurrentThread();
  while ( v10 < 8 )
  {
    if ( HIWORD(a2[4 * v10 + 16]) == *a1 && LODWORD(a2[4 * v10 + 16]) )
    {
      v11 = (_QWORD *)a2[7];
      if ( v11 != a2 + 7 )
      {
        do
        {
          if ( v5 == 2 )
          {
            v12 = KeGetCurrentThread();
            v13 = (__int64)(v11 - 2);
            --v12->KernelApcDisable;
            v14 = (unsigned __int64 *)(v11[2] + 408LL);
            v15 = KeAbPreAcquire((__int64)v14, 0LL);
            v16 = v15;
            if ( _interlockedbittestandset64((volatile signed __int32 *)v14, 0LL) )
              ExfAcquirePushLockExclusiveEx(v14, v15, (__int64)v14);
            if ( v16 )
              *((_BYTE *)v16 + 10) = 1;
            v5 = a3;
            *(_QWORD *)(v11[2] + 416LL) = KeGetCurrentThread();
          }
          else
          {
            v13 = (__int64)v11;
          }
          if ( (*(_BYTE *)(v13 + 98) & 1) != 0 )
          {
            EtwpProviderArrivalCallback((__int64)a1, 0, v13);
          }
          else if ( ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)(*(_QWORD *)(v13 + 80) + 488LL)) )
          {
            v17 = *(_QWORD *)(v13 + 80);
            memset(v29, 0, sizeof(v29));
            ProcessServerSilo = (struct _LIST_ENTRY *)PsGetProcessServerSilo(v17);
            v19 = PsAttachSiloToCurrentThread(ProcessServerSilo);
            KiStackAttachProcess(*(_KPROCESS **)(v13 + 80), 0, (__int64)v29);
            EtwpProviderArrivalCallback((__int64)a1, 1, v13);
            KiUnstackDetachProcess((__int64)v29, 0LL);
            PsDetachSiloFromCurrentThread(v19);
            ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(*(_QWORD *)(v13 + 80) + 488LL));
          }
          if ( v5 == 2 )
          {
            *(_QWORD *)(*(_QWORD *)(v13 + 32) + 416LL) = 0LL;
            v20 = (signed __int64 *)(*(_QWORD *)(v13 + 32) + 408LL);
            _m_prefetchw(v20);
            v21 = *v20;
            v22 = *v20 - 16;
            if ( (*v20 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
              v22 = 0LL;
            if ( (v21 & 2) != 0 || (v23 = *v20, v23 != _InterlockedCompareExchange64(v20, v22, v21)) )
              ExfReleasePushLock(v20);
            KeAbPostRelease((ULONG_PTR)v20);
            KeLeaveCriticalRegion();
          }
          v11 = (_QWORD *)*v11;
        }
        while ( v11 != a2 + 7 );
        v4 = a2 + 51;
      }
      break;
    }
    ++v10;
  }
  a2[52] = 0LL;
  _m_prefetchw(v4);
  v24 = *v4;
  v25 = *v4 - 16;
  if ( (*v4 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
    v25 = 0LL;
  if ( (v24 & 2) != 0 || (v26 = *v4, v26 != _InterlockedCompareExchange64((volatile signed __int64 *)v4, v25, v24)) )
    ExfReleasePushLock(v4);
  KeAbPostRelease((ULONG_PTR)v4);
  KeLeaveCriticalRegion();
  return 0LL;
}
