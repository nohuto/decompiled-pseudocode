/*
 * XREFs of ?ndisNotifyBindFailureOnUnboundProtocols@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140165A30
 * Callers:
 *     ?ndisInitModeTimeoutWorkItem@@_Y2PAGE@@AXPEAU_NDIS_WORK_ITEM@@PEAX@Z @ 0x140137CB0 (-ndisInitModeTimeoutWorkItem@@_Y2PAGE@@AXPEAU_NDIS_WORK_ITEM@@PEAX@Z.c)
 *     ?ndisAddDevice@@_Y2PAGENPNP@@AJPEAUNDIS_MINIPORT_CREATION_CONFIG@@PEAPEAX@Z @ 0x1401771E0 (-ndisAddDevice@@_Y2PAGENPNP@@AJPEAUNDIS_MINIPORT_CREATION_CONFIG@@PEAPEAX@Z.c)
 *     ?ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x1401788C0 (-ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BI.c)
 *     ?ndisMInitializeAdapter@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WRAPPER_CONFIGURATION_HANDLE@@PEAU_UNICODE_STRING@@PEAX@Z @ 0x14017BC40 (-ndisMInitializeAdapter@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WRAPPE.c)
 * Callees:
 *     ?ndisDereferenceProtocol@@YAXPEAU_NDIS_PROTOCOL_BLOCK@@EW4_NDIS_PT_REFTAG@@@Z @ 0x1400565A0 (-ndisDereferenceProtocol@@YAXPEAU_NDIS_PROTOCOL_BLOCK@@EW4_NDIS_PT_REFTAG@@@Z.c)
 *     ?ndisReferenceProtocol@@YAEPEAU_NDIS_PROTOCOL_BLOCK@@W4_NDIS_PT_REFTAG@@@Z @ 0x140056EA0 (-ndisReferenceProtocol@@YAEPEAU_NDIS_PROTOCOL_BLOCK@@W4_NDIS_PT_REFTAG@@@Z.c)
 *     ?ndisNotifyBindFailure@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@@Z @ 0x140075090 (-ndisNotifyBindFailure@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@@Z.c)
 */

void __fastcall ndisNotifyBindFailureOnUnboundProtocols(struct _NDIS_MINIPORT_BLOCK *a1)
{
  unsigned int ChangeEpoch; // eax
  unsigned __int64 v3; // rbx
  __int64 m_numElements; // r14
  unsigned int v5; // ebp
  NDIS_BIND_PROTOCOL_LINK *value; // rcx
  KRef<NDIS_BIND_PROTOCOL_DRIVER>::KRefHolder *p; // rax
  struct _NDIS_PROTOCOL_BLOCK *RunningDriver; // rsi
  int v9; // r9d

  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(&a1->BindEngine.m_lock, 0LL);
  do
  {
LABEL_2:
    ChangeEpoch = a1->Bindings.ChangeEpoch;
    v3 = 0LL;
    m_numElements = a1->Bindings.Protocols.m_numElements;
    v5 = ChangeEpoch;
    while ( v3 != m_numElements )
    {
      if ( v3 >= a1->Bindings.Protocols.m_numElements )
        __fastfail(5u);
      value = a1->Bindings.Protocols._p[v3].__ptr_.__value_;
      p = value->BindDriver._p;
      RunningDriver = p->_t.RunningDriver;
      if ( RunningDriver
        && !value->BindState.m_bindContext.m_numElements
        && ndisReferenceProtocol(p->_t.RunningDriver, 0xDu) )
      {
        KeLeaveCriticalRegion();
        ExReleasePushLockEx(&a1->BindEngine.m_lock, 0LL);
        ndisNotifyBindFailure(a1, RunningDriver);
        ndisDereferenceProtocol(RunningDriver, 0, 0xDu, v9);
        KeEnterCriticalRegion();
        ExAcquirePushLockSharedEx(&a1->BindEngine.m_lock, 0LL);
      }
      ChangeEpoch = a1->Bindings.ChangeEpoch;
      if ( v5 != ChangeEpoch )
        goto LABEL_2;
      ++v3;
    }
  }
  while ( v5 != ChangeEpoch );
  KeLeaveCriticalRegion();
  ExReleasePushLockEx(&a1->BindEngine.m_lock, 0LL);
}
