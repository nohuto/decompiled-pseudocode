/*
 * XREFs of ??1CExpressionForce@@EEAA@XZ @ 0x1802AF8E0
 * Callers:
 *     ??_ECExpressionForce@@EEAAPEAXI@Z @ 0x1802AF910 (--_ECExpressionForce@@EEAAPEAXI@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CExpressionForce::~CExpressionForce(CExpressionForce *this)
{
  __int64 v2; // rcx

  v2 = *((_QWORD *)this + 12);
  if ( v2 )
  {
    *((_QWORD *)this + 12) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
}
