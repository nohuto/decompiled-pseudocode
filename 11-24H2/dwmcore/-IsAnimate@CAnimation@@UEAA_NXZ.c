/*
 * XREFs of ?IsAnimate@CAnimation@@UEAA_NXZ @ 0x1800F2640
 * Callers:
 *     <none>
 * Callees:
 *     ?HasPrimitives@CAnimation@@QEAA_NXZ @ 0x1800F2B0C (-HasPrimitives@CAnimation@@QEAA_NXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

bool __fastcall CAnimation::IsAnimate(CAnimation *this)
{
  __int64 v1; // rax
  CAnimation *v3; // rcx
  bool (__fastcall *v4)(CAnimation *__hidden); // rax

  v1 = *((_QWORD *)this - 9);
  v3 = (CAnimation *)((char *)this - 72);
  v4 = *(bool (__fastcall **)(CAnimation *__hidden))(v1 + 192);
  if ( v4 == CAnimation::HasEnded )
  {
    if ( *((_BYTE *)v3 + 293) || !CAnimation::HasPrimitives(v3) )
      return 0;
  }
  else if ( v4(v3) )
  {
    return 0;
  }
  return *((_DWORD *)this + 8) && !*((_BYTE *)this + 222) && (!*((_BYTE *)this + 224) || !*((_BYTE *)this + 220));
}
