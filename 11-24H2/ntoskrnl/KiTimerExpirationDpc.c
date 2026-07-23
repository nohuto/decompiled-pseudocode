/*
 * XREFs of KiTimerExpirationDpc @ 0x1405C4860
 * Callers:
 *     <none>
 * Callees:
 *     EtwTraceKernelEvent @ 0x140285790 (EtwTraceKernelEvent.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14028EA18 (KiRemoveSystemWorkPriorityKick.c)
 *     KiTimerExpiration @ 0x140315160 (KiTimerExpiration.c)
 *     KiTimer2Expiration @ 0x1403AFFE0 (KiTimer2Expiration.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

void __fastcall KiTimerExpirationDpc(
        struct _KDPC *Dpc,
        PVOID DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  int v4; // esi
  struct _KPRCB *CurrentPrcb; // rbx
  unsigned __int64 v6; // rdi
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  struct _KPRCB *v10; // r8
  signed __int32 *SchedulerAssist; // rdx
  signed __int32 v12; // eax
  signed __int32 v13; // ett
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // [rsp+30h] [rbp-1B8h] BYREF
  int v17; // [rsp+38h] [rbp-1B0h]
  int v18; // [rsp+3Ch] [rbp-1ACh]
  unsigned __int64 v19[50]; // [rsp+40h] [rbp-1A8h] BYREF

  v4 = (int)SystemArgument1;
  memset_0(v19, 0, sizeof(v19));
  if ( (DWORD2(PerfGlobalGroupMask) & 0x20000) != 0 )
  {
    v16 = 0LL;
    v17 = 0;
    v18 = 0;
    EtwTraceKernelEvent((int)&v16, 1, 0x40020000u, 3926, 5245442);
  }
  CurrentPrcb = KeGetCurrentPrcb();
  v19[1] = MEMORY[0xFFFFF78000000014];
  _disable();
  v6 = MEMORY[0xFFFFF78000000008];
  if ( KiSerializeTimerExpiration )
  {
    if ( CurrentPrcb->ClockOwner )
    {
      v7 = 33552LL;
      v8 = MEMORY[0xFFFFF78000000008] >> 18;
      v9 = 2LL;
      do
      {
        *(_DWORD *)(v7 + KiProcessorBlock[0]) = v8;
        v7 += 4LL;
        --v9;
      }
      while ( v9 );
    }
  }
  else
  {
    CurrentPrcb->TimerTable.TableState.LastTimerHand[0] = MEMORY[0xFFFFF78000000008] >> 18;
    CurrentPrcb->TimerTable.TableState.LastTimerHand[1] = v6 >> 18;
  }
  v10 = KeGetCurrentPrcb();
  SchedulerAssist = (signed __int32 *)v10->SchedulerAssist;
  if ( SchedulerAssist )
  {
    _m_prefetchw(SchedulerAssist);
    v12 = *SchedulerAssist;
    do
    {
      v13 = v12;
      v12 = _InterlockedCompareExchange(SchedulerAssist, v12 & 0xFFDFFFFF, v12);
    }
    while ( v13 != v12 );
    if ( (v12 & 0x200000) != 0 )
      KiRemoveSystemWorkPriorityKick((__int64)v10);
  }
  _enable();
  KiTimerExpiration((__int64)CurrentPrcb, v4, v6, 1, (unsigned __int64)v19);
  CurrentPrcb->DpcData[0].ActiveDpc = 0LL;
  if ( CurrentPrcb->ClockOwner )
  {
    LOBYTE(v15) = 1;
    LOBYTE(v14) = 1;
    KiTimer2Expiration((__int64)CurrentPrcb, v6, v14, v15, v19);
  }
}
