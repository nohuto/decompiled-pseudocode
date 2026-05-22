/*
 * XREFs of ??1?$ComPtr@VSpatialRimDeviceCollection@@@WRL@Microsoft@@QEAA@XZ @ 0x1800D2FEC
 * Callers:
 *     _RIMRawInputProvider::RIMRawInputProvider_::_1_::dtor$3 @ 0x1801D56B2 (_RIMRawInputProvider--RIMRawInputProvider_--_1_--dtor$3.c)
 *     _RIMRawInputProvider::RIMRawInputProvider_::_1_::dtor$4 @ 0x1801D56C8 (_RIMRawInputProvider--RIMRawInputProvider_--_1_--dtor$4.c)
 *     _RIMRawInputProvider::RIMRawInputProvider_::_1_::dtor$5 @ 0x1801D56DE (_RIMRawInputProvider--RIMRawInputProvider_--_1_--dtor$5.c)
 *     _RIMRawInputProvider::RIMRawInputProvider_::_1_::dtor$6 @ 0x1801D56F4 (_RIMRawInputProvider--RIMRawInputProvider_--_1_--dtor$6.c)
 *     _RIMRawInputProvider::RIMRawInputProvider_::_1_::dtor$7 @ 0x1801D570A (_RIMRawInputProvider--RIMRawInputProvider_--_1_--dtor$7.c)
 *     _RIMRawInputProvider::RIMRawInputProvider_::_1_::dtor$8 @ 0x1801D5720 (_RIMRawInputProvider--RIMRawInputProvider_--_1_--dtor$8.c)
 *     _RIMRawInputProvider::RIMRawInputProvider_::_1_::dtor$9 @ 0x1801D5736 (_RIMRawInputProvider--RIMRawInputProvider_--_1_--dtor$9.c)
 *     _RIMRawInputProvider::RIMRawInputProvider_::_1_::dtor$10 @ 0x1801D574C (_RIMRawInputProvider--RIMRawInputProvider_--_1_--dtor$10.c)
 *     _RIMRawInputProvider::RIMRawInputProvider_::_1_::dtor$11 @ 0x1801D5762 (_RIMRawInputProvider--RIMRawInputProvider_--_1_--dtor$11.c)
 *     _RIMRawInputProvider::RIMRawInputProvider_::_1_::dtor$12 @ 0x1801D5778 (_RIMRawInputProvider--RIMRawInputProvider_--_1_--dtor$12.c)
 *     _RIMRawInputProvider::RIMRawInputProvider_::_1_::dtor$13 @ 0x1801D578E (_RIMRawInputProvider--RIMRawInputProvider_--_1_--dtor$13.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Microsoft::WRL::ComPtr<SpatialRimDeviceCollection>::~ComPtr<SpatialRimDeviceCollection>(__int64 *a1)
{
  return Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(a1);
}
