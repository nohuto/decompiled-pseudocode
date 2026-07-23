/*
 * XREFs of PipForAllChildDeviceNodes @ 0x140A391F0
 * Callers:
 *     PnprCollectResources @ 0x14072D230 (PnprCollectResources.c)
 *     PipForAllDeviceNodesCallback @ 0x140A39230 (PipForAllDeviceNodesCallback.c)
 * Callees:
 *     PipForAllDeviceNodesCallback @ 0x140A39230 (PipForAllDeviceNodesCallback.c)
 */

__int64 __fastcall PipForAllChildDeviceNodes(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD *v3; // rbx
  __int64 result; // rax
  _QWORD *v6; // rcx

  v3 = *(_QWORD **)(a1 + 8);
  for ( result = 0LL; v3 && (int)result >= 0; result = PipForAllDeviceNodesCallback(v6, a3) )
  {
    v6 = v3;
    v3 = (_QWORD *)*v3;
  }
  return result;
}
