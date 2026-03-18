/*
 * XREFs of PnpIrpQueryID @ 0x1408338E8
 * Callers:
 *     PpProfileCommitTransitioningDock @ 0x14072179C (PpProfileCommitTransitioningDock.c)
 *     PpProfileIncludeInHardwareProfileTransition @ 0x1407218EC (PpProfileIncludeInHardwareProfileTransition.c)
 *     PiProcessNewDeviceNode @ 0x14082CE68 (PiProcessNewDeviceNode.c)
 *     PnpQueryID @ 0x1408336D0 (PnpQueryID.c)
 *     PnpQueryDeviceID @ 0x140A2FC8C (PnpQueryDeviceID.c)
 * Callees:
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     IopSynchronousCall @ 0x140834D44 (IopSynchronousCall.c)
 */

__int64 __fastcall PnpIrpQueryID(int a1, int a2, _QWORD *a3)
{
  __int64 result; // rax
  __int16 v7; // [rsp+30h] [rbp-58h] BYREF
  int v8; // [rsp+38h] [rbp-50h]

  *a3 = 0LL;
  memset_0(&v7, 0, 0x48uLL);
  v8 = a2;
  v7 = 4891;
  result = IopSynchronousCall(a1, (unsigned int)&v7, -1073741637, 0, (__int64)a3);
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
