/*
 * XREFs of ?GetFinalValue@CScalarForce@@UEBAMM@Z @ 0x180224B90
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

float __fastcall CScalarForce::GetFinalValue(CScalarForce *this, float a2)
{
  float result; // xmm0_4

  if ( !(*(unsigned __int8 (__fastcall **)(CScalarForce *))(*(_QWORD *)this + 48LL))(this) )
    return a2;
  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 13) + 24LL))(*((_QWORD *)this + 13));
  return result;
}
