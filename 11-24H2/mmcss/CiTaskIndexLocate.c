/*
 * XREFs of CiTaskIndexLocate @ 0x14000EAD0
 * Callers:
 *     CiDispatchCreateMmThreadClient @ 0x14000E820 (CiDispatchCreateMmThreadClient.c)
 * Callees:
 *     CiSystemAcquirePushLock @ 0x14000F6C0 (CiSystemAcquirePushLock.c)
 */

__int64 __fastcall CiTaskIndexLocate(int a1, struct _LIST_ENTRY *a2, LIST_ENTRY **a3)
{
  unsigned int v6; // esi
  struct _DEVICE_OBJECT *i; // rax
  LIST_ENTRY *p_DeviceListHead; // rdx

  v6 = -1073740543;
  if ( a2 )
    CiSystemAcquirePushLock(&WPP_MAIN_CB.Dpc.DpcListEntry);
  for ( i = (struct _DEVICE_OBJECT *)WPP_MAIN_CB.Dpc.DeferredRoutine;
        i != (struct _DEVICE_OBJECT *)&WPP_MAIN_CB.Dpc.DeferredRoutine;
        i = *(struct _DEVICE_OBJECT **)&i->Type )
  {
    p_DeviceListHead = &i[-1].DeviceQueue.DeviceListHead;
    if ( LODWORD(i[-1].DeviceObjectExtension) == a1 )
    {
      if ( a2 )
      {
        if ( p_DeviceListHead[8].Blink != a2 )
          goto LABEL_10;
        if ( _InterlockedIncrement64((volatile signed __int64 *)&p_DeviceListHead[3]) <= 1 )
          __fastfail(0xEu);
      }
      *a3 = p_DeviceListHead;
      v6 = 0;
      break;
    }
  }
  if ( !a2 )
    return v6;
LABEL_10:
  WPP_MAIN_CB.Dpc.ProcessorHistory = 0LL;
  ExReleasePushLockExclusiveEx(&WPP_MAIN_CB.Dpc.DpcListEntry, 0LL);
  return v6;
}
