/*
 * XREFs of KiProcessExpiredTimerList @ 0x1403358E0
 * Callers:
 *     KiTimerExpiration @ 0x140336410 (KiTimerExpiration.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x140255180 (EtwTraceKernelEvent.c)
 *     EtwpLogKernelEvent @ 0x140257180 (EtwpLogKernelEvent.c)
 *     HvlNotifyLongSpinWait @ 0x140293260 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140293290 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiProcessThreadWaitList @ 0x14031EA20 (KiProcessThreadWaitList.c)
 *     KiTimerWaitTest @ 0x140335E10 (KiTimerWaitTest.c)
 *     RtlGetSystemTimePrecise @ 0x14034EB80 (RtlGetSystemTimePrecise.c)
 *     KeQueryPerformanceCounter @ 0x14034FA10 (KeQueryPerformanceCounter.c)
 *     EtwpGetHostPerfCounter @ 0x1403FF27C (EtwpGetHostPerfCounter.c)
 *     PfSnTraceTimerRoutine @ 0x14047FAD0 (PfSnTraceTimerRoutine.c)
 *     PopFxResidentTimeoutDpcRoutine @ 0x14049A3F0 (PopFxResidentTimeoutDpcRoutine.c)
 *     PopPepIdleTimeoutDpcRoutine @ 0x14049A7E0 (PopPepIdleTimeoutDpcRoutine.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

int __fastcall KiProcessExpiredTimerList(__int64 a1, _DWORD *a2, __int64 a3, unsigned int a4)
{
  unsigned int v5; // r15d
  __int64 v6; // r13
  bool v7; // r14
  __int64 v8; // rax
  __int64 v9; // rbx
  unsigned int v10; // esi
  bool i; // zf
  unsigned int *v12; // r14
  _DWORD *v13; // r8
  __int64 v14; // rsi
  ULONG_PTR v15; // r12
  char v16; // r13
  __int64 HostPerfCounter; // rax
  int v18; // ebx
  unsigned int v19; // edx
  __int64 v20; // rcx
  __int64 v21; // rax
  ULONG_PTR v22; // rdx
  __int64 v23; // rcx
  _QWORD *v24; // rbx
  KDEFERRED_ROUTINE *v25; // rax
  unsigned __int64 v26; // r9
  void *v27; // r8
  void *v28; // rdx
  __int64 v29; // rcx
  unsigned int v30; // ebx
  __int64 v31; // rcx
  __int64 v32; // rax
  unsigned int v33; // r8d
  unsigned __int64 v34; // rax
  bool v36; // [rsp+30h] [rbp-99h]
  bool v37; // [rsp+31h] [rbp-98h]
  _DWORD *v38; // [rsp+38h] [rbp-91h]
  ULONG_PTR BugCheckParameter2; // [rsp+48h] [rbp-81h] BYREF
  __int64 v40; // [rsp+50h] [rbp-79h]
  __int64 v41; // [rsp+58h] [rbp-71h]
  unsigned int v42; // [rsp+64h] [rbp-65h]
  _BYTE v43[8]; // [rsp+68h] [rbp-61h] BYREF
  __int128 v44; // [rsp+70h] [rbp-59h]
  __int128 v45; // [rsp+80h] [rbp-49h]
  _QWORD v46[2]; // [rsp+90h] [rbp-39h] BYREF
  __int128 v47; // [rsp+A0h] [rbp-29h] BYREF
  __int128 v48; // [rsp+B0h] [rbp-19h]
  _QWORD v49[4]; // [rsp+C0h] [rbp-9h] BYREF

  v42 = a4;
  v41 = a3;
  v38 = a2;
  BugCheckParameter2 = 0LL;
  v47 = 0LL;
  v48 = 0LL;
  v44 = 0LL;
  v45 = 0LL;
  v37 = SBYTE4(PerfGlobalGroupMask) < 0;
  v5 = 0;
  v6 = *(_QWORD *)(a1 + 8);
  v40 = v6;
  v7 = (DWORD2(PerfGlobalGroupMask) & 0x20000) != 0;
  v36 = v7;
  do
  {
    v8 = v5++;
    v9 = _InterlockedExchange64((volatile __int64 *)(a3 + 8 * v8), 0LL);
    if ( !v9 )
      continue;
    v10 = 0;
    if ( _interlockedbittestandset((volatile signed __int32 *)v9, 7u) )
    {
      do
      {
        if ( (++v10 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && KiCheckVpBackingLongSpinWaitHypercall() )
        {
          HvlNotifyLongSpinWait(v10);
        }
        else
        {
          _mm_pause();
        }
      }
      while ( (*(_DWORD *)v9 & 0x80u) != 0 || _interlockedbittestandset((volatile signed __int32 *)v9, 7u) );
      a2 = v38;
    }
    i = !v7;
    v12 = a2 + 2;
    v13 = a2 + 2;
    if ( i )
    {
      v8 = KiTimerWaitTest(a1, v9, v13);
      v14 = v8;
    }
    else
    {
      *(_QWORD *)&v47 = *(_QWORD *)(v9 + 24);
      v34 = KiWaitAlways ^ _byteswap_uint64(v9 ^ __ROL8__(KiWaitNever ^ *(_QWORD *)(v9 + 48), KiWaitNever));
      if ( v34 )
        *(_QWORD *)&v48 = *(_QWORD *)(v34 + 24);
      else
        *(_QWORD *)&v48 = 0LL;
      v14 = KiTimerWaitTest(a1, v9, v13);
      *((_QWORD *)&v47 + 1) = v9;
      BYTE8(v48) = *(_BYTE *)(v9 + 1) >> 2;
      v46[1] = 32LL;
      v46[0] = &v47;
      LODWORD(v8) = EtwTraceKernelEvent((int)v46, 1, 0x40020000u, 3921, 1538);
    }
    if ( v14 )
    {
      if ( *(_QWORD *)(a1 + 11528) )
        KiProcessThreadWaitList(a1, 1u, 0, 2u);
      v15 = *(unsigned int *)(v6 + 484);
      v16 = *(_BYTE *)(v6 + 562);
      if ( !v37 )
        goto LABEL_31;
      HostPerfCounter = 0LL;
      v18 = 0;
      if ( qword_140FCEC80 )
      {
        v19 = *(_DWORD *)(qword_140FCEC80 + 4520);
        i = !_BitScanForward((unsigned int *)&v20, v19);
        if ( !i )
        {
          do
          {
            v19 &= v19 - 1;
            v21 = qword_140FCEC80 + 32 * v20 + 4556;
            if ( v21 && (*(_DWORD *)(v21 + 4) & 0x80u) != 0 )
              v18 |= 1 << *(_BYTE *)(qword_140FCEC80 + 2 * v20 + 4505);
            i = !_BitScanForward((unsigned int *)&v20, v19);
          }
          while ( !i );
          HostPerfCounter = 0LL;
        }
        if ( (v18 & 2) == 0 )
        {
          *(_QWORD *)&v44 = 0LL;
LABEL_24:
          if ( (v18 & 4) != 0 )
          {
            *((_QWORD *)&v44 + 1) = RtlGetSystemTimePrecise();
            HostPerfCounter = 0LL;
          }
          else
          {
            *((_QWORD *)&v44 + 1) = 0LL;
          }
          if ( (v18 & 8) != 0 )
          {
            *(_QWORD *)&v45 = __rdtsc();
            HostPerfCounter = 0LL;
          }
          else
          {
            *(_QWORD *)&v45 = 0LL;
          }
          if ( (v18 & 0x10) != 0 )
            HostPerfCounter = EtwpGetHostPerfCounter();
          *((_QWORD *)&v45 + 1) = HostPerfCounter;
LABEL_31:
          BugCheckParameter2 = *(_QWORD *)(v14 + 24);
          v22 = BugCheckParameter2;
          v23 = (*v38)++ & 0xF;
          v24 = &v38[6 * v23];
          v24[2] = v22;
          v24[3] = MEMORY[0xFFFFF78000000320];
          v24[4] = 0LL;
          *(_DWORD *)(a1 + 34396) = 0;
          v25 = (KDEFERRED_ROUTINE *)BugCheckParameter2;
          *(_BYTE *)(a1 + 14522) = 1;
          v26 = (unsigned int)v38[3];
          v27 = (void *)*v12;
          v28 = *(void **)(v14 + 32);
          if ( v25 == PfSnTraceTimerRoutine )
          {
            PfSnTraceTimerRoutine((struct _KDPC *)v14, v28, v27, (PVOID)v26);
          }
          else if ( (char *)v25 == (char *)PopFxResidentTimeoutDpcRoutine )
          {
            PopFxResidentTimeoutDpcRoutine(v14, v28, v27, v26);
          }
          else if ( (char *)v25 == (char *)PopPepIdleTimeoutDpcRoutine )
          {
            PopPepIdleTimeoutDpcRoutine(v14, v28, v27, v26);
          }
          else
          {
            guard_dispatch_icall_no_overrides(v14, v28, v27, v26);
          }
          v29 = v40;
          *(_BYTE *)(a1 + 14522) = 0;
          v24[4] = MEMORY[0xFFFFF78000000320];
          if ( (_DWORD)v15 != *(_DWORD *)(v29 + 484) )
            KeBugCheckEx(0xC7u, 5uLL, BugCheckParameter2, v15, *(unsigned int *)(v29 + 484));
          LODWORD(v8) = *(char *)(v29 + 562);
          if ( v16 != (_BYTE)v8 )
            KeBugCheckEx(0x1F9u, BugCheckParameter2, *(char *)(v29 + 562), 5uLL, 0LL);
          if ( v37 )
          {
            v49[3] = 8LL;
            v49[2] = &BugCheckParameter2;
            LODWORD(v8) = EtwpHostSiloState;
            v30 = *(_DWORD *)(EtwpHostSiloState + 4520);
            for ( i = !_BitScanForward((unsigned int *)&v31, v30); !i; i = !_BitScanForward((unsigned int *)&v31, v30) )
            {
              v30 &= v30 - 1;
              v8 = EtwpHostSiloState + 32LL * (unsigned int)v31 + 4556;
              if ( v8 )
              {
                LODWORD(v8) = *(_DWORD *)(v8 + 4);
                if ( (v8 & 0x80u) != 0LL )
                {
                  v32 = *(unsigned __int8 *)(EtwpHostSiloState + 2 * v31 + 4505);
                  v33 = *(unsigned __int8 *)(EtwpHostSiloState + 2LL * (unsigned int)v31 + 4504);
                  v49[1] = 8LL;
                  v49[0] = &v43[8 * v32];
                  LODWORD(v8) = EtwpLogKernelEvent((__int64)v49, EtwpHostSiloState, v33, 2u, 3909, 0x500A02u);
                }
              }
            }
            v6 = v40;
          }
          else
          {
            v6 = v29;
          }
          goto LABEL_7;
        }
      }
      else
      {
        LOBYTE(v18) = 30;
      }
      *(LARGE_INTEGER *)&v44 = KeQueryPerformanceCounter(0LL);
      HostPerfCounter = 0LL;
      goto LABEL_24;
    }
LABEL_7:
    a3 = v41;
    a2 = v38;
    v7 = v36;
  }
  while ( v5 < v42 );
  *(_QWORD *)(a1 + 14432) = 0LL;
  if ( *(_QWORD *)(a1 + 11528) )
    LODWORD(v8) = KiProcessThreadWaitList(a1, 1u, 0, 2u);
  return v8;
}
