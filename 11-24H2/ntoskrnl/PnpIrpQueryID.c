/*
 * XREFs of PnpIrpQueryID @ 0x140A34274
 * Callers:
 *     PpProfileCommitTransitioningDock @ 0x14072D71C (PpProfileCommitTransitioningDock.c)
 *     PpProfileIncludeInHardwareProfileTransition @ 0x14072D86C (PpProfileIncludeInHardwareProfileTransition.c)
 *     PnpQueryDeviceID @ 0x140A33FB0 (PnpQueryDeviceID.c)
 *     PnpQueryID @ 0x140A34100 (PnpQueryID.c)
 *     PiProcessNewDeviceNode @ 0x140A7C564 (PiProcessNewDeviceNode.c)
 * Callees:
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     IopSynchronousCall @ 0x1408BBC08 (IopSynchronousCall.c)
 */

__int64 __fastcall PnpIrpQueryID(_QWORD *a1, int a2, _QWORD *a3)
{
  __int64 result; // rax
  __int16 v7; // [rsp+30h] [rbp-58h] BYREF
  int v8; // [rsp+38h] [rbp-50h]

  *a3 = 0LL;
  memset_0(&v7, 0, 0x48uLL);
  v8 = a2;
  v7 = 4891;
  result = IopSynchronousCall(a1, (__int64)&v7, -1073741637, 0LL, a3);
  if ( (int)result < 0 )
  {
    *a3 = 0LL;
  }
  else if ( !*a3 )
  {
    return 3221225659LL;
  }
  return result;
}
