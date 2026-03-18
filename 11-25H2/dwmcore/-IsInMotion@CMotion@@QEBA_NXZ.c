/*
 * XREFs of ?IsInMotion@CMotion@@QEBA_NXZ @ 0x180216CA0
 * Callers:
 *     ?IsInMotion@CScrollAnimation@@UEBA_NXZ @ 0x1800F2AC0 (-IsInMotion@CScrollAnimation@@UEBA_NXZ.c)
 * Callees:
 *     ?HasImpulse@CMotion@@QEBA_NXZ @ 0x180216D24 (-HasImpulse@CMotion@@QEBA_NXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall CMotion::IsInMotion(CMotion *this)
{
  char v2; // bl
  int v3; // ecx
  int v4; // ecx
  __int64 v5; // rcx

  v2 = 0;
  v3 = *((_DWORD *)this + 10);
  if ( !v3 )
    return CMotion::HasImpulse(this);
  v4 = v3 - 1;
  if ( !v4 )
    return 1;
  if ( v4 == 1 )
  {
    if ( CMotion::HasImpulse(this) )
      return 1;
    v5 = *((_QWORD *)this + 3);
    if ( !v5 )
      return *((float *)this + 23) > *((float *)this + 12);
    if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v5 + 24LL))(v5)
      && *((float *)this + 8) > *((float *)this + 12) )
    {
      return 1;
    }
  }
  return v2;
}
