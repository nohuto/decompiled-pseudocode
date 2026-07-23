/*
 * XREFs of KiInitiateGenericCallDpc @ 0x140270D30
 * Callers:
 *     KiGenericCallDpcInitiatorDpc @ 0x1402700D0 (KiGenericCallDpcInitiatorDpc.c)
 *     KeGenericCallDpcEx @ 0x140270AE8 (KeGenericCallDpcEx.c)
 *     KiGenericCallDpcInitiatorWorker @ 0x140270C50 (KiGenericCallDpcInitiatorWorker.c)
 * Callees:
 *     KeInsertQueueDpc @ 0x140284900 (KeInsertQueueDpc.c)
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KeQueryActiveProcessorCountEx @ 0x140339940 (KeQueryActiveProcessorCountEx.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall KiInitiateGenericCallDpc(__int64 a1, PKDEFERRED_ROUTINE *a2)
{
  ULONG ActiveProcessorCount; // eax
  __int64 *v5; // rdi
  __int64 v6; // rsi
  __int64 v7; // rdx
  struct _KDPC *v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  unsigned int v13; // ebx
  __int64 result; // rax
  ULONG SystemArgument1; // [rsp+50h] [rbp+8h] BYREF
  ULONG SystemArgument2; // [rsp+58h] [rbp+10h] BYREF
  ULONG v17; // [rsp+5Ch] [rbp+14h]

  ActiveProcessorCount = KeQueryActiveProcessorCountEx(0xFFFFu);
  SystemArgument1 = ActiveProcessorCount;
  v17 = ActiveProcessorCount;
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
  guard_dispatch_icall_no_overrides(a1 + 33632, a2[1], &SystemArgument1, &SystemArgument2);
  v13 = 0;
  while ( 1 )
  {
    result = SystemArgument1;
    if ( !SystemArgument1 )
      break;
    if ( (++v13 & HvlLongSpinCountMask) == 0
      && (HvlEnlightenments & 0x40) != 0
      && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v10, v9, v11, v12) )
    {
      HvlNotifyLongSpinWait(v13);
    }
    else
    {
      _mm_pause();
    }
  }
  return result;
}
