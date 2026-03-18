/*
 * XREFs of ??_GBamoDataProviderRegistrarStub@@MEAAPEAXI@Z @ 0x18027AB00
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicFrameProcessor@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000CEC0 (--1-$com_ptr_t@UIHolographicFrameProcessor@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x18025C2F4 (--3@YAXPEAX_K@Z.c)
 */

BamoDataProviderRegistrarStub *__fastcall BamoDataProviderRegistrarStub::`scalar deleting destructor'(
        BamoDataProviderRegistrarStub *this,
        char a2)
{
  wil::com_ptr_t<IHolographicFrameProcessor,wil::err_returncode_policy>::~com_ptr_t<IHolographicFrameProcessor,wil::err_returncode_policy>((__int64 *)this + 6);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
