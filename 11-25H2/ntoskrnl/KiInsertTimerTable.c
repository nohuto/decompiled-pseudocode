/*
 * XREFs of KiInsertTimerTable @ 0x1402EDE10
 * Callers:
 *     KiCommitThreadWait @ 0x14029DDA0 (KiCommitThreadWait.c)
 *     ExpSetTimerObject @ 0x1402EB930 (ExpSetTimerObject.c)
 *     KeSetCoalescableTimer @ 0x1402ECF90 (KeSetCoalescableTimer.c)
 *     KiSetTimerEx @ 0x1402ED730 (KiSetTimerEx.c)
 *     KeSetTimer @ 0x1402EE1E0 (KeSetTimer.c)
 *     KiTimerWaitTest @ 0x1402EEDC0 (KiTimerWaitTest.c)
 *     KiResumeThread @ 0x1402F2268 (KiResumeThread.c)
 *     KiAdjustTimerDueTimes @ 0x1403F908C (KiAdjustTimerDueTimes.c)
 * Callees:
 *     KiSendClockInterruptToTargetProcessor @ 0x1402777C0 (KiSendClockInterruptToTargetProcessor.c)
 *     HvlNotifyLongSpinWait @ 0x14032DED0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14032DF00 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiRemoveEntryTimer @ 0x1403F9350 (KiRemoveEntryTimer.c)
 */

