/*
 * XREFs of KeRemoveQueueDpcEx @ 0x140464090
 * Callers:
 *     ExpSetTimerObject @ 0x1403329C0 (ExpSetTimerObject.c)
 *     ExpCancelTimer @ 0x140333A40 (ExpCancelTimer.c)
 *     KeMaskInterrupt @ 0x1403B748C (KeMaskInterrupt.c)
 *     KiCheckAndRearmForceIdle @ 0x1403C17F8 (KiCheckAndRearmForceIdle.c)
 *     ?KiForceIdleUpdateSchedulerParkState@@YAXE@Z @ 0x1403CAED4 (-KiForceIdleUpdateSchedulerParkState@@YAXE@Z.c)
 *     KeClearForceIdle @ 0x1403CB798 (KeClearForceIdle.c)
 *     EtwpFreeCompression @ 0x140463FA8 (EtwpFreeCompression.c)
 *     KeRemoveQueueDpc @ 0x140464070 (KeRemoveQueueDpc.c)
 *     KeSrcuFree @ 0x1405C0B50 (KeSrcuFree.c)
 *     KiSrcuNotifyWorkerAcquire @ 0x1405C1450 (KiSrcuNotifyWorkerAcquire.c)
 *     KiBugCheckRecoveryFreezeOtherProcessors @ 0x1405C5B80 (KiBugCheckRecoveryFreezeOtherProcessors.c)
 *     DifKeRemoveQueueDpcWrapper @ 0x140630360 (DifKeRemoveQueueDpcWrapper.c)
 *     VfWdCheckForSettingsChange @ 0x140B9C898 (VfWdCheckForSettingsChange.c)
 * Callees:
 *     KiGetDeepIdleProcessors @ 0x140204E08 (KiGetDeepIdleProcessors.c)
 *     KxAcquireSpinLock @ 0x140254AE0 (KxAcquireSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14025E408 (KiRemoveSystemWorkPriorityKick.c)
 *     KxReleaseSpinLock @ 0x140279CC0 (KxReleaseSpinLock.c)
 *     KeDisableInterrupts @ 0x140321E80 (KeDisableInterrupts.c)
 *     KeGenericProcessorCallback @ 0x1403390A4 (KeGenericProcessorCallback.c)
 *     KeIsEmptyAffinityEx @ 0x1403B55D0 (KeIsEmptyAffinityEx.c)
 *     KeEnumerateNextProcessor @ 0x14040D4F0 (KeEnumerateNextProcessor.c)
 *     KiSelectDpcData @ 0x1404330C0 (KiSelectDpcData.c)
 *     KiAcquireReleaseDpcData @ 0x1405C6E64 (KiAcquireReleaseDpcData.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 */

