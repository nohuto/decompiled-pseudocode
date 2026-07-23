/*
 * XREFs of KiResumeThread @ 0x1402DD2DC
 * Callers:
 *     KiThawSingleThread @ 0x1402DD1F8 (KiThawSingleThread.c)
 *     KeResumeThread @ 0x140455D98 (KeResumeThread.c)
 *     KeForceResumeThread @ 0x1404752D0 (KeForceResumeThread.c)
 *     KiAdjustThreadTimer @ 0x1405BFB6C (KiAdjustThreadTimer.c)
 * Callees:
 *     KeInsertQueueDpc @ 0x140284900 (KeInsertQueueDpc.c)
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiAcquireKobjectLockSafe @ 0x1402C72D0 (KiAcquireKobjectLockSafe.c)
 *     KiInsertQueueInternal @ 0x1402CC724 (KiInsertQueueInternal.c)
 *     KiSignalThread @ 0x1402CCDD0 (KiSignalThread.c)
 *     KiSignalThreadForApc @ 0x1402DD8B0 (KiSignalThreadForApc.c)
 *     KiTryUnwaitThread @ 0x1402F28C0 (KiTryUnwaitThread.c)
 *     KiComputeDueTime @ 0x140316E40 (KiComputeDueTime.c)
 *     KiInsertTimerTable @ 0x140316F50 (KiInsertTimerTable.c)
 *     KiTimerWaitTest @ 0x140317320 (KiTimerWaitTest.c)
 *     KiTraceSetTimer @ 0x140471C1C (KiTraceSetTimer.c)
 */

