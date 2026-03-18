/*
 * XREFs of ?DecrementUpdateCount@FxWmiIrpHandler@@AEAAXXZ @ 0x14006EB68
 * Callers:
 *     ?_Create@FxWmiProvider@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE__@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_WMI_PROVIDER_CONFIG@@PEAPEAUWDFWMIPROVIDER__@@PEAPEAV1@@Z @ 0x14003E36C (-_Create@FxWmiProvider@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE__@@PEAU_WDF_OBJECT_ATTRIBUTES@@.c)
 *     ?UpdateGuids@FxWmiIrpHandler@@AEAAXXZ @ 0x14006E7C4 (-UpdateGuids@FxWmiIrpHandler@@AEAAXXZ.c)
 *     ?Deregister@FxWmiIrpHandler@@QEAAXXZ @ 0x14006EA28 (-Deregister@FxWmiIrpHandler@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall FxWmiIrpHandler::DecrementUpdateCount(FxWmiIrpHandler *this)
{
  if ( _InterlockedExchangeAdd(&this->m_UpdateCount, 0xFFFFFFFF) == 1 )
    KeSetEvent(&this->m_UpdateEvent.m_Event.m_Event, 0, 0);
}
