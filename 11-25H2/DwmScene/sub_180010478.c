/*
 * XREFs of sub_180010478 @ 0x180010478
 * Callers:
 *     sub_180010420 @ 0x180010420 (sub_180010420.c)
 *     sub_180014B00 @ 0x180014B00 (sub_180014B00.c)
 *     sub_180018640 @ 0x180018640 (sub_180018640.c)
 *     sub_1800186A0 @ 0x1800186A0 (sub_1800186A0.c)
 *     sub_180018700 @ 0x180018700 (sub_180018700.c)
 *     sub_180018760 @ 0x180018760 (sub_180018760.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180010478(volatile signed __int32 *a1)
{
  signed __int32 v1; // r8d

  do
    v1 = *a1;
  while ( *a1 != 0x7FFFFFFF && v1 != _InterlockedCompareExchange(a1, v1 - 1, v1) );
  return (unsigned int)(v1 - 1);
}
