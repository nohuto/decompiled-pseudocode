/*
 * XREFs of NtDxgkEnumAdapters3 @ 0x140348DD0
 * Callers:
 *     <none>
 * Callees:
 *     ?DxgkEnumAdapters3Impl@@YAJPEAU_D3DKMT_ENUMADAPTERS3@@DEW4_KWAIT_REASON@@@Z @ 0x140348E00 (-DxgkEnumAdapters3Impl@@YAJPEAU_D3DKMT_ENUMADAPTERS3@@DEW4_KWAIT_REASON@@@Z.c)
 */

__int64 __fastcall NtDxgkEnumAdapters3(struct _D3DKMT_ENUMADAPTERS3 *a1)
{
  return DxgkEnumAdapters3Impl(a1, 1, 1u, UserRequest);
}
