/*
 * XREFs of ??1?$ComPtr@VInputProcess@@@WRL@Microsoft@@QEAA@XZ @ 0x1800A3740
 * Callers:
 *     _DeviceInputHost::DeviceInputHost_::_1_::dtor$1 @ 0x1801D349C (_DeviceInputHost--DeviceInputHost_--_1_--dtor$1.c)
 *     _InputProcess::InputProcess_::_1_::dtor$5 @ 0x1801D52B4 (_InputProcess--InputProcess_--_1_--dtor$5.c)
 *     _InputProcess::InputProcess_::_1_::dtor$6 @ 0x1801D52C6 (_InputProcess--InputProcess_--_1_--dtor$6.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Microsoft::WRL::ComPtr<InputProcess>::~ComPtr<InputProcess>(__int64 *a1)
{
  return Microsoft::WRL::ComPtr<InputProcess>::InternalRelease(a1);
}
