/*
 * XREFs of KiProcessExpiredTimerList @ 0x1402EE890
 * Callers:
 *     KiTimerExpiration @ 0x1402EF3C0 (KiTimerExpiration.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x140254220 (EtwTraceKernelEvent.c)
 *     EtwpLogKernelEvent @ 0x1402561B0 (EtwpLogKernelEvent.c)
 *     KiProcessThreadWaitList @ 0x1402874A0 (KiProcessThreadWaitList.c)
 *     KiTimerWaitTest @ 0x1402EEDC0 (KiTimerWaitTest.c)
 *     RtlGetSystemTimePrecise @ 0x14031AAC0 (RtlGetSystemTimePrecise.c)
 *     KeQueryPerformanceCounter @ 0x14031B970 (KeQueryPerformanceCounter.c)
 *     HvlNotifyLongSpinWait @ 0x14032DED0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14032DF00 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     PopPepIdleTimeoutDpcRoutine @ 0x1403AA490 (PopPepIdleTimeoutDpcRoutine.c)
 *     PopFxResidentTimeoutDpcRoutine @ 0x1403AA4D0 (PopFxResidentTimeoutDpcRoutine.c)
 *     EtwpGetHostPerfCounter @ 0x1403F6D7C (EtwpGetHostPerfCounter.c)
 *     PfSnTraceTimerRoutine @ 0x14047EF80 (PfSnTraceTimerRoutine.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

int __fastcall KiProcessExpiredTimerList(__int64 a1, _DWORD *a2, __int64 a3, unsigned int a4)
{
  __int64 v4; // rdi
  unsigned int v5; // r13d
  __int64 v6; // r12
  bool v7; // r14
  __int64 v8; // rax
  __int64 v9; // rbx
  unsigned int v10; // esi
  bool i; // zf
  unsigned int *v12; // r14
  _DWORD *v13; // r8
  __int64 v14; // rsi
  ULONG_PTR v15; // r15
  char v16; // r12
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
  unsigned int v29; // ebx
  __int64 v30; // rax
  unsigned int v31; // r8d
  unsigned __int64 v32; // rax
  bool v34; // [rsp+30h] [rbp-99h]
  bool v35; // [rsp+31h] [rbp-98h]
  _DWORD *v36; // [rsp+38h] [rbp-91h]
  ULONG_PTR BugCheckParameter2; // [rsp+48h] [rbp-81h] BYREF
  __int64 v38; // [rsp+50h] [rbp-79h]
  __int64 v39; // [rsp+58h] [rbp-71h]
  unsigned int v40; // [rsp+64h] [rbp-65h]
  _BYTE v41[8]; // [rsp+68h] [rbp-61h] BYREF
  __int128 v42; // [rsp+70h] [rbp-59h]
  __int128 v43; // [rsp+80h] [rbp-49h]
  _QWORD v44[2]; // [rsp+90h] [rbp-39h] BYREF
  __int128 v45; // [rsp+A0h] [rbp-29h] BYREF
  __int128 v46; // [rsp+B0h] [rbp-19h]
  _QWORD v47[4]; // [rsp+C0h] [rbp-9h] BYREF

  v40 = a4;
  v38 = a3;
  v36 = a2;
  v4 = a1;
  BugCheckParameter2 = 0LL;
  v45 = 0LL;
  v46 = 0LL;
  v42 = 0LL;
  v43 = 0LL;
  v35 = SBYTE4(PerfGlobalGroupMask) < 0;
  v5 = 0;
  v6 = *(_QWORD *)(a1 + 8);
  v39 = v6;
  v7 = (DWORD2(PerfGlobalGroupMask) & 0x20000) != 0;
  v34 = v7;
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
          && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(a1) )
        {
          HvlNotifyLongSpinWait(v10);
        }
        else
        {
          _mm_pause();
        }
      }
      while ( (*(_DWORD *)v9 & 0x80u) != 0 || _interlockedbittestandset((volatile signed __int32 *)v9, 7u) );
      a2 = v36;
    }
    i = !v7;
    v12 = a2 + 2;
    v13 = a2 + 2;
    if ( i )
    {
      v8 = KiTimerWaitTest(v4, v9, v13);
      v14 = v8;
    }
    else
    {
      *(_QWORD *)&v45 = *(_QWORD *)(v9 + 24);
      v32 = KiWaitAlways ^ _byteswap_uint64(v9 ^ __ROL8__(KiWaitNever ^ *(_QWORD *)(v9 + 48), KiWaitNever));
      if ( v32 )
        *(_QWORD *)&v46 = *(_QWORD *)(v32 + 24);
      else
        *(_QWORD *)&v46 = 0LL;
      v14 = KiTimerWaitTest(v4, v9, v13);
      *((_QWORD *)&v45 + 1) = v9;
      BYTE8(v46) = *(_BYTE *)(v9 + 1) >> 2;
      v44[1] = 32LL;
      v44[0] = &v45;
      LODWORD(v8) = EtwTraceKernelEvent((int)v44, 1, 0x40020000u, 3921, 1538);
    }
    if ( v14 )
    {
      if ( *(_QWORD *)(v4 + 11528) )
        KiProcessThreadWaitList((__int64 *)v4, 1u, 0, 2u);
      v15 = *(unsigned int *)(v6 + 484);
      v16 = *(_BYTE *)(v6 + 562);
      if ( !v35 )
        goto LABEL_31;
      HostPerfCounter = 0LL;
      v18 = 0;
      if ( qword_140FCED00 )
      {
        v19 = *(_DWORD *)(qword_140FCED00 + 4248);
        i = !_BitScanForward((unsigned int *)&v20, v19);
        if ( !i )
        {
          do
          {
            v19 &= v19 - 1;
            v21 = qword_140FCED00 + 32 * v20 + 4284;
            if ( v21 && (*(_DWORD *)(v21 + 4) & 0x80u) != 0 )
              v18 |= 1 << *(_BYTE *)(qword_140FCED00 + 2 * v20 + 4233);
            i = !_BitScanForward((unsigned int *)&v20, v19);
          }
          while ( !i );
          HostPerfCounter = 0LL;
        }
        if ( (v18 & 2) == 0 )
        {
          *(_QWORD *)&v42 = 0LL;
LABEL_24:
          if ( (v18 & 4) != 0 )
          {
            *((LARGE_INTEGER *)&v42 + 1) = RtlGetSystemTimePrecise();
            HostPerfCounter = 0LL;
          }
          else
          {
            *((_QWORD *)&v42 + 1) = 0LL;
          }
          if ( (v18 & 8) != 0 )
          {
            *(_QWORD *)&v43 = __rdtsc();
            HostPerfCounter = 0LL;
          }
          else
          {
            *(_QWORD *)&v43 = 0LL;
          }
          if ( (v18 & 0x10) != 0 )
            HostPerfCounter = EtwpGetHostPerfCounter();
          *((_QWORD *)&v43 + 1) = HostPerfCounter;
LABEL_31:
          BugCheckParameter2 = *(_QWORD *)(v14 + 24);
          v22 = BugCheckParameter2;
          v23 = (*v36)++ & 0xF;
          v24 = &v36[6 * v23];
          v24[2] = v22;
          v24[3] = MEMORY[0xFFFFF78000000320];
          v24[4] = 0LL;
          *(_DWORD *)(v4 + 34396) = 0;
          v25 = (KDEFERRED_ROUTINE *)BugCheckParameter2;
          *(_BYTE *)(v4 + 14522) = 1;
          v26 = (unsigned int)v36[3];
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
            guard_dispatch_icall_no_overrides(v14, v28);
          }
          a1 = v39;
          *(_BYTE *)(v4 + 14522) = 0;
          v24[4] = MEMORY[0xFFFFF78000000320];
          if ( (_DWORD)v15 != *(_DWORD *)(a1 + 484) )
            KeBugCheckEx(0xC7u, 5uLL, BugCheckParameter2, v15, *(unsigned int *)(a1 + 484));
          LODWORD(v8) = *(char *)(a1 + 562);
          if ( v16 != (_BYTE)v8 )
            KeBugCheckEx(0x1F9u, BugCheckParameter2, *(char *)(a1 + 562), 5uLL, 0LL);
          if ( v35 )
          {
            v47[3] = 8LL;
            v47[2] = &BugCheckParameter2;
            LODWORD(v8) = EtwpHostSiloState;
            v29 = *(_DWORD *)(EtwpHostSiloState + 4248);
            for ( i = !_BitScanForward((unsigned int *)&a1, v29); !i; i = !_BitScanForward((unsigned int *)&a1, v29) )
            {
              v29 &= v29 - 1;
              v8 = EtwpHostSiloState + 32LL * (unsigned int)a1 + 4284;
              if ( v8 )
              {
                LODWORD(v8) = *(_DWORD *)(v8 + 4);
                if ( (v8 & 0x80u) != 0LL )
                {
                  v30 = *(unsigned __int8 *)(EtwpHostSiloState + 2 * a1 + 4233);
                  v31 = *(unsigned __int8 *)(EtwpHostSiloState + 2LL * (unsigned int)a1 + 4232);
                  v47[1] = 8LL;
                  v47[0] = &v41[8 * v30];
                  LODWORD(v8) = EtwpLogKernelEvent(
                                  (struct _KTHREAD *)v47,
                                  EtwpHostSiloState,
                                  v31,
                                  2u,
                                  0xF45u,
                                  0x500A02u);
                }
              }
            }
            v6 = v39;
          }
          else
          {
            v6 = a1;
          }
          goto LABEL_7;
        }
      }
      else
      {
        LOBYTE(v18) = 30;
      }
      *(LARGE_INTEGER *)&v42 = KeQueryPerformanceCounter(0LL);
      HostPerfCounter = 0LL;
      goto LABEL_24;
    }
LABEL_7:
    v7 = v34;
    a3 = v38;
    a2 = v36;
  }
  while ( v5 < v40 );
  *(_QWORD *)(v4 + 14432) = 0LL;
  if ( *(_QWORD *)(v4 + 11528) )
    LODWORD(v8) = KiProcessThreadWaitList((__int64 *)v4, 1u, 0, 2u);
  return v8;
}
