/*
 * XREFs of ?KernelMapVisualRelativePoint@@YAJ_J0PEBUVisualPoint@@PEAU1@@Z @ 0x1401AAB44
 * Callers:
 *     NtMapVisualRelativePoints @ 0x1401AB4D0 (NtMapVisualRelativePoints.c)
 * Callees:
 *     ?GetTransformFromInputSink@@YAJPEAXPEAUtagINPUT_TRANSFORM@@@Z @ 0x1401AA748 (-GetTransformFromInputSink@@YAJPEAXPEAUtagINPUT_TRANSFORM@@@Z.c)
 *     ?InverseTransformPoint@@YA?AUTransformedPoint@@AEBU1@AEBUtagINPUT_TRANSFORM@@@Z @ 0x1401AA7B0 (-InverseTransformPoint@@YA-AUTransformedPoint@@AEBU1@AEBUtagINPUT_TRANSFORM@@@Z.c)
 *     ?MapVisualRelativePoint@InputSink@InputTraceLogging@@SAXPEAX0AEBUtagINPUT_TRANSFORM@@1UVisualPoint@@2@Z @ 0x1401AB138 (-MapVisualRelativePoint@InputSink@InputTraceLogging@@SAXPEAX0AEBUtagINPUT_TRANSFORM@@1UVisualPoi.c)
 *     ?TransformPoint@@YA?AUTransformedPoint@@AEBU1@AEBUtagINPUT_TRANSFORM@@@Z @ 0x1401AB450 (-TransformPoint@@YA-AUTransformedPoint@@AEBU1@AEBUtagINPUT_TRANSFORM@@@Z.c)
 *     memset @ 0x14023F500 (memset.c)
 */

__int64 __fastcall KernelMapVisualRelativePoint(
        char *a1,
        char *a2,
        const struct VisualPoint *a3,
        struct VisualPoint *a4)
{
  int TransformFromInputSink; // ebx
  float v10[16]; // [rsp+30h] [rbp-49h] BYREF
  _BYTE v11[96]; // [rsp+70h] [rbp-9h] BYREF
  unsigned __int64 v12; // [rsp+E0h] [rbp+67h] BYREF
  char v13; // [rsp+F0h] [rbp+77h] BYREF

  *(_QWORD *)a4 = *(_QWORD *)a3;
  TransformFromInputSink = 0;
  memset(v11, 0, 0x40uLL);
  if ( (unsigned __int64)(a1 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
  {
    TransformFromInputSink = GetTransformFromInputSink(a1, (struct tagINPUT_TRANSFORM *)v11);
    if ( TransformFromInputSink < 0 )
      return (unsigned int)TransformFromInputSink;
    v12 = _mm_unpacklo_ps((__m128)*(unsigned int *)a4, (__m128)*((unsigned int *)a4 + 1)).m128_u64[0];
    *(_QWORD *)a4 = *(_QWORD *)TransformPoint(&v13, &v12, v11);
  }
  memset(v10, 0, sizeof(v10));
  if ( (unsigned __int64)(a2 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
  {
LABEL_7:
    InputTraceLogging::InputSink::MapVisualRelativePoint(a1, a2, v11, v10, *(_QWORD *)a3, *(_QWORD *)a4);
    return (unsigned int)TransformFromInputSink;
  }
  TransformFromInputSink = GetTransformFromInputSink(a2, (struct tagINPUT_TRANSFORM *)v10);
  if ( TransformFromInputSink >= 0 )
  {
    v12 = _mm_unpacklo_ps((__m128)*(unsigned int *)a4, (__m128)*((unsigned int *)a4 + 1)).m128_u64[0];
    *(_QWORD *)a4 = *(_QWORD *)InverseTransformPoint((__int64)&v13, (float *)&v12, v10);
    goto LABEL_7;
  }
  return (unsigned int)TransformFromInputSink;
}
