/*
 * XREFs of EtwpGetPrivateSessionTraceHandle @ 0x1407AD578
 * Callers:
 *     NtTraceControl @ 0x140A82250 (NtTraceControl.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     ExfReleasePushLock @ 0x14028E870 (ExfReleasePushLock.c)
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     PsGetCurrentServerSiloGlobals @ 0x140326710 (PsGetCurrentServerSiloGlobals.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     RtlRandomEx @ 0x14040A510 (RtlRandomEx.c)
 *     PidNodeCompare @ 0x1407ADE60 (PidNodeCompare.c)
 *     EtwpCheckCurrentUserProcessAccess @ 0x1408331C0 (EtwpCheckCurrentUserProcessAccess.c)
 *     PsLookupProcessByProcessId @ 0x1408F21F0 (PsLookupProcessByProcessId.c)
 */

__int64 __fastcall EtwpGetPrivateSessionTraceHandle(_DWORD *a1, unsigned int a2, unsigned __int16 *a3)
{
  __int64 v3; // r13
  unsigned int v5; // ebx
  struct _LIST_ENTRY *Flink; // r15
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 v8; // r15
  char *v9; // rax
  char *v10; // rdi
  _DWORD *v11; // rdi
  __int64 v12; // rsi
  unsigned __int16 v13; // r14
  unsigned int i; // ebp
  bool v15; // zf
  unsigned __int64 v16; // rdi
  int v17; // esi
  int v18; // eax
  unsigned __int64 v19; // rax
  __int64 **v20; // rdi
  __int64 *j; // rcx
  signed __int64 v22; // rax
  signed __int64 v23; // rdx
  struct _LIST_ENTRY *v24; // rtt
  int v26; // [rsp+20h] [rbp-58h] BYREF
  ULONG Seed; // [rsp+28h] [rbp-50h] BYREF
  PEPROCESS Process; // [rsp+30h] [rbp-48h] BYREF
  char v30; // [rsp+98h] [rbp+20h]

  v3 = a2;
  v5 = 0;
  Process = 0LL;
  v30 = 0;
  Flink = PsGetCurrentServerSiloGlobals()[52].Flink;
  CurrentThread = KeGetCurrentThread();
  v8 = (unsigned __int64)&Flink[272];
  --CurrentThread->KernelApcDisable;
  v9 = (char *)KeAbPreAcquire(v8 + 16, 0LL);
  v10 = v9;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(v8 + 16), 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v8 + 16), v9, v8 + 16);
  if ( v10 )
    v10[10] = 1;
  if ( (_DWORD)v3 )
  {
    v11 = a1;
    v12 = v3;
    do
    {
      if ( PsLookupProcessByProcessId((HANDLE)(unsigned int)*v11, &Process) )
      {
        *v11 = 0;
      }
      else
      {
        if ( (unsigned int)EtwpCheckCurrentUserProcessAccess(Process) )
          *v11 = 0;
        ObfDereferenceObjectWithTag(Process, 0x746C6644u);
      }
      v11 += 2;
      --v12;
    }
    while ( v12 );
  }
  do
LABEL_13:
    v13 = RtlRandomEx(&Seed) & 0x7FFF;
  while ( v13 < 0x40u );
  for ( i = 0; i < (unsigned int)v3; ++i )
  {
    if ( a1[2 * i] )
    {
      v15 = (*(_BYTE *)(v8 + 8) & 1) == 0;
      v16 = *(_QWORD *)v8;
      v26 = a1[2 * i];
      if ( !v15 )
      {
        if ( v16 )
          v16 ^= v8;
        else
          v16 = 0LL;
      }
      v17 = *(_BYTE *)(v8 + 8) & 1;
      while ( v16 )
      {
        v18 = PidNodeCompare(&v26, v16);
        if ( v18 >= 0 )
        {
          if ( v18 <= 0 )
            break;
          v19 = *(_QWORD *)(v16 + 8);
        }
        else
        {
          v19 = *(_QWORD *)v16;
        }
        if ( v17 && v19 )
          v16 ^= v19;
        else
          v16 = v19;
      }
      if ( v16 )
      {
        v20 = (__int64 **)(v16 + 32);
        for ( j = *v20; j != (__int64 *)v20; j = (__int64 *)*j )
        {
          if ( *((_WORD *)j + 9) == v13 )
            goto LABEL_13;
          if ( *((_WORD *)j + 8) == LOWORD(a1[2 * i + 1]) )
          {
            if ( *((_WORD *)j + 10) != HIWORD(a1[2 * i + 1]) )
              break;
            *((_WORD *)j + 9) = v13;
            v30 = 1;
          }
        }
      }
    }
  }
  _m_prefetchw((const void *)(v8 + 16));
  v22 = *(_QWORD *)(v8 + 16);
  v23 = v22 - 16;
  if ( (v22 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
    v23 = 0LL;
  if ( (v22 & 2) != 0
    || (v24 = *(struct _LIST_ENTRY **)(v8 + 16),
        v24 != (struct _LIST_ENTRY *)_InterlockedCompareExchange64((volatile signed __int64 *)(v8 + 16), v23, v22)) )
  {
    ExfReleasePushLock((_QWORD *)(v8 + 16));
  }
  KeAbPostRelease(v8 + 16);
  KeLeaveCriticalRegion();
  if ( v30 )
    *a3 = v13;
  else
    return (unsigned int)-1073741275;
  return v5;
}
