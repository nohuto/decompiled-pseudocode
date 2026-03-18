/*
 * XREFs of ?ListenForSurfaceNotifications@CBitmapRenderStrategy@@UEBA_NPEBVCResource@@@Z @ 0x1801E0490
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

bool __fastcall CBitmapRenderStrategy::ListenForSurfaceNotifications(
        CBitmapRenderStrategy *this,
        const struct CResource *a2)
{
  bool (__fastcall *v2)(__int64, int); // rax
  char v3; // al

  v2 = *(bool (__fastcall **)(__int64, int))(*(_QWORD *)a2 + 64LL);
  v3 = v2 == CCompositionSurfaceBitmap::IsOfType || v2((__int64)a2, 41);
  return v3 == 0;
}
