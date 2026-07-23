/*
 * XREFs of SshpSessionManagerSendControlEventSlimEtl @ 0x140A69660
 * Callers:
 *     PopBootBatteryStatusWorker @ 0x140A69400 (PopBootBatteryStatusWorker.c)
 *     SshSessionManagerTracePostSleepNotification @ 0x140A694B4 (SshSessionManagerTracePostSleepNotification.c)
 *     SshpSessionManagerSendControlEvent @ 0x140A69620 (SshpSessionManagerSendControlEvent.c)
 * Callees:
 *     KeResetEvent @ 0x14029EAC0 (KeResetEvent.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     RtlGetSystemTimePrecise @ 0x14036D060 (RtlGetSystemTimePrecise.c)
 *     SshpWorkItemQueue @ 0x140477ADC (SshpWorkItemQueue.c)
 *     SSHSupportReleasePushLockExclusive @ 0x1404843BC (SSHSupportReleasePushLockExclusive.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 */

__int64 __fastcall SshpSessionManagerSendControlEventSlimEtl(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 v4; // rbp
  char *v6; // rax
  char *v7; // rdi
  LARGE_INTEGER SystemTimePrecise; // r15
  int v9; // esi
  _DWORD *v10; // rcx
  __int64 v11; // rdx
  int v12; // edi
  _DWORD *v13; // rbx
  LARGE_INTEGER *v14; // r14
  unsigned int v15; // esi
  __int128 v17; // [rsp+20h] [rbp-38h]

  v4 = a2;
  v6 = (char *)KeAbPreAcquire((__int64)&SshpSessionManagerLock, 0LL);
  v7 = v6;
  if ( _interlockedbittestandset64((volatile signed __int32 *)&SshpSessionManagerLock, 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)&SshpSessionManagerLock, v6, (__int64)&SshpSessionManagerLock);
  if ( v7 )
    v7[10] = 1;
  SystemTimePrecise = RtlGetSystemTimePrecise();
  v9 = 8;
  if ( (_DWORD)v4 )
  {
    v10 = (_DWORD *)(a3 + 8);
    v11 = v4;
    do
    {
      v9 += *v10;
      v10 += 4;
      --v11;
    }
    while ( v11 );
  }
  v12 = v9 + 26;
  v13 = (_DWORD *)(a3 + 8);
  if ( 1024 - (int)dword_140F060C8 >= (unsigned int)(v9 + 26) )
  {
    KeResetEvent(&stru_140F060B0);
    WORD1(v17) = *(_WORD *)a1;
    DWORD1(v17) = *(unsigned __int8 *)(a1 + 2);
    v14 = (LARGE_INTEGER *)((char *)&unk_140F060CC + (unsigned int)dword_140F060C8);
    LOWORD(v17) = v9;
    v15 = 32;
    *((_QWORD *)&v17 + 1) = *(_QWORD *)&SLEEPSTUDY_ETW_PROVIDER.Data1;
    *(_OWORD *)&v14->LowPart = v17;
    v14[2].QuadPart = *(_OWORD *)&_mm_unpackhi_pd((__m128d)SLEEPSTUDY_ETW_PROVIDER, (__m128d)SLEEPSTUDY_ETW_PROVIDER);
    v14[3] = SystemTimePrecise;
    if ( (_DWORD)v4 )
    {
      do
      {
        memmove((char *)v14 + v15, *((const void **)v13 - 1), (unsigned int)*v13);
        v15 += *v13;
        v13 += 4;
        --v4;
      }
      while ( v4 );
    }
    *(_WORD *)((char *)&v14->LowPart + v15) = v12;
    LODWORD(dword_140F060C8) = v12 + dword_140F060C8;
    if ( FileHandle )
      SshpWorkItemQueue((struct _WORK_QUEUE_ITEM *)&qword_140F06070);
  }
  return SSHSupportReleasePushLockExclusive((volatile signed __int64 *)&SshpSessionManagerLock);
}
