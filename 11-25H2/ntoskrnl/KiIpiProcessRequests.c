/*
 * XREFs of KiIpiProcessRequests @ 0x1403F6650
 * Callers:
 *     KiIpiInterruptSubDispatch @ 0x1406A76B0 (KiIpiInterruptSubDispatch.c)
 * Callees:
 *     RtlGetSystemTimePrecise @ 0x14031AAC0 (RtlGetSystemTimePrecise.c)
 *     KeQueryPerformanceCounter @ 0x14031B970 (KeQueryPerformanceCounter.c)
 *     KiIpiUpdateThreadTag @ 0x1403F6BD0 (KiIpiUpdateThreadTag.c)
 *     KiIpiGenericCallTarget @ 0x1403F6BF0 (KiIpiGenericCallTarget.c)
 *     KiSynchronizeStibpPairingTarget @ 0x1403F6CE0 (KiSynchronizeStibpPairingTarget.c)
 *     EtwpGetHostPerfCounter @ 0x1403F6D7C (EtwpGetHostPerfCounter.c)
 *     PerfInfoLogIpiReceive @ 0x1403F6DB0 (PerfInfoLogIpiReceive.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     KiSetUserTbFlushPending @ 0x1406A0110 (KiSetUserTbFlushPending.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

char __fastcall KiIpiProcessRequests(_KTRAP_FRAME *a1)
{
  struct _KPRCB *CurrentPrcb; // rdi
  char *v3; // rsi
  unsigned __int64 v4; // rcx
  __int64 v5; // rax
  char *v6; // r14
  __int64 v7; // r12
  __int64 v8; // r15
  char v9; // bp
  int v10; // ebx
  unsigned int v11; // eax
  bool i; // zf
  __int64 v13; // rdx
  __int64 v14; // rdx
  __int64 v15; // rax
  unsigned int v16; // ebx
  __int64 v17; // rax
  int v18; // edx
  void **v19; // r14
  int v20; // r12d
  unsigned __int64 v21; // rbp
  __int64 v23; // r13
  unsigned __int64 v24; // r15
  volatile signed __int32 *SchedulerAssist; // rax
  unsigned __int64 v27; // rcx
  unsigned __int64 v28; // rax
  __int64 (__fastcall *v29)(_QWORD, _QWORD, _QWORD, _QWORD); // rax
  __int64 v30; // r9
  __int64 v31; // r8
  __int64 v32; // rdx
  unsigned __int64 v33; // rax
  __int64 v34; // rax
  void *v35; // rbp
  char v37; // [rsp+30h] [rbp-B8h]
  int v38; // [rsp+38h] [rbp-B0h]
  unsigned __int64 v39; // [rsp+40h] [rbp-A8h]
  struct _KPRCB *v40; // [rsp+48h] [rbp-A0h]
  char *v41; // [rsp+50h] [rbp-98h]
  __int64 v42; // [rsp+58h] [rbp-90h]
  __int128 v43; // [rsp+68h] [rbp-80h] BYREF
  __int128 v44; // [rsp+78h] [rbp-70h]
  __int128 v45; // [rsp+88h] [rbp-60h]
  __int128 v46; // [rsp+98h] [rbp-50h]
  __int128 v47; // [rsp+A8h] [rbp-40h]

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
      v43 = 0LL;
      v44 = 0LL;
      v8 = KiProcessorBlock[(unsigned int)v5];
      v42 = v8;
      if ( (DWORD2(PerfGlobalGroupMask) & 0x400000) == 0 )
      {
        v9 = 0;
        v37 = 0;
        goto LABEL_19;
      }
      v9 = 1;
      v37 = 1;
      v10 = 0;
      if ( qword_140FCED00 )
      {
        v11 = *(_DWORD *)(qword_140FCED00 + 4248);
        for ( i = !_BitScanForward((unsigned int *)&v13, v11); !i; i = !_BitScanForward((unsigned int *)&v13, v11) )
        {
          v11 &= v11 - 1;
          v4 = (unsigned int)v13;
          v14 = qword_140FCED00 + 32 * v13 + 4284;
          if ( v14 && (*(_DWORD *)(v14 + 8) & 0x400000) != 0 )
          {
            v4 = *(unsigned __int8 *)(qword_140FCED00 + 2 * v4 + 4233);
            v10 |= 1 << v4;
          }
        }
        if ( (v10 & 2) == 0 )
          goto LABEL_13;
      }
      else
      {
        LOBYTE(v10) = 30;
      }
      *(LARGE_INTEGER *)&v43 = KeQueryPerformanceCounter(0LL);
LABEL_13:
      if ( (v10 & 4) != 0 )
        *((LARGE_INTEGER *)&v43 + 1) = RtlGetSystemTimePrecise();
      else
        *((_QWORD *)&v43 + 1) = 0LL;
      if ( (v10 & 8) != 0 )
        *(_QWORD *)&v44 = __rdtsc();
      else
        *(_QWORD *)&v44 = 0LL;
      if ( (v10 & 0x10) != 0 )
        *((_QWORD *)&v44 + 1) = EtwpGetHostPerfCounter(v4);
      else
        *((_QWORD *)&v44 + 1) = 0LL;
LABEL_19:
      v15 = *((_QWORD *)v6 + 1);
      v16 = v15 & 0xF;
      switch ( v16 )
      {
        case 6u:
          __wbinvd();
          break;
        case 4u:
          v17 = v15 >> 7;
          v18 = *(_DWORD *)(v17 + 12);
          v19 = *(void ***)v17;
          v20 = (1 << v18) & 6;
          v38 = v18;
          v39 = *(_QWORD *)v17 + 8LL * *(unsigned int *)(v17 + 8);
          do
          {
            v21 = (unsigned __int64)*v19;
            if ( v20 && KiFlushPcid && !KeGetCurrentThread()->ApcState.Process->AddressPolicy )
            {
              if ( (KiFlushPcid & 2) != 0 )
              {
                *(_QWORD *)&v46 = 1LL;
                *((_QWORD *)&v46 + 1) = v21;
                _EAX = 0;
                __asm { invpcid eax, [rsp+0E8h+var_50] }
              }
              else
              {
                KiSetUserTbFlushPending();
                v18 = v38;
              }
            }
            __invlpg((void *)v21);
            v23 = 4096LL << (9 * ((unsigned __int8)(v21 >> 10) & 3u));
            v24 = v21 & 0x3FF;
            if ( (v21 & 0x3FF) != 0 )
            {
              do
              {
                v21 += v23;
                if ( KiFlushPcid
                  && (unsigned int)(v18 - 1) <= 1
                  && !KeGetCurrentThread()->ApcState.Process->AddressPolicy )
                {
                  if ( (KiFlushPcid & 2) != 0 )
                  {
                    *(_QWORD *)&v47 = 1LL;
                    *((_QWORD *)&v47 + 1) = v21;
                    _EAX = 0;
                    __asm { invpcid eax, [rsp+0E8h+var_40] }
                  }
                  else
                  {
                    KiSetUserTbFlushPending();
                    v18 = v38;
                  }
                }
                __invlpg((void *)v21);
                --v24;
              }
              while ( v24 );
            }
            ++v19;
          }
          while ( (unsigned __int64)v19 < v39 );
          CurrentPrcb = v40;
          v6 = v41;
          v9 = v37;
          v8 = v42;
          v7 = 0LL;
          break;
        case 1u:
          goto LABEL_56;
        case 2u:
          v34 = v15 >> 7;
          v35 = *(void **)v34;
          if ( (unsigned int)(*(_DWORD *)(v34 + 8) - 1) <= 1
            && KiFlushPcid
            && !KeGetCurrentThread()->ApcState.Process->AddressPolicy )
          {
            if ( (KiFlushPcid & 2) != 0 )
            {
              *(_QWORD *)&v45 = 1LL;
              *((_QWORD *)&v45 + 1) = v35;
              _EAX = 0;
              __asm { invpcid eax, [rsp+0E8h+var_60] }
            }
            else
            {
              KiSetUserTbFlushPending();
            }
          }
          __invlpg(v35);
          v9 = v37;
          break;
        case 3u:
          if ( KiFlushPcid )
          {
            v33 = __readcr3();
            __writecr3(v33);
            if ( !KeGetCurrentThread()->ApcState.Process->AddressPolicy )
              KiSetUserTbFlushPending();
            break;
          }
          v27 = __readcr4();
          if ( (v27 & 0x20080) != 0 )
          {
            __writecr4(v27 ^ 0x80);
            __writecr4(v27);
            break;
          }
LABEL_56:
          v28 = __readcr3();
          __writecr3(v28);
          break;
        case 5u:
          v29 = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))*((_QWORD *)v6 + 5);
          v30 = *((_QWORD *)v6 + 4);
          v31 = *((_QWORD *)v6 + 3);
          v32 = *((_QWORD *)v6 + 2);
          if ( v29 == KiIpiUpdateThreadTag )
          {
            KiIpiUpdateThreadTag(v8, v32, v31, v30);
LABEL_60:
            v7 = *((_QWORD *)v6 + 5);
            break;
          }
          if ( v29 == KiIpiGenericCallTarget )
          {
            KiIpiGenericCallTarget(v8, v32, v31, v30);
            v7 = *((_QWORD *)v6 + 5);
          }
          else
          {
            if ( v29 != KiSynchronizeStibpPairingTarget )
            {
              guard_dispatch_icall_no_overrides(v8, v32);
              goto LABEL_60;
            }
            KiSynchronizeStibpPairingTarget(v8, v32, v31, v30);
            v7 = *((_QWORD *)v6 + 5);
          }
          break;
      }
      if ( _InterlockedExchangeAdd(*((volatile signed __int32 **)v6 + 6), 0xFFFFFFFF) == 1
        && _InterlockedExchangeAdd((volatile signed __int32 *)(v8 + 11652), 0xFFFFFFFF) == 1 )
      {
        *(_DWORD *)(v8 + 11648) = 0;
      }
      if ( v9 )
        PerfInfoLogIpiReceive(&v43, v16, v7);
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
