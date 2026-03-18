/*
 * XREFs of KiTimerWaitTest @ 0x1402EEDC0
 * Callers:
 *     KiCommitThreadWait @ 0x14029DDA0 (KiCommitThreadWait.c)
 *     ExpSetTimerObject @ 0x1402EB930 (ExpSetTimerObject.c)
 *     KeSetCoalescableTimer @ 0x1402ECF90 (KeSetCoalescableTimer.c)
 *     KiSetTimerEx @ 0x1402ED730 (KiSetTimerEx.c)
 *     KeSetTimer @ 0x1402EE1E0 (KeSetTimer.c)
 *     KiProcessExpiredTimerList @ 0x1402EE890 (KiProcessExpiredTimerList.c)
 *     KiResumeThread @ 0x1402F2268 (KiResumeThread.c)
 *     KiAdjustTimerDueTimes @ 0x1403F908C (KiAdjustTimerDueTimes.c)
 * Callees:
 *     KeInsertQueueDpc @ 0x140252D80 (KeInsertQueueDpc.c)
 *     KiInsertQueueDpc @ 0x140252DA0 (KiInsertQueueDpc.c)
 *     KiInsertQueueInternal @ 0x14027F170 (KiInsertQueueInternal.c)
 *     KiTryUnwaitThread @ 0x140280490 (KiTryUnwaitThread.c)
 *     KiRemovePrcbWaitEntry @ 0x140285980 (KiRemovePrcbWaitEntry.c)
 *     KiInsertTimerTable @ 0x1402EDE10 (KiInsertTimerTable.c)
 *     KiEnterDeferredReadyState @ 0x1402F0680 (KiEnterDeferredReadyState.c)
 *     HvlNotifyLongSpinWait @ 0x14032DED0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14032DF00 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     PsTimerResolutionActive @ 0x14036F5C0 (PsTimerResolutionActive.c)
 */

unsigned __int64 __fastcall KiTimerWaitTest(__int64 a1, __int64 a2, unsigned int *a3)
{
  __int64 v3; // r13
  char v4; // di
  __int64 v5; // rax
  __int64 v6; // r10
  __int64 v7; // rcx
  unsigned __int64 v8; // r13
  unsigned __int8 v9; // bp
  unsigned int *v10; // rbx
  _QWORD *v12; // rsi
  _QWORD *v13; // r14
  __int64 v14; // rbp
  char v15; // al
  __int64 v16; // r12
  unsigned int v17; // edi
  __int64 v18; // rbx
  int v19; // eax
  __int64 v20; // rcx
  unsigned int v22; // eax
  __int64 v23; // rbx
  unsigned __int64 v24; // rsi
  _QWORD *v25; // r8
  _QWORD *v26; // rdx
  _QWORD *v27; // rcx
  __int16 v28; // r9
  unsigned int v29; // r9d
  _QWORD *v30; // rcx
  __int64 v31; // rax
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
  v7 = KiWaitNever;
  v38 = 0LL;
  v8 = KiWaitAlways ^ _byteswap_uint64(a2 ^ __ROL8__(KiWaitNever ^ v3, KiWaitNever));
  v9 = -1;
  v42 = -1;
  v10 = a3;
  v39 = 0LL;
  if ( (_DWORD)v5 )
  {
    v23 = -10000 * v5;
    v9 = 0;
    v42 = 0;
    if ( *(_BYTE *)(v6 + 14522) )
    {
      v36 = *(_DWORD *)(v6 + 34404) + 1;
      *(_DWORD *)(v6 + 34404) = v36;
      if ( v36 >= 0xBB8 )
      {
        v37 = *(_DWORD *)(v6 + 34408);
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
    while ( !KiInsertTimerTable(a1, a2, v8, v29, 0LL) );
    v6 = a1;
    v10 = a3;
  }
  v12 = *(_QWORD **)(a2 + 8);
  *(_DWORD *)(a2 + 4) = 1;
  v13 = (_QWORD *)(a2 + 8);
  if ( v4 == 8 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        if ( v12 == v13 )
        {
          v9 = v42;
          v10 = a3;
          *(_QWORD *)(a2 + 16) = a2 + 8;
          *(_QWORD *)(a2 + 8) = a2 + 8;
          goto LABEL_22;
        }
        v14 = (__int64)v12;
        v12 = (_QWORD *)*v12;
        v15 = *(_BYTE *)(v14 + 16);
        if ( v15 == 1 )
          break;
        if ( v15 == 2 )
        {
          *(_BYTE *)(v14 + 17) = 5;
          KiInsertQueueInternal(*(_QWORD *)(v14 + 24), (__int64 *)v14);
          v6 = a1;
        }
        else
        {
          if ( v15 == 4 )
          {
            *(_BYTE *)(v14 + 17) = 5;
            *(_DWORD *)(a2 + 4) = 0;
            KeInsertQueueDpc(*(PRKDPC *)(v14 + 24), (PVOID)a2, (PVOID)v14);
          }
          else
          {
            KiTryUnwaitThread(v6, v14, 256LL, 0LL);
          }
          v6 = a1;
        }
      }
      v16 = *(unsigned __int16 *)(v14 + 18);
      v17 = 0;
      v18 = *(_QWORD *)(v14 + 24);
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v18 + 64), 0LL) )
      {
        do
        {
          if ( (++v17 & HvlLongSpinCountMask) == 0
            && (HvlEnlightenments & 0x40) != 0
            && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v7) )
          {
            HvlNotifyLongSpinWait(v17);
          }
          else
          {
            _mm_pause();
          }
        }
        while ( *(_QWORD *)(v18 + 64) );
      }
      if ( *(_BYTE *)(v18 + 388) != 5 )
        goto LABEL_20;
      v7 = *(unsigned __int8 *)(v18 + 112);
      v19 = *(_BYTE *)(v18 + 112) & 7;
      if ( v19 == 1 || v19 == 4 )
      {
        v20 = *(_QWORD *)(v18 + 232);
        if ( v20 )
        {
          if ( (*(_BYTE *)v20 & 0x7F) == 0x15 )
          {
            *(_DWORD *)(v18 + 540) = (unsigned __int8)*(_DWORD *)(v18 + 540);
            _InterlockedIncrement((volatile signed __int32 *)(v20 + 4LL * *(unsigned int *)(v18 + 540) + 536));
          }
          else
          {
            _InterlockedIncrement((volatile signed __int32 *)(v20 + 40));
          }
        }
        KiRemovePrcbWaitEntry((_QWORD *)v18);
        KiEnterDeferredReadyState(v18);
        v6 = a1;
        v7 = v18 + 216;
        *(_QWORD *)(v18 + 216) = *(_QWORD *)(a1 + 11528);
        *(_QWORD *)(a1 + 11528) = v18 + 216;
        *(_QWORD *)(v18 + 200) = v16;
        *(_QWORD *)(v18 + 976) = 0LL;
      }
      else if ( (*(_BYTE *)(v18 + 112) & 7) != 0 )
      {
        if ( v19 == 5 )
        {
          LOBYTE(v7) = v7 & 0xF8 | 6;
          *(_BYTE *)(v18 + 112) = v7;
LABEL_20:
          v6 = a1;
          goto LABEL_17;
        }
        if ( v19 != 3 )
          goto LABEL_20;
        v6 = a1;
        *(_BYTE *)(v14 + 17) = 2;
      }
      else
      {
        v6 = a1;
        LOBYTE(v7) = v7 & 0xF8 | 2;
        *(_BYTE *)(v18 + 112) = v7;
        *(_QWORD *)(v18 + 200) = v16;
        *(_QWORD *)(v18 + 976) = 0LL;
        *(_BYTE *)(v14 + 17) = 0;
      }
