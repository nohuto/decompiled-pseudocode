/*
 * XREFs of RtlpLocateXStateChunk @ 0x1800DD6A0
 * Callers:
 *     RtlUnwindEx @ 0x180077090 (RtlUnwindEx.c)
 *     RtlSetExtendedFeaturesMask @ 0x1800DD640 (RtlSetExtendedFeaturesMask.c)
 *     RtlGetExtendedFeaturesMask @ 0x1800DD680 (RtlGetExtendedFeaturesMask.c)
 * Callees:
 *     <none>
 */

char *__fastcall RtlpLocateXStateChunk(_DWORD *a1)
{
  __int64 v1; // r9

  v1 = (int)a1[4];
  if ( *a1 > (int)v1 || a1[1] + *a1 < (int)v1 + a1[5] )
    return 0LL;
  else
    return (char *)a1 + v1;
}
