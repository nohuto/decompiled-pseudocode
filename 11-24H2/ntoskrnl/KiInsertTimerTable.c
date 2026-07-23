/*
 * XREFs of KiInsertTimerTable @ 0x140316F50
 * Callers:
 *     KiResumeThread @ 0x1402DD2DC (KiResumeThread.c)
 *     KeSetTimer @ 0x1403161F0 (KeSetTimer.c)
 *     KiSetTimerEx @ 0x140316810 (KiSetTimerEx.c)
 *     KiTimerWaitTest @ 0x140317320 (KiTimerWaitTest.c)
 *     KiCommitThreadWait @ 0x140320100 (KiCommitThreadWait.c)
 *     KiAdjustTimerDueTimes @ 0x1404E0430 (KiAdjustTimerDueTimes.c)
 * Callees:
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiSendClockInterruptToTargetProcessor @ 0x1403179A4 (KiSendClockInterruptToTargetProcessor.c)
 *     KiRemoveEntryTimer @ 0x1403FC130 (KiRemoveEntryTimer.c)
 */

_BOOL8 __fastcall KiInsertTimerTable(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, char *a5)
{
  BOOL v5; // r14d
  unsigned int v8; // ebx
  int v9; // r10d
  unsigned __int64 v10; // r12
  unsigned int v11; // ebp
  unsigned __int64 v12; // rax
  __int64 v13; // rdi
  _QWORD *v14; // r13
  _QWORD *v15; // rsi
  _QWORD *v16; // rdx
  unsigned __int64 v17; // r8
  _QWORD *v18; // rax
  __int64 v19; // r8
  char v20; // cl
  unsigned __int64 v21; // rax
  _QWORD *v22; // rcx
  _QWORD *v23; // rax
  __int64 v24; // r10
  char v25; // di
  __int64 v27; // r8
  __int64 v28; // rcx
  unsigned __int64 v29; // rax
  volatile signed __int32 *v30; // rcx
  int v31; // eax
  signed __int32 v32[8]; // [rsp+0h] [rbp-78h] BYREF
  __int64 v33; // [rsp+20h] [rbp-58h]
  volatile signed __int64 *v34; // [rsp+28h] [rbp-50h] BYREF
  __int64 v35; // [rsp+30h] [rbp-48h]

  v5 = 0;
  v8 = 0;
  if ( !*(_DWORD *)(a2 + 60) )
    *(_DWORD *)(a2 + 4) = 0;
  v9 = 0;
  if ( !KiSerializeTimerExpiration )
  {
    if ( a3 && (v31 = *(unsigned __int16 *)(a3 + 2), (unsigned __int16)v31 >= 0x800u) )
    {
      v9 = v31 - 2048;
    }
    else
    {
      v9 = *(_DWORD *)(a1 + 36);
      if ( (*(_BYTE *)(a1 + 35) & 0x10) != 0 )
      {
        v19 = *(_QWORD *)(*(_QWORD *)(a1 + 192) + 80LL) & *(_QWORD *)(*(_QWORD *)(a1 + 192) + 128LL);
        if ( v19 )
        {
          v20 = *(_BYTE *)(a1 + 209);
          _BitScanForward64(&v21, __ROR8__(v19, v20));
          v9 = *((_DWORD *)qword_140F22998 + 64 * *(unsigned __int8 *)(a1 + 208) + (((unsigned __int8)v21 + v20) & 0x3F));
        }
      }
    }
  }
  v10 = *(_QWORD *)(a2 + 24);
  v11 = 0;
  *(_WORD *)(a2 + 56) = v9;
  v12 = (unsigned __int64)*(unsigned __int16 *)(a2 + 58) << 8;
  v33 = KiProcessorBlock[v9];
  v13 = v33 + 16640 + 32 * (v12 + a4 + 16LL);
  v35 = v33 + 16640;
  v14 = (_QWORD *)(v13 + 8);
  v15 = (_QWORD *)(v13 + 8);
  while ( _interlockedbittestandset64((volatile signed __int32 *)v13, 0LL) )
  {
    do
    {
      if ( (++v11 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && KiCheckVpBackingLongSpinWaitHypercall() )
      {
        HvlNotifyLongSpinWait(v11);
      }
      else
      {
        _mm_pause();
      }
    }
    while ( *(_QWORD *)v13 );
  }
  v16 = (_QWORD *)*v14;
  v34 = (volatile signed __int64 *)v13;
  if ( v16 == v14 )
  {
    v8 = 6;
  }
  else
  {
    v17 = *(v16 - 1);
    if ( v10 > v17 )
    {
      if ( v10 - v17 <= (unsigned __int64)KeMaximumIncrement >> 2 )
      {
        v22 = *(_QWORD **)(v13 + 16);
        v15 = v16;
        if ( v16 != v22 )
        {
          do
          {
            v23 = (_QWORD *)*v15;
            if ( v10 <= *(_QWORD *)(*v15 - 8LL) )
              break;
            v15 = (_QWORD *)*v15;
          }
          while ( v23 != v22 );
        }
      }
      else
      {
        v15 = *(_QWORD **)(v13 + 16);
        do
        {
          if ( v10 >= *(v15 - 1) )
            break;
          v15 = (_QWORD *)v15[1];
        }
        while ( v15 != v14 );
      }
    }
    else
    {
      v8 = v10 < v17 ? 2 : 0;
    }
    v16 = (_QWORD *)*v15;
  }
  v18 = (_QWORD *)(a2 + 32);
  if ( (_QWORD *)v16[1] != v15 )
    __fastfail(3u);
  v24 = v33;
  *(_QWORD *)(a2 + 40) = v15;
  *v18 = v16;
  v16[1] = v18;
  *v15 = v18;
  if ( (v8 & 2) == 0 )
  {
    v25 = 0;
    goto LABEL_35;
  }
  *(_QWORD *)(v13 + 24) = v10;
  _InterlockedOr(v32, 0);
  if ( v8 < 4 )
  {
    v27 = a4;
  }
  else
  {
    v27 = a4;
    v28 = qword_140FC8568[2 * *(unsigned __int8 *)(v24 + 208)];
    if ( KiSerializeTimerExpiration )
    {
      v29 = a4 & 0x3F;
      v30 = (volatile signed __int32 *)(v28 + 8 * ((unsigned __int64)a4 >> 6));
    }
    else
    {
      v29 = *(unsigned __int8 *)(v24 + 209);
      v30 = (volatile signed __int32 *)(((unsigned __int64)a4 << 6) + v28);
    }
    _interlockedbittestandset64(v30, v29);
  }
  if ( v10 <= MEMORY[0xFFFFF78000000008] )
  {
    if ( a5 )
    {
      v25 = 1;
      goto LABEL_46;
    }
    v8 |= 1u;
    KiRemoveEntryTimer(v35, a2, v27, &v34);
    v24 = v33;
  }
  v25 = 0;
LABEL_46:
  if ( (v8 & 1) == 0 && !KiSerializeTimerExpiration && v24 != a1 && KiClockTimerPerCpuTickScheduling )
  {
    if ( !*(_BYTE *)(v24 + 38409) )
    {
      v5 = *(_BYTE *)(v24 + 7) != 0;
LABEL_52:
      v8 |= 8 * v5;
      goto LABEL_35;
    }
    if ( *(_BYTE *)(v24 + 38408) && *(_QWORD *)(v24 + 38272) <= v10 )
      goto LABEL_52;
    v8 |= 8u;
  }
LABEL_35:
  _InterlockedAnd64(v34, 0LL);
  if ( v8 >= 8 )
    KiSendClockInterruptToTargetProcessor(*(unsigned int *)(v24 + 36));
  if ( a5 )
    *a5 = v25;
  return (v8 & 1) == 0;
}
