/*
 * XREFs of _lambda_dcff6b42735babe5bbfdec74d1bb422f_::operator() @ 0x1402A51E8
 * Callers:
 *     ?EnsureDpiMoveSizeDataIsOnCurrentWindowDpiContext@@YAXPEAUMOVESIZEDATA@@@Z @ 0x1401D933C (-EnsureDpiMoveSizeDataIsOnCurrentWindowDpiContext@@YAXPEAUMOVESIZEDATA@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall lambda_dcff6b42735babe5bbfdec74d1bb422f_::operator()(unsigned int **a1, __int64 a2)
{
  LogicalToPhysicalDPIPoint(a2, a2, **a1, a1[1]);
  return PhysicalToLogicalDPIPoint(a2, a2, *a1[2], a1[1]);
}
