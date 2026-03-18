/*
 * XREFs of KiTimerWaitTest @ 0x140335E10
 * Callers:
 *     KiResumeThread @ 0x14029646C (KiResumeThread.c)
 *     ExpSetTimerObject @ 0x1403329C0 (ExpSetTimerObject.c)
 *     KeSetCoalescableTimer @ 0x140334000 (KeSetCoalescableTimer.c)
 *     KiSetTimerEx @ 0x1403347A0 (KiSetTimerEx.c)
 *     KeSetTimer @ 0x140335230 (KeSetTimer.c)
 *     KiProcessExpiredTimerList @ 0x1403358E0 (KiProcessExpiredTimerList.c)
 *     KiCommitThreadWait @ 0x140340C20 (KiCommitThreadWait.c)
 *     KiAdjustTimerDueTimes @ 0x1404017B8 (KiAdjustTimerDueTimes.c)
 * Callees:
 *     KeInsertQueueDpc @ 0x1402542F0 (KeInsertQueueDpc.c)
 *     KiInsertQueueDpc @ 0x140254310 (KiInsertQueueDpc.c)
 *     HvlNotifyLongSpinWait @ 0x140293260 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140293290 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiRemovePrcbWaitEntry @ 0x14031CEA0 (KiRemovePrcbWaitEntry.c)
 *     KiInsertQueueInternal @ 0x140323B94 (KiInsertQueueInternal.c)
 *     KiInsertTimerTable @ 0x140334E60 (KiInsertTimerTable.c)
 *     KiEnterDeferredReadyState @ 0x140337910 (KiEnterDeferredReadyState.c)
 *     PsTimerResolutionActive @ 0x1403BF7D0 (PsTimerResolutionActive.c)
 *     KiTryUnwaitThread @ 0x1403D95F0 (KiTryUnwaitThread.c)
 */

