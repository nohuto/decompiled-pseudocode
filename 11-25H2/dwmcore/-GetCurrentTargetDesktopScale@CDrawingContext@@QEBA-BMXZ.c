/*
 * XREFs of ?GetCurrentTargetDesktopScale@CDrawingContext@@QEBA?BMXZ @ 0x18029A684
 * Callers:
 *     ?DrawCrosshair@CCursorVisual@@AEBAJPEAVCDrawingContext@@@Z @ 0x180299E64 (-DrawCrosshair@CCursorVisual@@AEBAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18002F800 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

float __fastcall CDrawingContext::GetCurrentTargetDesktopScale(CDrawingContext *this)
{
  _QWORD *v1; // rcx
  float v2; // xmm6_4
  __int64 v4; // [rsp+40h] [rbp+8h] BYREF

  v4 = 0LL;
  v1 = (_QWORD *)*((_QWORD *)this + 6);
  if ( v1
    && (**(int (__fastcall ***)(_QWORD, GUID *, __int64 *))*v1)(*v1, &GUID_8ddf9ce7_e3f9_4bcf_983c_9c1b1b407c97, &v4) >= 0 )
  {
    v2 = *(float *)((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 256LL))(v4) + 4);
  }
  else
  {
    v2 = *(float *)&`CVisual::SetOpacityInternal'::`2'::sc_defaultValue;
  }
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v4);
  return v2;
}