_BOOL8 __fastcall KiInsertTimerTable(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, char *a5)
{
  BOOL v5; // r14d
  unsigned int v8; // ebx
  int v9; // r10d
  unsigned __int64 v10; // r12
  unsigned __int64 v11; // rcx
  unsigned int v12; // ebp
  unsigned __int64 v13; // rax
  __int64 v14; // rdi
  _QWORD *v15; // r13
  _QWORD *v16; // rsi
  _QWORD *v17; // rdx
  unsigned __int64 v18; // r8
  _QWORD *v19; // rax
  __int64 v20; // r10
  char v21; // di
  __int64 v23; // r8
  __int64 v24; // rcx
  unsigned __int64 v25; // rax
  volatile signed __int32 *v26; // rcx
  __int64 v27; // r8
  char v28; // cl
  unsigned __int64 v29; // rax
  _QWORD *v30; // rcx
  _QWORD *v31; // rax
  int v32; // eax
  signed __int32 v33[8]; // [rsp+0h] [rbp-78h] BYREF
  __int64 v34; // [rsp+20h] [rbp-58h]
  volatile signed __int64 *v35; // [rsp+28h] [rbp-50h] BYREF
  __int64 v36; // [rsp+30h] [rbp-48h]

  v5 = 0;
  v8 = 0;
  if ( !*(_DWORD *)(a2 + 60) )
    *(_DWORD *)(a2 + 4) = 0;
  v9 = 0;
  if ( !KiSerializeTimerExpiration )
  {
    if ( a3 && (v32 = *(unsigned __int16 *)(a3 + 2), (unsigned __int16)v32 >= 0x800u) )
    {
      v9 = v32 - 2048;
    }
    else
    {
      v9 = *(_DWORD *)(a1 + 36);
      if ( (*(_BYTE *)(a1 + 35) & 0x10) != 0 )
      {
        v27 = *(_QWORD *)(*(_QWORD *)(a1 + 192) + 80LL) & *(_QWORD *)(*(_QWORD *)(a1 + 192) + 128LL);
        if ( v27 )
        {
          v28 = *(_BYTE *)(a1 + 209);
          _BitScanForward64(&v29, __ROR8__(v27, v28));
          v9 = *((_DWORD *)qword_140F216A8 + 64 * *(unsigned __int8 *)(a1 + 208) + (((unsigned __int8)v29 + v28) & 0x3F));
        }
      }
    }
  }
  v10 = *(_QWORD *)(a2 + 24);
  v11 = 0x140000000uLL;
  v12 = 0;
  *(_WORD *)(a2 + 56) = v9;
  v13 = (unsigned __int64)*(unsigned __int16 *)(a2 + 58) << 8;
  v34 = KiProcessorBlock[v9];
  v14 = v34 + 16640 + 32 * (v13 + a4 + 16LL);
  v36 = v34 + 16640;
  v15 = (_QWORD *)(v14 + 8);
  v16 = (_QWORD *)(v14 + 8);
  while ( _interlockedbittestandset64((volatile signed __int32 *)v14, 0LL) )
  {
    do
    {
      if ( (++v12 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v11) )
      {
        HvlNotifyLongSpinWait(v12);
      }
      else
      {
        _mm_pause();
      }
    }
    while ( *(_QWORD *)v14 );
  }
  v17 = (_QWORD *)*v15;
  v35 = (volatile signed __int64 *)v14;
  if ( v17 == v15 )
  {
    v8 = 6;
  }
  else
  {
    v18 = *(v17 - 1);
    if ( v10 > v18 )
    {
      if ( v10 - v18 <= (unsigned __int64)KeMaximumIncrement >> 2 )
      {
        v30 = *(_QWORD **)(v14 + 16);
        v16 = v17;
        if ( v17 != v30 )
        {
          do
          {
            v31 = (_QWORD *)*v16;
            if ( v10 <= *(_QWORD *)(*v16 - 8LL) )
              break;
            v16 = (_QWORD *)*v16;
          }
          while ( v31 != v30 );
        }
      }
      else
      {
        v16 = *(_QWORD **)(v14 + 16);
        do
        {
          if ( v10 >= *(v16 - 1) )
            break;
          v16 = (_QWORD *)v16[1];
        }
        while ( v16 != v15 );
      }
    }
    else
    {
      v8 = v10 < v18 ? 2 : 0;
    }
    v17 = (_QWORD *)*v16;
  }
  v19 = (_QWORD *)(a2 + 32);
  if ( (_QWORD *)v17[1] != v16 )
    __fastfail(3u);
  v20 = v34;
  *(_QWORD *)(a2 + 40) = v16;
  *v19 = v17;
  v17[1] = v19;
  *v16 = v19;
  if ( (v8 & 2) == 0 )
  {
    v21 = 0;
    goto LABEL_24;
  }
  *(_QWORD *)(v14 + 24) = v10;
  _InterlockedOr(v33, 0);
  if ( v8 < 4 )
  {
    v23 = a4;
  }
  else
  {
    v23 = a4;
    v24 = qword_140FC7528[2 * *(unsigned __int8 *)(v20 + 208)];
    if ( KiSerializeTimerExpiration )
    {
      v25 = a4 & 0x3F;
      v26 = (volatile signed __int32 *)(v24 + 8 * ((unsigned __int64)a4 >> 6));
    }
    else
    {
      v25 = *(unsigned __int8 *)(v20 + 209);
      v26 = (volatile signed __int32 *)(((unsigned __int64)a4 << 6) + v24);
    }
    _interlockedbittestandset64(v26, v25);
  }
  if ( v10 <= MEMORY[0xFFFFF78000000008] )
  {
    if ( a5 )
    {
      v21 = 1;
      goto LABEL_35;
    }
    v8 |= 1u;
    KiRemoveEntryTimer(v36, a2, v23, &v35);
    v20 = v34;
  }
  v21 = 0;
LABEL_35:
  if ( (v8 & 1) == 0 && v20 != a1 && !KiSerializeTimerExpiration && KiClockTimerPerCpuTickScheduling )
  {
    if ( !*(_BYTE *)(v20 + 38409) )
    {
      v5 = *(_BYTE *)(v20 + 7) != 0;
LABEL_41:
      v8 |= 8 * v5;
      goto LABEL_24;
    }
    if ( *(_BYTE *)(v20 + 38408) && *(_QWORD *)(v20 + 38272) <= v10 )
      goto LABEL_41;
    v8 |= 8u;
  }
LABEL_24:
  _InterlockedAnd64(v35, 0LL);
  if ( v8 >= 8 )
    KiSendClockInterruptToTargetProcessor(*(_DWORD *)(v20 + 36));
  if ( a5 )
    *a5 = v21;
  return (v8 & 1) == 0;
}
