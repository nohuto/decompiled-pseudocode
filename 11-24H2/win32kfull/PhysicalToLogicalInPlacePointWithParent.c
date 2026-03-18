/*
 * XREFs of PhysicalToLogicalInPlacePointWithParent @ 0x1401596DC
 * Callers:
 *     ?AdjustMouseCoordinates@@YAXPEAUtagWND@@PEA_J@Z @ 0x1402195FC (-AdjustMouseCoordinates@@YAXPEAUtagWND@@PEA_J@Z.c)
 *     ?xxxPointerActivateInternal@@YAXPEAUtagWND@@F_KPEBUtagPOINTEREVENTINT@@H@Z @ 0x14021985C (-xxxPointerActivateInternal@@YAXPEAUtagWND@@F_KPEBUtagPOINTEREVENTINT@@H@Z.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x14027AA48 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 * Callees:
 *     ?GetTopLevelOrDpiBoundaryWindow@@YAPEBUtagWND@@PEBU1@@Z @ 0x1400453CC (-GetTopLevelOrDpiBoundaryWindow@@YAPEBUtagWND@@PEBU1@@Z.c)
 *     FixedPointSubPixel @ 0x14015A1C8 (FixedPointSubPixel.c)
 */

const struct tagWND *__fastcall PhysicalToLogicalInPlacePointWithParent(const struct tagWND *a1, int *a2, int *a3)
{
  const struct tagWND *result; // rax
  const struct tagWND *v6; // rdi
  float *v7; // rdx
  float v8; // xmm3_4
  float v9; // xmm2_4
  double v10; // xmm0_8
  __int64 v11; // rdx
  double v12; // xmm0_8
  float v13; // xmm0_4
  __m128i v14; // xmm0

  result = GetTopLevelOrDpiBoundaryWindow(a1, (__int64)a2, (__int64)a3);
  v6 = result;
  if ( result )
  {
    result = (const struct tagWND *)IsWindowDesktopComposed(result);
    if ( (_DWORD)result )
    {
      v7 = (float *)*((_QWORD *)v6 + 27);
      if ( v7 )
      {
        v8 = 1.0 / *v7;
        v9 = 1.0 / v7[5];
        if ( a3 )
        {
          v10 = FixedPointSubPixel(*a3);
          *a2 = (int)(float)((float)((float)(*(float *)&v10 + (float)*a2) - *(float *)(v11 + 48)) * v8);
          v12 = FixedPointSubPixel(a3[1]);
          v13 = *(float *)&v12 + (float)a2[1];
        }
        else
        {
          v14 = _mm_cvtsi32_si128(a2[1]);
          *a2 = (int)(float)((float)((float)*a2 - v7[12]) * v8);
          LODWORD(v13) = _mm_cvtepi32_ps(v14).m128_u32[0];
        }
        result = (const struct tagWND *)(unsigned int)(int)(float)(v9 * (float)(v13 - v7[13]));
        a2[1] = (int)result;
      }
    }
  }
  return result;
}
