/*
 * XREFs of ?Release@?$CMILCOMBaseT@UID2D1GeometrySink@@U1@VCMilObjectDeleter@@@@UEAAKXZ @ 0x18005F9E0
 * Callers:
 *     ?NotifyAnimationStateChanged@CBaseExpression@@AEAAJW4AnimationEventType@@@Z @ 0x18003C07C (-NotifyAnimationStateChanged@CBaseExpression@@AEAAJW4AnimationEventType@@@Z.c)
 *     ?GetTrimmedShapeData@CGeometry@@AEBAJAEBVCShapePtr@@PEAV2@@Z @ 0x18005B678 (-GetTrimmedShapeData@CGeometry@@AEBAJAEBVCShapePtr@@PEAV2@@Z.c)
 *     ?GetSimplifiedPathData@CShape@@QEBAJPEAPEAVCPathData@@@Z @ 0x18005D134 (-GetSimplifiedPathData@CShape@@QEBAJPEAPEAVCPathData@@@Z.c)
 *     ?GetOutline@CPolygonShape@@UEBAJPEAUID2D1GeometrySink@@@Z @ 0x18005DC30 (-GetOutline@CPolygonShape@@UEBAJPEAUID2D1GeometrySink@@@Z.c)
 *     ??1CRegionShape@@UEAA@XZ @ 0x18005F7FC (--1CRegionShape@@UEAA@XZ.c)
 *     ??4?$ComPtr@VCPathData@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x18005F8A4 (--4-$ComPtr@VCPathData@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ??_ECRegionShape@@UEAAPEAXI@Z @ 0x18005F910 (--_ECRegionShape@@UEAAPEAXI@Z.c)
 *     ??1CBaseExpression@@MEAA@XZ @ 0x18005FCD8 (--1CBaseExpression@@MEAA@XZ.c)
 *     ??_GCPolygonShape@@UEAAPEAXI@Z @ 0x1800AB080 (--_GCPolygonShape@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??_GCPolygonBuilder@@MEAAPEAXI@Z @ 0x18005FB50 (--_GCPolygonBuilder@@MEAAPEAXI@Z.c)
 *     ??_GCPathData@@MEAAPEAXI@Z @ 0x180060E00 (--_GCPathData@@MEAAPEAXI@Z.c)
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x180255010 (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CMILCOMBaseT<ID2D1GeometrySink,ID2D1GeometrySink,CMilObjectDeleter>::Release(CPathData *this)
{
  int v2; // ebx
  void *(__fastcall *v4)(CPolygonBuilder *__hidden, unsigned int); // rax
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
  (*(void (__fastcall **)(CPathData *))(*(_QWORD *)this + 128LL))(this);
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
  v4 = *(void *(__fastcall **)(CPolygonBuilder *__hidden, unsigned int))(*(_QWORD *)this + 120LL);
  if ( v4 == CPolygonBuilder::`scalar deleting destructor' )
  {
    CPolygonBuilder::`scalar deleting destructor'(this, 1u);
    return 0LL;
  }
  if ( v4 != CPathData::`scalar deleting destructor' )
  {
    v4(this, 1u);
    return (unsigned int)v2;
  }
  CPathData::`scalar deleting destructor'(this, 1u);
  return 0LL;
}
