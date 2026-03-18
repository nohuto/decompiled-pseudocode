/*
 * XREFs of NtDxgkGetNativeFenceLogDetail @ 0x1401DB320
 * Callers:
 *     <none>
 * Callees:
 *     ?NtDxgkGetNativeFenceLogDetailInternal@@YAJPEAU_D3DKMT_GETNATIVEFENCELOGDETAIL@@_N@Z @ 0x1401DAE28 (-NtDxgkGetNativeFenceLogDetailInternal@@YAJPEAU_D3DKMT_GETNATIVEFENCELOGDETAIL@@_N@Z.c)
 */

__int64 __fastcall NtDxgkGetNativeFenceLogDetail(struct _D3DKMT_GETNATIVEFENCELOGDETAIL *a1)
{
  return NtDxgkGetNativeFenceLogDetailInternal(a1);
}
