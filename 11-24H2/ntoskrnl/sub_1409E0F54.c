/*
 * XREFs of sub_1409E0F54 @ 0x1409E0F54
 * Callers:
 *     sub_140800BE0 @ 0x140800BE0 (sub_140800BE0.c)
 *     sub_1409E1660 @ 0x1409E1660 (sub_1409E1660.c)
 * Callees:
 *     WbMakeUserExecutablePagesKernelWritable @ 0x1409E0F80 (WbMakeUserExecutablePagesKernelWritable.c)
 *     WbMakeUserDataPagesKernelWritable @ 0x1409E1088 (WbMakeUserDataPagesKernelWritable.c)
 */

__int64 __fastcall sub_1409E0F54(void *a1, __int64 a2, int a3, __int64 a4, __int64 a5)
{
  if ( a3 )
    return WbMakeUserExecutablePagesKernelWritable(a1, a2, a4, a5);
  else
    return WbMakeUserDataPagesKernelWritable(a1, a2);
}