LABEL_17:
      *(_QWORD *)(v18 + 64) = 0LL;
      ++*(_BYTE *)(v14 + 17);
    }
  }
  while ( v12 != v13 )
  {
    v30 = (_QWORD *)*v12;
    v31 = (__int64)v12;
    v12 = v30;
    if ( v30[1] != v31 || (v32 = *(_QWORD **)(v31 + 8), *v32 != v31) )
      __fastfail(3u);
    *v32 = v30;
    v30[1] = v32;
    v33 = *(_BYTE *)(v31 + 16);
    if ( v33 == 1 )
    {
      v34 = KiTryUnwaitThread(v6, v31, *(unsigned __int16 *)(v31 + 18), 0LL);
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
      *(_BYTE *)(v31 + 17) = 5;
      KiInsertQueueInternal(*(_QWORD *)(v31 + 24), (__int64 *)v31);
      v35 = (*(_DWORD *)(a2 + 4))-- == 1;
      if ( v35 )
        break;
      v6 = a1;
    }
    else
    {
      if ( v33 == 4 )
      {
        *(_BYTE *)(v31 + 17) = 5;
        *(_DWORD *)(a2 + 4) = 0;
        KeInsertQueueDpc(*(PRKDPC *)(v31 + 24), (PVOID)a2, (PVOID)v31);
      }
      else
      {
        KiTryUnwaitThread(v6, v31, 256LL, 0LL);
      }
      v6 = a1;
    }
  }
LABEL_22:
  if ( !v8 )
    goto LABEL_23;
  if ( !v10 )
  {
    v10 = (unsigned int *)&v38;
    v22 = MEMORY[0xFFFFF78000000014];
    v38 = MEMORY[0xFFFFF78000000014];
    goto LABEL_38;
  }
  if ( KiSerializeTimerExpiration && *(_WORD *)(v8 + 2) >= 0x800u || *(_BYTE *)v8 == 26 && *(_BYTE *)(a1 + 14520) )
  {
    v22 = *v10;
LABEL_38:
    KiInsertQueueDpc(v8, v22, v10[1], a2, v9);
    return 0LL;
  }
  *(_QWORD *)(a1 + 14432) = v8;
  if ( (*(_QWORD *)(a1 + 200) & *(_QWORD *)(v8 + 16)) == 0LL )
    _interlockedbittestandset64((volatile signed __int32 *)(v8 + 16), *(unsigned __int8 *)(a1 + 209));
LABEL_23:
  _InterlockedAnd((volatile signed __int32 *)a2, ~((v9 << 24) | 0x80));
  return v8;
}