unsigned __int64 __fastcall KiTimerWaitTest(__int64 a1, __int64 a2, unsigned int *a3)
{
  __int64 v3; // r15
  char v4; // si
  __int64 v5; // rax
  __int64 v6; // r10
  unsigned __int64 v7; // r15
  unsigned __int8 v8; // bp
  unsigned int *v9; // rbx
  _QWORD *v11; // rdi
  _QWORD *v12; // r12
  _QWORD *v13; // rsi
  char v14; // al
  __int64 v15; // r13
  unsigned int v16; // ebp
  __int64 v17; // rbx
  char v18; // cl
  int v19; // eax
  __int64 v20; // rcx
  unsigned int v22; // eax
  __int64 v23; // rbx
  unsigned __int64 v24; // rdi
  _QWORD *v25; // r8
  _QWORD *v26; // rdx
  _QWORD *v27; // rcx
  __int16 v28; // r9
  unsigned int v29; // r9d
  _QWORD *v30; // rcx
  _QWORD *v31; // rax
  _QWORD *v32; // rdx
  char v33; // cl
  char v34; // al
  bool v35; // zf
  unsigned int v36; // eax
  unsigned int v37; // ecx
  __int64 v38; // [rsp+30h] [rbp-68h] BYREF
  __int128 v39; // [rsp+38h] [rbp-60h]
  __int64 v40; // [rsp+48h] [rbp-50h]
  char v42; // [rsp+A8h] [rbp+10h]

  v3 = *(_QWORD *)(a2 + 48);
  v4 = *(_BYTE *)a2 & 0x7F;
  v40 = 0LL;
  v5 = *(int *)(a2 + 60);
  v6 = a1;
  v38 = 0LL;
  v7 = KiWaitAlways ^ _byteswap_uint64(a2 ^ __ROL8__(KiWaitNever ^ v3, KiWaitNever));
  v8 = -1;
  v42 = -1;
  v9 = a3;
  v39 = 0LL;
  if ( (_DWORD)v5 )
  {
    v23 = -10000 * v5;
    v8 = 0;
    v42 = 0;
    if ( *(_BYTE *)(a1 + 14522) )
    {
      v36 = *(_DWORD *)(a1 + 34404) + 1;
      *(_DWORD *)(a1 + 34404) = v36;
      if ( v36 >= 0xBB8 )
      {
        v37 = *(_DWORD *)(a1 + 34408);
        *(_DWORD *)(v6 + 34404) = 0;
        if ( v37 < 0x5F5E100 )
          *(_DWORD *)(v6 + 34408) = KeTimeIncrement + v37;
      }
      v23 -= *(unsigned int *)(v6 + 34408);
    }
    if ( MEMORY[0xFFFFF78000000008] + v23 - *(_QWORD *)(a2 + 24) >= 0 )
      *(_QWORD *)(a2 + 24) = MEMORY[0xFFFFF78000000008];
    v24 = 0LL;
    LODWORD(v39) = *(_DWORD *)a2;
    if ( BYTE1(v39) >= 4u )
      v24 = (unsigned __int64)(BYTE1(v39) & 0xFC) << 16;
    if ( KiGlobalTimerResolutionRequests )
    {
      *(_WORD *)(a2 + 58) = 0;
    }
    else
    {
      v25 = (_QWORD *)(a2 + 8);
      *(_WORD *)(a2 + 58) = 1;
      v26 = *(_QWORD **)(a2 + 8);
      while ( v26 != v25 )
      {
        v27 = v26;
        v26 = (_QWORD *)*v26;
        if ( *((_BYTE *)v27 + 16) <= 1u && (unsigned __int8)PsTimerResolutionActive(*(_QWORD *)(v27[3] + 544LL), v26) )
        {
          *(_WORD *)(a2 + 58) = v28;
          break;
        }
      }
    }
    BYTE1(v39) &= ~1u;
    BYTE3(v39) = 64;
    do
    {
      *(_QWORD *)(a2 + 24) -= v23;
      BYTE2(v39) = (v24 + *(_QWORD *)(a2 + 24)) >> 18;
      v29 = BYTE2(v39);
      *(_DWORD *)a2 = v39;
    }
    while ( !KiInsertTimerTable(a1, a2, v7, v29, 0LL) );
    v6 = a1;
    v9 = a3;
  }
  v11 = *(_QWORD **)(a2 + 8);
  *(_DWORD *)(a2 + 4) = 1;
  v12 = (_QWORD *)(a2 + 8);
  if ( v4 == 8 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        if ( v11 == v12 )
        {
          v8 = v42;
          v9 = a3;
          *(_QWORD *)(a2 + 16) = a2 + 8;
          *(_QWORD *)(a2 + 8) = a2 + 8;
          goto LABEL_22;
        }
        v13 = v11;
        v11 = (_QWORD *)*v11;
        v14 = *((_BYTE *)v13 + 16);
        if ( v14 == 1 )
          break;
        if ( v14 == 2 )
        {
          *((_BYTE *)v13 + 17) = 5;
          KiInsertQueueInternal(v13[3], v13);
          v6 = a1;
        }
        else
        {
          if ( v14 == 4 )
          {
            *((_BYTE *)v13 + 17) = 5;
            *(_DWORD *)(a2 + 4) = 0;
            KeInsertQueueDpc((PRKDPC)v13[3], (PVOID)a2, v13);
          }
          else
          {
            KiTryUnwaitThread(v6, v13, 256LL, 0LL);
          }
          v6 = a1;
        }
      }
      v15 = *((unsigned __int16 *)v13 + 9);
      v16 = 0;
      v17 = v13[3];
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v17 + 64), 0LL) )
      {
        do
        {
          if ( (++v16 & HvlLongSpinCountMask) == 0
            && (HvlEnlightenments & 0x40) != 0
            && KiCheckVpBackingLongSpinWaitHypercall() )
          {
            HvlNotifyLongSpinWait(v16);
          }
          else
          {
            _mm_pause();
          }
        }
        while ( *(_QWORD *)(v17 + 64) );
      }
      if ( *(_BYTE *)(v17 + 388) != 5 )
        goto LABEL_20;
      v18 = *(_BYTE *)(v17 + 112);
      v19 = v18 & 7;
      if ( v19 == 1 || v19 == 4 )
      {
        v20 = *(_QWORD *)(v17 + 232);
        if ( v20 )
        {
          if ( (*(_BYTE *)v20 & 0x7F) == 0x15 )
          {
            *(_DWORD *)(v17 + 540) = (unsigned __int8)*(_DWORD *)(v17 + 540);
            _InterlockedIncrement((volatile signed __int32 *)(v20 + 4LL * *(unsigned int *)(v17 + 540) + 536));
          }
          else
          {
            _InterlockedIncrement((volatile signed __int32 *)(v20 + 40));
          }
        }
        KiRemovePrcbWaitEntry((_QWORD *)v17);
        KiEnterDeferredReadyState(v17);
        v6 = a1;
        *(_QWORD *)(v17 + 216) = *(_QWORD *)(a1 + 11528);
        *(_QWORD *)(a1 + 11528) = v17 + 216;
        *(_QWORD *)(v17 + 200) = v15;
        *(_QWORD *)(v17 + 976) = 0LL;
      }
      else if ( (*(_BYTE *)(v17 + 112) & 7) != 0 )
      {
        if ( v19 == 5 )
        {
          *(_BYTE *)(v17 + 112) = v18 & 0xF8 | 6;
LABEL_20:
          v6 = a1;
          goto LABEL_17;
        }
        if ( v19 != 3 )
          goto LABEL_20;
        v6 = a1;
        *((_BYTE *)v13 + 17) = 2;
      }
      else
      {
        v6 = a1;
        *(_BYTE *)(v17 + 112) = v18 & 0xF8 | 2;
        *(_QWORD *)(v17 + 200) = v15;
        *(_QWORD *)(v17 + 976) = 0LL;
        *((_BYTE *)v13 + 17) = 0;
      }
