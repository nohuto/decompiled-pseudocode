/*
 * XREFs of ?GetLightInfo@CCompositionDistantLight@@UEBAJPEBVCDrawingContext@@PEBVCMILMatrix@@PEAULightInfo@@@Z @ 0x1802950D0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?CalcLocalToDeviceMatrix@CCompositionLight@@IEBAJPEBVCDrawingContext@@PEBVCMILMatrix@@PEAVCVisual@@PEAV3@3@Z @ 0x1801659D0 (-CalcLocalToDeviceMatrix@CCompositionLight@@IEBAJPEBVCDrawingContext@@PEBVCMILMatrix@@PEAVCVisua.c)
 *     ?CalcEyePointOrVector@CCompositionLight@@IEBA?AUfloat4@Numerics@Foundation@Windows@@PEAVCVisual@@@Z @ 0x180165AE4 (-CalcEyePointOrVector@CCompositionLight@@IEBA-AUfloat4@Numerics@Foundation@Windows@@PEAVCVisual@.c)
 */

__int64 __fastcall CCompositionDistantLight::GetLightInfo(
        CCompositionDistantLight *this,
        const struct CDrawingContext *a2,
        const struct CMILMatrix *a3,
        struct LightInfo *a4)
{
  __int64 v5; // rcx
  float *v6; // rax
  __int64 v8; // r9
  int v9; // eax
  __int64 v10; // rcx
  unsigned int v11; // edi
  _BYTE v13[24]; // [rsp+30h] [rbp-18h] BYREF

  *(_DWORD *)a4 = 1;
  v5 = this - a4;
  v6 = (float *)((char *)a4 + 4);
  v8 = 4LL;
  do
  {
    *v6 = *(float *)((char *)v6 + v5 + 260) * *((float *)this + 73);
    ++v6;
    --v8;
  }
  while ( v8 );
  v9 = CCompositionLight::CalcLocalToDeviceMatrix(
         (struct LightInfo *)((char *)a4 + 104),
         a2,
         a3,
         *((struct CVisual **)this + 32),
         (struct LightInfo *)((char *)a4 + 104),
         (struct LightInfo *)((char *)a4 + 172));
  v11 = v9;
  if ( v9 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v9, 0x57u, 0LL);
  }
  else
  {
    *((_OWORD *)a4 + 5) = *(_OWORD *)CCompositionLight::CalcEyePointOrVector(v10, (__int64)v13, *((_QWORD *)this + 32));
    *((_QWORD *)a4 + 6) = *((_QWORD *)this + 35);
    *((_DWORD *)a4 + 14) = *((_DWORD *)this + 72);
  }
  return v11;
}
