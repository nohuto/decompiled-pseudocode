/*
 * XREFs of ?UpdateAttributes@CDxHandleStereoBitmapRealization@@UEAAXAEBUCSM_BUFFER_ATTRIBUTES@@@Z @ 0x1802D8F40
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdateAttributes@CDxHandleBitmapRealization@@UEAAXAEBUCSM_BUFFER_ATTRIBUTES@@@Z @ 0x1800299F0 (-UpdateAttributes@CDxHandleBitmapRealization@@UEAAXAEBUCSM_BUFFER_ATTRIBUTES@@@Z.c)
 *     ?InitializeCache@CD2DBitmapCache@@QEAAXPEAVID2DBitmapCacheSource@@@Z @ 0x18005A680 (-InitializeCache@CD2DBitmapCache@@QEAAXPEAVID2DBitmapCacheSource@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CDxHandleStereoBitmapRealization::UpdateAttributes(
        CDxHandleStereoBitmapRealization *this,
        const struct CSM_BUFFER_ATTRIBUTES *a2)
{
  unsigned int v2; // edi
  int v3; // ebp
  int v4; // r14d
  int v5; // esi
  __int64 v7; // rdx
  int v8; // r8d
  char v9; // cl
  int v10; // eax

  v2 = 3;
  v3 = *((_DWORD *)this - 44);
  v4 = *((_DWORD *)this - 8);
  v5 = 3;
  if ( *((_DWORD *)this - 56) )
    v5 = *((_DWORD *)this - 56);
  CDxHandleBitmapRealization::UpdateAttributes(this, a2);
  v7 = *((_QWORD *)this + 9);
  if ( v7 )
  {
    v8 = *((_DWORD *)this - 56);
    v9 = 0;
    v10 = 3;
    if ( v8 )
      v10 = *((_DWORD *)this - 56);
    if ( v5 != v10 )
    {
      if ( v8 )
        v2 = *((_DWORD *)this - 56);
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(v7 + 72) + 144LL))(v7 + 72, v2);
      v9 = 1;
    }
    if ( v3 != *((_DWORD *)this - 44) )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)(*((_QWORD *)this + 9) + 72LL) + 152LL))(*((_QWORD *)this + 9) + 72LL);
      v9 = 1;
    }
    if ( v4 == *((_DWORD *)this - 8) )
    {
      if ( !v9 )
        return;
    }
    else
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)(*((_QWORD *)this + 9) + 72LL) + 160LL))(*((_QWORD *)this + 9) + 72LL);
    }
    CD2DBitmapCache::InitializeCache(
      *((CD2DBitmapCache **)this + 10),
      (struct ID2DBitmapCacheSource *)((*((_QWORD *)this + 9) + 88LL) & ((unsigned __int128)-(__int128)*((unsigned __int64 *)this + 9) >> 64)));
  }
}
