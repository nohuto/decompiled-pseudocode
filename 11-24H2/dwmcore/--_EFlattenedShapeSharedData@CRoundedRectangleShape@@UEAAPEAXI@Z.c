/*
 * XREFs of ??_EFlattenedShapeSharedData@CRoundedRectangleShape@@UEAAPEAXI@Z @ 0x1801D7440
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180250CC4 (--3@YAXPEAX_K@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

CRoundedRectangleShape::FlattenedShapeSharedData *__fastcall CRoundedRectangleShape::FlattenedShapeSharedData::`vector deleting destructor'(
        CRoundedRectangleShape::FlattenedShapeSharedData *this,
        char a2)
{
  _QWORD *v4; // rcx
  unsigned __int64 v5; // rdx
  __int64 v6; // rcx

  v4 = (_QWORD *)*((_QWORD *)this + 10);
  if ( v4 )
  {
    v5 = (*((_QWORD *)this + 12) - (_QWORD)v4) & 0xFFFFFFFFFFFFFFF8uLL;
    if ( v5 >= 0x1000 )
    {
      v5 += 39LL;
      if ( (unsigned __int64)v4 - *(v4 - 1) - 8 > 0x1F )
        _invalid_parameter_noinfo_noreturn();
      v4 = (_QWORD *)*(v4 - 1);
    }
    operator delete(v4, v5);
    *((_QWORD *)this + 10) = 0LL;
    *((_QWORD *)this + 11) = 0LL;
    *((_QWORD *)this + 12) = 0LL;
  }
  v6 = *((_QWORD *)this + 9);
  if ( v6 )
  {
    *((_QWORD *)this + 9) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  if ( (a2 & 1) != 0 )
    operator delete(this, 0x68uLL);
  return this;
}