void __fastcall KiResumeThread(__int64 a1, __int64 a2, __int64 a3)
{
  char v3; // r14
  unsigned int v4; // edi
  _DWORD *v7; // rsi
  _QWORD *v8; // rbx
  _QWORD *v9; // rdi
  _QWORD *v10; // rax
  char v11; // cl
  __int64 v12; // r8
  char v13; // cl
  unsigned __int8 v14; // bp
  unsigned __int8 v15; // r15
  __int64 v16; // rdi
  __int64 v17; // rsi
  __int64 *v18; // rcx
  int v19; // edi
  unsigned int v20; // esi
  unsigned int v21; // edi
  __int64 v22; // rdx
  char v23; // dl
  int v24; // eax
  __int64 v25; // rdx
  int v26; // [rsp+70h] [rbp+18h] BYREF

  v26 = 0;
  v3 = a3;
  v4 = 0;
  *(_DWORD *)(a1 + 740) = 1;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
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
    while ( *(_QWORD *)(a1 + 64) );
  }
  if ( *(_BYTE *)(a1 + 388) != 5 )
    goto LABEL_8;
  v13 = *(_BYTE *)(a1 + 112);
  if ( (v13 & 7) != 4 )
    goto LABEL_8;
  if ( !v3 )
  {
    *(_BYTE *)(a1 + 112) = v13 & 0xF8 | 5;
    v14 = 0;
    *(_QWORD *)(a1 + 64) = 0LL;
    v15 = *(_BYTE *)(a1 + 587);
    while ( v14 < v15 )
    {
      v16 = *(_QWORD *)(a1 + 208) + 48LL * v14;
      if ( *(_BYTE *)(v16 + 17) == 6 )
      {
        v17 = *(_QWORD *)(v16 + 32);
        *(_BYTE *)(v16 + 17) = 4;
        KiAcquireKobjectLockSafe((volatile signed __int32 *)v17);
        if ( *(int *)(v17 + 4) > 0 || (*(_BYTE *)v17 & 0x7F) == 2 )
        {
          _InterlockedAnd((volatile signed __int32 *)v17, 0xFFFFFF7F);
          *(_BYTE *)(v16 + 17) = 5;
          v3 = 1;
          break;
        }
        v18 = *(__int64 **)(v17 + 16);
        if ( *v18 != v17 + 8 )
          __fastfail(3u);
        *(_QWORD *)v16 = v17 + 8;
        *(_QWORD *)(v16 + 8) = v18;
        *v18 = v16;
        *(_QWORD *)(v17 + 16) = v16;
        _InterlockedAnd((volatile signed __int32 *)v17, 0xFFFFFF7F);
      }
      ++v14;
    }
    v19 = 0;
    if ( _bittest((const signed __int32 *)(a1 + 116), 0x11u) && !v3 )
    {
      v25 = *(_QWORD *)(a1 + 280);
      *(_DWORD *)(a1 + 256) |= 0x40000080u;
      if ( (unsigned int)KiComputeDueTime(a1 + 256, v25, 0LL, &v26) )
      {
        if ( (unsigned __int8)KiInsertTimerTable(a2, (int)a1 + 256, 0, v26, 0LL) )
        {
          if ( _bittest((_DWORD *)&PerfGlobalGroupMask + 2, 0x11u) )
          {
            LOBYTE(a3) = 1;
            KiTraceSetTimer(a1 + 256, 0LL, a3);
          }
          else
          {
            _InterlockedAnd((volatile signed __int32 *)(a1 + 256), 0xFFFFFF7F);
          }
        }
        else
        {
          KiTimerWaitTest(a2, a1 + 256, 0LL);
        }
        v19 = 1;
      }
      else
      {
        v3 = 1;
        v19 = 0;
      }
    }
    v20 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
    {
      do
      {
        if ( (++v20 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && KiCheckVpBackingLongSpinWaitHypercall() )
        {
          HvlNotifyLongSpinWait(v20);
        }
        else
        {
          _mm_pause();
        }
      }
      while ( *(_QWORD *)(a1 + 64) );
    }
    v13 = *(_BYTE *)(a1 + 112);
    v21 = *(_DWORD *)(a1 + 116) & 0xFFFDFDFF | (v19 << 9) & 0xFFFDFFFF;
    *(_DWORD *)(a1 + 116) = v21;
    if ( (v13 & 0xE7) != 5 )
      goto LABEL_65;
    v22 = *(char *)(a1 + 391);
    if ( (v21 & 0x10) == 0 )
    {
      if ( (*(_BYTE *)(a1 + 194) & 2) != 0 && (_BYTE)v22 )
      {
        v23 = v13;
        goto LABEL_64;
      }
      v23 = v13;
      goto LABEL_45;
    }
    if ( !*(_BYTE *)(v22 + a1 + 114) )
    {
      if ( (_BYTE)v22 && *(_QWORD *)(a1 + 168) != a1 + 168 )
      {
        v24 = 192;
        goto LABEL_44;
      }
      if ( !*(_BYTE *)(a1 + 114) )
      {
        v24 = 0;
        goto LABEL_44;
      }
    }
    v24 = 257;
LABEL_44:
    v23 = v13;
    if ( v24 )
    {
LABEL_64:
      v13 = v23;
LABEL_65:
      v3 = 1;
      goto LABEL_46;
    }
LABEL_45:
    v13 = v23;
    if ( *(_BYTE *)(a1 + 643) != 37 || (*(_DWORD *)(a1 + 120) & 0x10) == 0 )
      goto LABEL_46;
    goto LABEL_65;
  }
LABEL_46:
  *(_BYTE *)(a1 + 112) = v13 & 0xF8 | 1;
LABEL_8:
  if ( v3 )
  {
    if ( (*(_DWORD *)(a1 + 120) & 0x8000) != 0 )
    {
      if ( *(_BYTE *)(a1 + 388) == 5 )
        KiSignalThread(a2, a1, 256LL, 0LL);
    }
    else
    {
      LOBYTE(a3) = 2;
      KiSignalThreadForApc(a2, a1 + 648, a3, 0LL);
    }
  }
  *(_QWORD *)(a1 + 64) = 0LL;
  v7 = (_DWORD *)(a1 + 736);
  v8 = (_QWORD *)(a1 + 744);
  v9 = (_QWORD *)*v8;
  while ( v9 != v8 )
  {
    v10 = v9;
    v9 = (_QWORD *)*v9;
    v11 = *((_BYTE *)v10 + 16);
    switch ( v11 )
    {
      case 1:
        v12 = *((unsigned __int16 *)v10 + 9);
        goto LABEL_13;
      case 2:
        *((_BYTE *)v10 + 17) = 5;
        KiInsertQueueInternal(v10[3], v10);
        break;
      case 4:
        *((_BYTE *)v10 + 17) = 5;
        v7[1] = 0;
        KeInsertQueueDpc((PRKDPC)v10[3], v7, v10);
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
