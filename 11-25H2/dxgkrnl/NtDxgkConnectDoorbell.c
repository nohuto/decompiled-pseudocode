/*
 * XREFs of NtDxgkConnectDoorbell @ 0x1401D6030
 * Callers:
 *     <none>
 * Callees:
 *     ?DxgkConnectDoorbellInternal@@YAJPEAU_D3DKMT_CONNECT_DOORBELL@@_N@Z @ 0x1401D31BC (-DxgkConnectDoorbellInternal@@YAJPEAU_D3DKMT_CONNECT_DOORBELL@@_N@Z.c)
 */

__int64 __fastcall NtDxgkConnectDoorbell(struct _D3DKMT_CONNECT_DOORBELL *a1, __int64 a2, __int64 a3)
{
  return DxgkConnectDoorbellInternal(a1, a2, a3);
}
