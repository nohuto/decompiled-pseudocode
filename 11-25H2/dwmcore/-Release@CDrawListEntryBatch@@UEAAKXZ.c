/*
 * XREFs of ?Release@CDrawListEntryBatch@@UEAAKXZ @ 0x1801BEB30
 * Callers:
 *     <none>
 * Callees:
 *     ??_GCDrawListEntryBatch@@EEAAPEAXI@Z @ 0x1801BEC60 (--_GCDrawListEntryBatch@@EEAAPEAXI@Z.c)
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x180255010 (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CDrawListEntryBatch::Release(CDrawListEntryBatch *this)
{
  int v2; // ebx
  void *(__fastcall *v4)(CDrawListEntryBatch *__hidden, unsigned int); // rax
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
    (*(void (__fastcall **)(CDrawListEntryBatch *))(*(_QWORD *)this + 40LL))(this);
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
      v4 = *(void *(__fastcall **)(CDrawListEntryBatch *__hidden, unsigned int))(*(_QWORD *)this + 32LL);
      if ( v4 == CDrawListEntryBatch::`scalar deleting destructor' )
        CDrawListEntryBatch::`scalar deleting destructor'(this, 1u);
      else
        v4(this, 1u);
    }
  }
  return (unsigned int)v2;
}