LABEL_17:
      *(_QWORD *)(v17 + 64) = 0LL;
      ++*((_BYTE *)v13 + 17);
    }
  }
  while ( v11 != v12 )
  {
    v30 = (_QWORD *)*v11;
    v31 = v11;
    v11 = v30;
    if ( (_QWORD *)v30[1] != v31 || (v32 = (_QWORD *)v31[1], (_QWORD *)*v32 != v31) )
      __fastfail(3u);
    *v32 = v30;
    v30[1] = v32;
    v33 = *((_BYTE *)v31 + 16);
    if ( v33 == 1 )
    {
      v34 = KiTryUnwaitThread(v6, v31, *((unsigned __int16 *)v31 + 9), 0LL);
      v6 = a1;
      if ( v34 )
      {
        v35 = (*(_DWORD *)(a2 + 4))-- == 1;
        if ( v35 )
          break;
      }
    }
    else if ( v33 == 2 )
    {
      *((_BYTE *)v31 + 17) = 5;
      KiInsertQueueInternal(v31[3], v31);
      v35 = (*(_DWORD *)(a2 + 4))-- == 1;
      if ( v35 )
        break;
      v6 = a1;
    }
    else
    {
      if ( v33 == 4 )
      {
        *((_BYTE *)v31 + 17) = 5;
        *(_DWORD *)(a2 + 4) = 0;
        KeInsertQueueDpc((PRKDPC)v31[3], (PVOID)a2, v31);
      }
      else
      {
        KiTryUnwaitThread(v6, v31, 256LL, 0LL);
      }
      v6 = a1;
    }
  }
LABEL_22:
  if ( !v7 )
    goto LABEL_23;
  if ( !v9 )
  {
    v9 = (unsigned int *)&v38;
    v22 = MEMORY[0xFFFFF78000000014];
    v38 = MEMORY[0xFFFFF78000000014];
    goto LABEL_38;
  }
  if ( KiSerializeTimerExpiration && *(_WORD *)(v7 + 2) >= 0x800u || *(_BYTE *)v7 == 26 && *(_BYTE *)(a1 + 14520) )
  {
    v22 = *v9;
LABEL_38:
    KiInsertQueueDpc(v7, v22, v9[1], a2, v8);
    return 0LL;
  }
  *(_QWORD *)(a1 + 14432) = v7;
  if ( (*(_QWORD *)(a1 + 200) & *(_QWORD *)(v7 + 16)) == 0LL )
    _interlockedbittestandset64((volatile signed __int32 *)(v7 + 16), *(unsigned __int8 *)(a1 + 209));
LABEL_23:
  _InterlockedAnd((volatile signed __int32 *)a2, ~((v8 << 24) | 0x80));
  return v7;
}
