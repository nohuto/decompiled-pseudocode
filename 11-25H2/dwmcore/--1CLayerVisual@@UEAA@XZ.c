/*
 * XREFs of ??1CLayerVisual@@UEAA@XZ @ 0x180185C3C
 * Callers:
 *     ??_GCLayerVisual@@UEAAPEAXI@Z @ 0x180185BF0 (--_GCLayerVisual@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x180023388 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18002F800 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?ClearTreeEffect@CLayerVisual@@AEAAXXZ @ 0x18023AA04 (-ClearTreeEffect@CLayerVisual@@AEAAXXZ.c)
 */

void __fastcall CLayerVisual::~CLayerVisual(CLayerVisual *this)
{
  bool v1; // zf

  v1 = *((_QWORD *)this + 85) == 0LL;
  *(_QWORD *)this = &CLayerVisual::`vftable';
  if ( !v1 )
    CLayerVisual::ClearTreeEffect(this);
  CResource::UnRegisterNotifierInternal(this, *((struct CResource **)this + 84));
  *((_QWORD *)this + 84) = 0LL;
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)this + 86);
  CVisual::~CVisual((struct CResource **)this);
}
