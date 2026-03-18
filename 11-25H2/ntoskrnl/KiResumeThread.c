/*
 * XREFs of KiResumeThread @ 0x1402F2268
 * Callers:
 *     KiThawSingleThread @ 0x1402F2184 (KiThawSingleThread.c)
 *     KeResumeThread @ 0x14046230C (KeResumeThread.c)
 *     KeForceResumeThread @ 0x14047D350 (KeForceResumeThread.c)
 *     KiAdjustThreadTimer @ 0x1405BE4BC (KiAdjustThreadTimer.c)
 * Callees:
 *     KeInsertQueueDpc @ 0x140252D80 (KeInsertQueueDpc.c)
 *     KiInsertQueueInternal @ 0x14027F170 (KiInsertQueueInternal.c)
 *     KiTryUnwaitThread @ 0x140280490 (KiTryUnwaitThread.c)
 *     KiAcquireKobjectLockSafe @ 0x140287200 (KiAcquireKobjectLockSafe.c)
 *     KiSignalThread @ 0x1402E6E10 (KiSignalThread.c)
 *     KiInsertTimerTable @ 0x1402EDE10 (KiInsertTimerTable.c)
 *     KiTimerWaitTest @ 0x1402EEDC0 (KiTimerWaitTest.c)
 *     KiSignalThreadForApc @ 0x1402F1D40 (KiSignalThreadForApc.c)
 *     KiComputeDueTime @ 0x1402F4350 (KiComputeDueTime.c)
 *     HvlNotifyLongSpinWait @ 0x14032DED0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14032DF00 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiTraceSetTimer @ 0x1403F95AC (KiTraceSetTimer.c)
 */

