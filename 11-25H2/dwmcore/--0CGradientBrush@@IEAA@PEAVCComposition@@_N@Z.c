/*
 * XREFs of ??0CGradientBrush@@IEAA@PEAVCComposition@@_N@Z @ 0x1801EDA04
 * Callers:
 *     ??0CRadialGradientBrush@@QEAA@PEAVCComposition@@@Z @ 0x1801ED924 (--0CRadialGradientBrush@@QEAA@PEAVCComposition@@@Z.c)
 *     ??0CLinearGradientBrush@@QEAA@PEAVCComposition@@@Z @ 0x1801ED99C (--0CLinearGradientBrush@@QEAA@PEAVCComposition@@@Z.c)
 * Callees:
 *     <none>
 */

CGradientBrush *__fastcall CGradientBrush::CGradientBrush(CGradientBrush *this, struct CComposition *a2, char a3)
{
  CGradientBrush *result; // rax

  *(_QWORD *)this = &CBaseAnimation::`vftable'{for `IAnimationResource'};
  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = a2;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_DWORD *)this + 10) = 0;
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 11) = 0LL;
  *((_BYTE *)this + 96) = 0;
  *((_QWORD *)this + 15) = 0LL;
  *((_QWORD *)this + 16) = (char *)this + 152;
  *((_QWORD *)this + 17) = (char *)this + 152;
  *((_QWORD *)this + 18) = (char *)this + 168;
  result = this;
  *((_QWORD *)this + 21) = 0LL;
  *((_QWORD *)this + 22) = 0LL;
  *((_QWORD *)this + 23) = 0LL;
  *((_QWORD *)this + 24) = 0LL;
  *((_QWORD *)this + 25) = 0LL;
  *((_QWORD *)this + 26) = 0LL;
  *((_QWORD *)this + 27) = 0LL;
  *((_DWORD *)this + 56) = 2;
  *((_DWORD *)this + 57) = 1;
  *((_WORD *)this + 116) = 1;
  *((_BYTE *)this + 234) = 0;
  *((_BYTE *)this + 235) = a3;
  return result;
}
