/*
 * XREFs of CcAggregateCumulativeVolumeTelemetry @ 0x1404D8680
 * Callers:
 *     CcPostVolumeTelemetry @ 0x14040C990 (CcPostVolumeTelemetry.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CcAggregateCumulativeVolumeTelemetry(__int64 a1)
{
  unsigned __int64 v1; // rdx
  __m128i v3; // xmm0
  __m128i v4; // xmm1
  __m128i v5; // xmm1
  __m128i v6; // xmm0
  unsigned __int64 v7; // rax
  __int64 v8; // rdx
  unsigned __int64 v9; // rcx
  __m128i v10; // xmm1
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rcx
  _QWORD *v13; // rcx
  unsigned __int64 v14; // rcx
  unsigned __int64 *v15; // r9
  __m128i v16; // xmm0
  __int64 v17; // rdx
  __int64 v18; // r10
  __m128i v19; // xmm1
  unsigned __int64 v20; // rax
  unsigned __int64 v21; // rcx
  unsigned __int64 v22; // r11
  unsigned __int64 v23; // rax
  unsigned __int64 v24; // rcx
  __int64 v25; // rdx
  unsigned __int64 v26; // rcx
  __m128i v27; // xmm0
  __m128i v28; // xmm1
  unsigned __int64 v29; // rax
  unsigned __int64 v30; // rcx
  unsigned __int64 v31; // rcx
  _QWORD *v32; // rcx
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 1256);
  v3 = _mm_loadu_si128((const __m128i *)(a1 + 1288));
  *(_QWORD *)(a1 + 1248) += *(_QWORD *)(a1 + 16);
  v4 = _mm_loadu_si128((const __m128i *)(a1 + 56));
  if ( v1 <= *(_QWORD *)(a1 + 24) )
    v1 = *(_QWORD *)(a1 + 24);
  v5 = _mm_add_epi64(v4, v3);
  *(_QWORD *)(a1 + 1264) += *(_QWORD *)(a1 + 32);
  v6 = _mm_loadu_si128((const __m128i *)(a1 + 1312));
  *(_QWORD *)(a1 + 1272) = *(_QWORD *)(a1 + 40);
  *(_QWORD *)(a1 + 1280) = *(_QWORD *)(a1 + 48);
  v7 = *(_QWORD *)(a1 + 72);
  *(__m128i *)(a1 + 1288) = v5;
  *(_QWORD *)(a1 + 1256) = v1;
  v8 = 10LL;
  v9 = *(_QWORD *)(a1 + 1304);
  v10 = _mm_loadu_si128((const __m128i *)(a1 + 80));
  if ( v9 <= v7 )
    v9 = v7;
  v11 = *(_QWORD *)(a1 + 96);
  *(_QWORD *)(a1 + 1304) = v9;
  v12 = *(_QWORD *)(a1 + 1328);
  *(__m128i *)(a1 + 1312) = _mm_add_epi64(v10, v6);
  if ( v12 <= v11 )
    v12 = v11;
  *(_QWORD *)(a1 + 1328) = v12;
  v13 = (_QWORD *)(a1 + 1336);
  do
  {
    *v13 += *(v13 - 154);
    ++v13;
    --v8;
  }
  while ( v8 );
  v14 = *(_QWORD *)(a1 + 1448);
  v15 = (unsigned __int64 *)(a1 + 1440);
  v16 = _mm_loadu_si128((const __m128i *)(a1 + 1848));
  v17 = *(_QWORD *)(a1 + 1424);
  v18 = *(_QWORD *)(a1 + 192);
  v19 = _mm_loadu_si128((const __m128i *)(a1 + 616));
  if ( v14 <= *(_QWORD *)(a1 + 216) )
    v14 = *(_QWORD *)(a1 + 216);
  v20 = *(_QWORD *)(a1 + 224);
  *(_QWORD *)(a1 + 1448) = v14;
  v21 = *(_QWORD *)(a1 + 1456);
  v22 = v18 + v17;
  *(__m128i *)(a1 + 1848) = _mm_add_epi64(v19, v16);
  if ( v21 <= v20 )
    v21 = v20;
  *(_QWORD *)(a1 + 1864) += *(_QWORD *)(a1 + 632);
  v23 = *(_QWORD *)(a1 + 208);
  *(_QWORD *)(a1 + 1456) = v21;
  v24 = *v15;
  if ( v22 )
  {
    v24 = (v24 * v17 + v18 * v23) / v22;
  }
  else if ( v24 <= v23 )
  {
    v24 = v23;
  }
  *v15 = v24;
  v25 = 12LL;
  v26 = *(_QWORD *)(a1 + 1872);
  *(_QWORD *)(a1 + 1432) += *(_QWORD *)(a1 + 200);
  v27 = _mm_loadu_si128((const __m128i *)(a1 + 1416));
  v28 = _mm_loadu_si128((const __m128i *)(a1 + 184));
  if ( v26 <= *(_QWORD *)(a1 + 640) )
    v26 = *(_QWORD *)(a1 + 640);
  v29 = *(_QWORD *)(a1 + 648);
  *(_QWORD *)(a1 + 1872) = v26;
  v30 = *(_QWORD *)(a1 + 1880);
  *(__m128i *)(a1 + 1416) = _mm_add_epi64(v28, v27);
  if ( v30 <= v29 )
    v30 = v29;
  *(_QWORD *)(a1 + 1880) = v30;
  v31 = *(_QWORD *)(a1 + 2280);
  *(_QWORD *)(a1 + 2272) += *(_QWORD *)(a1 + 1040);
  if ( v31 <= *(_QWORD *)(a1 + 1048) )
    v31 = *(_QWORD *)(a1 + 1048);
  *(_QWORD *)(a1 + 2280) = v31;
  v32 = (_QWORD *)(a1 + 1464);
  do
  {
    *v32 += *(v32 - 154);
    v32[12] += *(v32 - 142);
    v32[24] += *(v32 - 130);
    v32[36] += *(v32 - 118);
    v32[53] += *(v32 - 101);
    v32[65] += *(v32 - 89);
    v32[77] += *(v32 - 77);
    v32[89] += *(v32 - 65);
    v32[103] += *(v32 - 51);
    result = *(v32 - 39);
    v32[115] += result;
    ++v32;
    --v25;
  }
  while ( v25 );
  return result;
}
