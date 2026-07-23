/*
 * XREFs of KiIpiProcessRequests @ 0x1403F91B0
 * Callers:
 *     KiIpiInterruptSubDispatch @ 0x1406B3920 (KiIpiInterruptSubDispatch.c)
 * Callees:
 *     RtlGetSystemTimePrecise @ 0x14036D060 (RtlGetSystemTimePrecise.c)
 *     KeQueryPerformanceCounter @ 0x14036DEF0 (KeQueryPerformanceCounter.c)
 *     KiIpiUpdateThreadTag @ 0x1403F9720 (KiIpiUpdateThreadTag.c)
 *     KiIpiGenericCallTarget @ 0x1403F9740 (KiIpiGenericCallTarget.c)
 *     KiSynchronizeStibpPairingTarget @ 0x1403F9830 (KiSynchronizeStibpPairingTarget.c)
 *     EtwpGetHostPerfCounter @ 0x1403F98CC (EtwpGetHostPerfCounter.c)
 *     PerfInfoLogIpiReceive @ 0x1403F9900 (PerfInfoLogIpiReceive.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     KiSetUserTbFlushPending @ 0x1406AC380 (KiSetUserTbFlushPending.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

char __fastcall KiIpiProcessRequests(_KTRAP_FRAME *a1)
{
  struct _KPRCB *CurrentPrcb; // rdi
  char *v3; // rsi
  unsigned __int64 v4; // rcx
  __int64 v5; // rax
  char *v6; // r14
  __int64 v7; // r15
  __int64 v8; // rbp
  int v9; // ebx
  unsigned int v10; // eax
  bool i; // zf
  __int64 v12; // rdx
  __int64 v13; // rdx
  __int64 v14; // rax
  unsigned int v15; // ebx
  __int64 v16; // rax
  int v17; // edx
  void **v18; // r14
  int v19; // r12d
  unsigned __int64 v20; // rbp
  __int64 v22; // r13
  unsigned __int64 v23; // r15
  volatile signed __int32 *SchedulerAssist; // rax
  unsigned __int64 v26; // rcx
  unsigned __int64 v27; // rax
  __int64 (__fastcall *v28)(_QWORD, _QWORD, _QWORD, _QWORD); // rax
  __int64 v29; // r9
  __int64 v30; // r8
  __int64 v31; // rdx
  unsigned __int64 v32; // rax
  __int64 v33; // rax
  void *v34; // rbp
  char v36; // [rsp+30h] [rbp-B8h]
  int v37; // [rsp+38h] [rbp-B0h]
  __int64 v38; // [rsp+40h] [rbp-A8h]
  unsigned __int64 v39; // [rsp+48h] [rbp-A0h]
  struct _KPRCB *v40; // [rsp+50h] [rbp-98h]
  char *v41; // [rsp+58h] [rbp-90h]
  __int128 v42; // [rsp+68h] [rbp-80h] BYREF
  __int128 v43; // [rsp+78h] [rbp-70h]
  __int128 v44; // [rsp+88h] [rbp-60h]
  __int128 v45; // [rsp+98h] [rbp-50h]
  __int128 v46; // [rsp+A8h] [rbp-40h]

  CurrentPrcb = KeGetCurrentPrcb();
  v40 = CurrentPrcb;
  _m_prefetchw(&CurrentPrcb->Mailbox);
  if ( !CurrentPrcb->Mailbox )
    return 0;
  CurrentPrcb->IpiFrame = a1;
  v3 = (char *)_InterlockedExchange64((volatile __int64 *)&CurrentPrcb->Mailbox, 0LL);
  if ( v3 )
  {
    v4 = (unsigned __int64)KiProcessorBlock;
    while ( 1 )
    {
      v41 = v3;
      v5 = (v3 - (char *)CurrentPrcb - 52928) >> 6;
      v6 = v3;
      v7 = 0LL;
      v3 = *(char **)v3;
      v42 = 0LL;
      v43 = 0LL;
      v8 = KiProcessorBlock[(unsigned int)v5];
      v38 = v8;
      if ( (DWORD2(PerfGlobalGroupMask) & 0x400000) == 0 )
      {
        v36 = 0;
        goto LABEL_19;
      }
      v9 = 0;
      v36 = 1;
      if ( qword_140FCFC80 )
      {
        v10 = *(_DWORD *)(qword_140FCFC80 + 4520);
        for ( i = !_BitScanForward((unsigned int *)&v12, v10); !i; i = !_BitScanForward((unsigned int *)&v12, v10) )
        {
          v10 &= v10 - 1;
          v4 = (unsigned int)v12;
          v13 = qword_140FCFC80 + 32 * v12 + 4556;
          if ( v13 && (*(_DWORD *)(v13 + 8) & 0x400000) != 0 )
          {
            v4 = *(unsigned __int8 *)(qword_140FCFC80 + 2 * v4 + 4505);
            v9 |= 1 << v4;
          }
        }
        if ( (v9 & 2) == 0 )
          goto LABEL_13;
      }
      else
      {
        LOBYTE(v9) = 30;
      }
      *(LARGE_INTEGER *)&v42 = KeQueryPerformanceCounter(0LL);
LABEL_13:
      if ( (v9 & 4) != 0 )
        *((LARGE_INTEGER *)&v42 + 1) = RtlGetSystemTimePrecise();
      else
        *((_QWORD *)&v42 + 1) = 0LL;
      if ( (v9 & 8) != 0 )
        *(_QWORD *)&v43 = __rdtsc();
      else
        *(_QWORD *)&v43 = 0LL;
      if ( (v9 & 0x10) != 0 )
        *((_QWORD *)&v43 + 1) = EtwpGetHostPerfCounter(v4);
      else
        *((_QWORD *)&v43 + 1) = 0LL;
LABEL_19:
      v14 = *((_QWORD *)v6 + 1);
      v15 = v14 & 0xF;
      switch ( v15 )
      {
        case 6u:
          __wbinvd();
          break;
        case 4u:
          v16 = v14 >> 7;
          v17 = *(_DWORD *)(v16 + 12);
          v18 = *(void ***)v16;
          v19 = (1 << v17) & 6;
          v37 = v17;
          v39 = *(_QWORD *)v16 + 8LL * *(unsigned int *)(v16 + 8);
          do
          {
            v20 = (unsigned __int64)*v18;
            if ( v19 && KiFlushPcid && !KeGetCurrentThread()->ApcState.Process->AddressPolicy )
            {
              if ( (KiFlushPcid & 2) != 0 )
              {
                *(_QWORD *)&v45 = 1LL;
                *((_QWORD *)&v45 + 1) = v20;
                _EAX = 0;
                __asm { invpcid eax, [rsp+0E8h+var_50] }
              }
              else
              {
                KiSetUserTbFlushPending();
                v17 = v37;
              }
            }
            __invlpg((void *)v20);
            v22 = 4096LL << (9 * ((unsigned __int8)(v20 >> 10) & 3u));
            v23 = v20 & 0x3FF;
            if ( (v20 & 0x3FF) != 0 )
            {
              do
              {
                v20 += v22;
                if ( KiFlushPcid
                  && (unsigned int)(v17 - 1) <= 1
                  && !KeGetCurrentThread()->ApcState.Process->AddressPolicy )
                {
                  if ( (KiFlushPcid & 2) != 0 )
                  {
                    *(_QWORD *)&v46 = 1LL;
                    *((_QWORD *)&v46 + 1) = v20;
                    _EAX = 0;
                    __asm { invpcid eax, [rsp+0E8h+var_40] }
                  }
                  else
                  {
                    KiSetUserTbFlushPending();
                    v17 = v37;
                  }
                }
                __invlpg((void *)v20);
                --v23;
              }
              while ( v23 );
            }
            ++v18;
          }
          while ( (unsigned __int64)v18 < v39 );
          CurrentPrcb = v40;
          v6 = v41;
          v8 = v38;
          v7 = 0LL;
          break;
        case 1u:
          goto LABEL_56;
        case 2u:
          v33 = v14 >> 7;
          v34 = *(void **)v33;
          if ( (unsigned int)(*(_DWORD *)(v33 + 8) - 1) <= 1
            && KiFlushPcid
            && !KeGetCurrentThread()->ApcState.Process->AddressPolicy )
          {
            if ( (KiFlushPcid & 2) != 0 )
            {
              *(_QWORD *)&v44 = 1LL;
              *((_QWORD *)&v44 + 1) = v34;
              _EAX = 0;
              __asm { invpcid eax, [rsp+0E8h+var_60] }
            }
            else
            {
              KiSetUserTbFlushPending();
            }
          }
          __invlpg(v34);
          v8 = v38;
          break;
        case 3u:
          if ( KiFlushPcid )
          {
            v32 = __readcr3();
            __writecr3(v32);
            if ( !KeGetCurrentThread()->ApcState.Process->AddressPolicy )
              KiSetUserTbFlushPending();
            break;
          }
          v26 = __readcr4();
          if ( (v26 & 0x20080) != 0 )
          {
            __writecr4(v26 ^ 0x80);
            __writecr4(v26);
            break;
          }
LABEL_56:
          v27 = __readcr3();
          __writecr3(v27);
          break;
        case 5u:
          v28 = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))*((_QWORD *)v6 + 5);
          v29 = *((_QWORD *)v6 + 4);
          v30 = *((_QWORD *)v6 + 3);
          v31 = *((_QWORD *)v6 + 2);
          if ( v28 == KiIpiUpdateThreadTag )
          {
            KiIpiUpdateThreadTag(v8, v31, v30, v29);
LABEL_60:
            v7 = *((_QWORD *)v6 + 5);
            break;
          }
          if ( v28 == KiIpiGenericCallTarget )
          {
            KiIpiGenericCallTarget(v8, v31, v30, v29);
            v7 = *((_QWORD *)v6 + 5);
          }
          else
          {
            if ( v28 != KiSynchronizeStibpPairingTarget )
            {
              guard_dispatch_icall_no_overrides(v8, v31);
              goto LABEL_60;
            }
            KiSynchronizeStibpPairingTarget(v8, v31, v30, v29);
            v7 = *((_QWORD *)v6 + 5);
          }
          break;
      }
      if ( _InterlockedExchangeAdd(*((volatile signed __int32 **)v6 + 6), 0xFFFFFFFF) == 1
        && _InterlockedExchangeAdd((volatile signed __int32 *)(v8 + 11652), 0xFFFFFFFF) == 1 )
      {
        *(_DWORD *)(v8 + 11648) = 0;
      }
      if ( v36 )
        PerfInfoLogIpiReceive(&v42, v15, v7);
      SchedulerAssist = (volatile signed __int32 *)CurrentPrcb->SchedulerAssist;
      if ( SchedulerAssist )
        _InterlockedDecrement(SchedulerAssist + 8);
      v4 = (unsigned __int64)KiProcessorBlock;
      if ( !v3 )
      {
        v4 = (unsigned __int64)KiProcessorBlock;
        v3 = (char *)_InterlockedExchange64((volatile __int64 *)&CurrentPrcb->Mailbox, 0LL);
        if ( !v3 )
          return 1;
      }
    }
  }
  return 0;
}
