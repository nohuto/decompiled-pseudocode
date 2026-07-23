/*
 * XREFs of KeFoldProcessStatisticsThread @ 0x140406ABC
 * Callers:
 *     PspThreadDelete @ 0x140ACF4E0 (PspThreadDelete.c)
 * Callees:
 *     RtlTimelineBitmapMerge @ 0x140406BF0 (RtlTimelineBitmapMerge.c)
 */

unsigned __int64 __fastcall KeFoldProcessStatisticsThread(__int64 a1)
{
  __int64 v1; // r10
  unsigned __int64 result; // rax
  __int64 v3; // r11
  _QWORD *v4; // r10
  __int64 v5; // r11
  __int64 v6; // r11
  __int64 v7; // rcx
  __int64 v8; // rdx

  v1 = *(_QWORD *)(a1 + 544);
  *(_QWORD *)(v1 + 312) += *(unsigned int *)(a1 + 652);
  *(_QWORD *)(v1 + 320) += *(unsigned int *)(a1 + 732);
  *(_QWORD *)(v1 + 328) += *(unsigned int *)(a1 + 132);
  *(_QWORD *)(v1 + 288) += *(_QWORD *)(a1 + 72);
  *(_QWORD *)(v1 + 376) += *(_QWORD *)(a1 + 992);
  *(_QWORD *)(v1 + 384) += *(_QWORD *)(a1 + 1000);
  *(_QWORD *)(v1 + 296) += *(unsigned int *)(a1 + 340);
  _InterlockedAdd64((volatile signed __int64 *)(v1 + 928), *(_QWORD *)(a1 + 896));
  _InterlockedAdd64((volatile signed __int64 *)(v1 + 936), *(_QWORD *)(a1 + 904));
  _InterlockedAdd64((volatile signed __int64 *)(v1 + 944), *(_QWORD *)(a1 + 912));
  _InterlockedAdd64((volatile signed __int64 *)(v1 + 952), *(_QWORD *)(a1 + 920));
  _InterlockedAdd64((volatile signed __int64 *)(v1 + 960), *(_QWORD *)(a1 + 928));
  result = *(_QWORD *)(a1 + 936);
  _InterlockedAdd64((volatile signed __int64 *)(v1 + 968), result);
  v3 = *(_QWORD *)(a1 + 1672);
  if ( v3 )
  {
    RtlTimelineBitmapMerge(*(_QWORD *)(v1 + 1640) + 272LL, v3 + 192);
    v6 = v5 - (_QWORD)v4;
    v7 = 4LL;
    do
    {
      v8 = 2LL;
      do
      {
        *v4 += *(_QWORD *)((char *)v4 + v6);
        v4[18] += *(_QWORD *)((char *)v4 + v6 + 64);
        result = *(_QWORD *)((char *)v4 + v6 + 128);
        v4[26] += result;
        ++v4;
        --v8;
      }
      while ( v8 );
      --v7;
    }
    while ( v7 );
  }
  return result;
}
