/*
 * XREFs of RtlpWaitOnCriticalSection @ 0x180005E10
 * Callers:
 *     RtlpEnterCriticalSectionContended @ 0x18007C690 (RtlpEnterCriticalSectionContended.c)
 * Callees:
 *     RtlpCreateDeferredCriticalSectionEvent @ 0x1800064C0 (RtlpCreateDeferredCriticalSectionEvent.c)
 *     RtlpAddDebugInfoToCriticalSection @ 0x180006550 (RtlpAddDebugInfoToCriticalSection.c)
 *     LdrpLogEtwEvent @ 0x180006960 (LdrpLogEtwEvent.c)
 *     RtlpWaitOnAddressRemoveWaitBlock @ 0x180007100 (RtlpWaitOnAddressRemoveWaitBlock.c)
 *     RtlpPossibleDeadlock @ 0x1800072A0 (RtlpPossibleDeadlock.c)
 *     RtlGetCurrentServiceSessionId @ 0x180011660 (RtlGetCurrentServiceSessionId.c)
 *     DbgPrintEx @ 0x18001A6F0 (DbgPrintEx.c)
 *     RtlRaiseStatus @ 0x18007C3F0 (RtlRaiseStatus.c)
 *     NtWaitForSingleObject @ 0x1801632A0 (NtWaitForSingleObject.c)
 *     ZwTerminateProcess @ 0x1801637A0 (ZwTerminateProcess.c)
 *     NtTraceEvent @ 0x180163DD0 (NtTraceEvent.c)
 *     ZwAlertThreadByThreadId @ 0x180164030 (ZwAlertThreadByThreadId.c)
 *     NtWaitForAlertByThreadId @ 0x180166E70 (NtWaitForAlertByThreadId.c)
 *     __security_check_cookie @ 0x180166F50 (__security_check_cookie.c)
 */

