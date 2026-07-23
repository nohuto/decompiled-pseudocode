/*
 * XREFs of KiProcessExpiredTimerList @ 0x140315CC0
 * Callers:
 *     KiTimerExpiration @ 0x140315160 (KiTimerExpiration.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x140285790 (EtwTraceKernelEvent.c)
 *     EtwpLogKernelEvent @ 0x140287790 (EtwpLogKernelEvent.c)
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiProcessThreadWaitList @ 0x1402C75B0 (KiProcessThreadWaitList.c)
 *     PopPepIdleTimeoutDpcRoutine @ 0x140314F70 (PopPepIdleTimeoutDpcRoutine.c)
 *     PopFxResidentTimeoutDpcRoutine @ 0x140314FB0 (PopFxResidentTimeoutDpcRoutine.c)
 *     PfSnTraceTimerRoutine @ 0x140314FF0 (PfSnTraceTimerRoutine.c)
 *     KiTimerWaitTest @ 0x140317320 (KiTimerWaitTest.c)
 *     RtlGetSystemTimePrecise @ 0x14036D060 (RtlGetSystemTimePrecise.c)
 *     KeQueryPerformanceCounter @ 0x14036DEF0 (KeQueryPerformanceCounter.c)
 *     EtwpGetHostPerfCounter @ 0x1403F98CC (EtwpGetHostPerfCounter.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
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
  void (*v25)(); // rax
  char *v26; // rdx
  __int64 v27; // rcx
  unsigned int v28; // ebx
  __int64 v29; // rcx
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
  v39 = a3;
  v36 = a2;
  BugCheckParameter2 = 0LL;
  v45 = 0LL;
  v46 = 0LL;
  v42 = 0LL;
  v43 = 0LL;
  v35 = SBYTE4(PerfGlobalGroupMask) < 0;
  v5 = 0;
  v6 = *(_QWORD *)(a1 + 8);
  v38 = v6;
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
      a2 = v36;
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
      *(_QWORD *)&v45 = *(_QWORD *)(v9 + 24);
      v32 = KiWaitAlways ^ _byteswap_uint64(v9 ^ __ROL8__(KiWaitNever ^ *(_QWORD *)(v9 + 48), KiWaitNever));
      if ( v32 )
        *(_QWORD *)&v46 = *(_QWORD *)(v32 + 24);
      else
        *(_QWORD *)&v46 = 0LL;
      v14 = KiTimerWaitTest(a1, v9, v13);
      *((_QWORD *)&v45 + 1) = v9;
      BYTE8(v46) = *(_BYTE *)(v9 + 1) >> 2;
      v44[1] = 32LL;
      v44[0] = &v45;
      LODWORD(v8) = EtwTraceKernelEvent((int)v44, 1, 0x40020000u, 3921, 1538);
    }
    if ( v14 )
    {
      if ( *(_QWORD *)(a1 + 11528) )
        KiProcessThreadWaitList(a1, 1u, 0, 2u);
      v15 = *(unsigned int *)(v6 + 484);
      v16 = *(_BYTE *)(v6 + 562);
      if ( !v35 )
        goto LABEL_31;
      HostPerfCounter = 0LL;
      v18 = 0;
      if ( qword_140FCFC80 )
      {
        v19 = *(_DWORD *)(qword_140FCFC80 + 4520);
        i = !_BitScanForward((unsigned int *)&v20, v19);
        if ( !i )
        {
          do
          {
            v19 &= v19 - 1;
            v21 = qword_140FCFC80 + 32 * v20 + 4556;
            if ( v21 && (*(_DWORD *)(v21 + 4) & 0x80u) != 0 )
              v18 |= 1 << *(_BYTE *)(qword_140FCFC80 + 2 * v20 + 4505);
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
          *(_DWORD *)(a1 + 34396) = 0;
          v25 = (void (*)())BugCheckParameter2;
          *(_BYTE *)(a1 + 14522) = 1;
          v26 = *(char **)(v14 + 32);
          if ( (char *)v25 == (char *)PfSnTraceTimerRoutine )
          {
            PfSnTraceTimerRoutine((struct _KDPC *)v14, v26, (PVOID)*v12, (PVOID)(unsigned int)v36[3]);
          }
          else if ( (char *)v25 == (char *)PopFxResidentTimeoutDpcRoutine )
          {
            PopFxResidentTimeoutDpcRoutine();
          }
          else if ( v25 == PopPepIdleTimeoutDpcRoutine )
          {
            PopPepIdleTimeoutDpcRoutine();
          }
          else
          {
            guard_dispatch_icall_no_overrides(v14, v26);
          }
          v27 = v38;
          *(_BYTE *)(a1 + 14522) = 0;
          v24[4] = MEMORY[0xFFFFF78000000320];
          if ( (_DWORD)v15 != *(_DWORD *)(v27 + 484) )
            KeBugCheckEx(0xC7u, 5uLL, BugCheckParameter2, v15, *(unsigned int *)(v27 + 484));
          LODWORD(v8) = *(char *)(v27 + 562);
          if ( v16 != (_BYTE)v8 )
            KeBugCheckEx(0x1F9u, BugCheckParameter2, *(char *)(v27 + 562), 5uLL, 0LL);
          if ( v35 )
          {
            v47[3] = 8LL;
            v47[2] = &BugCheckParameter2;
            LODWORD(v8) = EtwpHostSiloState;
            v28 = *(_DWORD *)(EtwpHostSiloState + 4520);
            for ( i = !_BitScanForward((unsigned int *)&v29, v28); !i; i = !_BitScanForward((unsigned int *)&v29, v28) )
            {
              v28 &= v28 - 1;
              v8 = EtwpHostSiloState + 32LL * (unsigned int)v29 + 4556;
              if ( v8 )
              {
                LODWORD(v8) = *(_DWORD *)(v8 + 4);
                if ( (v8 & 0x80u) != 0LL )
                {
                  v30 = *(unsigned __int8 *)(EtwpHostSiloState + 2 * v29 + 4505);
                  v31 = *(unsigned __int8 *)(EtwpHostSiloState + 2LL * (unsigned int)v29 + 4504);
                  v47[1] = 8LL;
                  v47[0] = &v41[8 * v30];
                  LODWORD(v8) = EtwpLogKernelEvent((__int64)v47, EtwpHostSiloState, v31, 2u, 3909, 0x500A02u);
                }
              }
            }
            v6 = v38;
          }
          else
          {
            v6 = v27;
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
    a3 = v39;
    a2 = v36;
    v7 = v34;
  }
  while ( v5 < v40 );
  *(_QWORD *)(a1 + 14432) = 0LL;
  if ( *(_QWORD *)(a1 + 11528) )
    LODWORD(v8) = KiProcessThreadWaitList(a1, 1u, 0, 2u);
  return v8;
}
