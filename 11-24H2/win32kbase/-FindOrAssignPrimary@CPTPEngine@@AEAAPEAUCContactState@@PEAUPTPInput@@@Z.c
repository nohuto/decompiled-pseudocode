/*
 * XREFs of ?FindOrAssignPrimary@CPTPEngine@@AEAAPEAUCContactState@@PEAUPTPInput@@@Z @ 0x14013BFE4
 * Callers:
 *     ?DoTPGestureProcessing@CPTPEngine@@AEAAXPEAUPTPInput@@@Z @ 0x1400CB368 (-DoTPGestureProcessing@CPTPEngine@@AEAAXPEAUPTPInput@@@Z.c)
 * Callees:
 *     <none>
 */

struct CContactState *__fastcall CPTPEngine::FindOrAssignPrimary(CPTPEngine *this, struct PTPInput *a2)
{
  _DWORD *v2; // r10
  __int64 v3; // r9
  _DWORD *v4; // r8
  unsigned int i; // r11d
  int v6; // eax

  v2 = (_DWORD *)((char *)a2 + 68);
  v3 = 0LL;
  v4 = 0LL;
  for ( i = 0; i < *((_DWORD *)a2 + 12); ++i )
  {
    v6 = *((_DWORD *)this + 82 * (unsigned int)(*(v2 - 2) % *((_DWORD *)this + 4)) + 204);
    if ( (v6 & 1) != 0 && (v6 & 0x800) == 0 )
    {
      if ( (*v2 & 0x2000) != 0 )
        return (CPTPEngine *)((char *)this + 328 * (unsigned int)(*(v2 - 2) % *((_DWORD *)this + 4)) + 816);
      if ( !v4 )
        v4 = (_DWORD *)((char *)this + 328 * (unsigned int)(*(v2 - 2) % *((_DWORD *)this + 4)) + 816);
    }
    v2 += 24;
  }
  if ( v4 )
  {
    *v4 |= 0x40000000u;
    return (struct CContactState *)v4;
  }
  return (struct CContactState *)v3;
}
