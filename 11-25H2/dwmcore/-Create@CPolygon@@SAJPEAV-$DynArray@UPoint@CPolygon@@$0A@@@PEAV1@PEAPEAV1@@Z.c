/*
 * XREFs of ?Create@CPolygon@@SAJPEAV?$DynArray@UPoint@CPolygon@@$0A@@@PEAV1@PEAPEAV1@@Z @ 0x18029790C
 * Callers:
 *     ?CompareAndSplit@CPolygon@@QEAAJPEAV1@PEAW4Relation@D2DVectorHelper@@PEAPEAV1@2@Z @ 0x1801F9568 (-CompareAndSplit@CPolygon@@QEAAJPEAV1@PEAW4Relation@D2DVectorHelper@@PEAPEAV1@2@Z.c)
 * Callees:
 *     ?Create@CPolygon@@SAJPEAV?$DynArray@UPoint@CPolygon@@$0A@@@PEAVCVisual@@PEAVCContent@@PEAVCMILMatrix@@MIW4Enum@MilBitmapBorderMode@@W46MilCompositingMode@@W46MilBitmapInterpolationMode@@_N7PEAUD2D_VECTOR_4F@@PEAPEAV1@@Z @ 0x18020E9A0 (-Create@CPolygon@@SAJPEAV-$DynArray@UPoint@CPolygon@@$0A@@@PEAVCVisual@@PEAVCContent@@PEAVCMILMa.c)
 */

__int64 __fastcall CPolygon::Create(__int64 a1, const __m128i *a2, _QWORD *a3)
{
  return CPolygon::Create(
           a1,
           a2[13].m128i_i64[1],
           a2[15].m128i_i64[1],
           (__int64)a2[9].m128i_i64,
           a2[14].m128i_i32[0],
           a2[16].m128i_i32[2],
           a2[14].m128i_i32[3],
           a2[14].m128i_i32[1],
           a2[14].m128i_i32[2],
           a2[15].m128i_i8[0],
           a2[15].m128i_i8[1],
           a2 + 8,
           a3);
}
