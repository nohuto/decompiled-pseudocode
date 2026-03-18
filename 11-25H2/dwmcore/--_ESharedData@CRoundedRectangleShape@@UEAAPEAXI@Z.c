/*
 * XREFs of ??_ESharedData@CRoundedRectangleShape@@UEAAPEAXI@Z @ 0x1801E5120
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18025C2F4 (--3@YAXPEAX_K@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

CRoundedRectangleShape::SharedData *__fastcall CRoundedRectangleShape::SharedData::`vector deleting destructor'(
        CRoundedRectangleShape::SharedData *this,
        char a2)
{
  __int64 v4; // rcx

  v4 = *((_QWORD *)this + 9);
  if ( v4 )
  {
    *((_QWORD *)this + 9) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  if ( (a2 & 1) != 0 )
    operator delete(this, 0x50uLL);
  return this;
}
