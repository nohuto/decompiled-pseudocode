/*
 * XREFs of KiTimerWaitTest @ 0x140317320
 * Callers:
 *     KiResumeThread @ 0x1402DD2DC (KiResumeThread.c)
 *     KiProcessExpiredTimerList @ 0x140315CC0 (KiProcessExpiredTimerList.c)
 *     KeSetTimer @ 0x1403161F0 (KeSetTimer.c)
 *     KiSetTimerEx @ 0x140316810 (KiSetTimerEx.c)
 *     KiCommitThreadWait @ 0x140320100 (KiCommitThreadWait.c)
 *     KiAdjustTimerDueTimes @ 0x1404E0430 (KiAdjustTimerDueTimes.c)
 * Callees:
 *     KiInsertQueueDpc @ 0x140284920 (KiInsertQueueDpc.c)
 *     KiInsertQueueInternal @ 0x1402CC724 (KiInsertQueueInternal.c)
 *     KiTryUnwaitThread @ 0x1402F28C0 (KiTryUnwaitThread.c)
 *     KiInsertTimerTable @ 0x140316F50 (KiInsertTimerTable.c)
 *     KiDecodeTolerableDelayValue @ 0x14046BE58 (KiDecodeTolerableDelayValue.c)
 *     Feature_RebaseTimersAfterTimeAdjustments__private_IsEnabledNoReportingNoInline @ 0x1405C2018 (Feature_RebaseTimersAfterTimeAdjustments__private_IsEnabledNoReportingNoInline.c)
 */

