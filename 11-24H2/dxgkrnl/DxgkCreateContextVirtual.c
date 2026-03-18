/*
 * XREFs of DxgkCreateContextVirtual @ 0x1402CFA60
 * Callers:
 *     <none>
 * Callees:
 *     ?DxgkCreateContextVirtualImpl@@YAJPEAU_D3DKMT_CREATECONTEXTVIRTUAL@@E@Z @ 0x1402D17A0 (-DxgkCreateContextVirtualImpl@@YAJPEAU_D3DKMT_CREATECONTEXTVIRTUAL@@E@Z.c)
 */

__int64 __fastcall DxgkCreateContextVirtual(struct _D3DKMT_CREATECONTEXTVIRTUAL *a1)
{
  return DxgkCreateContextVirtualImpl(a1, 1u);
}
