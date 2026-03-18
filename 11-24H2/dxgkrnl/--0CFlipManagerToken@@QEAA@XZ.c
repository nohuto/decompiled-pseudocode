/*
 * XREFs of ??0CFlipManagerToken@@QEAA@XZ @ 0x14004E98C
 * Callers:
 *     ?ObjectInit@FlipManagerTokenObject@@KAJPEAVDxgkCompositionObject@@PEAXPEAPEAVIDxgkCompositionObject@@@Z @ 0x14004E900 (-ObjectInit@FlipManagerTokenObject@@KAJPEAVDxgkCompositionObject@@PEAXPEAPEAVIDxgkCompositionObj.c)
 * Callees:
 *     <none>
 */

CFlipManagerToken *__fastcall CFlipManagerToken::CFlipManagerToken(CFlipManagerToken *this)
{
  CFlipManagerToken *result; // rax

  *((_DWORD *)this + 8) = 6;
  *((_QWORD *)this + 5) = 0LL;
  *(_QWORD *)this = &CFlipManagerToken::`vftable'{for `IDxgkCompositionObject'};
  *((_DWORD *)this + 12) = 0;
  *((_QWORD *)this + 1) = &CFlipManagerToken::`vftable'{for `CTokenBase'};
  result = this;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 11) = 0LL;
  *((_QWORD *)this + 12) = 0LL;
  *((_QWORD *)this + 13) = 0LL;
  *((_QWORD *)this + 14) = 0LL;
  *((_BYTE *)this + 120) = 0;
  *((_WORD *)this + 61) = 0;
  *((_OWORD *)this + 1) = 0LL;
  return result;
}
