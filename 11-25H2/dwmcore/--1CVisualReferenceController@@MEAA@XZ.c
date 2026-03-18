/*
 * XREFs of ??1CVisualReferenceController@@MEAA@XZ @ 0x18013C3AC
 * Callers:
 *     ??_ECVisualReferenceController@@MEAAPEAXI@Z @ 0x18013C360 (--_ECVisualReferenceController@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18002F800 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?UnRegisterNotifiers@CVisualReferenceController@@UEAAXXZ @ 0x18013B060 (-UnRegisterNotifiers@CVisualReferenceController@@UEAAXXZ.c)
 */

void __fastcall CVisualReferenceController::~CVisualReferenceController(CVisualReferenceController *this)
{
  *(_QWORD *)this = &CVisualReferenceController::`vftable';
  CVisualReferenceController::UnRegisterNotifiers(this);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)this + 10);
  CResource::~CResource(this);
}
