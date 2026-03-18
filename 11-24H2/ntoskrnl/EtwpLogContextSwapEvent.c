/*
 * XREFs of EtwpLogContextSwapEvent @ 0x140421EE0
 * Callers:
 *     KiSwapThread @ 0x1402A6990 (KiSwapThread.c)
 *     EtwTraceContextSwap @ 0x140421D90 (EtwTraceContextSwap.c)
 * Callees:
 *     EtwpTraceLastBranchRecord @ 0x140259A00 (EtwpTraceLastBranchRecord.c)
 *     EtwpLevelKeywordEnabled @ 0x1402A2030 (EtwpLevelKeywordEnabled.c)
 *     EtwpReserveTraceBuffer @ 0x140327DF0 (EtwpReserveTraceBuffer.c)
 *     EtwpReserveWithPmcCounters @ 0x140328350 (EtwpReserveWithPmcCounters.c)
 *     EtwpGetLoggerTimeStamp @ 0x14034F8C0 (EtwpGetLoggerTimeStamp.c)
 *     EtwpStackTraceDispatcher @ 0x1403ED650 (EtwpStackTraceDispatcher.c)
 *     EtwpTraceLostSystemEvent @ 0x1404B94AC (EtwpTraceLostSystemEvent.c)
 *     EtwpReserveWithPebsIndex @ 0x1404CC08C (EtwpReserveWithPebsIndex.c)
 *     EtwpContextRegisterTracingDispatcher @ 0x1404CE964 (EtwpContextRegisterTracingDispatcher.c)
 *     EtwpCCSwapTrace @ 0x1404EF7D0 (EtwpCCSwapTrace.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

char __fastcall EtwpLogContextSwapEvent(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // r13d
  signed __int64 CurrentPrcb; // rax
  int v6; // r12d
  __int64 v7; // r15
  bool v8; // zf
  unsigned int v10; // ecx
  __int64 v12; // rdi
  __int64 v13; // rax
  int v14; // ebx
  __int64 v15; // rbx
  int v16; // eax
  signed __int64 v17; // rdx
  __int64 v18; // rdx
  __int64 v19; // rcx
  struct _KPRCB *v20; // rax
  _PPM_IDLE_STATES *IdleStates; // rax
  __int64 v22; // rcx
  __int64 v23; // rax
  signed __int64 *v24; // roff
  __int64 v25; // rdx
  signed __int64 v26; // rtt
  __int64 v27; // rcx
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // rdx
  __int64 v31; // r8
  __int64 v32; // rcx
  __int64 v33; // rcx
  LARGE_INTEGER LoggerTimeStamp; // [rsp+38h] [rbp-49h] BYREF
  unsigned int v36; // [rsp+40h] [rbp-41h]
  __int128 v37; // [rsp+48h] [rbp-39h] BYREF
  __int64 v38; // [rsp+58h] [rbp-29h]
  __int128 v39; // [rsp+60h] [rbp-21h] BYREF
  __int128 v40; // [rsp+70h] [rbp-11h]
  __int128 v41; // [rsp+80h] [rbp-1h]
  __int64 v42; // [rsp+90h] [rbp+Fh]

  v4 = *(_DWORD *)(a1 + 4520);
  LOBYTE(CurrentPrcb) = 0;
  v6 = 0;
  v38 = 0LL;
  v7 = a1;
  LoggerTimeStamp.QuadPart = 0LL;
  v8 = !_BitScanForward((unsigned int *)&a1, v4);
  v36 = v10;
  v37 = 0LL;
  if ( !v8 )
  {
    while ( 1 )
    {
      v4 &= v4 - 1;
      CurrentPrcb = v7 + 32LL * (unsigned int)a1 + 4556;
      if ( CurrentPrcb )
      {
        LODWORD(CurrentPrcb) = *(_DWORD *)(CurrentPrcb + 4);
        if ( (CurrentPrcb & 4) != 0 )
        {
          LODWORD(CurrentPrcb) = *(unsigned __int8 *)(v7 + 2 * a1 + 4504);
          if ( (unsigned int)CurrentPrcb < *(_DWORD *)(v7 + 16) )
          {
            _mm_lfence();
            CurrentPrcb = *(_QWORD *)(v7 + 712);
            v12 = *(_QWORD *)(CurrentPrcb + 8LL * *(unsigned __int8 *)(v7 + 2 * a1 + 4504));
            if ( (v12 & 1) == 0 )
              break;
          }
        }
      }
LABEL_81:
      v8 = !_BitScanForward((unsigned int *)&a1, v4);
      v36 = a1;
      if ( v8 )
        return CurrentPrcb;
    }
    v13 = v7 + 32LL * v36 + 4556;
    if ( v13 && (*(_DWORD *)(v13 + 4) & 0x100) != 0 )
    {
      v14 = 1 << *(_DWORD *)(v12 + 200);
      LOBYTE(CurrentPrcb) = ~(_BYTE)v6;
      if ( (~v6 & v14) != 0 )
      {
        LoggerTimeStamp = EtwpGetLoggerTimeStamp(v12);
        LOBYTE(CurrentPrcb) = EtwpCCSwapTrace(a2, a3, *(unsigned int *)(v12 + 200), &LoggerTimeStamp);
        v6 |= v14;
      }
      v15 = v12;
LABEL_49:
      if ( a3 )
      {
        if ( (*(_DWORD *)(v15 + 816) & 0x80u) != 0 && (*(_BYTE *)(*(_QWORD *)(v15 + 1048) + 164LL) & 0x10) != 0 )
          EtwpStackTraceDispatcher(v15, (unsigned int *)&LoggerTimeStamp, (_KTHREAD *)a3, 0x505A05u);
        LODWORD(CurrentPrcb) = *(_DWORD *)(v15 + 820);
        if ( (CurrentPrcb & 2) != 0 )
        {
          LODWORD(CurrentPrcb) = *(_DWORD *)(v15 + 1284);
          v27 = 0LL;
          if ( (_DWORD)CurrentPrcb )
          {
            while ( *(_WORD *)(v15 + 2 * v27 + 1288) != 1316 )
            {
              LODWORD(CurrentPrcb) = *(_DWORD *)(v15 + 1284);
              v27 = (unsigned int)(v27 + 1);
              if ( (unsigned int)v27 >= (unsigned int)CurrentPrcb )
                goto LABEL_59;
            }
            LOBYTE(CurrentPrcb) = EtwpContextRegisterTracingDispatcher(v15, &LoggerTimeStamp, a3, 5265925LL);
          }
        }
LABEL_59:
        if ( (*(_DWORD *)(v15 + 816) & 0x8000) != 0 )
        {
          CurrentPrcb = *(_QWORD *)(v15 + 1072);
          v28 = 0LL;
          if ( *(_DWORD *)(CurrentPrcb + 8) )
          {
            while ( 1 )
            {
              v29 = *(_QWORD *)(v15 + 1072);
              if ( *(_WORD *)(v29 + 2 * v28 + 12) == 1316 )
                break;
              LODWORD(CurrentPrcb) = *(_DWORD *)(v29 + 8);
              v28 = (unsigned int)(v28 + 1);
              if ( (unsigned int)v28 >= (unsigned int)CurrentPrcb )
                goto LABEL_65;
            }
            LOBYTE(CurrentPrcb) = EtwpTraceLastBranchRecord(v15, &LoggerTimeStamp, (struct _KTHREAD *)a3, 5265925);
          }
        }
LABEL_65:
        if ( (*(_DWORD *)(v15 + 816) & 0x4000000) != 0 )
        {
          CurrentPrcb = *(_QWORD *)(v15 + 1080);
          v30 = 0LL;
          if ( *(_DWORD *)(CurrentPrcb + 24) )
          {
            while ( 1 )
            {
              v31 = *(_QWORD *)(v15 + 1080);
              if ( *(_WORD *)(v31 + 2 * v30 + 28) == 1316 )
                break;
              LODWORD(CurrentPrcb) = *(_DWORD *)(v31 + 24);
              v30 = (unsigned int)(v30 + 1);
              if ( (unsigned int)v30 >= (unsigned int)CurrentPrcb )
                goto LABEL_81;
            }
            v39 = 0LL;
            v42 = 0LL;
            v40 = 0LL;
            v41 = 0LL;
            CurrentPrcb = (signed __int64)KeGetCurrentPrcb();
            if ( *(struct _KTHREAD **)(CurrentPrcb + 24) != KeGetCurrentThread() )
            {
              *(_QWORD *)&v39 = v15;
              LODWORD(v42) = 5265925;
              LODWORD(v40) = *(_DWORD *)(a3 + 1288);
              DWORD1(v40) = *(_DWORD *)(a3 + 1296);
              *((LARGE_INTEGER *)&v39 + 1) = LoggerTimeStamp;
              *((_QWORD *)&v40 + 1) = *(_QWORD *)(v31 + 8);
              LOBYTE(CurrentPrcb) = guard_dispatch_icall_no_overrides(*(_QWORD *)v31, &v39, v31, a4);
            }
          }
        }
      }
      goto LABEL_81;
    }
    v16 = *(_DWORD *)(v12 + 816);
    v15 = v12;
    if ( (v16 & 0xC00) == 0 )
      goto LABEL_18;
    if ( (v16 & 0x400) != 0 )
    {
      CurrentPrcb = EtwpReserveWithPebsIndex(v12, 1316, 28, (unsigned int)&v37, (__int64)&LoggerTimeStamp, 5265925);
      v17 = CurrentPrcb;
      goto LABEL_20;
    }
    if ( (v16 & 0x800) != 0 && (v18 = 0LL, *(_DWORD *)(*(_QWORD *)(v12 + 1064) + 8LL)) )
    {
      while ( 1 )
      {
        v19 = *(_QWORD *)(v12 + 1064);
        if ( *(_WORD *)(v19 + 2 * v18 + 12) == 1316 )
          break;
        v18 = (unsigned int)(v18 + 1);
        if ( (unsigned int)v18 >= *(_DWORD *)(v19 + 8) )
          goto LABEL_18;
      }
      CurrentPrcb = EtwpReserveWithPmcCounters(
                      v12,
                      1316,
                      28,
                      (unsigned __int64 *)&v37,
                      (signed __int64 *)&LoggerTimeStamp,
                      23045);
      v17 = CurrentPrcb;
    }
    else
    {
LABEL_18:
      CurrentPrcb = EtwpReserveTraceBuffer(
                      (unsigned int *)v12,
                      0x2Cu,
                      (unsigned __int64 *)&v37,
                      (signed __int64 *)&LoggerTimeStamp,
                      23045);
      if ( !CurrentPrcb )
      {
        a4 = 1316LL;
LABEL_73:
        if ( EtwpEventTracingProvRegHandle )
        {
          if ( (v32 = *(_QWORD *)(EtwpEventTracingProvRegHandle + 32), *(_DWORD *)(v32 + 96))
            && (LOBYTE(CurrentPrcb) = *(_BYTE *)(v32 + 100), (_BYTE)CurrentPrcb != 1)
            && (LODWORD(CurrentPrcb) = *(_DWORD *)(v32 + 104), (*(_BYTE *)(v32 + 112) & 0x40) != 0)
            && (v33 = *(_QWORD *)(v32 + 120), CurrentPrcb = v33 & 0x40, CurrentPrcb == v33)
            || *(_WORD *)(EtwpEventTracingProvRegHandle + 102)
            && (LOBYTE(CurrentPrcb) = EtwpLevelKeywordEnabled(
                                        *(_QWORD *)(EtwpEventTracingProvRegHandle + 40) + 96LL,
                                        2u,
                                        64LL),
                (_BYTE)CurrentPrcb) )
          {
            LOBYTE(CurrentPrcb) = EtwpTraceLostSystemEvent((unsigned int)a4, v12 + 136, 5265925LL, 3221225495LL);
          }
        }
        goto LABEL_81;
      }
      v17 = CurrentPrcb + 16;
      *(LARGE_INTEGER *)(CurrentPrcb + 8) = LoggerTimeStamp;
      *(_DWORD *)CurrentPrcb = -1072627707;
      *(_DWORD *)(CurrentPrcb + 4) = 86245420;
    }
LABEL_20:
    a4 = 1316LL;
    if ( v17 )
    {
      *(_OWORD *)v17 = 0LL;
      *(_QWORD *)(v17 + 16) = 0LL;
      *(_DWORD *)(v17 + 24) = 0;
      if ( a2 )
      {
        *(_DWORD *)(v17 + 4) = *(_DWORD *)(a2 + 1296);
        *(_BYTE *)(v17 + 9) = *(_BYTE *)(a2 + 195);
        *(_BYTE *)(v17 + 12) = *(_BYTE *)(a2 + 643);
        *(_BYTE *)(v17 + 13) ^= (*(_BYTE *)(a2 + 391) ^ *(_BYTE *)(v17 + 13)) & 1;
        *(_BYTE *)(v17 + 14) = *(_BYTE *)(a2 + 388);
        *(_BYTE *)(v17 + 15) = *(_BYTE *)(a2 + 588);
        *(_BYTE *)(v17 + 13) ^= (*(_BYTE *)(v17 + 13) ^ (2 * *(_BYTE *)(a2 + 516))) & 0xE;
        *(_DWORD *)(v17 + 20) = (*(_QWORD *)(a2 + 32) - *(_QWORD *)(a2 + 72)) >> 10;
        v20 = KeGetCurrentPrcb();
        if ( (_KTHREAD *)a2 == v20->IdleThread )
        {
          IdleStates = v20->PowerState.IdleStates;
          if ( IdleStates )
            *(_BYTE *)(v17 + 10) = IdleStates->ActualState;
        }
        else
        {
          v22 = *(_QWORD *)(a2 + 104);
          if ( v22 )
          {
            v23 = v22 + v20->ScbOffset;
            while ( 1 )
            {
              LODWORD(v22) = *(_DWORD *)(v23 + 124);
              if ( (unsigned int)v22 > 0xFF )
                break;
              if ( !(_BYTE)v22 )
              {
                v23 = *(_QWORD *)(v23 + 416);
                if ( v23 )
                  continue;
              }
              goto LABEL_33;
            }
            LOBYTE(v22) = -1;
          }
LABEL_33:
          *(_BYTE *)(v17 + 10) = v22;
        }
        if ( *(_DWORD *)(a2 + 484) )
          *(_BYTE *)(v17 + 24) |= 1u;
        if ( *(_WORD *)(a2 + 486) || *(_BYTE *)(a2 + 390) )
          *(_BYTE *)(v17 + 24) |= 2u;
      }
      if ( a3 )
      {
        *(_DWORD *)v17 = *(_DWORD *)(a3 + 1296);
        *(_BYTE *)(v17 + 8) = *(_BYTE *)(a3 + 195);
        *(_BYTE *)(v17 + 11) = *(_BYTE *)(a3 + 518);
        *(_BYTE *)(v17 + 13) ^= (*(_BYTE *)(v17 + 13) ^ (16 * *(_BYTE *)(a3 + 516))) & 0x70;
        *(_DWORD *)(v17 + 16) = MEMORY[0xFFFFF78000000320] - *(_DWORD *)(a3 + 436);
        if ( *(_DWORD *)(a3 + 484) )
          *(_BYTE *)(v17 + 24) |= 4u;
        if ( *(_WORD *)(a3 + 486) || *(_BYTE *)(a3 + 390) )
          *(_BYTE *)(v17 + 24) |= 8u;
      }
      v24 = (signed __int64 *)*((_QWORD *)&v37 + 1);
      _m_prefetchw(*((const void **)&v37 + 1));
      CurrentPrcb = *v24;
      v25 = v37;
      if ( (*v24 ^ (unsigned __int64)v37) >= 0xF )
      {
LABEL_48:
        _InterlockedDecrement((volatile signed __int32 *)(v25 + 12));
      }
      else
      {
        while ( 1 )
        {
          v26 = CurrentPrcb;
          CurrentPrcb = _InterlockedCompareExchange64(
                          *((volatile signed __int64 **)&v37 + 1),
                          CurrentPrcb + 1,
                          CurrentPrcb);
          if ( v26 == CurrentPrcb )
            break;
          v25 = v37;
          if ( (CurrentPrcb ^ (unsigned __int64)v37) >= 0xF )
            goto LABEL_48;
        }
      }
      goto LABEL_49;
    }
    goto LABEL_73;
  }
  return CurrentPrcb;
}
