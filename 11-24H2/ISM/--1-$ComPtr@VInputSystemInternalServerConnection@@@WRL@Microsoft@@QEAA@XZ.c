/*
 * XREFs of ??1?$ComPtr@VInputSystemInternalServerConnection@@@WRL@Microsoft@@QEAA@XZ @ 0x1800998BC
 * Callers:
 *     _ForegroundManager::RuntimeClassInitialize_::_1_::dtor$2 @ 0x1801CF28C (_ForegroundManager--RuntimeClassInitialize_--_1_--dtor$2.c)
 *     _InputSystemInternalServerConnection::Create_::_1_::dtor$2 @ 0x1801CF392 (_InputSystemInternalServerConnection--Create_--_1_--dtor$2.c)
 *     _InputSystemServerConnection::Create_::_1_::dtor$0 @ 0x1801CF52B (_InputSystemServerConnection--Create_--_1_--dtor$0.c)
 *     _DeviceInputHost::DeviceInputHost_::_1_::dtor$6 @ 0x1801D34F4 (_DeviceInputHost--DeviceInputHost_--_1_--dtor$6.c)
 *     _InputSystemInternalClientConnection::Create_::_1_::dtor$0 @ 0x1801D3621 (_InputSystemInternalClientConnection--Create_--_1_--dtor$0.c)
 *     _InputProcess::InputProcess_::_1_::dtor$2 @ 0x1801D5277 (_InputProcess--InputProcess_--_1_--dtor$2.c)
 *     _DWMCursor::DWMCursor_::_1_::dtor$6 @ 0x1801D9AEB (_DWMCursor--DWMCursor_--_1_--dtor$6.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
unsigned int __fastcall Microsoft::WRL::ComPtr<InputSystemInternalServerConnection>::~ComPtr<InputSystemInternalServerConnection>(
        Microsoft::Bamo::BaseBamoConnection **a1)
{
  return Microsoft::WRL::ComPtr<InputSystemInternalServerConnection>::InternalRelease(a1);
}
