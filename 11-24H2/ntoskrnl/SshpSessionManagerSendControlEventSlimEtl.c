/*
 * XREFs of SshpSessionManagerSendControlEventSlimEtl @ 0x140A701D0
 * Callers:
 *     PopBootBatteryStatusWorker @ 0x140A6FF70 (PopBootBatteryStatusWorker.c)
 *     SshSessionManagerTracePostSleepNotification @ 0x140A70024 (SshSessionManagerTracePostSleepNotification.c)
 *     SshpSessionManagerSendControlEvent @ 0x140A70190 (SshpSessionManagerSendControlEvent.c)
 * Callees:
 *     KeResetEvent @ 0x14028EEC0 (KeResetEvent.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     RtlGetSystemTimePrecise @ 0x14034EB80 (RtlGetSystemTimePrecise.c)
 *     SshpWorkItemQueue @ 0x14047C8CC (SshpWorkItemQueue.c)
 *     SSHSupportReleasePushLockExclusive @ 0x14048939C (SSHSupportReleasePushLockExclusive.c)
 *     memmove @ 0x1406BFC40 (memmove.c)
 */

__int64 __fastcall SshpSessionManagerSendControlEventSlimEtl(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 v4; // rbp
  _QWORD *v6; // rax
  _QWORD *v7; // rdi
  __int64 SystemTimePrecise; // r15
  int v9; // esi
  _DWORD *v10; // rcx
  __int64 v11; // rdx
  int v12; // edi
  _DWORD *v13; // rbx
  char *v14; // r14
  unsigned int v15; // esi
  __int128 v17; // [rsp+20h] [rbp-38h]

  v4 = a2;
  v6 = KeAbPreAcquire((__int64)&SshpSessionManagerLock, 0LL);
  v7 = v6;
  if ( _interlockedbittestandset64((volatile signed __int32 *)&SshpSessionManagerLock, 0LL) )
    ExfAcquirePushLockExclusiveEx(&SshpSessionManagerLock, (__int64)v6, (__int64)&SshpSessionManagerLock);
  if ( v7 )
    *((_BYTE *)v7 + 10) = 1;
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
  if ( 1024 - (int)dword_140F05DE8 >= (unsigned int)(v9 + 26) )
  {
    KeResetEvent(&stru_140F05DD0);
    WORD1(v17) = *(_WORD *)a1;
    DWORD1(v17) = *(unsigned __int8 *)(a1 + 2);
    v14 = (char *)&unk_140F05DEC + (unsigned int)dword_140F05DE8;
    LOWORD(v17) = v9;
    v15 = 32;
    *((_QWORD *)&v17 + 1) = *(_QWORD *)&SLEEPSTUDY_ETW_PROVIDER.Data1;
    *(_OWORD *)v14 = v17;
    *((_QWORD *)v14 + 2) = *(_OWORD *)&_mm_unpackhi_pd(
                                         (__m128d)SLEEPSTUDY_ETW_PROVIDER,
                                         (__m128d)SLEEPSTUDY_ETW_PROVIDER);
    *((_QWORD *)v14 + 3) = SystemTimePrecise;
    if ( (_DWORD)v4 )
    {
      do
      {
        memmove(&v14[v15], *((const void **)v13 - 1), (unsigned int)*v13);
        v15 += *v13;
        v13 += 4;
        --v4;
      }
      while ( v4 );
    }
    *(_WORD *)&v14[v15] = v12;
    LODWORD(dword_140F05DE8) = v12 + dword_140F05DE8;
    if ( FileHandle )
      SshpWorkItemQueue((struct _WORK_QUEUE_ITEM *)&qword_140F05D90);
  }
  return SSHSupportReleasePushLockExclusive((volatile signed __int64 *)&SshpSessionManagerLock);
}
