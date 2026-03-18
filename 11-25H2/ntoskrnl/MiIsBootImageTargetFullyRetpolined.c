/*
 * XREFs of MiIsBootImageTargetFullyRetpolined @ 0x140C44730
 * Callers:
 *     <none>
 * Callees:
 *     MiImageContainsVa @ 0x14036D08C (MiImageContainsVa.c)
 *     RtlIsImageFullyRetpolined @ 0x1404C35C4 (RtlIsImageFullyRetpolined.c)
 */

__int64 __fastcall MiIsBootImageTargetFullyRetpolined(unsigned __int64 a1)
{
  __int64 v1; // r10
  __int64 *v2; // r9
  __int64 *v3; // r10
  unsigned __int64 v4; // rdx
  __int64 i; // r8
  __int64 *v6; // r8

  v1 = *(_QWORD *)&KeNumberProcessorsGroup0[1];
  v2 = 0LL;
  v3 = (__int64 *)(v1 + 16);
  v4 = a1;
  for ( i = *v3; (__int64 *)i != v3; i = *v6 )
  {
    if ( MiImageContainsVa(i, v4) )
    {
      v2 = v6;
      return RtlIsImageFullyRetpolined(v2[6]);
    }
  }
  return RtlIsImageFullyRetpolined(v2[6]);
}
