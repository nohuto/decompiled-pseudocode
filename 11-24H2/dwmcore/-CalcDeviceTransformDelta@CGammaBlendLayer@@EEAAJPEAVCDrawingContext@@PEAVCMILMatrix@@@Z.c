/*
 * XREFs of ?CalcDeviceTransformDelta@CGammaBlendLayer@@EEAAJPEAVCDrawingContext@@PEAVCMILMatrix@@@Z @ 0x18027BC70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CGammaBlendLayer::CalcDeviceTransformDelta(
        CGammaBlendLayer *this,
        struct CDrawingContext *a2,
        struct CMILMatrix *a3)
{
  int v3; // eax
  int v4; // edx

  v3 = *((_DWORD *)this + 4);
  v4 = *((_DWORD *)this + 5);
  *(_QWORD *)a3 = 1065353216LL;
  *((_QWORD *)a3 + 1) = 0LL;
  *((_DWORD *)a3 + 4) = 0;
  *(_QWORD *)((char *)a3 + 20) = 1065353216LL;
  *(_QWORD *)((char *)a3 + 28) = 0LL;
  *((_DWORD *)a3 + 9) = 0;
  *((_QWORD *)a3 + 5) = 1065353216LL;
  *((_DWORD *)a3 + 12) = COERCE_UNSIGNED_INT((float)v3) ^ _xmm;
  *(_QWORD *)((char *)a3 + 52) = COERCE_UNSIGNED_INT((float)v4) ^ (unsigned int)_xmm;
  *((_DWORD *)a3 + 15) = 1065353216;
  LOBYTE(v3) = *((_BYTE *)a3 + 65) & 0xE9;
  *((_BYTE *)a3 + 64) = -88;
  *((_BYTE *)a3 + 65) = v3 | 0x29;
  return 0LL;
}
