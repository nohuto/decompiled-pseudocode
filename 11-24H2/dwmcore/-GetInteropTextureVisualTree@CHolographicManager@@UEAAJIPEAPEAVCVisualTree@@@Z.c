/*
 * XREFs of ?GetInteropTextureVisualTree@CHolographicManager@@UEAAJIPEAPEAVCVisualTree@@@Z @ 0x1802CF4A0
 * Callers:
 *     <none>
 * Callees:
 *     ?FindInteropTextureByBindId@CHolographicManager@@AEAAPEAVCHolographicInteropTexture@@I@Z @ 0x1802CF394 (-FindInteropTextureByBindId@CHolographicManager@@AEAAPEAVCHolographicInteropTexture@@I@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CHolographicManager::GetInteropTextureVisualTree(RTL_SRWLOCK *this, int a2, struct CVisualTree **a3)
{
  unsigned int v6; // ebp
  struct CHolographicInteropTexture *InteropTextureByBindId; // rax

  *a3 = 0LL;
  v6 = -2147467259;
  AcquireSRWLockShared(this + 13);
  InteropTextureByBindId = CHolographicManager::FindInteropTextureByBindId((CHolographicManager *)this, a2);
  if ( InteropTextureByBindId )
    *a3 = (struct CVisualTree *)*((_QWORD *)InteropTextureByBindId + 12);
  if ( *a3 )
  {
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a3 + 8LL))(*a3);
    v6 = 0;
  }
  ReleaseSRWLockShared(this + 13);
  return v6;
}
