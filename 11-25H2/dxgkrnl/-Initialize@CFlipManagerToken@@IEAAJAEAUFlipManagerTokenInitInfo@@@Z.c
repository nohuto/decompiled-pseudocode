/*
 * XREFs of ?Initialize@CFlipManagerToken@@IEAAJAEAUFlipManagerTokenInitInfo@@@Z @ 0x14004D34C
 * Callers:
 *     ?ObjectInit@FlipManagerTokenObject@@KAJPEAVDxgkCompositionObject@@PEAXPEAPEAVIDxgkCompositionObject@@@Z @ 0x14004D300 (-ObjectInit@FlipManagerTokenObject@@KAJPEAVDxgkCompositionObject@@PEAXPEAPEAVIDxgkCompositionObj.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CFlipManagerToken::Initialize(CFlipManagerToken *this, struct FlipManagerTokenInitInfo *a2)
{
  __int64 v2; // rax
  __int64 v3; // rax
  __int64 v4; // rax
  __int64 result; // rax

  *((_DWORD *)this + 8) = 0;
  *((_QWORD *)this + 9) = *(_QWORD *)a2;
  v2 = *((_QWORD *)a2 + 1);
  *(_QWORD *)a2 = 0LL;
  *((_QWORD *)this + 11) = v2;
  v3 = *((_QWORD *)a2 + 3);
  *((_QWORD *)a2 + 1) = 0LL;
  *((_QWORD *)this + 12) = v3;
  *((_QWORD *)this + 14) = *((_QWORD *)a2 + 4);
  v4 = *((_QWORD *)a2 + 6);
  *((_QWORD *)this + 13) = v4;
  *((_BYTE *)this + 123) = v4 != 0;
  *((_QWORD *)this + 10) = *((_QWORD *)a2 + 5);
  LOBYTE(v4) = *((_BYTE *)a2 + 16);
  *((_QWORD *)a2 + 5) = 0LL;
  *((_BYTE *)this + 120) = v4;
  result = 0LL;
  *((_BYTE *)this + 122) = 1;
  return result;
}
