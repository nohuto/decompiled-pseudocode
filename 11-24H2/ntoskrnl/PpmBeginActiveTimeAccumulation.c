/*
 * XREFs of PpmBeginActiveTimeAccumulation @ 0x140371F00
 * Callers:
 *     PpmIdleExecuteTransition @ 0x140371030 (PpmIdleExecuteTransition.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14022F250 (KxReleaseSpinLock.c)
 *     KxAcquireSpinLock @ 0x1402850F0 (KxAcquireSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14028EA18 (KiRemoveSystemWorkPriorityKick.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1402B92F0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     KeDisableInterrupts @ 0x1402CAA10 (KeDisableInterrupts.c)
 *     RtlGetInterruptTimePrecise @ 0x14031C170 (RtlGetInterruptTimePrecise.c)
 *     PpmPerfFeedbackCounterUpdate @ 0x1405D0178 (PpmPerfFeedbackCounterUpdate.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

unsigned __int64 __fastcall PpmBeginActiveTimeAccumulation(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rbx
  LARGE_INTEGER *v3; // rsi
  __int64 v4; // r9
  KSPIN_LOCK *v6; // r13
  unsigned __int64 result; // rax
  unsigned __int64 v8; // r8
  __int64 v9; // r14
  LARGE_INTEGER *v10; // r15
  signed __int64 v11; // rax
  __int64 v12; // r13
  __int64 v13; // r12
  struct _KPRCB *CurrentPrcb; // rcx
  signed __int32 *SchedulerAssist; // r8
  signed __int32 v16; // eax
  signed __int32 v17; // ett
  bool v18; // [rsp+30h] [rbp-A9h]
  int v19; // [rsp+34h] [rbp-A5h] BYREF
  int v20; // [rsp+38h] [rbp-A1h] BYREF
  ULONG LowPart; // [rsp+3Ch] [rbp-9Dh] BYREF
  signed __int64 v22; // [rsp+40h] [rbp-99h]
  LONGLONG v23; // [rsp+48h] [rbp-91h] BYREF
  LARGE_INTEGER v24; // [rsp+50h] [rbp-89h] BYREF
  __int64 v25; // [rsp+58h] [rbp-81h]
  LARGE_INTEGER v26; // [rsp+60h] [rbp-79h] BYREF
  LARGE_INTEGER PerformanceCounter; // [rsp+68h] [rbp-71h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v28; // [rsp+70h] [rbp-69h] BYREF
  int *v29; // [rsp+90h] [rbp-49h]
  __int64 v30; // [rsp+98h] [rbp-41h]
  int *v31; // [rsp+A0h] [rbp-39h]
  __int64 v32; // [rsp+A8h] [rbp-31h]
  LARGE_INTEGER *v33; // [rsp+B0h] [rbp-29h]
  __int64 v34; // [rsp+B8h] [rbp-21h]
  ULONG *p_LowPart; // [rsp+C0h] [rbp-19h]
  __int64 v36; // [rsp+C8h] [rbp-11h]
  LARGE_INTEGER *v37; // [rsp+D0h] [rbp-9h]
  __int64 v38; // [rsp+D8h] [rbp-1h]
  LARGE_INTEGER *v39; // [rsp+E0h] [rbp+7h]
  __int64 v40; // [rsp+E8h] [rbp+Fh]

  v2 = 0LL;
  v25 = a2;
  v24.QuadPart = 0LL;
  v3 = 0LL;
  v23 = 0LL;
  v4 = a2;
  _InterlockedIncrement64((volatile signed __int64 *)(a1 + 34912));
  *(_QWORD *)(a1 + 34920) = 0LL;
  v6 = (KSPIN_LOCK *)(a1 + 34960);
  if ( *(_BYTE *)(a1 + 35097) )
  {
    v18 = KeDisableInterrupts();
    KxAcquireSpinLock(v6);
    v9 = *(_QWORD *)(a1 + 35256);
    if ( v9 )
    {
      v3 = (LARGE_INTEGER *)(v9 + ((unsigned __int64)*(unsigned int *)(v9 + 152) << 7) + 160);
      memset_0(v3, 0, 0x80uLL);
      if ( ++*(_DWORD *)(v9 + 152) == 8 )
        *(_DWORD *)(v9 + 152) = 0;
      v3->LowPart = KeGetPcr()->Prcb.Number;
      v3[1] = RtlGetInterruptTimePrecise(&PerformanceCounter);
      BYTE4(v3->QuadPart) = 1;
    }
    v10 = v3 + 5;
    v11 = (char *)v6 - (char *)v3;
    v12 = 2LL;
    v22 = v11;
    do
    {
      v13 = *(LONGLONG *)((char *)&v10[-2].QuadPart + v11);
      if ( v13 && *(_BYTE *)(v13 + 34) )
      {
        PpmPerfFeedbackCounterUpdate(*(LONGLONG *)((char *)&v10[-2].QuadPart + v11), &v24, &v23);
        if ( v3 && *(_BYTE *)(v13 + 33) )
        {
          v10->QuadPart = v23;
          v10[2] = v24;
        }
        v11 = v22;
      }
      ++v10;
      --v12;
    }
    while ( v12 );
    if ( v3 && (unsigned int)dword_140E076B8 > 5 )
    {
      v19 = *(_DWORD *)(v9 + 152);
      v30 = 4LL;
      v29 = &v19;
      v20 = *(_DWORD *)(a1 + 36);
      v31 = &v20;
      v26 = v3[1];
      v33 = &v26;
      LowPart = v3->LowPart;
      p_LowPart = &LowPart;
      v37 = v3 + 5;
      v39 = v3 + 7;
      v32 = 4LL;
      v34 = 8LL;
      v36 = 4LL;
      v38 = 16LL;
      v40 = 16LL;
      tlgWriteTransfer_EtwWriteTransfer(
        (__int64)&dword_140E076B8,
        (unsigned __int8 *)byte_140048918,
        0LL,
        0LL,
        8u,
        &v28);
    }
    KxReleaseSpinLock((volatile signed __int64 *)(a1 + 34960));
    if ( v18 )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = (signed __int32 *)CurrentPrcb->SchedulerAssist;
      if ( SchedulerAssist )
      {
        _m_prefetchw(SchedulerAssist);
        v16 = *SchedulerAssist;
        do
        {
          v17 = v16;
          v16 = _InterlockedCompareExchange(SchedulerAssist, v16 & 0xFFDFFFFF, v16);
        }
        while ( v17 != v16 );
        if ( (v16 & 0x200000) != 0 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
      _enable();
    }
    v4 = v25;
  }
  result = __rdtsc();
  v8 = result;
  if ( _bittest64((const signed __int64 *)(a1 + 36768), 0x27u) )
  {
    result = __readmsr(0xDB2u);
    v2 = result;
  }
  *(_QWORD *)(a1 + 35000) = v4;
  *(_QWORD *)(a1 + 34968) = v8;
  if ( _bittest64((const signed __int64 *)(a1 + 36768), 0x27u) )
    *(_QWORD *)(a1 + 35080) = v2;
  return result;
}
