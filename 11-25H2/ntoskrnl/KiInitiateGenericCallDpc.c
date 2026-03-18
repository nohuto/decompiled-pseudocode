/*
 * XREFs of KiInitiateGenericCallDpc @ 0x140417CF0
 * Callers:
 *     KeGenericCallDpcEx @ 0x140417AB0 (KeGenericCallDpcEx.c)
 *     KiGenericCallDpcInitiatorWorker @ 0x140417C10 (KiGenericCallDpcInitiatorWorker.c)
 *     KiGenericCallDpcInitiatorDpc @ 0x1404B6870 (KiGenericCallDpcInitiatorDpc.c)
 * Callees:
 *     KeInsertQueueDpc @ 0x140252D80 (KeInsertQueueDpc.c)
 *     HvlNotifyLongSpinWait @ 0x14032DED0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14032DF00 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KeQueryActiveProcessorCountEx @ 0x1403AE660 (KeQueryActiveProcessorCountEx.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall KiInitiateGenericCallDpc(__int64 a1, PKDEFERRED_ROUTINE *a2)
{
  ULONG ActiveProcessorCount; // eax
  __int64 *v5; // rdi
  __int64 v6; // rsi
  __int64 v7; // rdx
  struct _KDPC *v8; // rcx
  int v9; // ebx
  __int64 result; // rax
  ULONG SystemArgument1; // [rsp+50h] [rbp+8h] BYREF
  ULONG SystemArgument2; // [rsp+58h] [rbp+10h] BYREF
  ULONG v13; // [rsp+5Ch] [rbp+14h]

  ActiveProcessorCount = KeQueryActiveProcessorCountEx(0xFFFFu);
  SystemArgument1 = ActiveProcessorCount;
  v13 = ActiveProcessorCount;
  SystemArgument2 = ActiveProcessorCount;
  if ( ActiveProcessorCount )
  {
    v5 = KiProcessorBlock;
    v6 = ActiveProcessorCount;
    do
    {
      v7 = *v5;
      v8 = (struct _KDPC *)(*v5 + 33632);
      v8->DeferredRoutine = *a2;
      v8->DeferredContext = a2[1];
      if ( v7 != a1 )
        KeInsertQueueDpc(v8, &SystemArgument1, &SystemArgument2);
      ++v5;
      --v6;
    }
    while ( v6 );
  }
  guard_dispatch_icall_no_overrides(a1 + 33632, a2[1]);
  v9 = 0;
  while ( 1 )
  {
    result = SystemArgument1;
    if ( !SystemArgument1 )
      break;
    if ( (++v9 & HvlLongSpinCountMask) == 0
      && (HvlEnlightenments & 0x40) != 0
      && KiCheckVpBackingLongSpinWaitHypercall() )
    {
      HvlNotifyLongSpinWait();
    }
    else
    {
      _mm_pause();
    }
  }
  return result;
}
