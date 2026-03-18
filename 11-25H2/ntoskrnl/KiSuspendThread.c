/*
 * XREFs of KiSuspendThread @ 0x1402F15AC
 * Callers:
 *     KiFreezeSingleThread @ 0x1402F20B4 (KiFreezeSingleThread.c)
 *     KeSuspendThread @ 0x1404875A0 (KeSuspendThread.c)
 *     KiAdjustThreadTimer @ 0x1405BE4BC (KiAdjustThreadTimer.c)
 * Callees:
 *     KiDecrementProcessStackCount @ 0x140228DE0 (KiDecrementProcessStackCount.c)
 *     KiAcquireKobjectLockSafe @ 0x140287200 (KiAcquireKobjectLockSafe.c)
 *     KiSignalThread @ 0x1402E6E10 (KiSignalThread.c)
 *     KiInsertQueueApc @ 0x1402F0510 (KiInsertQueueApc.c)
 *     KiSignalThreadForApc @ 0x1402F1D40 (KiSignalThreadForApc.c)
 *     KiCancelTimer @ 0x1402F33D0 (KiCancelTimer.c)
 *     HvlNotifyLongSpinWait @ 0x14032DED0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14032DF00 (KiCheckVpBackingLongSpinWaitHypercall.c)
 */

char __fastcall KiSuspendThread(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r14
  char v4; // si
  unsigned int v5; // edi
  int v7; // eax
  int v8; // ecx
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rdi
  unsigned __int64 v11; // rbp
  unsigned int v12; // edi
  char v13; // al
  char result; // al
  volatile signed __int32 *v15; // rsi
  unsigned __int64 *v16; // rax
  unsigned __int64 v17; // rsi

  v3 = a2;
  v4 = 0;
  v5 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
  {
    do
    {
      if ( (++v5 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(a1) )
      {
        HvlNotifyLongSpinWait(v5);
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
        v4 = 1;
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
        if ( v4 )
        {
          LOBYTE(a3) = 2;
          KiSignalThreadForApc(v3, a1 + 648, a3, 0LL);
        }
      }
      else
      {
        v7 = *(_DWORD *)(a1 + 116);
        v8 = v7 ^ (*(char *)(a1 + 391) << 18);
        *(_BYTE *)(a1 + 112) = 3;
        *(_BYTE *)(a1 + 193) = 1;
        *(_DWORD *)(a1 + 116) = v7 ^ v8 & 0x40000;
        *(_QWORD *)(a1 + 64) = 0LL;
        v9 = *(_QWORD *)(a1 + 208);
        v10 = v9 + 17;
        v11 = v9 + 48LL * *(unsigned __int8 *)(a1 + 587);
        do
        {
          if ( *(_BYTE *)v10 < 5u )
          {
            v15 = *(volatile signed __int32 **)(v10 + 15);
            KiAcquireKobjectLockSafe(v15);
            if ( *(_BYTE *)v10 == 4 )
            {
              a2 = v10 - 17;
              v9 = *(_QWORD *)(v10 - 17);
              if ( *(_QWORD *)(v9 + 8) != v10 - 17 || (v16 = *(unsigned __int64 **)(v10 - 9), *v16 != a2) )
                __fastfail(3u);
              *v16 = v9;
              *(_QWORD *)(v9 + 8) = v16;
            }
            _InterlockedAnd(v15, 0xFFFFFF7F);
            *(_BYTE *)v10 = 6;
          }
          v10 += 48LL;
        }
        while ( v10 - 17 != v11 );
        if ( (*(_DWORD *)(a1 + 116) & 0x200) != 0 )
        {
          LOBYTE(a2) = 1;
          v17 = MEMORY[0xFFFFF78000000008];
          if ( (unsigned __int8)KiCancelTimer(a1 + 256, a2) )
          {
            v9 = *(_QWORD *)(a1 + 280);
            if ( v9 <= v17 )
            {
              *(_QWORD *)(a1 + 280) = 0LL;
            }
            else if ( (*(_BYTE *)(a1 + 257) & 1) != 0 )
            {
              v9 = MEMORY[0xFFFFF78000000014] + *(_QWORD *)(a1 + 280) - v17;
              *(_QWORD *)(a1 + 280) = v9;
            }
            else
            {
              *(_QWORD *)(a1 + 280) = v17 - v9;
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
        v12 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
        {
          do
          {
            if ( (++v12 & HvlLongSpinCountMask) == 0
              && (HvlEnlightenments & 0x40) != 0
              && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v9) )
            {
              HvlNotifyLongSpinWait(v12);
            }
            else
            {
              _mm_pause();
            }
          }
          while ( *(_QWORD *)(a1 + 64) );
        }
        v13 = *(_BYTE *)(a1 + 112) & 0xF8 | 4;
        *(_DWORD *)(a1 + 116) = (*(_DWORD *)(a1 + 116) & 0xFFFDFFFF ^ ((*(_DWORD *)(a1 + 116) & 0x200) << 8)) & 0xFFFFFDFF;
        *(_BYTE *)(a1 + 112) = v13;
        if ( (v13 & 0x20) != 0 )
          KiSignalThread(v3, a1, 256LL, 0LL);
      }
    }
    v4 = 1;
  }
  result = v4;
  *(_QWORD *)(a1 + 64) = 0LL;
  return result;
}
