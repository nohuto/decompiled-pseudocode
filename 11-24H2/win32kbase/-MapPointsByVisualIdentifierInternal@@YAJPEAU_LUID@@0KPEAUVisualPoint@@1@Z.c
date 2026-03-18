/*
 * XREFs of ?MapPointsByVisualIdentifierInternal@@YAJPEAU_LUID@@0KPEAUVisualPoint@@1@Z @ 0x1401AAF8C
 * Callers:
 *     NtUserMapPointsByVisualIdentifier @ 0x1401BC710 (NtUserMapPointsByVisualIdentifier.c)
 * Callees:
 *     ?InverseTransformPoint@@YA?AUTransformedPoint@@AEBU1@AEBUtagINPUT_TRANSFORM@@@Z @ 0x1401AA7B0 (-InverseTransformPoint@@YA-AUTransformedPoint@@AEBU1@AEBUtagINPUT_TRANSFORM@@@Z.c)
 *     ?MapPointsByVisualIdentifier@InputSink@InputTraceLogging@@SAXPEBU_LUID@@0AEBUtagINPUT_TRANSFORM@@1UVisualPoint@@2@Z @ 0x1401AAC6C (-MapPointsByVisualIdentifier@InputSink@InputTraceLogging@@SAXPEBU_LUID@@0AEBUtagINPUT_TRANSFORM@.c)
 *     ?TransformPoint@@YA?AUTransformedPoint@@AEBU1@AEBUtagINPUT_TRANSFORM@@@Z @ 0x1401AB450 (-TransformPoint@@YA-AUTransformedPoint@@AEBU1@AEBUtagINPUT_TRANSFORM@@@Z.c)
 *     ?GetTransform@InputObjectMap@@SAJAEBU_LUID@@PEAUtagINPUT_TRANSFORM@@@Z @ 0x14023A6C8 (-GetTransform@InputObjectMap@@SAJAEBU_LUID@@PEAUtagINPUT_TRANSFORM@@@Z.c)
 *     memset @ 0x14023F500 (memset.c)
 */

__int64 __fastcall MapPointsByVisualIdentifierInternal(
        struct _LUID *a1,
        struct _LUID *a2,
        int a3,
        struct VisualPoint *a4,
        struct VisualPoint *a5)
{
  int Transform; // ebx
  __int64 v9; // r14
  __m128 v10; // xmm0
  __m128 v11; // xmm1
  unsigned int *v12; // rax
  __int64 *v13; // rax
  int v15; // [rsp+38h] [rbp-81h]
  __int64 v16; // [rsp+40h] [rbp-79h]
  unsigned __int64 v17; // [rsp+48h] [rbp-71h] BYREF
  _BYTE v18[8]; // [rsp+50h] [rbp-69h] BYREF
  _BYTE v19[16]; // [rsp+58h] [rbp-61h] BYREF
  float v20[16]; // [rsp+68h] [rbp-51h] BYREF
  _BYTE v21[64]; // [rsp+A8h] [rbp-11h] BYREF

  Transform = 0;
  v15 = 0;
  memset(v21, 0, sizeof(v21));
  if ( a1 )
  {
    Transform = InputObjectMap::GetTransform(a1, (struct tagINPUT_TRANSFORM *)v21);
    v15 = Transform;
  }
  memset(v20, 0, sizeof(v20));
  if ( Transform >= 0 )
  {
    if ( !a2 || (v15 = InputObjectMap::GetTransform(a2, (struct tagINPUT_TRANSFORM *)v20), Transform = v15, v15 >= 0) )
    {
      v9 = 0LL;
      if ( a3 )
      {
        do
        {
          v10 = (__m128)*((unsigned int *)a4 + 2 * v9);
          v11 = (__m128)*((unsigned int *)a4 + 2 * v9 + 1);
          v16 = __PAIR64__(v11.m128_u32[0], v10.m128_u32[0]);
          *((_DWORD *)a5 + 2 * v9) = v10.m128_i32[0];
          *((_DWORD *)a5 + 2 * v9 + 1) = v11.m128_i32[0];
          if ( a1 )
          {
            v17 = _mm_unpacklo_ps(v10, v11).m128_u64[0];
            v12 = (unsigned int *)TransformPoint(v18, &v17, v21);
            v10 = (__m128)*v12;
            v11 = (__m128)v12[1];
            v16 = __PAIR64__(v11.m128_u32[0], v10.m128_u32[0]);
            *((_DWORD *)a5 + 2 * v9) = v10.m128_i32[0];
            *((_DWORD *)a5 + 2 * v9 + 1) = v11.m128_i32[0];
          }
          if ( a2 )
          {
            v17 = _mm_unpacklo_ps(v10, v11).m128_u64[0];
            v13 = (__int64 *)InverseTransformPoint((__int64)v19, (float *)&v17, v20);
            v16 = *v13;
            *((_QWORD *)a5 + v9) = *v13;
          }
          InputTraceLogging::InputSink::MapPointsByVisualIdentifier(
            (__int64)a1,
            (__int64)a2,
            (__int64)v21,
            (__int64)v20,
            *((_QWORD *)a4 + v9),
            v16);
          v9 = (unsigned int)(v9 + 1);
        }
        while ( (_DWORD)v9 != a3 );
        return (unsigned int)v15;
      }
    }
  }
  return (unsigned int)Transform;
}
