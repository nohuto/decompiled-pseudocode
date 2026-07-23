/*
 * XREFs of EtwpTrackGuidEntryRegistrations @ 0x140A3B628
 * Callers:
 *     NtTraceControl @ 0x140A82250 (NtTraceControl.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x14020DE50 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x14022E830 (ExAcquireRundownProtection_0.c)
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     ExfReleasePushLock @ 0x14028E870 (ExfReleasePushLock.c)
 *     KiStackAttachProcess @ 0x1402C9570 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1402CAA50 (KiUnstackDetachProcess.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     PsAttachSiloToCurrentThread @ 0x14042FBB0 (PsAttachSiloToCurrentThread.c)
 *     PsDetachSiloFromCurrentThread @ 0x14043A1F0 (PsDetachSiloFromCurrentThread.c)
 *     PsGetProcessServerSilo @ 0x14043D810 (PsGetProcessServerSilo.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     EtwpProviderArrivalCallback @ 0x140A3B8FC (EtwpProviderArrivalCallback.c)
 */

__int64 __fastcall EtwpTrackGuidEntryRegistrations(_DWORD *a1, _QWORD *a2, char a3)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 *v4; // rdi
  char v5; // r15
  char *v8; // rax
  char *v9; // rbx
  unsigned int v10; // ecx
  _QWORD *v11; // rsi
  struct _KTHREAD *v12; // rax
  _QWORD *v13; // rbp
  unsigned __int64 *v14; // rbx
  char *v15; // rax
  char *v16; // r15
  __int64 v17; // rcx
  struct _LIST_ENTRY *ProcessServerSilo; // rax
  struct _LIST_ENTRY *v19; // rbx
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // r9
  signed __int64 *v23; // rbx
  signed __int64 v24; // rax
  signed __int64 v25; // rdx
  signed __int64 v26; // rtt
  signed __int64 v27; // rax
  signed __int64 v28; // rdx
  unsigned __int64 v29; // rtt
  _OWORD v32[3]; // [rsp+28h] [rbp-70h] BYREF

  CurrentThread = KeGetCurrentThread();
  v4 = a2 + 83;
  v5 = a3;
  --CurrentThread->KernelApcDisable;
  v8 = (char *)KeAbPreAcquire((__int64)(a2 + 83), 0LL);
  v9 = v8;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v4, 0LL) )
    ExfAcquirePushLockExclusiveEx(v4, v8, (__int64)v4);
  if ( v9 )
    v9[10] = 1;
  v10 = 0;
  a2[84] = KeGetCurrentThread();
  while ( v10 < 0x10 )
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
            v13 = v11 - 2;
            --v12->KernelApcDisable;
            v14 = (unsigned __int64 *)(v11[2] + 664LL);
            v15 = (char *)KeAbPreAcquire((__int64)v14, 0LL);
            v16 = v15;
            if ( _interlockedbittestandset64((volatile signed __int32 *)v14, 0LL) )
              ExfAcquirePushLockExclusiveEx(v14, v15, (__int64)v14);
            if ( v16 )
              v16[10] = 1;
            v5 = a3;
            *(_QWORD *)(v11[2] + 672LL) = KeGetCurrentThread();
          }
          else
          {
            v13 = v11;
          }
          if ( (*((_BYTE *)v13 + 98) & 1) != 0 )
          {
            EtwpProviderArrivalCallback(a1, 0LL, v13);
          }
          else if ( ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)(v13[10] + 488LL)) )
          {
            v17 = v13[10];
            memset(v32, 0, sizeof(v32));
            ProcessServerSilo = (struct _LIST_ENTRY *)PsGetProcessServerSilo(v17);
            v19 = PsAttachSiloToCurrentThread(ProcessServerSilo);
            KiStackAttachProcess((_KPROCESS *)v13[10], 0, (__int64)v32);
            LOBYTE(v20) = 1;
            EtwpProviderArrivalCallback(a1, v20, v13);
            KiUnstackDetachProcess((__int64)v32, 0, v21, v22);
            PsDetachSiloFromCurrentThread(v19);
            ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(v13[10] + 488LL));
          }
          if ( v5 == 2 )
          {
            *(_QWORD *)(v13[4] + 672LL) = 0LL;
            v23 = (signed __int64 *)(v13[4] + 664LL);
            _m_prefetchw(v23);
            v24 = *v23;
            v25 = *v23 - 16;
            if ( (*v23 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
              v25 = 0LL;
            if ( (v24 & 2) != 0 || (v26 = *v23, v26 != _InterlockedCompareExchange64(v23, v25, v24)) )
              ExfReleasePushLock(v23);
            KeAbPostRelease((ULONG_PTR)v23);
            KeLeaveCriticalRegion();
          }
          v11 = (_QWORD *)*v11;
        }
        while ( v11 != a2 + 7 );
        v4 = a2 + 83;
      }
      break;
    }
    ++v10;
  }
  a2[84] = 0LL;
  _m_prefetchw(v4);
  v27 = *v4;
  v28 = *v4 - 16;
  if ( (*v4 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
    v28 = 0LL;
  if ( (v27 & 2) != 0 || (v29 = *v4, v29 != _InterlockedCompareExchange64((volatile signed __int64 *)v4, v28, v27)) )
    ExfReleasePushLock(v4);
  KeAbPostRelease((ULONG_PTR)v4);
  KeLeaveCriticalRegion();
  return 0LL;
}
