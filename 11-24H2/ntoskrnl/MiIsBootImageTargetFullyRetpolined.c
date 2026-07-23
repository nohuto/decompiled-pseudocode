/*
 * XREFs of MiIsBootImageTargetFullyRetpolined @ 0x140C57BA0
 * Callers:
 *     <none>
 * Callees:
 *     MiImageContainsVa @ 0x1404A2444 (MiImageContainsVa.c)
 *     RtlIsImageFullyRetpolined @ 0x1404BD5B4 (RtlIsImageFullyRetpolined.c)
 */

__int64 __fastcall MiIsBootImageTargetFullyRetpolined(unsigned __int64 a1)
{
  __int64 *v1; // r9
  __int64 v2; // r10
  unsigned __int64 v3; // rdx
  __int64 i; // r8
  __int64 *v5; // r8

  v1 = 0LL;
  v2 = KeLoaderBlock_0 + 16;
  v3 = a1;
  for ( i = *(_QWORD *)(KeLoaderBlock_0 + 16); i != v2; i = *v5 )
  {
    if ( MiImageContainsVa(i, v3) )
    {
      v1 = v5;
      return RtlIsImageFullyRetpolined(v1[6]);
    }
  }
  return RtlIsImageFullyRetpolined(v1[6]);
}
