/*
 * XREFs of ??_G_NDIS_PROTOCOL_BLOCK@@QEAAPEAXI@Z @ 0x140099170
 * Callers:
 *     NdisRegisterProtocolDriver @ 0x1400C0320 (NdisRegisterProtocolDriver.c)
 * Callees:
 *     ?unref@?$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@AEAAXXZ @ 0x14016B1A0 (-unref@-$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@AEAAXXZ.c)
 */

_NDIS_PROTOCOL_BLOCK *__fastcall _NDIS_PROTOCOL_BLOCK::`scalar deleting destructor'(
        _NDIS_PROTOCOL_BLOCK *this,
        __int64 a2,
        __int64 a3)
{
  KRef<NDIS_BIND_PROTOCOL_DRIVER>::unref(&this->Bind, a2, a3);
  return this;
}
