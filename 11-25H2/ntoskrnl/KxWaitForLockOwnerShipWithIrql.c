/*
 * XREFs of KxWaitForLockOwnerShipWithIrql @ 0x14041FAB0
 * Callers:
 *     KiAcquireQueuedSpinLockInstrumented @ 0x140301030 (KiAcquireQueuedSpinLockInstrumented.c)
 * Callees:
 *     KiRemoveSystemWorkPriorityKick @ 0x14028BBC0 (KiRemoveSystemWorkPriorityKick.c)
 *     HvlNotifyLongSpinWait @ 0x14032DED0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14032DF00 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiWakeAddressAll @ 0x140456110 (KiWakeAddressAll.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KeCanUseHaltOnAddress @ 0x1404F81B0 (KeCanUseHaltOnAddress.c)
 *     KiAddHaltBlockToWaitList @ 0x1405B673C (KiAddHaltBlockToWaitList.c)
 *     KiWaitForSignal @ 0x1405B678C (KiWaitForSignal.c)
 */

__int64 __fastcall KxWaitForLockOwnerShipWithIrql(__int64 a1, _QWORD *a2, unsigned __int8 *a3)
{
  volatile signed __int64 *v3; // rbx
  bool v5; // al
  int v6; // edi
  int v7; // esi
  int v9; // esi
  signed __int64 v10; // rax
  signed __int64 v11; // rcx
  signed __int64 v12; // rtt
  unsigned __int8 CurrentIrql; // si
  struct _KPRCB *CurrentPrcb; // rcx
  signed __int32 *SchedulerAssist; // r8
  signed __int32 v16; // eax
  signed __int32 v17; // ett
  _QWORD v18[3]; // [rsp+20h] [rbp-50h] BYREF
  __int64 v19; // [rsp+38h] [rbp-38h]
  __int128 v20; // [rsp+40h] [rbp-30h]
  __int128 v21; // [rsp+50h] [rbp-20h]
  __int64 v22; // [rsp+60h] [rbp-10h]

  v3 = (volatile signed __int64 *)(a1 + 8);
  v22 = 0LL;
  v5 = (*(_QWORD *)(a1 + 8) & 4) != 0;
  *(_QWORD *)(a1 + 8) |= 1uLL;
  BYTE1(v22) = v5;
  v20 = 0LL;
  v21 = 0LL;
  *a2 = a1;
  if ( a3 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(*a3);
    if ( KiIrqlFlags )
      KiRaiseIrqlProcessIrqlFlags(CurrentIrql);
    *a3 = CurrentIrql;
    _enable();
  }
  v6 = 0;
  v7 = 0;
  DWORD1(v20) = 0;
  while ( 1 )
  {
    LODWORD(v20) = v6 + 1;
    if ( ((v6 + 1) & HvlLongSpinCountMask) == 0
      && (HvlEnlightenments & 0x40) != 0
      && KiCheckVpBackingLongSpinWaitHypercall() )
    {
      v9 = v7 + 1;
      DWORD1(v20) = v9;
      if ( (KiVelocityFlags & 0x10000) != 0 && (unsigned __int8)KeCanUseHaltOnAddress() && (v9 & 7) == 0 )
      {
        v10 = *v3;
        for ( *((_QWORD *)&v21 + 1) = v10; (v10 & 1) != 0; *((_QWORD *)&v21 + 1) = v10 )
        {
          if ( BYTE1(v22) )
            v11 = v10 & 0xFFFFFFFFFFFFFFFBuLL;
          else
            v11 = v10 | 4;
          *((_QWORD *)&v20 + 1) = v11;
          v12 = v10;
          v10 = _InterlockedCompareExchange64(v3, v11, v10);
          *(_QWORD *)&v21 = v10;
          if ( v12 == v10 )
          {
            do
            {
              v19 = 0LL;
              v18[0] = v3;
              v18[2] = 0LL;
              v18[1] = KeGetCurrentPrcb();
              KiAddHaltBlockToWaitList(KiHaltOnAddressHashTable, v18);
              if ( *v3 != *((_QWORD *)&v20 + 1) )
                KiWakeAddressAll(v3);
              _disable();
              while ( (_DWORD)v19 != 1 )
              {
                KiWaitForSignal();
                _disable();
              }
              CurrentPrcb = KeGetCurrentPrcb();
              SchedulerAssist = (signed __int32 *)CurrentPrcb->SchedulerAssist;
              if ( SchedulerAssist )
              {
                _m_prefetchw(SchedulerAssist);
                v16 = *SchedulerAssist;
                do
                {
                  v17 = v16;
                  v16 = _InterlockedCompareExchange(SchedulerAssist, v16 & 0xFFDFFFFF, v16);
                }
                while ( v17 != v16 );
                if ( (v16 & 0x200000) != 0 )
                  KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
              }
              _enable();
              v10 = *v3;
              *(_QWORD *)&v21 = v10;
            }
            while ( v10 == *((_QWORD *)&v20 + 1) );
          }
        }
      }
      else
      {
        HvlNotifyLongSpinWait();
      }
    }
    else
    {
      _mm_pause();
    }
    if ( (*v3 & 1) == 0 )
      break;
    v7 = DWORD1(v20);
    v6 = v20;
  }
  return (unsigned int)v20;
}
