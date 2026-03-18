/*
 * XREFs of ?InternalRelease@?$CMILRefCountBaseT@VCRenderingEffect@@VCMilObjectDeleter@@@@IEAAKXZ @ 0x18004D160
 * Callers:
 *     ??1CReconstructableDrawListEntry@@UEAA@XZ @ 0x180110430 (--1CReconstructableDrawListEntry@@UEAA@XZ.c)
 *     ??_ECReconstructableDrawListEntry_UVx2@@UEAAPEAXI@Z @ 0x18013B850 (--_ECReconstructableDrawListEntry_UVx2@@UEAAPEAXI@Z.c)
 *     ?Create@CReconstructableDrawListEntry@@SAJAEBUReconstructableDrawListEntryParams@@PEAPEAV1@@Z @ 0x18016F400 (-Create@CReconstructableDrawListEntry@@SAJAEBUReconstructableDrawListEntryParams@@PEAPEAV1@@Z.c)
 * Callees:
 *     ??_ECBrushRenderingEffect@@EEAAPEAXI@Z @ 0x18004CDE0 (--_ECBrushRenderingEffect@@EEAAPEAXI@Z.c)
 *     ??_GCCommonRenderingEffect@@MEAAPEAXI@Z @ 0x18004D2C0 (--_GCCommonRenderingEffect@@MEAAPEAXI@Z.c)
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x180249CC0 (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CMILRefCountBaseT<CRenderingEffect,CMilObjectDeleter>::InternalRelease(CBrushRenderingEffect *this)
{
  int v2; // edi
  void *(__fastcall *v3)(CCommonRenderingEffect *__hidden, unsigned int); // rax
  int v5; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = _InterlockedDecrement((volatile signed __int32 *)this + 2);
  if ( v2 < -1 )
    wil::details::in1diag3::Log_Hr(
      retaddr,
      (void *)0x26,
      (unsigned int)"onecoreuap\\windows\\dwm\\common\\shared\\refcountbase.cpp",
      (const char *)0x8007029CLL,
      v5);
  if ( v2 )
    return (unsigned int)v2;
  if ( _InterlockedAdd((volatile signed __int32 *)this + 2, 1u) <= 0 )
    wil::details::in1diag3::Log_Hr(
      retaddr,
      (void *)0x18,
      (unsigned int)"onecoreuap\\windows\\dwm\\common\\shared\\refcountbase.cpp",
      (const char *)0x8007029CLL,
      v5);
  (*(void (__fastcall **)(CBrushRenderingEffect *))(*(_QWORD *)this + 88LL))(this);
  v2 = _InterlockedDecrement((volatile signed __int32 *)this + 2);
  if ( v2 < -1 )
    wil::details::in1diag3::Log_Hr(
      retaddr,
      (void *)0x26,
      (unsigned int)"onecoreuap\\windows\\dwm\\common\\shared\\refcountbase.cpp",
      (const char *)0x8007029CLL,
      v5);
  if ( v2 )
    return (unsigned int)v2;
  if ( _InterlockedDecrement((volatile signed __int32 *)this + 2) < -1 )
    wil::details::in1diag3::Log_Hr(
      retaddr,
      (void *)0x26,
      (unsigned int)"onecoreuap\\windows\\dwm\\common\\shared\\refcountbase.cpp",
      (const char *)0x8007029CLL,
      v5);
  v3 = *(void *(__fastcall **)(CCommonRenderingEffect *__hidden, unsigned int))(*(_QWORD *)this + 80LL);
  if ( v3 == CCommonRenderingEffect::`scalar deleting destructor' )
  {
    CCommonRenderingEffect::`scalar deleting destructor'(this, 1u);
    return (unsigned int)v2;
  }
  if ( (char *)v3 != (char *)CBrushRenderingEffect::`vector deleting destructor' )
  {
    v3(this, 1u);
    return (unsigned int)v2;
  }
  CBrushRenderingEffect::`vector deleting destructor'(this, 1);
  return 0LL;
}
