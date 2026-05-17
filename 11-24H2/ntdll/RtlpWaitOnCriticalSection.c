/*
 * XREFs of RtlpWaitOnCriticalSection @ 0x18009A7A0
 * Callers:
 *     RtlpEnterCriticalSectionContended @ 0x180013580 (RtlpEnterCriticalSectionContended.c)
 * Callees:
 *     RtlRaiseStatus @ 0x180014DE0 (RtlRaiseStatus.c)
 *     RtlGetCurrentServiceSessionId @ 0x180055A20 (RtlGetCurrentServiceSessionId.c)
 *     DbgPrintEx @ 0x18005EA90 (DbgPrintEx.c)
 *     RtlpCreateDeferredCriticalSectionEvent @ 0x18009AE50 (RtlpCreateDeferredCriticalSectionEvent.c)
 *     RtlpAddDebugInfoToCriticalSection @ 0x18009AEE0 (RtlpAddDebugInfoToCriticalSection.c)
 *     LdrpLogEtwEvent @ 0x18009B2F0 (LdrpLogEtwEvent.c)
 *     RtlpWaitOnAddressRemoveWaitBlock @ 0x18009BA90 (RtlpWaitOnAddressRemoveWaitBlock.c)
 *     RtlpPossibleDeadlock @ 0x18009BC30 (RtlpPossibleDeadlock.c)
 *     NtWaitForSingleObject @ 0x180161D10 (NtWaitForSingleObject.c)
 *     ZwTerminateProcess @ 0x180162210 (ZwTerminateProcess.c)
 *     NtTraceEvent @ 0x180162840 (NtTraceEvent.c)
 *     ZwAlertThreadByThreadId @ 0x180162AA0 (ZwAlertThreadByThreadId.c)
 *     NtWaitForAlertByThreadId @ 0x1801658E0 (NtWaitForAlertByThreadId.c)
 *     __security_check_cookie @ 0x1801659C0 (__security_check_cookie.c)
 */

