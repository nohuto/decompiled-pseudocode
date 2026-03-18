/*
 * XREFs of ?Create@XamlSineInterpolation@@SAJW4KeyframeAnimationCoordinateSpace@@W4KeyframeAnimationEasingMode@@PEAPEAVKeyframeInterpolation@@@Z @ 0x1801E2E8C
 * Callers:
 *     ?AddKeyframeData@CKeyframeAnimation@@AEAAJHMPEBUKeyframeData@@W4KeyframeAnimationCoordinateSpace@@@Z @ 0x18029E040 (-AddKeyframeData@CKeyframeAnimation@@AEAAJHMPEBUKeyframeData@@W4KeyframeAnimationCoordinateSpace.c)
 * Callees:
 *     ??2KeyframeInterpolation@@SAPEAX_K@Z @ 0x1801E3124 (--2KeyframeInterpolation@@SAPEAX_K@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall XamlSineInterpolation::Create(int a1, unsigned int a2, _QWORD *a3)
{
  char *v6; // rax
  char *v7; // rbx
  __int64 result; // rax

  v6 = (char *)KeyframeInterpolation::operator new(0x20uLL);
  v7 = v6;
  if ( v6 )
  {
    *(_QWORD *)(v6 + 12) = 0LL;
    *(_QWORD *)(v6 + 20) = 0LL;
    *((_DWORD *)v6 + 7) = 0;
    *((_DWORD *)v6 + 2) = 0;
    *(_QWORD *)v6 = &XamlSineInterpolation::`vftable';
    ((void (__fastcall *)(char *))XamlSineInterpolation::`vftable')(v6);
  }
  else
  {
    v7 = 0LL;
  }
  *((_DWORD *)v7 + 4) = a1;
  if ( a2 > 2 )
    a2 = 0;
  result = 0LL;
  *((_DWORD *)v7 + 6) = a2;
  *a3 = v7;
  return result;
}
