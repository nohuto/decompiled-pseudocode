/*
 * XREFs of gsl::final_action__lambda_8739158a9a179f14d1c8f93c1d3d537f___::_final_action__lambda_8739158a9a179f14d1c8f93c1d3d537f___ @ 0x1801E22F8
 * Callers:
 *     ?FillShapeWithBitmap@CDrawingContext@@QEAAJPEAVIBitmapResource@@AEBVCMILMatrix@@AEBVCShape@@_NH@Z @ 0x1800BC1A0 (-FillShapeWithBitmap@CDrawingContext@@QEAAJPEAVIBitmapResource@@AEBVCMILMatrix@@AEBVCShape@@_NH@.c)
 * Callees:
 *     <none>
 */

void __fastcall gsl::final_action__lambda_8739158a9a179f14d1c8f93c1d3d537f___::_final_action__lambda_8739158a9a179f14d1c8f93c1d3d537f___(
        _BYTE *a1)
{
  __int64 v1; // rdx
  __m128i v2; // xmm0
  int v3; // eax
  __int64 v4; // rcx
  int v5; // eax
  int v6; // eax
  int v7; // eax

  if ( a1[8] )
  {
    v1 = *(_QWORD *)a1;
    v2 = 0LL;
    v3 = *(_DWORD *)(*(_QWORD *)a1 + 272LL);
    if ( v3 )
    {
      v4 = (unsigned int)(v3 - 1);
      *(_DWORD *)(v1 + 272) = v4;
      v2 = *(__m128i *)(*(_QWORD *)(v1 + 264) + 16 * v4);
    }
    if ( _mm_srli_si128(v2, 8).m128i_u64[0] )
    {
      v5 = *(_DWORD *)(v1 + 344);
      if ( v5 )
        *(_DWORD *)(v1 + 344) = v5 - 1;
    }
    v6 = *(_DWORD *)(v1 + 296);
    if ( v6 )
      *(_DWORD *)(v1 + 296) = v6 - 1;
    v7 = *(_DWORD *)(v1 + 320);
    if ( v7 )
      *(_DWORD *)(v1 + 320) = v7 - 1;
  }
}
