/*
 * XREFs of KeApplyWobBamQos @ 0x1402A2218
 * Callers:
 *     PspUpdateContainerImpersonation @ 0x1402A11C4 (PspUpdateContainerImpersonation.c)
 *     IopProcessWorkItem @ 0x1402A2410 (IopProcessWorkItem.c)
 * Callees:
 *     KiRemoveSystemWorkPriorityKick @ 0x14025E408 (KiRemoveSystemWorkPriorityKick.c)
 *     HvlNotifyLongSpinWait @ 0x140293260 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140293290 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiAcquireMultiplePrcbLocks @ 0x140298E80 (KiAcquireMultiplePrcbLocks.c)
 *     KeCheckAndApplyBamQos @ 0x14029DF30 (KeCheckAndApplyBamQos.c)
 *     KiReleaseThreadStateLock @ 0x1403B27B0 (KiReleaseThreadStateLock.c)
 *     KiPrcbArrayForIsolationWidth @ 0x1403F52C0 (KiPrcbArrayForIsolationWidth.c)
 *     KiWobQosResponseRequired @ 0x14042D970 (KiWobQosResponseRequired.c)
 *     KiUpdateThreadQosGroupingSummaries @ 0x1404E9670 (KiUpdateThreadQosGroupingSummaries.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 */

void __fastcall KeApplyWobBamQos(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v4; // edi
  __int64 v7; // r14
  __int64 v8; // rcx
  unsigned __int8 v9; // dl
  unsigned __int8 v10; // cl
  __int64 CurrentPrcb; // rdi
  int v12; // ecx
  unsigned int v13; // edx
  __int64 v14; // rdx
  __int64 *v15; // r14
  __int64 v16; // r15
  __int64 v17; // r9
  __int64 v18; // r8
  __int64 v19; // rcx
  struct _KPRCB *v20; // rcx
  signed __int32 *SchedulerAssist; // r8
  signed __int32 v22; // eax
  signed __int32 v23; // ett
  unsigned int v24; // [rsp+30h] [rbp-40h] BYREF
  __int64 *v25; // [rsp+38h] [rbp-38h] BYREF
  __int64 v26; // [rsp+40h] [rbp-30h] BYREF
  __int64 v27; // [rsp+48h] [rbp-28h] BYREF
  __int128 v28; // [rsp+50h] [rbp-20h] BYREF
  int v29; // [rsp+60h] [rbp-10h]
  __int16 v30; // [rsp+64h] [rbp-Ch]
  char v31; // [rsp+66h] [rbp-Ah]

  v26 = 0LL;
  v4 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(a2 + 64), 0LL) )
  {
    do
    {
      if ( (++v4 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && KiCheckVpBackingLongSpinWaitHypercall() )
      {
        HvlNotifyLongSpinWait(v4);
      }
      else
      {
        _mm_pause();
      }
    }
    while ( *(_QWORD *)(a2 + 64) );
  }
  v7 = *(unsigned __int8 *)(a3 + 516);
  v8 = *(unsigned __int8 *)(a2 + 516);
  v29 = -16645372;
  v30 = 5;
  v31 = 1;
  if ( (_DWORD)v7 != (_DWORD)v8 )
  {
    v9 = *((_BYTE *)&v29 + v7);
    v10 = *((_BYTE *)&v29 + v8);
    if ( v9 == 0xFF || v10 == 0xFF || v9 > v10 )
    {
      v28 = 0LL;
      CurrentPrcb = a1;
      if ( !a1 )
        CurrentPrcb = (__int64)KeGetCurrentPrcb();
      v26 = CurrentPrcb | 1;
      KiAcquireMultiplePrcbLocks(
        (__int64 *)(*(_QWORD *)(CurrentPrcb + 36440) + 8LL),
        **(unsigned __int8 **)(CurrentPrcb + 36440));
      *(_BYTE *)(a2 + 516) = v7;
      if ( !*(_QWORD *)(CurrentPrcb + 16) )
      {
        v13 = *(_DWORD *)(a2 + 120);
        v25 = 0LL;
        v24 = 0;
        v27 = CurrentPrcb;
        KiPrcbArrayForIsolationWidth(&v27, (v13 >> 1) & 1, &v25, &v24);
        v14 = v24;
        if ( v24 )
        {
          v15 = v25;
          v16 = v24;
          do
          {
            v17 = *v15;
            v18 = *(_QWORD *)(*v15 + 56);
            v19 = *v15;
            *(_BYTE *)(v18 + 64) ^= (*(_BYTE *)(a2 + 516) ^ *(_BYTE *)(v18 + 64)) & 7;
            KiUpdateThreadQosGroupingSummaries(v19, v14, v18, v17);
            ++v15;
            --v16;
          }
          while ( v16 );
        }
      }
      KiReleaseThreadStateLock(v12, CurrentPrcb, (unsigned int)&v26, 0, (__int64)&v28);
    }
  }
  *(_QWORD *)(a2 + 64) = 0LL;
  _disable();
  if ( (unsigned __int8)KiWobQosResponseRequired(*(unsigned __int8 *)(a2 + 516), (unsigned __int8)*(_DWORD *)(a1 + 236)) )
    KeCheckAndApplyBamQos(a1, a2);
  v20 = KeGetCurrentPrcb();
  SchedulerAssist = (signed __int32 *)v20->SchedulerAssist;
  if ( SchedulerAssist )
  {
    _m_prefetchw(SchedulerAssist);
    v22 = *SchedulerAssist;
    do
    {
      v23 = v22;
      v22 = _InterlockedCompareExchange(SchedulerAssist, v22 & 0xFFDFFFFF, v22);
    }
    while ( v23 != v22 );
    if ( (v22 & 0x200000) != 0 )
      KiRemoveSystemWorkPriorityKick((__int64)v20);
  }
  _enable();
}
