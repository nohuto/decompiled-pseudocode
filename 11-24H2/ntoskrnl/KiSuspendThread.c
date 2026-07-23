/*
 * XREFs of KiSuspendThread @ 0x1402DE060
 * Callers:
 *     KiFreezeSingleThread @ 0x1402DD7D8 (KiFreezeSingleThread.c)
 *     KeSuspendThread @ 0x14047E25C (KeSuspendThread.c)
 *     KiAdjustThreadTimer @ 0x1405BFB6C (KiAdjustThreadTimer.c)
 * Callees:
 *     KiDecrementProcessStackCount @ 0x14021EF60 (KiDecrementProcessStackCount.c)
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiAcquireKobjectLockSafe @ 0x1402C72D0 (KiAcquireKobjectLockSafe.c)
 *     KiSignalThread @ 0x1402CCDD0 (KiSignalThread.c)
 *     KiCancelTimer @ 0x1402DC730 (KiCancelTimer.c)
 *     KiSignalThreadForApc @ 0x1402DD8B0 (KiSignalThreadForApc.c)
 *     KiInsertQueueApc @ 0x1402DF8C0 (KiInsertQueueApc.c)
 */

char __fastcall KiSuspendThread(__int64 a1, __int64 a2)
{
  char v3; // si
  unsigned int v4; // edi
  int v6; // eax
  int v7; // ecx
  __int64 v8; // rcx
  __int64 v9; // rdi
  __int64 v10; // rbp
  unsigned int v11; // edi
  char v12; // al
  char result; // al
  volatile signed __int32 *v14; // rsi
  __int64 v15; // rcx
  _QWORD *v16; // rax
  unsigned __int64 v17; // rsi
  unsigned __int64 v18; // rcx

  v3 = 0;
  v4 = 0;
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
  if ( (*(_DWORD *)(a1 + 116) & 0x4000) != 0 )
  {
    if ( *(_DWORD *)(a1 + 740) )
    {
      *(_DWORD *)(a1 + 740) = 0;
      if ( !*(_BYTE *)(a1 + 730) )
      {
        v3 = 1;
        *(_BYTE *)(a1 + 730) = 1;
        KiInsertQueueApc(a1 + 648);
      }
      if ( KiDisableLightWeightSuspend
        || *(_BYTE *)(a1 + 388) != 5
        || (*(_BYTE *)(a1 + 112) & 7) != 1
        || *(_DWORD *)(a1 + 484)
        || *(_BYTE *)(a1 + 390)
        || *(_BYTE *)(a1 + 192)
        || *(_BYTE *)(a1 + 586)
        || *(_BYTE *)(*(_QWORD *)(a1 + 208) + 17LL) != 5 && *(_BYTE *)(*(_QWORD *)(a1 + 208) + 16LL) != 1 )
      {
        if ( v3 )
          KiSignalThreadForApc(a2, a1 + 648, 2, 0);
      }
      else
      {
        v6 = *(_DWORD *)(a1 + 116);
        v7 = v6 ^ (*(char *)(a1 + 391) << 18);
        *(_BYTE *)(a1 + 112) = 3;
        *(_BYTE *)(a1 + 193) = 1;
        *(_DWORD *)(a1 + 116) = v6 ^ v7 & 0x40000;
        *(_QWORD *)(a1 + 64) = 0LL;
        v8 = *(_QWORD *)(a1 + 208);
        v9 = v8 + 17;
        v10 = v8 + 48LL * *(unsigned __int8 *)(a1 + 587);
        do
        {
          if ( *(_BYTE *)v9 < 5u )
          {
            v14 = *(volatile signed __int32 **)(v9 + 15);
            KiAcquireKobjectLockSafe(v14);
            if ( *(_BYTE *)v9 == 4 )
            {
              v15 = *(_QWORD *)(v9 - 17);
              if ( *(_QWORD *)(v15 + 8) != v9 - 17 || (v16 = *(_QWORD **)(v9 - 9), *v16 != v9 - 17) )
                __fastfail(3u);
              *v16 = v15;
              *(_QWORD *)(v15 + 8) = v16;
            }
            _InterlockedAnd(v14, 0xFFFFFF7F);
            *(_BYTE *)v9 = 6;
          }
          v9 += 48LL;
        }
        while ( v9 - 17 != v10 );
        if ( (*(_DWORD *)(a1 + 116) & 0x200) != 0 )
        {
          v17 = MEMORY[0xFFFFF78000000008];
          if ( (unsigned __int8)KiCancelTimer(a1 + 256, 1) )
          {
            v18 = *(_QWORD *)(a1 + 280);
            if ( v18 <= v17 )
            {
              *(_QWORD *)(a1 + 280) = 0LL;
            }
            else if ( (*(_BYTE *)(a1 + 257) & 1) != 0 )
            {
              *(_QWORD *)(a1 + 280) = MEMORY[0xFFFFF78000000014] + *(_QWORD *)(a1 + 280) - v17;
            }
            else
            {
              *(_QWORD *)(a1 + 280) = v17 - v18;
            }
          }
          else
          {
            *(_QWORD *)(a1 + 280) = 0LL;
            *(_BYTE *)(a1 + 481) = 4;
            *(_QWORD *)(a1 + 264) = a1 + 464;
            *(_QWORD *)(a1 + 272) = a1 + 464;
          }
        }
        if ( (*(_DWORD *)(a1 + 120) & 0x4000) != 0
          && !_interlockedbittestandset((volatile signed __int32 *)(a1 + 120), 0x14u) )
        {
          KiDecrementProcessStackCount(*(_QWORD *)(a1 + 184));
        }
        v11 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
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
          while ( *(_QWORD *)(a1 + 64) );
        }
        v12 = *(_BYTE *)(a1 + 112) & 0xF8 | 4;
        *(_DWORD *)(a1 + 116) = (*(_DWORD *)(a1 + 116) & 0xFFFDFFFF ^ ((*(_DWORD *)(a1 + 116) & 0x200) << 8)) & 0xFFFFFDFF;
        *(_BYTE *)(a1 + 112) = v12;
        if ( (v12 & 0x20) != 0 )
          KiSignalThread(a2, a1, 256LL, 0LL);
      }
    }
    v3 = 1;
  }
  result = v3;
  *(_QWORD *)(a1 + 64) = 0LL;
  return result;
}
