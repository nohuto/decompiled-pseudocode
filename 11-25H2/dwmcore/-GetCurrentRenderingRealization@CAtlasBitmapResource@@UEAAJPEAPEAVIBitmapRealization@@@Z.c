/*
 * XREFs of ?GetCurrentRenderingRealization@CAtlasBitmapResource@@UEAAJPEAPEAVIBitmapRealization@@@Z @ 0x1801F6660
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CAtlasBitmapResource::GetCurrentRenderingRealization(
        CAtlasBitmapResource *this,
        struct IBitmapRealization **a2)
{
  struct IBitmapRealization *v2; // rcx

  v2 = (struct IBitmapRealization *)(((unsigned __int64)this + 16) & -(__int64)(this != 0LL));
  *a2 = v2;
  (*(void (__fastcall **)(struct IBitmapRealization *))(*(_QWORD *)v2 + 8LL))(v2);
  return 0LL;
}