void __fastcall KiResumeThread(__int64 a1, __int64 a2, char a3)
{
  unsigned int v4; // edi
  __int64 v6; // rbx
  _DWORD *v7; // rsi
  _QWORD *v8; // rbx
  _QWORD *v9; // rdi
  __int64 v10; // rax
  char v11; // cl
  __int64 v12; // r8
  char v13; // cl
  unsigned __int8 v14; // bp
  unsigned __int8 v15; // r15
  __int64 v16; // rdi
  __int64 v17; // rsi
  int v18; // edi
  unsigned int v19; // esi
  unsigned int v20; // edi
  __int64 v21; // rdx
  char v22; // dl
  int v23; // eax
  __int64 v24; // rdx
  __int64 v25; // r8
  unsigned int v26; // [rsp+70h] [rbp+18h] BYREF

  v26 = 0;
  v4 = 0;
  *(_DWORD *)(a1 + 740) = 1;
  v6 = a1;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v6 + 64), 0LL) )
  {
    do
    {
      if ( (++v4 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(a1) )
      {
        HvlNotifyLongSpinWait(v4);
      }
      else
      {
        _mm_pause();
      }
    }
    while ( *(_QWORD *)(v6 + 64) );
  }
  if ( *(_BYTE *)(v6 + 388) != 5 )
    goto LABEL_8;
  v13 = *(_BYTE *)(v6 + 112);
  if ( (v13 & 7) != 4 )
    goto LABEL_8;
  if ( !a3 )
  {
    LOBYTE(a1) = v13 & 0xF8 | 5;
    *(_BYTE *)(v6 + 112) = a1;
    v14 = 0;
    *(_QWORD *)(v6 + 64) = 0LL;
    v15 = *(_BYTE *)(v6 + 587);
    while ( v14 < v15 )
    {
      v16 = *(_QWORD *)(v6 + 208) + 48LL * v14;
      if ( *(_BYTE *)(v16 + 17) == 6 )
      {
        v17 = *(_QWORD *)(v16 + 32);
        *(_BYTE *)(v16 + 17) = 4;
        KiAcquireKobjectLockSafe((volatile signed __int32 *)v17);
        if ( *(int *)(v17 + 4) > 0 || (*(_BYTE *)v17 & 0x7F) == 2 )
        {
          _InterlockedAnd((volatile signed __int32 *)v17, 0xFFFFFF7F);
          *(_BYTE *)(v16 + 17) = 5;
          a3 = 1;
          break;
        }
        a1 = *(_QWORD *)(v17 + 16);
        if ( *(_QWORD *)a1 != v17 + 8 )
          __fastfail(3u);
        *(_QWORD *)v16 = v17 + 8;
        *(_QWORD *)(v16 + 8) = a1;
        *(_QWORD *)a1 = v16;
        *(_QWORD *)(v17 + 16) = v16;
        _InterlockedAnd((volatile signed __int32 *)v17, 0xFFFFFF7F);
      }
      ++v14;
    }
    v18 = 0;
    if ( _bittest((const signed __int32 *)(v6 + 116), 0x11u) && !a3 )
    {
      v24 = *(_QWORD *)(v6 + 280);
      *(_DWORD *)(v6 + 256) |= 0x40000080u;
      if ( (unsigned int)KiComputeDueTime(v6 + 256, v24, 0LL, &v26) )
      {
        if ( KiInsertTimerTable(a2, v6 + 256, 0LL, v26, 0LL) )
        {
          if ( _bittest((_DWORD *)&PerfGlobalGroupMask + 2, 0x11u) )
          {
            LOBYTE(v25) = 1;
            KiTraceSetTimer(v6 + 256, 0LL, v25);
          }
          else
          {
            _InterlockedAnd((volatile signed __int32 *)(v6 + 256), 0xFFFFFF7F);
          }
        }
        else
        {
          KiTimerWaitTest(a2, v6 + 256, 0LL);
        }
        v18 = 1;
      }
      else
      {
        a3 = 1;
        v18 = 0;
      }
    }
    v19 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v6 + 64), 0LL) )
    {
      do
      {
        if ( (++v19 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(a1) )
        {
          HvlNotifyLongSpinWait(v19);
        }
        else
        {
          _mm_pause();
        }
      }
      while ( *(_QWORD *)(v6 + 64) );
    }
    v13 = *(_BYTE *)(v6 + 112);
    v20 = *(_DWORD *)(v6 + 116) & 0xFFFDFDFF | (v18 << 9) & 0xFFFDFFFF;
    *(_DWORD *)(v6 + 116) = v20;
    if ( (v13 & 0xE7) != 5 )
      goto LABEL_68;
    v21 = *(char *)(v6 + 391);
    if ( (v20 & 0x10) == 0 )
    {
      if ( (*(_BYTE *)(v6 + 194) & 2) != 0 && (_BYTE)v21 )
      {
        v22 = v13;
        goto LABEL_67;
      }
      v22 = v13;
      goto LABEL_48;
    }
    if ( !*(_BYTE *)(v21 + v6 + 114) )
    {
      if ( (_BYTE)v21 && *(_QWORD *)(v6 + 168) != v6 + 168 )
      {
        v23 = 192;
        goto LABEL_47;
      }
      if ( !*(_BYTE *)(v6 + 114) )
      {
        v23 = 0;
        goto LABEL_47;
      }
    }
    v23 = 257;
LABEL_47:
    v22 = v13;
    if ( v23 )
    {
LABEL_67:
      v13 = v22;
LABEL_68:
      a3 = 1;
      goto LABEL_49;
    }
LABEL_48:
    v13 = v22;
    if ( *(_BYTE *)(v6 + 643) != 37 || (*(_DWORD *)(v6 + 120) & 0x10) == 0 )
      goto LABEL_49;
    goto LABEL_68;
  }
LABEL_49:
  *(_BYTE *)(v6 + 112) = v13 & 0xF8 | 1;
LABEL_8:
  if ( a3 )
  {
    if ( (*(_DWORD *)(v6 + 120) & 0x8000) != 0 )
    {
      if ( *(_BYTE *)(v6 + 388) == 5 )
        KiSignalThread(a2, v6, 256LL, 0LL);
    }
    else
    {
      KiSignalThreadForApc(a2, v6 + 648, 2, 0);
    }
  }
  *(_QWORD *)(v6 + 64) = 0LL;
  v7 = (_DWORD *)(v6 + 736);
  v8 = (_QWORD *)(v6 + 744);
  v9 = (_QWORD *)*v8;
  while ( v9 != v8 )
  {
    v10 = (__int64)v9;
    v9 = (_QWORD *)*v9;
    v11 = *(_BYTE *)(v10 + 16);
    switch ( v11 )
    {
      case 1:
        v12 = *(unsigned __int16 *)(v10 + 18);
        goto LABEL_13;
      case 2:
        *(_BYTE *)(v10 + 17) = 5;
        KiInsertQueueInternal(*(_QWORD *)(v10 + 24), (__int64 *)v10);
        break;
      case 4:
        *(_BYTE *)(v10 + 17) = 5;
        v7[1] = 0;
        KeInsertQueueDpc(*(PRKDPC *)(v10 + 24), v7, (PVOID)v10);
        break;
      default:
        v12 = 256LL;
LABEL_13:
        KiTryUnwaitThread(a2, v10, v12, 0LL);
        break;
    }
  }
  v8[1] = v8;
  *v8 = v8;
}
