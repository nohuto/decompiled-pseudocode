/*
 * XREFs of KiSetSystemTimeDpc @ 0x140477490
 * Callers:
 *     <none>
 * Callees:
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiExitDispatcher @ 0x1402C7330 (KiExitDispatcher.c)
 *     KeWakeAddressAll @ 0x1402CA630 (KeWakeAddressAll.c)
 *     KiUpdateSystemTime @ 0x1404A2140 (KiUpdateSystemTime.c)
 *     KeAdjustInterruptTime @ 0x1404B9764 (KeAdjustInterruptTime.c)
 *     KiAdjustTimerDueTimes @ 0x1404E0430 (KiAdjustTimerDueTimes.c)
 *     KiHaltOnAddress @ 0x1404F7B98 (KiHaltOnAddress.c)
 *     KeCanUseHaltOnAddress @ 0x1404F7F60 (KeCanUseHaltOnAddress.c)
 */

void __fastcall KiSetSystemTimeDpc(__int64 a1, __int64 a2, volatile signed __int32 *a3, unsigned __int64 a4)
{
  __int64 v5; // r13
  signed __int32 v6; // eax
  unsigned int v7; // edi
  volatile signed __int32 v8; // eax
  unsigned int v9; // r14d
  char v10; // r15
  struct _KPRCB *CurrentPrcb; // r12
  __int64 p_TimerTable; // r15
  unsigned int v13; // edx
  __int64 v14; // rcx
  _QWORD *v15; // rax
  __int64 v16; // rcx
  signed __int32 v17; // eax
  unsigned int v18; // edi
  unsigned int v19; // r14d
  char v20; // r12
  signed __int32 v21; // eax
  unsigned int v22; // edi
  unsigned int v23; // esi
  char v24; // r15
  unsigned __int32 v25; // ecx
  unsigned int v26; // eax
  unsigned __int32 v27; // r8d
  unsigned __int32 v28; // ecx
  unsigned int v29; // eax
  unsigned __int32 v30; // r8d
  signed __int32 v31; // ecx
  unsigned int v32; // eax
  signed __int32 v33; // edx
  signed __int32 v34; // r8d
  int v35; // esi
  __int64 v36; // rdx
  __int64 v37; // rax
  int v38; // esi
  int v39; // r14d
  __int32 v40; // [rsp+30h] [rbp-20h] BYREF
  struct _KPRCB *v41; // [rsp+38h] [rbp-18h]
  __int32 v42; // [rsp+98h] [rbp+48h] BYREF
  volatile signed __int32 *v43; // [rsp+A0h] [rbp+50h]
  __int32 v44; // [rsp+A8h] [rbp+58h] BYREF

  v43 = a3;
  v5 = a2;
  v6 = _InterlockedDecrement((volatile signed __int32 *)a4);
  v7 = ~v6 & 0x80000000;
  if ( (v6 & 0x3FFFFFFF) != 0 )
  {
    v8 = *(_DWORD *)a4;
    v9 = 0;
    v10 = 0;
    while ( (v8 & 0x80000000) != v7 )
    {
      if ( (++v9 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && KiCheckVpBackingLongSpinWaitHypercall() )
      {
        ++v10;
        if ( (unsigned __int8)KeCanUseHaltOnAddress() && (KiVelocityFlags & 0x20000) != 0 && (v10 & 7) == 0 )
        {
          v25 = *(_DWORD *)a4;
          v26 = *(_DWORD *)a4 & 0x80000000;
          v42 = *(_DWORD *)a4;
          if ( v26 != v7 )
          {
            LODWORD(a2) = v25;
            v27 = v25;
            do
            {
              v35 = v25 | 0x40000000;
              v25 = _InterlockedCompareExchange((volatile signed __int32 *)a4, v25 | 0x40000000, a2);
              if ( v25 == v27 )
              {
                v42 = v35;
                do
                {
                  KiHaltOnAddress(a4, &v42, 4LL);
                  v25 = *(_DWORD *)a4;
                }
                while ( *(_DWORD *)a4 == v35 );
              }
              v42 = v25;
              a2 = v25;
              v27 = v25;
            }
            while ( (v25 & 0x80000000) != v7 );
          }
        }
        else
        {
          HvlNotifyLongSpinWait(v9);
        }
      }
      else
      {
        _mm_pause();
      }
      v8 = *(_DWORD *)a4;
    }
  }
  else
  {
    v42 = _InterlockedExchange((volatile __int32 *)a4, *(_DWORD *)(a4 + 4) | v7);
    if ( (v42 & 0x40000000) != 0 )
      KeWakeAddressAll(a4, a2);
  }
  CurrentPrcb = KeGetCurrentPrcb();
  v41 = CurrentPrcb;
  if ( KiSerializeTimerExpiration )
  {
    if ( !CurrentPrcb->ClockOwner )
    {
      p_TimerTable = 0LL;
      goto LABEL_20;
    }
    p_TimerTable = KiProcessorBlock[0] + 16640;
  }
  else
  {
    p_TimerTable = (__int64)&CurrentPrcb->TimerTable;
    if ( !CurrentPrcb->ClockOwner )
      goto LABEL_20;
  }
  **(_QWORD **)(v5 + 16) = MEMORY[0xFFFFF78000000014];
  v13 = *(_DWORD *)(v5 + 4);
  v14 = **(_QWORD **)(v5 + 8);
  v15 = *(_QWORD **)(v5 + 16);
  *(_QWORD *)(v5 + 24) = v14;
  v16 = v14 - *v15;
  *(_QWORD *)(v5 + 24) = v16;
  if ( (v13 & 1) != 0 )
  {
    v36 = v13 >> 1;
    LOBYTE(v36) = v36 & 1;
    if ( (unsigned __int8)KeAdjustInterruptTime(v16, v36) )
    {
      v37 = -*(_QWORD *)(v5 + 24);
      *(_BYTE *)v5 = 1;
      *(_QWORD *)(v5 + 24) = v37;
    }
  }
  else
  {
    KiUpdateSystemTime(v16, 0LL, v13);
  }
LABEL_20:
  v17 = _InterlockedDecrement((volatile signed __int32 *)a4);
  v18 = ~v17 & 0x80000000;
  if ( (v17 & 0x3FFFFFFF) != 0 )
  {
    v19 = 0;
    v20 = 0;
    while ( (*(_DWORD *)a4 & 0x80000000) != v18 )
    {
      if ( (++v19 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && KiCheckVpBackingLongSpinWaitHypercall() )
      {
        ++v20;
        if ( (unsigned __int8)KeCanUseHaltOnAddress() && (KiVelocityFlags & 0x20000) != 0 && (v20 & 7) == 0 )
        {
          v28 = *(_DWORD *)a4;
          v29 = *(_DWORD *)a4 & 0x80000000;
          v44 = *(_DWORD *)a4;
          if ( v29 != v18 )
          {
            LODWORD(a2) = v28;
            v30 = v28;
            do
            {
              v38 = v28 | 0x40000000;
              v28 = _InterlockedCompareExchange((volatile signed __int32 *)a4, v28 | 0x40000000, a2);
              if ( v28 == v30 )
              {
                v44 = v38;
                do
                {
                  KiHaltOnAddress(a4, &v44, 4LL);
                  v28 = *(_DWORD *)a4;
                }
                while ( *(_DWORD *)a4 == v38 );
              }
              v44 = v28;
              a2 = v28;
              v30 = v28;
            }
            while ( (v28 & 0x80000000) != v18 );
          }
        }
        else
        {
          HvlNotifyLongSpinWait(v19);
        }
      }
      else
      {
        _mm_pause();
      }
    }
    CurrentPrcb = v41;
  }
  else
  {
    v44 = _InterlockedExchange((volatile __int32 *)a4, *(_DWORD *)(a4 + 4) | v18);
    if ( (v44 & 0x40000000) != 0 )
      KeWakeAddressAll(a4, a2);
  }
  if ( *(_QWORD *)(v5 + 24) )
  {
    if ( p_TimerTable )
      KiAdjustTimerDueTimes(CurrentPrcb, p_TimerTable, v5);
    v21 = _InterlockedDecrement((volatile signed __int32 *)a4);
    v22 = ~v21 & 0x80000000;
    if ( (v21 & 0x3FFFFFFF) != 0 )
    {
      v23 = 0;
      v24 = 0;
      while ( (*(_DWORD *)a4 & 0x80000000) != v22 )
      {
        if ( (++v23 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && KiCheckVpBackingLongSpinWaitHypercall() )
        {
          ++v24;
          if ( (unsigned __int8)KeCanUseHaltOnAddress() && (KiVelocityFlags & 0x20000) != 0 && (v24 & 7) == 0 )
          {
            v31 = *(_DWORD *)a4;
            v32 = *(_DWORD *)a4 & 0x80000000;
            v40 = *(_DWORD *)a4;
            if ( v32 != v22 )
            {
              v33 = v31;
              v34 = v31;
              do
              {
                v39 = v31 | 0x40000000;
                v31 = _InterlockedCompareExchange((volatile signed __int32 *)a4, v31 | 0x40000000, v33);
                if ( v31 == v34 )
                {
                  v40 = v39;
                  do
                  {
                    KiHaltOnAddress(a4, &v40, 4LL);
                    v31 = *(_DWORD *)a4;
                  }
                  while ( *(_DWORD *)a4 == v39 );
                }
                v40 = v31;
                v33 = v31;
                v34 = v31;
              }
              while ( (v31 & 0x80000000) != v22 );
            }
          }
          else
          {
            HvlNotifyLongSpinWait(v23);
          }
        }
        else
        {
          _mm_pause();
        }
      }
    }
    else
    {
      v40 = _InterlockedExchange((volatile __int32 *)a4, *(_DWORD *)(a4 + 4) | v22);
      if ( (v40 & 0x40000000) != 0 )
        KeWakeAddressAll(a4, a2);
    }
  }
  _InterlockedDecrement(v43);
  KiExitDispatcher((unsigned __int64)CurrentPrcb, 0LL, 1u, 0, 2u);
}
