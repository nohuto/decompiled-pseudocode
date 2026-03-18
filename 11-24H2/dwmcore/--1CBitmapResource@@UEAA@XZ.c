/*
 * XREFs of ??1CBitmapResource@@UEAA@XZ @ 0x18017C58C
 * Callers:
 *     ??_GCBitmapResource@@UEAAPEAXI@Z @ 0x18017C540 (--_GCBitmapResource@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180040010 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?_Tidy@?$vector@EV?$allocator@E@std@@@std@@AEAAXXZ @ 0x18017E4B0 (-_Tidy@-$vector@EV-$allocator@E@std@@@std@@AEAAXXZ.c)
 */

void __fastcall CBitmapResource::~CBitmapResource(CBitmapResource *this)
{
  std::vector<unsigned char>::_Tidy((char *)this + 88);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)this + 10);
  CResource::~CResource(this);
}