int __fastcall RtlpWaitOnCriticalSection(__int64 a1, __int64 a2)
{
  struct _TEB *v2; // rax
  char v4; // r13
  int v5; // r14d
  LARGE_INTEGER *v6; // rsi
  void *v7; // r15
  const void **v8; // r12
  const void **i; // rbx
  unsigned __int64 v10; // r9
  __int64 v11; // rcx
  unsigned __int64 v12; // r12
  struct _TEB *v13; // rcx
  __int64 WaitOnAddressHashTable; // r15
  __int64 v15; // rax
  signed __int64 v16; // rcx
  volatile signed __int64 *v17; // r8
  __int64 *v18; // rax
  unsigned __int64 v19; // rbx
  signed __int64 v20; // rax
  signed __int64 v21; // rax
  unsigned __int64 v22; // rcx
  _QWORD *v23; // rbx
  signed __int64 v24; // rdx
  signed __int64 v25; // rtt
  unsigned __int64 v26; // rax
  unsigned __int64 v27; // rbx
  struct _PEB *v28; // rax
  _DWORD *v29; // rcx
  __int64 v30; // rcx
  _QWORD *v31; // rdx
  _DWORD *v32; // rcx
  __int64 v33; // rcx
  unsigned __int64 v34; // r8
  unsigned __int64 v36; // rcx
  unsigned __int64 v37; // rax
  struct _TEB *v38; // rbx
  int v39; // eax
  unsigned int v40; // eax
  int v41; // ebx
  int v42; // eax
  _DWORD *SharedData; // rcx
  __int64 v44; // rcx
  int v45; // ebx
  struct _TEB *v46; // rcx
  __int64 WowTebOffset; // rax
  __int64 v48; // rcx
  int v49; // ebx
  int v51; // [rsp+40h] [rbp-59h]
  int v52; // [rsp+44h] [rbp-55h]
  const void **v53; // [rsp+48h] [rbp-51h]
  __int64 v54; // [rsp+50h] [rbp-49h] BYREF
  void *UniqueThread; // [rsp+58h] [rbp-41h]
  unsigned __int64 v56; // [rsp+60h] [rbp-39h]
  __int64 v57; // [rsp+68h] [rbp-31h]
  __int64 *v58; // [rsp+70h] [rbp-29h]
  __int64 v59; // [rsp+78h] [rbp-21h] BYREF
  void *v60; // [rsp+80h] [rbp-19h]
  struct _TEB *v61; // [rsp+88h] [rbp-11h]
  _DWORD v62[2]; // [rsp+90h] [rbp-9h] BYREF
  __int128 v63; // [rsp+98h] [rbp-1h]
  __int64 v64; // [rsp+A8h] [rbp+Fh]
  int v65; // [rsp+B0h] [rbp+17h]
  int v66; // [rsp+B4h] [rbp+1Bh]
  const void *v67; // [rsp+B8h] [rbp+1Fh]
  __int64 v68; // [rsp+C0h] [rbp+27h]

  v2 = NtCurrentTeb();
  v61 = v2;
  v51 = 0;
  v4 = 0;
  v5 = a2;
  if ( (_UNKNOWN **)a1 == &LdrpLoaderLock )
  {
    v4 = 1;
    v2->WaitingOnLoaderLock = 1;
  }
  if ( byte_1801D2908 )
    goto LABEL_99;
  if ( UseWOW64 )
  {
    v46 = NtCurrentTeb();
    WowTebOffset = v46->WowTebOffset;
    if ( (_DWORD)WowTebOffset )
    {
      if ( (int)WowTebOffset >= 0 )
        v46 = (struct _TEB *)((char *)v46 + WowTebOffset);
    }
    else
    {
      v46 = 0LL;
    }
    v48 = *(unsigned int *)(LODWORD(v46->NtTib.Self) + 0xCLL);
    if ( v48 )
    {
      if ( *(_BYTE *)(v48 + 40) )
LABEL_99:
        ZwTerminateProcess(-1LL, 3221225547LL);
    }
  }
  v6 = &RtlpTimeout;
  if ( RtlpTimeoutDisable )
    v6 = 0LL;
  if ( !*(_QWORD *)(a1 + 24) )
    RtlpCreateDeferredCriticalSectionEvent(a1);
  if ( *(_QWORD *)a1 == -1LL && (*(_DWORD *)(a1 + 32) & 0x1000000) == 0 )
    RtlpAddDebugInfoToCriticalSection(a1, a2);
  v52 = 0;
  if ( *(_QWORD *)a1 != -1LL )
    ++*(_DWORD *)(*(_QWORD *)a1 + 36LL);
  v7 = *(void **)(a1 + 24);
  v8 = (const void **)(a1 + 16);
  v60 = v7;
  for ( i = (const void **)(a1 + 16); ; i = v53 )
  {
    v53 = i;
    if ( (unsigned int)RtlGetCurrentServiceSessionId() )
    {
      v11 = (__int64)NtCurrentPeb()->SharedData + 552;
    }
    else
    {
      i = v8;
      v11 = 2147353474LL;
      v53 = v8;
    }
    if ( *(_BYTE *)v11 && (NtCurrentPeb()->TracingFlags & 2) != 0 )
    {
      v62[1] = 388104192;
      v62[0] = 0;
      v64 = 0LL;
      v42 = *(_DWORD *)(a1 + 32) & 0xFFFFFF;
      v68 = a1;
      v66 = v42;
      v65 = *(_DWORD *)(a1 + 8);
      v67 = *i;
      v63 = 0LL;
      SharedData = NtCurrentPeb()->SharedData;
      if ( SharedData && *SharedData )
        v44 = (__int64)NtCurrentPeb()->SharedData + 552;
      else
        v44 = 2147353474LL;
      NtTraceEvent(*(unsigned __int8 *)v44, 132098LL, 24LL, v62);
    }
    if ( v7 != (void *)-1LL )
      break;
    v12 = a1 + 8;
    while ( 1 )
    {
      UniqueThread = 0LL;
      v59 = 1LL;
      v54 = a1 + 8;
      v57 = 0LL;
      v56 = 0LL;
      v58 = 0LL;
      v13 = NtCurrentTeb();
      UniqueThread = v13->ClientId.UniqueThread;
      WaitOnAddressHashTable = (__int64)v13->ProcessEnvironmentBlock->WaitOnAddressHashTable;
      v15 = (v12 >> 5) & 0x7F;
      v16 = *(_QWORD *)(WaitOnAddressHashTable + 8 * v15);
      v17 = (volatile signed __int64 *)(WaitOnAddressHashTable + 8 * v15);
      while ( 1 )
      {
        v18 = &v54;
        v19 = v16 ^ ((unsigned __int64)&v54 ^ v16) & 0xFFFFFFFFFFFFFFFCuLL;
        v56 = v16 & 0xFFFFFFFFFFFFFFFCuLL;
        if ( (v16 & 0xFFFFFFFFFFFFFFFCuLL) != 0 )
          v18 = 0LL;
        v58 = v18;
        if ( (v16 & 0xFFFFFFFFFFFFFFFCuLL) != 0 )
          v19 |= 2uLL;
        v20 = _InterlockedCompareExchange64(v17, v19, v16);
        if ( v16 == v20 )
          break;
        v16 = v20;
      }
      if ( (((unsigned __int8)v16 ^ (unsigned __int8)v19) & 2) != 0 )
      {
        v21 = *v17;
        do
        {
          v22 = v21 & 0xFFFFFFFFFFFFFFFCuLL;
          v23 = (_QWORD *)(v21 & 0xFFFFFFFFFFFFFFFCuLL);
          if ( !*(_QWORD *)((v21 & 0xFFFFFFFFFFFFFFFCuLL) + 32) )
          {
            do
            {
              v31 = v23;
              v23 = (_QWORD *)v23[2];
              v23[3] = v31;
            }
            while ( !v23[4] );
          }
          *(_QWORD *)(v22 + 32) = v23[4];
          v24 = v21 & 1;
          if ( (v21 & 1) != 0 )
            v22 = 0LL;
          v25 = v21;
          v21 = _InterlockedCompareExchange64(v17, v22, v21);
        }
        while ( v25 != v21 );
        if ( (_BYTE)v24 )
        {
          v26 = v21 & 0xFFFFFFFFFFFFFFFCuLL;
          if ( v26 )
          {
            do
            {
              v27 = *(_QWORD *)(v26 + 16);
              if ( !_InterlockedExchange((volatile __int32 *)(v26 + 40), 2) )
                ZwAlertThreadByThreadId(*(_QWORD *)(v26 + 8), v24, v17, v10);
              v26 = v27;
            }
            while ( v27 );
          }
        }
      }
      if ( *(_DWORD *)v12 == v5 )
        break;
      RtlpWaitOnAddressRemoveWaitBlock(WaitOnAddressHashTable, &v54);
      LODWORD(v28) = 0;
LABEL_63:
      v5 = *(_DWORD *)v12;
      if ( (*(_DWORD *)v12 & 2) == 0 )
        goto LABEL_38;
    }
    if ( MEMORY[0x7FFE036A] > 1u && MEMORY[0x7FFE0297] )
    {
      v34 = __rdtsc();
      v10 = v34;
      while ( 1 )
      {
        __asm { monitorx rax, rcx, rdx }
        if ( (v59 & 1) == 0 )
          break;
        v36 = v34;
        v37 = __rdtsc();
        v34 = v37;
        if ( v37 < v36 || v37 >= v10 )
          break;
        __asm { mwaitx  rax, rcx, rbx }
      }
    }
    if ( !_interlockedbittestandreset((volatile signed __int32 *)&v59, 0) )
    {
      LODWORD(v28) = 0;
      goto LABEL_62;
    }
    v45 = NtWaitForAlertByThreadId(a1, v6);
    if ( v45 != 258 )
      goto LABEL_82;
    if ( _InterlockedExchange((volatile __int32 *)&v59, 4) != 2 )
    {
      RtlpWaitOnAddressRemoveWaitBlock(WaitOnAddressHashTable, &v54);
LABEL_82:
      LODWORD(v28) = 0;
      if ( v45 != 257 )
        LODWORD(v28) = v45;
      goto LABEL_62;
    }
    v49 = NtWaitForAlertByThreadId(a1, 0LL);
    LODWORD(v28) = 0;
    if ( v49 != 257 )
      LODWORD(v28) = v49;
LABEL_62:
    if ( (_DWORD)v28 != 258 )
      goto LABEL_63;
    v7 = v60;
    v8 = (const void **)(a1 + 16);
LABEL_72:
    v38 = NtCurrentTeb();
    DbgPrintEx(
      101,
      1,
      "RTL: Enter CriticalSection Timeout (%I64u secs) %d\n",
      ((__int64)(((unsigned __int128)(v6->QuadPart * (__int128)0x29406B2A1A85BD43LL) >> 64) - v6->QuadPart) >> 23)
    + ((unsigned __int64)(((unsigned __int128)(v6->QuadPart * (__int128)0x29406B2A1A85BD43LL) >> 64) - v6->QuadPart) >> 63),
      v51);
    if ( *(_QWORD *)a1 == -1LL )
      v39 = 0;
    else
      v39 = *(_DWORD *)(*(_QWORD *)a1 + 36LL);
    DbgPrintEx(
      101,
      0,
      "RTL: Pid.Tid %p.%p, owner tid %p Critical Section %p - ContentionCount == %u\n",
      v38->ClientId.UniqueProcess,
      v38->ClientId.UniqueThread,
      *v53,
      (const void *)a1,
      v39);
    v40 = ++v51;
    if ( *(_QWORD *)a1 == -1LL )
      v41 = 0;
    else
      v41 = *(_DWORD *)(*(_QWORD *)a1 + 36LL);
    if ( v40 > 2 && (_UNKNOWN **)a1 != &LdrpLoaderLock && v41 == v52 )
      RtlpPossibleDeadlock(a1);
    v52 = v41;
    DbgPrintEx(101, 0, "RTL: Re-Waiting\n");
  }
  LODWORD(v28) = NtWaitForSingleObject(v7, 0, v6);
  if ( (_DWORD)v28 == 258 )
    goto LABEL_72;
LABEL_38:
  if ( (int)v28 < 0 )
    RtlRaiseStatus((int)v28);
  if ( v4 )
  {
    v61->WaitingOnLoaderLock = 0;
    v28 = NtCurrentPeb();
    v29 = v28->SharedData;
    if ( v29 && *v29 )
    {
      v28 = NtCurrentPeb();
      v30 = (__int64)v28->SharedData + 554;
    }
    else
    {
      v30 = 2147353476LL;
    }
    if ( *(_BYTE *)v30 )
    {
      v28 = NtCurrentPeb();
      if ( (v28->TracingFlags & 4) != 0 )
      {
        v28 = NtCurrentPeb();
        v32 = v28->SharedData;
        if ( v32 && *v32 )
        {
          v28 = NtCurrentPeb();
          v33 = (__int64)v28->SharedData + 555;
        }
        else
        {
          v33 = 2147353477LL;
        }
        if ( (*(_BYTE *)v33 & 0x20) != 0 )
        {
          LOBYTE(v10) = -1;
          LODWORD(v28) = LdrpLogEtwEvent(5251, -1, 255, v10, 0LL, 0LL);
        }
      }
    }
  }
  return (int)v28;
}
