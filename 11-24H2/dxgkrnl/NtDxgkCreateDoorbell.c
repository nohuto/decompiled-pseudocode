/*
 * XREFs of NtDxgkCreateDoorbell @ 0x1401DB2E0
 * Callers:
 *     <none>
 * Callees:
 *     ?DxgkCreateDoorbellInternal@@YAJPEAU_D3DKMT_CREATE_DOORBELL@@_N@Z @ 0x1401D8A50 (-DxgkCreateDoorbellInternal@@YAJPEAU_D3DKMT_CREATE_DOORBELL@@_N@Z.c)
 */

__int64 __fastcall NtDxgkCreateDoorbell(struct _D3DKMT_CREATE_DOORBELL *a1, __int64 a2, __int64 a3)
{
  return DxgkCreateDoorbellInternal(a1, a2, a3);
}