int __fastcall RtlpWaitOnCriticalSection(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct _TEB *v4; // rax
  _UNKNOWN **v6; // rcx
  char v7; // r13
  int v8; // r14d
  LARGE_INTEGER *v9; // rsi
  void *v10; // r15
  const void **v11; // r12
  const void **i; // rbx
  unsigned __int64 v13; // r9
  __int64 v14; // rcx
  unsigned __int64 v15; // r12
  struct _TEB *v16; // rcx
  __int64 WaitOnAddressHashTable; // r15
  __int64 v18; // rax
  signed __int64 v19; // rcx
  volatile signed __int64 *v20; // r8
  __int64 *v21; // rax
  unsigned __int64 v22; // rbx
  signed __int64 v23; // rax
  signed __int64 v24; // rax
  unsigned __int64 v25; // rcx
  _QWORD *v26; // rbx
  char v27; // dl
  signed __int64 v28; // rtt
  unsigned __int64 v29; // rax
  unsigned __int64 v30; // rbx
  struct _PEB *v31; // rax
  _DWORD *v32; // rcx
  __int64 v33; // rcx
  _QWORD *v34; // rdx
  _DWORD *v35; // rcx
  __int64 v36; // rcx
  unsigned __int64 v37; // r8
  unsigned __int64 v39; // rcx
  unsigned __int64 v40; // rax
  struct _TEB *v41; // rbx
  int v42; // eax
  unsigned int v43; // eax
  int v44; // ebx
  int v45; // eax
  _DWORD *SharedData; // rcx
  __int64 v47; // rcx
  int v48; // ebx
  struct _TEB *v49; // rcx
  __int64 WowTebOffset; // rax
  int v51; // ebx
  int v53; // [rsp+40h] [rbp-59h]
  int v54; // [rsp+44h] [rbp-55h]
  const void **v55; // [rsp+48h] [rbp-51h]
  __int64 v56; // [rsp+50h] [rbp-49h] BYREF
  void *UniqueThread; // [rsp+58h] [rbp-41h]
  unsigned __int64 v58; // [rsp+60h] [rbp-39h]
  __int64 v59; // [rsp+68h] [rbp-31h]
  __int64 *v60; // [rsp+70h] [rbp-29h]
  __int64 v61; // [rsp+78h] [rbp-21h] BYREF
  void *v62; // [rsp+80h] [rbp-19h]
  struct _TEB *v63; // [rsp+88h] [rbp-11h]
  _DWORD v64[2]; // [rsp+90h] [rbp-9h] BYREF
  __int128 v65; // [rsp+98h] [rbp-1h]
  __int64 v66; // [rsp+A8h] [rbp+Fh]
  int v67; // [rsp+B0h] [rbp+17h]
  int v68; // [rsp+B4h] [rbp+1Bh]
  const void *v69; // [rsp+B8h] [rbp+1Fh]
  __int64 v70; // [rsp+C0h] [rbp+27h]

  v4 = NtCurrentTeb();
  v63 = v4;
  v6 = &LdrpLoaderLock;
  v53 = 0;
  v7 = 0;
  v8 = a2;
  if ( (_UNKNOWN **)a1 == &LdrpLoaderLock )
  {
    v7 = 1;
    v4->WaitingOnLoaderLock = 1;
  }
  if ( byte_1801D4988 )
    goto LABEL_99;
  if ( UseWOW64 )
  {
    v49 = NtCurrentTeb();
    WowTebOffset = v49->WowTebOffset;
    if ( (_DWORD)WowTebOffset )
    {
      if ( (int)WowTebOffset >= 0 )
        v49 = (struct _TEB *)((char *)v49 + WowTebOffset);
    }
    else
    {
      v49 = 0LL;
    }
    v6 = (_UNKNOWN **)*(unsigned int *)(LODWORD(v49->NtTib.Self) + 0xCLL);
    if ( v6 )
    {
      if ( *((_BYTE *)v6 + 40) )
LABEL_99:
        ZwTerminateProcess(-1LL, 3221225547LL);
    }
  }
  v9 = &RtlpTimeout;
  if ( RtlpTimeoutDisable )
    v9 = 0LL;
  if ( !*(_QWORD *)(a1 + 24) )
    RtlpCreateDeferredCriticalSectionEvent(a1);
  if ( *(_QWORD *)a1 == -1LL && (*(_DWORD *)(a1 + 32) & 0x1000000) == 0 )
    RtlpAddDebugInfoToCriticalSection(a1, a2);
  v54 = 0;
  if ( *(_QWORD *)a1 != -1LL )
    ++*(_DWORD *)(*(_QWORD *)a1 + 36LL);
  v10 = *(void **)(a1 + 24);
  v11 = (const void **)(a1 + 16);
  v62 = v10;
  for ( i = (const void **)(a1 + 16); ; i = v55 )
  {
    v55 = i;
    if ( (unsigned int)RtlGetCurrentServiceSessionId(v6, a2, a3, a4) )
    {
      v14 = (__int64)NtCurrentPeb()->SharedData + 552;
    }
    else
    {
      i = v11;
      v14 = 2147353474LL;
      v55 = v11;
    }
    if ( *(_BYTE *)v14 && (NtCurrentPeb()->TracingFlags & 2) != 0 )
    {
      v64[1] = 388104192;
      v64[0] = 0;
      v66 = 0LL;
      v45 = *(_DWORD *)(a1 + 32) & 0xFFFFFF;
      v70 = a1;
      v68 = v45;
      v67 = *(_DWORD *)(a1 + 8);
      v69 = *i;
      v65 = 0LL;
      SharedData = NtCurrentPeb()->SharedData;
      if ( SharedData && *SharedData )
        v47 = (__int64)NtCurrentPeb()->SharedData + 552;
      else
        v47 = 2147353474LL;
      NtTraceEvent(*(unsigned __int8 *)v47, 132098LL, 24LL, v64);
    }
    if ( v10 != (void *)-1LL )
      break;
    v15 = a1 + 8;
    while ( 1 )
    {
      UniqueThread = 0LL;
      v61 = 1LL;
      v56 = a1 + 8;
      v59 = 0LL;
      v58 = 0LL;
      v60 = 0LL;
      v16 = NtCurrentTeb();
      UniqueThread = v16->ClientId.UniqueThread;
      WaitOnAddressHashTable = (__int64)v16->ProcessEnvironmentBlock->WaitOnAddressHashTable;
      v18 = (v15 >> 5) & 0x7F;
      v19 = *(_QWORD *)(WaitOnAddressHashTable + 8 * v18);
      v20 = (volatile signed __int64 *)(WaitOnAddressHashTable + 8 * v18);
      while ( 1 )
      {
        v21 = &v56;
        v22 = v19 ^ ((unsigned __int64)&v56 ^ v19) & 0xFFFFFFFFFFFFFFFCuLL;
        v58 = v19 & 0xFFFFFFFFFFFFFFFCuLL;
        if ( (v19 & 0xFFFFFFFFFFFFFFFCuLL) != 0 )
          v21 = 0LL;
        v60 = v21;
        if ( (v19 & 0xFFFFFFFFFFFFFFFCuLL) != 0 )
          v22 |= 2uLL;
        v23 = _InterlockedCompareExchange64(v20, v22, v19);
        if ( v19 == v23 )
          break;
        v19 = v23;
      }
      if ( (((unsigned __int8)v19 ^ (unsigned __int8)v22) & 2) != 0 )
      {
        v24 = *v20;
        do
        {
          v25 = v24 & 0xFFFFFFFFFFFFFFFCuLL;
          v26 = (_QWORD *)(v24 & 0xFFFFFFFFFFFFFFFCuLL);
          if ( !*(_QWORD *)((v24 & 0xFFFFFFFFFFFFFFFCuLL) + 32) )
          {
            do
            {
              v34 = v26;
              v26 = (_QWORD *)v26[2];
              v26[3] = v34;
            }
            while ( !v26[4] );
          }
          *(_QWORD *)(v25 + 32) = v26[4];
          v27 = v24 & 1;
          if ( (v24 & 1) != 0 )
            v25 = 0LL;
          v28 = v24;
          v24 = _InterlockedCompareExchange64(v20, v25, v24);
        }
        while ( v28 != v24 );
        if ( v27 )
        {
          v29 = v24 & 0xFFFFFFFFFFFFFFFCuLL;
          if ( v29 )
          {
            do
            {
              v30 = *(_QWORD *)(v29 + 16);
              if ( !_InterlockedExchange((volatile __int32 *)(v29 + 40), 2) )
                ZwAlertThreadByThreadId(*(_QWORD *)(v29 + 8));
              v29 = v30;
            }
            while ( v30 );
          }
        }
      }
      if ( *(_DWORD *)v15 == v8 )
        break;
      RtlpWaitOnAddressRemoveWaitBlock(WaitOnAddressHashTable, &v56);
      LODWORD(v31) = 0;
LABEL_63:
      v8 = *(_DWORD *)v15;
      if ( (*(_DWORD *)v15 & 2) == 0 )
        goto LABEL_38;
    }
    if ( MEMORY[0x7FFE036A] > 1u && MEMORY[0x7FFE0297] )
    {
      v37 = __rdtsc();
      v13 = v37;
      while ( 1 )
      {
        __asm { monitorx rax, rcx, rdx }
        if ( (v61 & 1) == 0 )
          break;
        v39 = v37;
        v40 = __rdtsc();
        v37 = v40;
        if ( v40 < v39 || v40 >= v13 )
          break;
        __asm { mwaitx  rax, rcx, rbx }
      }
    }
    if ( !_interlockedbittestandreset((volatile signed __int32 *)&v61, 0) )
    {
      LODWORD(v31) = 0;
      goto LABEL_62;
    }
    v48 = NtWaitForAlertByThreadId(a1, v9);
    if ( v48 != 258 )
      goto LABEL_82;
    if ( _InterlockedExchange((volatile __int32 *)&v61, 4) != 2 )
    {
      RtlpWaitOnAddressRemoveWaitBlock(WaitOnAddressHashTable, &v56);
LABEL_82:
      LODWORD(v31) = 0;
      if ( v48 != 257 )
        LODWORD(v31) = v48;
      goto LABEL_62;
    }
    v51 = NtWaitForAlertByThreadId(a1, 0LL);
    LODWORD(v31) = 0;
    if ( v51 != 257 )
      LODWORD(v31) = v51;
LABEL_62:
    if ( (_DWORD)v31 != 258 )
      goto LABEL_63;
    v10 = v62;
    v11 = (const void **)(a1 + 16);
LABEL_72:
    v41 = NtCurrentTeb();
    DbgPrintEx(
      101LL,
      1LL,
      "RTL: Enter CriticalSection Timeout (%I64u secs) %d\n",
      ((__int64)(((unsigned __int128)(v9->QuadPart * (__int128)0x29406B2A1A85BD43LL) >> 64) - v9->QuadPart) >> 23)
    + ((unsigned __int64)(((unsigned __int128)(v9->QuadPart * (__int128)0x29406B2A1A85BD43LL) >> 64) - v9->QuadPart) >> 63),
      v53);
    if ( *(_QWORD *)a1 == -1LL )
      v42 = 0;
    else
      v42 = *(_DWORD *)(*(_QWORD *)a1 + 36LL);
    DbgPrintEx(
      101LL,
      0LL,
      "RTL: Pid.Tid %p.%p, owner tid %p Critical Section %p - ContentionCount == %u\n",
      v41->ClientId.UniqueProcess,
      v41->ClientId.UniqueThread,
      *v55,
      (const void *)a1,
      v42);
    v43 = ++v53;
    if ( *(_QWORD *)a1 == -1LL )
      v44 = 0;
    else
      v44 = *(_DWORD *)(*(_QWORD *)a1 + 36LL);
    if ( v43 > 2 && (_UNKNOWN **)a1 != &LdrpLoaderLock && v44 == v54 )
      RtlpPossibleDeadlock(a1);
    v54 = v44;
    DbgPrintEx(101LL, 0LL, "RTL: Re-Waiting\n");
  }
  LODWORD(v31) = NtWaitForSingleObject(v10, 0, v9);
  if ( (_DWORD)v31 == 258 )
    goto LABEL_72;
LABEL_38:
  if ( (int)v31 < 0 )
    RtlRaiseStatus((unsigned int)v31);
  if ( v7 )
  {
    v63->WaitingOnLoaderLock = 0;
    v31 = NtCurrentPeb();
    v32 = v31->SharedData;
    if ( v32 && *v32 )
    {
      v31 = NtCurrentPeb();
      v33 = (__int64)v31->SharedData + 554;
    }
    else
    {
      v33 = 2147353476LL;
    }
    if ( *(_BYTE *)v33 )
    {
      v31 = NtCurrentPeb();
      if ( (v31->TracingFlags & 4) != 0 )
      {
        v31 = NtCurrentPeb();
        v35 = v31->SharedData;
        if ( v35 && *v35 )
        {
          v31 = NtCurrentPeb();
          v36 = (__int64)v31->SharedData + 555;
        }
        else
        {
          v36 = 2147353477LL;
        }
        if ( (*(_BYTE *)v36 & 0x20) != 0 )
        {
          LOBYTE(v13) = -1;
          LODWORD(v31) = LdrpLogEtwEvent(5251, -1, 255, v13, 0LL, 0LL);
        }
      }
    }
  }
  return (int)v31;
}