char __fastcall KeRemoveQueueDpcEx(__int64 a1, char a2)
{
  char v2; // di
  char v4; // r15
  bool v5; // al
  __int64 v6; // r13
  bool v7; // r12
  struct _KPRCB *CurrentPrcb; // rcx
  signed __int32 *SchedulerAssist; // r8
  signed __int32 v11; // eax
  signed __int32 v12; // ett
  unsigned __int16 v13; // ax
  __int64 v14; // rsi
  __int64 v15; // rax
  __int64 v16; // rdi
  __int64 *v17; // rdx
  _QWORD *v18; // rcx
  __int64 *i; // rax
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // r8
  unsigned int v23; // ecx
  __int64 v24; // rdx
  __int64 v25; // rax
  struct _KPRCB *v26; // rax
  __int64 Group; // rdx
  __int64 v28; // rdi
  __int64 v29; // rax
  __int64 v30; // rsi
  char v31; // [rsp+28h] [rbp-E0h]
  int v32; // [rsp+2Ch] [rbp-DCh] BYREF
  unsigned __int16 *v33[2]; // [rsp+30h] [rbp-D8h] BYREF
  __int16 v34; // [rsp+40h] [rbp-C8h]
  int v35; // [rsp+42h] [rbp-C6h]
  __int16 v36; // [rsp+46h] [rbp-C2h]
  __int128 v37; // [rsp+48h] [rbp-C0h]
  _BYTE v38[32]; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v39; // [rsp+78h] [rbp-90h]
  int v40; // [rsp+80h] [rbp-88h]
  struct _KAFFINITY_EX v41; // [rsp+88h] [rbp-80h] BYREF
  struct _KAFFINITY_EX v42; // [rsp+198h] [rbp+90h] BYREF

  v31 = a2;
  v2 = a2;
  v39 = 0LL;
  v40 = 0;
  v37 = 0LL;
  memset(v38, 0, sizeof(v38));
  memset_0(&v42.8, 0, sizeof(v42.8));
  v35 = 0;
  v36 = 0;
  v32 = 0;
  memset_0(&v41.8, 0, sizeof(v41.8));
  v4 = 0;
  v5 = KeDisableInterrupts();
  v6 = *(_QWORD *)(a1 + 56);
  v7 = v5;
  if ( v6 )
  {
    LODWORD(v37) = *(_DWORD *)a1;
    v13 = WORD1(v37) - 2048;
    if ( WORD1(v37) < 0x800u )
      v13 = WORD1(v37);
    v14 = KiProcessorBlock[v13];
    if ( (_BYTE)v37 != 26 || (v15 = 14448LL, !*(_BYTE *)(v14 + 14520)) )
      v15 = 14400LL;
    v16 = v15 + v14;
    KxAcquireSpinLock((PKSPIN_LOCK)(v15 + v14 + 16));
    if ( v6 == *(_QWORD *)(a1 + 56) && (_DWORD)v37 == *(_DWORD *)a1 )
    {
      v17 = (__int64 *)(a1 + 8);
      v18 = (_QWORD *)v16;
      --*(_DWORD *)(v16 + 24);
      for ( i = *(__int64 **)v16; i != v17; i = (__int64 *)*i )
        v18 = i;
      v20 = *v17;
      *v18 = *v17;
      if ( !v20 )
        *(_QWORD *)(v16 + 8) = v18;
      *(_QWORD *)(a1 + 56) = 0LL;
      v4 = 1;
      v21 = *(_QWORD *)(v14 + 36536);
      if ( v21 && v16 == v14 + 14400 )
        _InterlockedDecrement((volatile signed __int32 *)(v21 + 28));
    }
    KxReleaseSpinLock((volatile signed __int64 *)(v16 + 16));
    v2 = v31;
  }
  if ( v7 )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    SchedulerAssist = (signed __int32 *)CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      _m_prefetchw(SchedulerAssist);
      v11 = *SchedulerAssist;
      do
      {
        v12 = v11;
        v11 = _InterlockedCompareExchange(SchedulerAssist, v11 & 0xFFDFFFFF, v11);
      }
      while ( v12 != v11 );
      if ( (v11 & 0x200000) != 0 )
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
    _enable();
  }
  if ( v2 && *(_QWORD *)(a1 + 16) )
  {
    *(_QWORD *)&v42.Count = 2097153LL;
    memset_0(&v42.8, 0, sizeof(v42.8));
    *(_QWORD *)&v41.Count = 2097153LL;
    memset_0(&v41.8, 0, sizeof(v41.8));
    KiGetDeepIdleProcessors(&v42, &v41, v22);
    v23 = 0;
    if ( v41.Count )
    {
      v24 = *(_QWORD *)(a1 + 16);
      do
      {
        v25 = v23++;
        v41.Bitmap[v25] &= v24;
      }
      while ( v23 < v41.Count );
    }
    v26 = KeGetCurrentPrcb();
    Group = v26->Group;
    if ( v41.Count > (unsigned __int16)Group )
      v41.Bitmap[Group] &= ~v26->GroupSetMember;
    v33[1] = (unsigned __int16 *)v41.Bitmap[0];
    v34 = 0;
    v33[0] = (unsigned __int16 *)&v41;
    while ( !(unsigned int)KeEnumerateNextProcessor(&v32, v33) )
    {
      v28 = KiProcessorBlock[v32];
      v29 = KiSelectDpcData(v28, (_BYTE *)a1);
      v30 = v29;
      if ( !v6 )
        KiAcquireReleaseDpcData(v29);
      if ( *(_QWORD *)(v30 + 32) != a1 && (unsigned int)v41.Count > *(unsigned __int8 *)(v28 + 208) )
        v41.Bitmap[*(unsigned __int8 *)(v28 + 208)] &= ~*(_QWORD *)(v28 + 200);
    }
    if ( !(unsigned int)KeIsEmptyAffinityEx(&v41.Count) )
      KeGenericProcessorCallback((__int64 *)&v41, (char (__fastcall *)(__int64, __int64))xHalTimerWatchdogStop, 0LL, 2);
  }
  return v4;
}
