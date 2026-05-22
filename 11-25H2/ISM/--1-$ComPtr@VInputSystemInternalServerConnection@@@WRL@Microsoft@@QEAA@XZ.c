/*
 * XREFs of ??1?$ComPtr@VInputSystemInternalServerConnection@@@WRL@Microsoft@@QEAA@XZ @ 0x18009975C
 * Callers:
 *     _ForegroundManager::RuntimeClassInitialize_::_1_::dtor$2 @ 0x1801C7DEC (_ForegroundManager--RuntimeClassInitialize_--_1_--dtor$2.c)
 *     _InputSystemInternalServerConnection::Create_::_1_::dtor$2 @ 0x1801C7EF2 (_InputSystemInternalServerConnection--Create_--_1_--dtor$2.c)
 *     _InputSystemServerConnection::Create_::_1_::dtor$0 @ 0x1801C808B (_InputSystemServerConnection--Create_--_1_--dtor$0.c)
 *     _DeviceInputHost::DeviceInputHost_::_1_::dtor$6 @ 0x1801CC042 (_DeviceInputHost--DeviceInputHost_--_1_--dtor$6.c)
 *     _InputSystemInternalClientConnection::Create_::_1_::dtor$0 @ 0x1801CC193 (_InputSystemInternalClientConnection--Create_--_1_--dtor$0.c)
 *     _InputProcess::InputProcess_::_1_::dtor$2 @ 0x1801CDD2C (_InputProcess--InputProcess_--_1_--dtor$2.c)
 *     _DWMCursor::DWMCursor_::_1_::dtor$6 @ 0x1801D2008 (_DWMCursor--DWMCursor_--_1_--dtor$6.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
unsigned int __fastcall Microsoft::WRL::ComPtr<InputSystemInternalServerConnection>::~ComPtr<InputSystemInternalServerConnection>(
        Microsoft::Bamo::BaseBamoConnection **a1)
{
  return Microsoft::WRL::ComPtr<InputSystemInternalServerConnection>::InternalRelease(a1);
}
