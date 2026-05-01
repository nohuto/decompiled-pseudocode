/*
 * XREFs of HIMAGELIST_QueryInterface @ 0x180390D88
 * Callers:
 *     CreateBitmapFromIcon @ 0x180552990 (CreateBitmapFromIcon.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     _GetProcFromComCtl32 @ 0x180391084 (_GetProcFromComCtl32.c)
 */

HRESULT __stdcall HIMAGELIST_QueryInterface(HIMAGELIST himl, const IID *const riid, void **ppv)
{
  __int64 (__fastcall *v3)(HIMAGELIST, GUID *, void **); // rax

  v3 = (__int64 (__fastcall *)(HIMAGELIST, GUID *, void **))qword_18098C438;
  if ( qword_18098C438 == -1 )
  {
    GetProcFromComCtl32(&qword_18098C438, "HIMAGELIST_QueryInterface");
    v3 = (__int64 (__fastcall *)(HIMAGELIST, GUID *, void **))qword_18098C438;
  }
  if ( v3 )
    return v3(himl, &GUID_192b9d83_50fc_457b_90a0_2b82a8b5dae1, ppv);
  else
    return -2147467259;
}
