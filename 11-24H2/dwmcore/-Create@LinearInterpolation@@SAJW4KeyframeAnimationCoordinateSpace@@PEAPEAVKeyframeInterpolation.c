/*
 * XREFs of ?Create@LinearInterpolation@@SAJW4KeyframeAnimationCoordinateSpace@@PEAPEAVKeyframeInterpolation@@@Z @ 0x1801E30B8
 * Callers:
 *     ?AddKeyframeData@CKeyframeAnimation@@AEAAJHMPEBUKeyframeData@@W4KeyframeAnimationCoordinateSpace@@@Z @ 0x18029E040 (-AddKeyframeData@CKeyframeAnimation@@AEAAJHMPEBUKeyframeData@@W4KeyframeAnimationCoordinateSpace.c)
 * Callees:
 *     ??2KeyframeInterpolation@@SAPEAX_K@Z @ 0x1801E3124 (--2KeyframeInterpolation@@SAPEAX_K@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall LinearInterpolation::Create(int a1, _QWORD *a2)
{
  char *v4; // rbx
  __int64 result; // rax

  v4 = (char *)KeyframeInterpolation::operator new(0x18uLL);
  if ( v4 )
  {
    *(_QWORD *)(v4 + 12) = 0LL;
    *((_DWORD *)v4 + 5) = 0;
    *((_DWORD *)v4 + 2) = 0;
    *(_QWORD *)v4 = &LinearInterpolation::`vftable';
    ((void (__fastcall *)(char *))LinearInterpolation::`vftable')(v4);
  }
  else
  {
    v4 = 0LL;
  }
  *((_DWORD *)v4 + 4) = a1;
  result = 0LL;
  *a2 = v4;
  return result;
}
