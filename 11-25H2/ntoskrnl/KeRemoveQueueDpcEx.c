/*
 * XREFs of KeRemoveQueueDpcEx @ 0x140464AC0
 * Callers:
 *     KeMaskInterrupt @ 0x14020254C (KeMaskInterrupt.c)
 *     ExpSetTimerObject @ 0x1402EB930 (ExpSetTimerObject.c)
 *     ExpCancelTimer @ 0x1402EC9C0 (ExpCancelTimer.c)
 *     KeClearForceIdle @ 0x1403551F8 (KeClearForceIdle.c)
 *     ?KiForceIdleUpdateSchedulerParkState@@YAXE@Z @ 0x140355570 (-KiForceIdleUpdateSchedulerParkState@@YAXE@Z.c)
 *     KiCheckAndRearmForceIdle @ 0x140372628 (KiCheckAndRearmForceIdle.c)
 *     EtwpFreeCompression @ 0x1404649D8 (EtwpFreeCompression.c)
 *     KeRemoveQueueDpc @ 0x140464AA0 (KeRemoveQueueDpc.c)
 *     KeSrcuFree @ 0x1405BCAE0 (KeSrcuFree.c)
 *     KiSrcuNotifyWorkerAcquire @ 0x1405BD3E0 (KiSrcuNotifyWorkerAcquire.c)
 *     KiBugCheckRecoveryFreezeOtherProcessors @ 0x1405C17E0 (KiBugCheckRecoveryFreezeOtherProcessors.c)
 *     DifKeRemoveQueueDpcWrapper @ 0x1406243A0 (DifKeRemoveQueueDpcWrapper.c)
 *     VfWdCheckForSettingsChange @ 0x140B8C8B8 (VfWdCheckForSettingsChange.c)
 * Callees:
 *     KxAcquireSpinLock @ 0x140253560 (KxAcquireSpinLock.c)
 *     KiGetDeepIdleProcessors @ 0x1402671F0 (KiGetDeepIdleProcessors.c)
 *     KeGenericProcessorCallback @ 0x140277E30 (KeGenericProcessorCallback.c)
 *     KeDisableInterrupts @ 0x14028A900 (KeDisableInterrupts.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14028BBC0 (KiRemoveSystemWorkPriorityKick.c)
 *     KxReleaseSpinLock @ 0x14034A6E0 (KxReleaseSpinLock.c)
 *     KeIsEmptyAffinityEx @ 0x140377880 (KeIsEmptyAffinityEx.c)
 *     KeEnumerateNextProcessor @ 0x140405FA0 (KeEnumerateNextProcessor.c)
 *     KiSelectDpcData @ 0x140436730 (KiSelectDpcData.c)
 *     KiAcquireReleaseDpcData @ 0x1405C2AC4 (KiAcquireReleaseDpcData.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
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
  unsigned int v22; // ecx
  __int64 v23; // rdx
  __int64 v24; // rax
  struct _KPRCB *v25; // rax
  __int64 Group; // rdx
  __int64 v27; // rdi
  __int64 v28; // rax
  __int64 v29; // rsi
  char v30; // [rsp+28h] [rbp-E0h]
  int v31; // [rsp+2Ch] [rbp-DCh] BYREF
  unsigned __int16 *v32[2]; // [rsp+30h] [rbp-D8h] BYREF
  __int16 v33; // [rsp+40h] [rbp-C8h]
  int v34; // [rsp+42h] [rbp-C6h]
  __int16 v35; // [rsp+46h] [rbp-C2h]
  __int128 v36; // [rsp+48h] [rbp-C0h]
  _BYTE v37[32]; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v38; // [rsp+78h] [rbp-90h]
  int v39; // [rsp+80h] [rbp-88h]
  struct _KAFFINITY_EX v40; // [rsp+88h] [rbp-80h] BYREF
  struct _KAFFINITY_EX v41; // [rsp+198h] [rbp+90h] BYREF

  v30 = a2;
  v2 = a2;
  v38 = 0LL;
  v39 = 0;
  v36 = 0LL;
  memset(v37, 0, sizeof(v37));
  memset_0(&v41.8, 0, sizeof(v41.8));
  v34 = 0;
  v35 = 0;
  v31 = 0;
  memset_0(&v40.8, 0, sizeof(v40.8));
  v4 = 0;
  v5 = KeDisableInterrupts();
  v6 = *(_QWORD *)(a1 + 56);
  v7 = v5;
  if ( v6 )
  {
    LODWORD(v36) = *(_DWORD *)a1;
    v13 = WORD1(v36) - 2048;
    if ( WORD1(v36) < 0x800u )
      v13 = WORD1(v36);
    v14 = KiProcessorBlock[v13];
    if ( (_BYTE)v36 != 26 || (v15 = 14448LL, !*(_BYTE *)(v14 + 14520)) )
      v15 = 14400LL;
    v16 = v15 + v14;
    KxAcquireSpinLock((PKSPIN_LOCK)(v15 + v14 + 16));
    if ( v6 == *(_QWORD *)(a1 + 56) && (_DWORD)v36 == *(_DWORD *)a1 )
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
    v2 = v30;
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
    *(_QWORD *)&v41.Count = 2097153LL;
    memset_0(&v41.8, 0, sizeof(v41.8));
    *(_QWORD *)&v40.Count = 2097153LL;
    memset_0(&v40.8, 0, sizeof(v40.8));
    KiGetDeepIdleProcessors(&v41, &v40);
    v22 = 0;
    if ( v40.Count )
    {
      v23 = *(_QWORD *)(a1 + 16);
      do
      {
        v24 = v22++;
        v40.Bitmap[v24] &= v23;
      }
      while ( v22 < v40.Count );
    }
    v25 = KeGetCurrentPrcb();
    Group = v25->Group;
    if ( v40.Count > (unsigned __int16)Group )
      v40.Bitmap[Group] &= ~v25->GroupSetMember;
    v32[1] = (unsigned __int16 *)v40.Bitmap[0];
    v33 = 0;
    v32[0] = (unsigned __int16 *)&v40;
    while ( !(unsigned int)KeEnumerateNextProcessor(&v31, v32) )
    {
      v27 = KiProcessorBlock[v31];
      v28 = KiSelectDpcData(v27, (_BYTE *)a1);
      v29 = v28;
      if ( !v6 )
        KiAcquireReleaseDpcData(v28);
      if ( *(_QWORD *)(v29 + 32) != a1 && (unsigned int)v40.Count > *(unsigned __int8 *)(v27 + 208) )
        v40.Bitmap[*(unsigned __int8 *)(v27 + 208)] &= ~*(_QWORD *)(v27 + 200);
    }
    if ( !(unsigned int)KeIsEmptyAffinityEx(&v40.Count) )
      KeGenericProcessorCallback((__int64 *)&v40, (char (__fastcall *)(__int64, __int64))xHalTimerWatchdogStop, 0LL, 2);
  }
  return v4;
}