unsigned __int64 __fastcall KiTimerWaitTest(__int64 a1, __int64 a2, unsigned int *a3)
{
  __int64 v3; // r14
  __int64 v4; // r9
  char v5; // r15
  char v7; // r15
  unsigned __int64 v9; // r14
  unsigned int *v10; // r12
  unsigned __int8 v11; // r13
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rbx
  unsigned int v15; // eax
  unsigned int v16; // ecx
  __int64 v17; // rcx
  __int64 v18; // rsi
  __int64 v19; // rcx
  unsigned int v20; // eax
  bool v21; // cc
  __int64 v22; // rax
  unsigned __int64 v23; // rdx
  unsigned __int64 v24; // rax
  _QWORD *v25; // rbx
  _QWORD *v26; // rsi
  _QWORD *v27; // rcx
  unsigned __int64 v28; // rax
  _QWORD *v29; // rdx
  char v30; // cl
  bool v31; // zf
  unsigned __int64 v32; // rax
  char v33; // cl
  __int64 v34; // r8
  unsigned int v35; // eax
  __int64 v36; // rax
  int v38; // [rsp+30h] [rbp-48h]
  __int64 v39; // [rsp+88h] [rbp+10h] BYREF

  v3 = *(_QWORD *)(a2 + 48);
  v4 = 0LL;
  v5 = *(_BYTE *)a2;
  v39 = 0LL;
  v7 = v5 & 0x7F;
  v9 = KiWaitAlways ^ _byteswap_uint64(a2 ^ __ROL8__(KiWaitNever ^ v3, KiWaitNever));
  v10 = a3;
  v11 = -1;
  v12 = *(int *)(a2 + 60);
  v13 = 1LL;
  if ( (_DWORD)v12 )
  {
    v14 = -10000 * v12;
    v11 = 0;
    if ( *(_BYTE *)(a1 + 14522) )
    {
      v15 = *(_DWORD *)(a1 + 34404) + 1;
      *(_DWORD *)(a1 + 34404) = v15;
      if ( v15 >= 0xBB8 )
      {
        v16 = *(_DWORD *)(a1 + 34408);
        *(_DWORD *)(a1 + 34404) = 0;
        if ( v16 < 0x5F5E100 )
          *(_DWORD *)(a1 + 34408) = KeTimeIncrement + v16;
      }
      v14 -= *(unsigned int *)(a1 + 34408);
    }
    if ( MEMORY[0xFFFFF78000000008] + v14 - *(_QWORD *)(a2 + 24) >= 0 )
      *(_QWORD *)(a2 + 24) = MEMORY[0xFFFFF78000000008];
    v18 = 0LL;
    v38 = *(_DWORD *)a2;
    v17 = *(unsigned int *)a2;
    if ( BYTE1(*(_DWORD *)a2) >= 4u )
    {
      v19 = (unsigned int)((int)v17 >> 8);
      LOBYTE(v19) = (unsigned __int8)v19 >> 2;
      v20 = KiDecodeTolerableDelayValue(v19);
      v4 = 0LL;
      v18 = v20;
      v13 = 1LL;
    }
    if ( !KiGlobalTimerResolutionRequests )
    {
      v17 = *(_QWORD *)(a2 + 8);
      a3 = (unsigned int *)(a2 + 8);
      *(_WORD *)(a2 + 58) = 1;
      if ( v17 == a2 + 8 )
        goto LABEL_19;
      while ( 1 )
      {
        v21 = *(_BYTE *)(v17 + 16) <= 1u;
        v22 = v17;
        v17 = *(_QWORD *)v17;
        if ( v21 )
        {
          v13 = *(_QWORD *)(*(_QWORD *)(v22 + 24) + 544LL);
          if ( (*(_DWORD *)(v13 + 500) & 0x1000) != 0 && (*(_DWORD *)(v13 + 1532) & 0x4000000) == 0 )
            break;
        }
        if ( (unsigned int *)v17 == a3 )
          goto LABEL_19;
      }
    }
    *(_WORD *)(a2 + 58) = 0;
LABEL_19:
    BYTE1(v38) &= ~1u;
    HIBYTE(v38) = 64;
    do
    {
      *(_QWORD *)(a2 + 24) -= v14;
      if ( (unsigned int)Feature_RebaseTimersAfterTimeAdjustments__private_IsEnabledNoReportingNoInline(
                           v17,
                           v13,
                           a3,
                           v4) )
      {
        v24 = *(_QWORD *)(a2 + 24);
        v23 = -1LL;
        if ( v24 + v18 >= v24 )
          v23 = v24 + v18;
      }
      else
      {
        v23 = v18 + *(_QWORD *)(a2 + 24);
      }
      BYTE2(v38) = v23 >> 18;
      *(_DWORD *)a2 = v38;
    }
    while ( !KiInsertTimerTable(a1, a2, v9, BYTE2(v38), 0LL) );
    LODWORD(v13) = 1;
  }
  v25 = *(_QWORD **)(a2 + 8);
  v26 = (_QWORD *)(a2 + 8);
  *(_DWORD *)(a2 + 4) = v13;
  if ( v7 != 8 )
  {
    if ( v25 != v26 )
    {
      while ( 1 )
      {
        v27 = (_QWORD *)*v25;
        v28 = (unsigned __int64)v25;
        v25 = v27;
        if ( v27[1] != v28 || (v29 = *(_QWORD **)(v28 + 8), *v29 != v28) )
          __fastfail(3u);
        *v29 = v27;
        v27[1] = v29;
        v30 = *(_BYTE *)(v28 + 16);
        switch ( v30 )
        {
          case 1:
            if ( (unsigned __int8)KiTryUnwaitThread(a1, v28, *(unsigned __int16 *)(v28 + 18), 0LL) )
            {
              v31 = (*(_DWORD *)(a2 + 4))-- == 1;
              if ( v31 )
                goto LABEL_55;
            }
            break;
          case 2:
            *(_BYTE *)(v28 + 17) = 5;
            KiInsertQueueInternal(*(_QWORD *)(v28 + 24), (__int64 *)v28);
            v31 = (*(_DWORD *)(a2 + 4))-- == 1;
            if ( v31 )
              goto LABEL_55;
            break;
          case 4:
            *(_BYTE *)(v28 + 17) = 5;
            *(_DWORD *)(a2 + 4) = 0;
            KiInsertQueueDpc(*(_QWORD *)(v28 + 24), a2, v28, 0LL, 0);
            break;
          default:
            KiTryUnwaitThread(a1, v28, 256LL, 0LL);
            break;
        }
        if ( v25 == v26 )
          goto LABEL_55;
      }
    }
    goto LABEL_55;
  }
  if ( v25 == v26 )
    goto LABEL_54;
  do
  {
    v32 = (unsigned __int64)v25;
    v25 = (_QWORD *)*v25;
    v33 = *(_BYTE *)(v32 + 16);
    switch ( v33 )
    {
      case 1:
        v34 = *(unsigned __int16 *)(v32 + 18);
        break;
      case 2:
        *(_BYTE *)(v32 + 17) = 5;
        KiInsertQueueInternal(*(_QWORD *)(v32 + 24), (__int64 *)v32);
        continue;
      case 4:
        *(_BYTE *)(v32 + 17) = 5;
        *(_DWORD *)(a2 + 4) = 0;
        KiInsertQueueDpc(*(_QWORD *)(v32 + 24), a2, v32, 0LL, 0);
        continue;
      default:
        v34 = 256LL;
        break;
    }
    KiTryUnwaitThread(a1, v32, v34, 0LL);
  }
  while ( v25 != v26 );
  v26 = (_QWORD *)(a2 + 8);
LABEL_54:
  v26[1] = v26;
  *v26 = v26;
LABEL_55:
  if ( !v9 )
    goto LABEL_64;
  if ( v10 )
  {
    if ( KiSerializeTimerExpiration && *(_WORD *)(v9 + 2) >= 0x800u || *(_BYTE *)v9 == 26 && *(_BYTE *)(a1 + 14520) )
    {
      v35 = *v10;
      goto LABEL_67;
    }
    v36 = *(_QWORD *)(a1 + 200);
    *(_QWORD *)(a1 + 14432) = v9;
    if ( (v36 & *(_QWORD *)(v9 + 16)) == 0 )
      _interlockedbittestandset64((volatile signed __int32 *)(v9 + 16), *(unsigned __int8 *)(a1 + 209));
LABEL_64:
    _InterlockedAnd((volatile signed __int32 *)a2, ~((v11 << 24) | 0x80));
  }
  else
  {
    v10 = (unsigned int *)&v39;
    v35 = MEMORY[0xFFFFF78000000014];
    v39 = MEMORY[0xFFFFF78000000014];
LABEL_67:
    KiInsertQueueDpc(v9, v35, v10[1], a2, v11);
    return 0LL;
  }
  return v9;
}
