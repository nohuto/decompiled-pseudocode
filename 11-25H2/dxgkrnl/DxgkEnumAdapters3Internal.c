/*
 * XREFs of DxgkEnumAdapters3Internal @ 0x1401AA2F0
 * Callers:
 *     <none>
 * Callees:
 *     ?DxgkEnumAdapters3Impl@@YAJPEAU_D3DKMT_ENUMADAPTERS3@@DEW4_KWAIT_REASON@@@Z @ 0x14031CA60 (-DxgkEnumAdapters3Impl@@YAJPEAU_D3DKMT_ENUMADAPTERS3@@DEW4_KWAIT_REASON@@@Z.c)
 */

__int64 __fastcall DxgkEnumAdapters3Internal(struct _D3DKMT_ENUMADAPTERS3 *a1)
{
  return DxgkEnumAdapters3Impl(a1, 0, 0, Executive);
}
