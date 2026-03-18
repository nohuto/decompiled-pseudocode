/*
 * XREFs of NtDxgkGetNativeFenceLogDetail @ 0x1401D6090
 * Callers:
 *     <none>
 * Callees:
 *     ?NtDxgkGetNativeFenceLogDetailInternal@@YAJPEAU_D3DKMT_GETNATIVEFENCELOGDETAIL@@_N@Z @ 0x1401D5BA0 (-NtDxgkGetNativeFenceLogDetailInternal@@YAJPEAU_D3DKMT_GETNATIVEFENCELOGDETAIL@@_N@Z.c)
 */

__int64 __fastcall NtDxgkGetNativeFenceLogDetail(struct _D3DKMT_GETNATIVEFENCELOGDETAIL *a1)
{
  return NtDxgkGetNativeFenceLogDetailInternal(a1);
}
