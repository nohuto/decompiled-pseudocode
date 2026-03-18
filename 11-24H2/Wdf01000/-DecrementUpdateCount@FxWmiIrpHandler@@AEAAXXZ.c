/*
 * XREFs of ?DecrementUpdateCount@FxWmiIrpHandler@@AEAAXXZ @ 0x14006DEE8
 * Callers:
 *     ?_Create@FxWmiProvider@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE__@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_WMI_PROVIDER_CONFIG@@PEAPEAUWDFWMIPROVIDER__@@PEAPEAV1@@Z @ 0x14005551C (-_Create@FxWmiProvider@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE__@@PEAU_WDF_OBJECT_ATTRIBUTES@@.c)
 *     ?UpdateGuids@FxWmiIrpHandler@@AEAAXXZ @ 0x14006DB44 (-UpdateGuids@FxWmiIrpHandler@@AEAAXXZ.c)
 *     ?Deregister@FxWmiIrpHandler@@QEAAXXZ @ 0x14006DDA8 (-Deregister@FxWmiIrpHandler@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall FxWmiIrpHandler::DecrementUpdateCount(FxWmiIrpHandler *this)
{
  if ( _InterlockedExchangeAdd(&this->m_UpdateCount, 0xFFFFFFFF) == 1 )
    KeSetEvent(&this->m_UpdateEvent.m_Event.m_Event, 0, 0);
}
