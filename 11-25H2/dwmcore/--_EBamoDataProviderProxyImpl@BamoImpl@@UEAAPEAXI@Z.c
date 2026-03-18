/*
 * XREFs of ??_EBamoDataProviderProxyImpl@BamoImpl@@UEAAPEAXI@Z @ 0x180287F70
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicFrameProcessor@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000CEC0 (--1-$com_ptr_t@UIHolographicFrameProcessor@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x18025C2F4 (--3@YAXPEAX_K@Z.c)
 */

BamoImpl::BamoDataProviderProxyImpl *__fastcall BamoImpl::BamoDataProviderProxyImpl::`vector deleting destructor'(
        BamoImpl::BamoDataProviderProxyImpl *this,
        char a2)
{
  wil::com_ptr_t<IHolographicFrameProcessor,wil::err_returncode_policy>::~com_ptr_t<IHolographicFrameProcessor,wil::err_returncode_policy>((__int64 *)this + 2);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
