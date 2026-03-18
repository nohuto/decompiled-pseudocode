/*
 * XREFs of ??1CPrimitiveGroupDrawListBrush@@UEAA@XZ @ 0x180171E04
 * Callers:
 *     ??_ECPrimitiveGroupDrawListBrush@@UEAAPEAXI@Z @ 0x180171DB0 (--_ECPrimitiveGroupDrawListBrush@@UEAAPEAXI@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CPrimitiveGroupDrawListBrush::~CPrimitiveGroupDrawListBrush(CPrimitiveGroupDrawListBrush *this)
{
  __int64 v2; // rcx

  v2 = *((_QWORD *)this + 9);
  if ( v2 )
  {
    *((_QWORD *)this + 9) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
  }
}
