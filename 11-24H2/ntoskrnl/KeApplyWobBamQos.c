/*
 * XREFs of KeApplyWobBamQos @ 0x1402D1948
 * Callers:
 *     IopProcessWorkItem @ 0x1402D1B40 (IopProcessWorkItem.c)
 *     PspUpdateContainerImpersonation @ 0x1403B4C5C (PspUpdateContainerImpersonation.c)
 * Callees:
 *     KiRemoveSystemWorkPriorityKick @ 0x14028EA18 (KiRemoveSystemWorkPriorityKick.c)
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiAcquireMultiplePrcbLocks @ 0x1402A7970 (KiAcquireMultiplePrcbLocks.c)
 *     KeCheckAndApplyBamQos @ 0x1402ACA20 (KeCheckAndApplyBamQos.c)
 *     KiReleaseThreadStateLock @ 0x1403A0FC0 (KiReleaseThreadStateLock.c)
 *     KiPrcbArrayForIsolationWidth @ 0x1403EB700 (KiPrcbArrayForIsolationWidth.c)
 *     KiWobQosResponseRequired @ 0x14041F6A0 (KiWobQosResponseRequired.c)
 *     KiUpdateThreadQosGroupingSummaries @ 0x1404E0370 (KiUpdateThreadQosGroupingSummaries.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
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
  __int64 v20; // r8
  __int64 v21; // r9
  struct _KPRCB *v22; // rcx
  signed __int32 *SchedulerAssist; // r8
  signed __int32 v24; // eax
  signed __int32 v25; // ett
  unsigned int v26; // [rsp+30h] [rbp-40h] BYREF
  __int64 *v27; // [rsp+38h] [rbp-38h] BYREF
  __int64 v28; // [rsp+40h] [rbp-30h] BYREF
  __int64 v29; // [rsp+48h] [rbp-28h] BYREF
  __int128 v30; // [rsp+50h] [rbp-20h] BYREF
  int v31; // [rsp+60h] [rbp-10h]
  __int16 v32; // [rsp+64h] [rbp-Ch]
  char v33; // [rsp+66h] [rbp-Ah]

  v28 = 0LL;
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
  v31 = -16645372;
  v32 = 5;
  v33 = 1;
  if ( (_DWORD)v7 != (_DWORD)v8 )
  {
    v9 = *((_BYTE *)&v31 + v7);
    v10 = *((_BYTE *)&v31 + v8);
    if ( v9 == 0xFF || v10 == 0xFF || v9 > v10 )
    {
      v30 = 0LL;
      CurrentPrcb = a1;
      if ( !a1 )
        CurrentPrcb = (__int64)KeGetCurrentPrcb();
      v28 = CurrentPrcb | 1;
      KiAcquireMultiplePrcbLocks(
        (__int64 *)(*(_QWORD *)(CurrentPrcb + 36440) + 8LL),
        **(unsigned __int8 **)(CurrentPrcb + 36440));
      *(_BYTE *)(a2 + 516) = v7;
      if ( !*(_QWORD *)(CurrentPrcb + 16) )
      {
        v13 = *(_DWORD *)(a2 + 120);
        v27 = 0LL;
        v26 = 0;
        v29 = CurrentPrcb;
        KiPrcbArrayForIsolationWidth(&v29, (v13 >> 1) & 1, &v27, &v26);
        v14 = v26;
        if ( v26 )
        {
          v15 = v27;
          v16 = v26;
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
      KiReleaseThreadStateLock(v12, CurrentPrcb, (unsigned int)&v28, 0, (__int64)&v30);
    }
  }
  *(_QWORD *)(a2 + 64) = 0LL;
  _disable();
  if ( (unsigned __int8)KiWobQosResponseRequired(*(unsigned __int8 *)(a2 + 516), (unsigned __int8)*(_DWORD *)(a1 + 236)) )
    KeCheckAndApplyBamQos(a1, a2, v20, v21);
  v22 = KeGetCurrentPrcb();
  SchedulerAssist = (signed __int32 *)v22->SchedulerAssist;
  if ( SchedulerAssist )
  {
    _m_prefetchw(SchedulerAssist);
    v24 = *SchedulerAssist;
    do
    {
      v25 = v24;
      v24 = _InterlockedCompareExchange(SchedulerAssist, v24 & 0xFFDFFFFF, v24);
    }
    while ( v25 != v24 );
    if ( (v24 & 0x200000) != 0 )
      KiRemoveSystemWorkPriorityKick((__int64)v22);
  }
  _enable();
}
