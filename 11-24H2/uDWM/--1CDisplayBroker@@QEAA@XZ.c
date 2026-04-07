/*
 * XREFs of ??1CDisplayBroker@@QEAA@XZ @ 0x18009B3B0
 * Callers:
 *     ??R?$default_delete@VCDisplayBroker@@@std@@QEBAXPEAVCDisplayBroker@@@Z @ 0x1800B8760 (--R-$default_delete@VCDisplayBroker@@@std@@QEBAXPEAVCDisplayBroker@@@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall CDisplayBroker::~CDisplayBroker(__int64 *this)
{
  Microsoft::WRL::ComPtr<DispBrokerDesktop::ISessionBrokerInstance>::InternalRelease(this);
}
