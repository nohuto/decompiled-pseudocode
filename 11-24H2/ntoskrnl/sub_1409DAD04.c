/*
 * XREFs of sub_1409DAD04 @ 0x1409DAD04
 * Callers:
 *     sub_140801320 @ 0x140801320 (sub_140801320.c)
 *     sub_1409DB410 @ 0x1409DB410 (sub_1409DB410.c)
 * Callees:
 *     WbMakeUserExecutablePagesKernelWritable @ 0x1409DAD30 (WbMakeUserExecutablePagesKernelWritable.c)
 *     WbMakeUserDataPagesKernelWritable @ 0x1409DAE38 (WbMakeUserDataPagesKernelWritable.c)
 */

__int64 __fastcall sub_1409DAD04(void *a1, __int64 a2, int a3, __int64 a4, __int64 a5)
{
  if ( a3 )
    return WbMakeUserExecutablePagesKernelWritable(a1, a2, a4, a5);
  else
    return WbMakeUserDataPagesKernelWritable(a1, a2);
}
