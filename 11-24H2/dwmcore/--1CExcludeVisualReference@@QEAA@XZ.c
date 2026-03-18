/*
 * XREFs of ??1CExcludeVisualReference@@QEAA@XZ @ 0x180096404
 * Callers:
 *     ??R?$default_delete@VCExcludeVisualReference@@@std@@QEBAXPEAVCExcludeVisualReference@@@Z @ 0x1800963D4 (--R-$default_delete@VCExcludeVisualReference@@@std@@QEBAXPEAVCExcludeVisualReference@@@Z.c)
 *     ??1CursorVisualData@@QEAA@XZ @ 0x18025A508 (--1CursorVisualData@@QEAA@XZ.c)
 * Callees:
 *     ?Restore@CExcludeVisualReference@@UEAAJXZ @ 0x1801E9720 (-Restore@CExcludeVisualReference@@UEAAJXZ.c)
 */

void __fastcall CExcludeVisualReference::~CExcludeVisualReference(CExcludeVisualReference *this)
{
  bool v1; // zf

  v1 = *((_DWORD *)this + 4) == 0;
  *(_QWORD *)this = &CExcludeVisualReference::`vftable';
  if ( !v1 )
    CExcludeVisualReference::Restore(this);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)this + 1);
}
