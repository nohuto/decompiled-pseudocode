/*
 * XREFs of KxWaitForLockOwnerShipWithIrql @ 0x1404057CC
 * Callers:
 *     KiAcquireQueuedSpinLockInstrumented @ 0x140359870 (KiAcquireQueuedSpinLockInstrumented.c)
 * Callees:
 *     KiRemoveSystemWorkPriorityKick @ 0x14028EA18 (KiRemoveSystemWorkPriorityKick.c)
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiWakeAddressAll @ 0x140449DEC (KiWakeAddressAll.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 *     KeCanUseHaltOnAddress @ 0x1404F7F60 (KeCanUseHaltOnAddress.c)
 *     KiAddHaltBlockToWaitList @ 0x1405B7B90 (KiAddHaltBlockToWaitList.c)
 *     KiWaitForSignal @ 0x1405B7BE0 (KiWaitForSignal.c)
 */

__int64 __fastcall KxWaitForLockOwnerShipWithIrql(__int64 a1, _QWORD *a2, unsigned __int8 *a3)
{
  volatile signed __int64 *v3; // rdi
  bool v5; // al
  int v6; // ebx
  int v7; // esi
  unsigned int v8; // ebx
  int v10; // esi
  signed __int64 v11; // rcx
  bool i; // zf
  signed __int64 v13; // rax
  signed __int64 v14; // rtt
  unsigned __int64 v15; // rdx
  unsigned __int8 CurrentIrql; // bl
  struct _KPRCB *CurrentPrcb; // rcx
  signed __int32 *SchedulerAssist; // r8
  signed __int32 v19; // eax
  signed __int32 v20; // ett
  _QWORD v21[3]; // [rsp+20h] [rbp-50h] BYREF
  int v22; // [rsp+38h] [rbp-38h]
  int v23; // [rsp+3Ch] [rbp-34h]
  __int128 v24; // [rsp+40h] [rbp-30h]
  __int128 v25; // [rsp+50h] [rbp-20h]
  __int64 v26; // [rsp+60h] [rbp-10h]

  v3 = (volatile signed __int64 *)(a1 + 8);
  v26 = 0LL;
  v5 = (*(_QWORD *)(a1 + 8) & 4) != 0;
  *(_QWORD *)(a1 + 8) |= 1uLL;
  BYTE1(v26) = v5;
  v24 = 0LL;
  v25 = 0LL;
  *a2 = a1;
  if ( a3 )
  {
    v15 = *a3;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(v15);
    if ( KiIrqlFlags )
    {
      LOBYTE(a1) = CurrentIrql;
      KiRaiseIrqlProcessIrqlFlags(a1, v15);
    }
    *a3 = CurrentIrql;
    _enable();
  }
  v6 = 0;
  v7 = 0;
  DWORD1(v24) = 0;
  while ( 1 )
  {
    v8 = v6 + 1;
    LODWORD(v24) = v8;
    if ( (v8 & HvlLongSpinCountMask) == 0 && (HvlEnlightenments & 0x40) != 0 && KiCheckVpBackingLongSpinWaitHypercall() )
    {
      v10 = v7 + 1;
      DWORD1(v24) = v10;
      if ( (KiVelocityFlags & 0x10000) != 0 && (unsigned __int8)KeCanUseHaltOnAddress() && (v10 & 7) == 0 )
      {
        v13 = *v3;
        while ( 1 )
        {
          *((_QWORD *)&v25 + 1) = v13;
          if ( (v13 & 1) == 0 )
            break;
          if ( BYTE1(v26) )
            v11 = v13 & 0xFFFFFFFFFFFFFFFBuLL;
          else
            v11 = v13 | 4;
          *((_QWORD *)&v24 + 1) = v11;
          v14 = v13;
          v13 = _InterlockedCompareExchange64(v3, v11, v13);
          for ( i = v14 == v13; ; i = *v3 == *((_QWORD *)&v24 + 1) )
          {
            *(_QWORD *)&v25 = v13;
            if ( !i )
              break;
            v23 = 0;
            v21[2] = 0LL;
            v22 = 0;
            v21[0] = v3;
            v21[1] = KeGetCurrentPrcb();
            KiAddHaltBlockToWaitList(KiHaltOnAddressHashTable, v21);
            if ( *v3 != *((_QWORD *)&v24 + 1) )
              KiWakeAddressAll(v3);
            while ( 1 )
            {
              _disable();
              if ( v22 == 1 )
                break;
              KiWaitForSignal();
            }
            CurrentPrcb = KeGetCurrentPrcb();
            SchedulerAssist = (signed __int32 *)CurrentPrcb->SchedulerAssist;
            if ( SchedulerAssist )
            {
              _m_prefetchw(SchedulerAssist);
              v19 = *SchedulerAssist;
              do
              {
                v20 = v19;
                v19 = _InterlockedCompareExchange(SchedulerAssist, v19 & 0xFFDFFFFF, v19);
              }
              while ( v20 != v19 );
              if ( (v19 & 0x200000) != 0 )
                KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
            }
            _enable();
            v13 = *v3;
          }
        }
      }
      else
      {
        HvlNotifyLongSpinWait(v8);
      }
    }
    else
    {
      _mm_pause();
    }
    if ( (*v3 & 1) == 0 )
      break;
    v7 = DWORD1(v24);
    v6 = v24;
  }
  return (unsigned int)v24;
}
