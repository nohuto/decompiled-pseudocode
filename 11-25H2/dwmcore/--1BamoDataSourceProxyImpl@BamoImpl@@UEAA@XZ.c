/*
 * XREFs of ??1BamoDataSourceProxyImpl@BamoImpl@@UEAA@XZ @ 0x18027C204
 * Callers:
 *     ??1DataSourceProxy@@UEAA@XZ @ 0x18027C254 (--1DataSourceProxy@@UEAA@XZ.c)
 *     ??_GBamoDataSourceProxyImpl@BamoImpl@@UEAAPEAXI@Z @ 0x180287FB0 (--_GBamoDataSourceProxyImpl@BamoImpl@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicFrameProcessor@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000CEC0 (--1-$com_ptr_t@UIHolographicFrameProcessor@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 */

void __fastcall BamoImpl::BamoDataSourceProxyImpl::~BamoDataSourceProxyImpl(BamoImpl::BamoDataSourceProxyImpl *this)
{
  wil::com_ptr_t<IHolographicFrameProcessor,wil::err_returncode_policy>::~com_ptr_t<IHolographicFrameProcessor,wil::err_returncode_policy>((__int64 *)this + 5);
  wil::com_ptr_t<IHolographicFrameProcessor,wil::err_returncode_policy>::~com_ptr_t<IHolographicFrameProcessor,wil::err_returncode_policy>((__int64 *)this + 2);
}
