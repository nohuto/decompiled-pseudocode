/*
 * XREFs of ?DestroyChildren@FxObject@@IEAAXXZ @ 0x140026330
 * Callers:
 *     ?DeleteEarlyDisposedObject@FxObject@@IEAAXXZ @ 0x1400090C0 (-DeleteEarlyDisposedObject@FxObject@@IEAAXXZ.c)
 *     imp_WdfRequestSend @ 0x14000A850 (imp_WdfRequestSend.c)
 *     ?DeletedAndDisposedWorkerLocked@FxObject@@AEAAXEE@Z @ 0x1400257B0 (-DeletedAndDisposedWorkerLocked@FxObject@@AEAAXEE@Z.c)
 *     ?CompleteInternal@FxRequest@@AEAAJJ@Z @ 0x1400258C0 (-CompleteInternal@FxRequest@@AEAAJJ@Z.c)
 *     ?DeleteDeviceFromFailedCreateNoDelete@FxDevice@@AEAAJJE@Z @ 0x1400412C8 (-DeleteDeviceFromFailedCreateNoDelete@FxDevice@@AEAAJJE@Z.c)
 *     ?DeleteObject@FxObject@@UEAAXXZ @ 0x14004A860 (-DeleteObject@FxObject@@UEAAXXZ.c)
 *     ?PreProcessSendAndForget@FxRequest@@QEAAXXZ @ 0x14004B198 (-PreProcessSendAndForget@FxRequest@@QEAAXXZ.c)
 *     ?PnpEventRemovedCommonCode@FxPkgPnp@@IEAAXXZ @ 0x14004C23C (-PnpEventRemovedCommonCode@FxPkgPnp@@IEAAXXZ.c)
 *     ?Dispose@FxDevice@@UEAAEXZ @ 0x14004C790 (-Dispose@FxDevice@@UEAAEXZ.c)
 *     ?Dispose@FxMpDevice@@UEAAEXZ @ 0x140094180 (-Dispose@FxMpDevice@@UEAAEXZ.c)
 *     ?PnpEventPdoInitFailed@FxPkgPnp@@KA?AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z @ 0x1400A3210 (-PnpEventPdoInitFailed@FxPkgPnp@@KA-AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z.c)
 * Callees:
 *     ?DeletedAndDisposedWorkerLocked@FxObject@@AEAAXEE@Z @ 0x1400257B0 (-DeletedAndDisposedWorkerLocked@FxObject@@AEAAXEE@Z.c)
 *     ?TraceDroppedEvent@FxObject@@QEAAXW4FxObjectDroppedEvent@@@Z @ 0x14004B508 (-TraceDroppedEvent@FxObject@@QEAAXW4FxObjectDroppedEvent@@@Z.c)
 */

void __fastcall FxObject::DestroyChildren(FxObject *this)
{
  _LIST_ENTRY *p_m_ChildListHead; // rbx
  _LIST_ENTRY *Flink; // rax
  _LIST_ENTRY *v3; // rcx
  FxObject *p_Blink; // rdi
  KIRQL v5; // al
  int m_ObjectState; // edx
  KIRQL v7; // bp

  p_m_ChildListHead = &this->m_ChildListHead;
  while ( 1 )
  {
    Flink = p_m_ChildListHead->Flink;
    if ( p_m_ChildListHead->Flink == p_m_ChildListHead )
      break;
    if ( Flink->Blink != p_m_ChildListHead || (v3 = Flink->Flink, Flink->Flink->Blink != Flink) )
      __fastfail(3u);
    p_m_ChildListHead->Flink = v3;
    p_Blink = (FxObject *)&Flink[-5].Blink;
    v3->Blink = p_m_ChildListHead;
    Flink->Blink = Flink;
    Flink->Flink = Flink;
    v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&Flink[-1]);
    m_ObjectState = p_Blink->m_ObjectState;
    v7 = v5;
    p_Blink->m_ParentObject = 0LL;
    if ( m_ObjectState == 10 )
    {
LABEL_6:
      KeReleaseSpinLock(&p_Blink->m_SpinLock.m_Lock, v7);
    }
    else
    {
      if ( m_ObjectState != 2 )
      {
        switch ( m_ObjectState )
        {
          case 8:
            break;
          case 9:
            FxObject::TraceDroppedEvent(p_Blink, FxObjectDroppedEventParentDeleteEvent);
            goto LABEL_6;
          default:
            goto LABEL_6;
        }
      }
      FxObject::DeletedAndDisposedWorkerLocked(p_Blink, v5, 1u);
    }
  }
}
