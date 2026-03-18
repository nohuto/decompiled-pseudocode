/*
 * XREFs of ?Release@?$CMILCOMBaseT@UID2D1SimplifiedGeometrySink@@U1@VCMilObjectDeleter@@@@UEAAKXZ @ 0x18019D2F0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CTransformedGeometryHelper@@EEAA@XZ @ 0x18019D430 (--1CTransformedGeometryHelper@@EEAA@XZ.c)
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x180249CC0 (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x180250CC4 (--3@YAXPEAX_K@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CMILCOMBaseT<ID2D1SimplifiedGeometrySink,ID2D1SimplifiedGeometrySink,CMilObjectDeleter>::Release(
        CTransformedGeometryHelper *this)
{
  int v2; // edi
  CTransformedGeometryHelper *(__fastcall *v3)(CTransformedGeometryHelper *, char); // rax
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
  if ( !v2 )
  {
    if ( _InterlockedAdd((volatile signed __int32 *)this + 2, 1u) <= 0 )
      wil::details::in1diag3::Log_Hr(
        retaddr,
        (void *)0x18,
        (unsigned int)"onecoreuap\\windows\\dwm\\common\\shared\\refcountbase.cpp",
        (const char *)0x8007029CLL,
        v5);
    (*(void (__fastcall **)(CTransformedGeometryHelper *))(*(_QWORD *)this + 88LL))(this);
    v2 = _InterlockedDecrement((volatile signed __int32 *)this + 2);
    if ( v2 < -1 )
      wil::details::in1diag3::Log_Hr(
        retaddr,
        (void *)0x26,
        (unsigned int)"onecoreuap\\windows\\dwm\\common\\shared\\refcountbase.cpp",
        (const char *)0x8007029CLL,
        v5);
    if ( !v2 )
    {
      if ( _InterlockedDecrement((volatile signed __int32 *)this + 2) < -1 )
        wil::details::in1diag3::Log_Hr(
          retaddr,
          (void *)0x26,
          (unsigned int)"onecoreuap\\windows\\dwm\\common\\shared\\refcountbase.cpp",
          (const char *)0x8007029CLL,
          v5);
      v3 = *(CTransformedGeometryHelper *(__fastcall **)(CTransformedGeometryHelper *, char))(*(_QWORD *)this + 80LL);
      if ( v3 == CTransformedGeometryHelper::`vector deleting destructor' )
      {
        CTransformedGeometryHelper::~CTransformedGeometryHelper(this);
        operator delete(this, 0x40uLL);
      }
      else
      {
        v3(this, 1);
      }
    }
  }
  return (unsigned int)v2;
}
