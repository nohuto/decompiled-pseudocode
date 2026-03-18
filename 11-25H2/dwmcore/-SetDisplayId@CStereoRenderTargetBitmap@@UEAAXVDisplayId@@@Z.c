/*
 * XREFs of ?SetDisplayId@CStereoRenderTargetBitmap@@UEAAXVDisplayId@@@Z @ 0x1802E3DA0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CStereoRenderTargetBitmap::SetDisplayId(__int64 a1, unsigned int a2)
{
  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 64) + 112LL))(*(_QWORD *)(a1 + 64));
  CRenderTargetBitmap::SetDisplayId(a1, a2);
}
