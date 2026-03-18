/*
 * XREFs of ?GetModifiedRestingValue@CMotion@@QEBAMXZ @ 0x180226344
 * Callers:
 *     ?GetModifiedRestingValue@CScrollAnimation@@QEBAMXZ @ 0x1800F5B38 (-GetModifiedRestingValue@CScrollAnimation@@QEBAMXZ.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

float __fastcall CMotion::GetModifiedRestingValue(CMotion *this)
{
  __int64 v2; // rcx
  float result; // xmm0_4

  v2 = *((_QWORD *)this + 3);
  if ( !v2 || !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v2 + 48LL))(v2) )
    return fminf(fmaxf(*((float *)this + 21), *((float *)this + 22)), *((float *)this + 15));
  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 3) + 40LL))(*((_QWORD *)this + 3));
  return result;
}
