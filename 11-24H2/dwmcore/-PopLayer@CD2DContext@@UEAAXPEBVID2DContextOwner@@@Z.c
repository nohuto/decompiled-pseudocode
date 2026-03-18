/*
 * XREFs of ?PopLayer@CD2DContext@@UEAAXPEBVID2DContextOwner@@@Z @ 0x1800F9FC0
 * Callers:
 *     <none>
 * Callees:
 *     ?FlushDrawList@CD2DContext@@QEAAJXZ @ 0x180053B90 (-FlushDrawList@CD2DContext@@QEAAJXZ.c)
 *     ?ApplyCurrentClip@CD2DTarget@@QEAAXXZ @ 0x1800FABC0 (-ApplyCurrentClip@CD2DTarget@@QEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CD2DContext::PopLayer(CD2DContext *this, const struct ID2DContextOwner *a2, __int64 a3)
{
  int v4; // eax
  __int64 v5; // rbx

  CD2DContext::FlushDrawList(this, (__int64)a2, a3);
  v4 = *((_DWORD *)this + 88);
  v5 = 0LL;
  if ( v4 )
    v5 = *(_QWORD *)(*((_QWORD *)this + 41) + 8LL * (unsigned int)(v4 - 1));
  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(*(_QWORD *)(v5 + 16) + 200LL) + 328LL))(*(_QWORD *)(*(_QWORD *)(v5 + 16) + 200LL));
  CD2DTarget::ApplyCurrentClip((CD2DTarget *)v5);
  --*(_DWORD *)(v5 + 48);
}
