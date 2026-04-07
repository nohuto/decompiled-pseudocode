/*
 * XREFs of ?_IsThumbnailCVIStatic@CThumbnailVisual@@AEAA_NXZ @ 0x18000DA1C
 * Callers:
 *     ?UpdateProperties@CThumbnailVisual@@QEAAJK@Z @ 0x18000D09C (-UpdateProperties@CThumbnailVisual@@QEAAJK@Z.c)
 *     ?UpdateDestinationRect@CThumbnailVisual@@QEAAJXZ @ 0x18000D7AC (-UpdateDestinationRect@CThumbnailVisual@@QEAAJXZ.c)
 *     ?UpdateSourceRect@CThumbnailVisual@@QEAAJXZ @ 0x18000DBF0 (-UpdateSourceRect@CThumbnailVisual@@QEAAJXZ.c)
 * Callees:
 *     ?_IsImmersiveIconic@CThumbnailVisual@@AEAA_NXZ @ 0x18000D6CC (-_IsImmersiveIconic@CThumbnailVisual@@AEAA_NXZ.c)
 */

bool __fastcall CThumbnailVisual::_IsThumbnailCVIStatic(CThumbnailVisual *this)
{
  __int64 v1; // rax
  char v2; // bl

  v1 = *((_QWORD *)this + 47);
  v2 = 0;
  if ( v1 && (*(_DWORD *)(v1 + 36) & 0x100000) != 0 && *((_BYTE *)this + 482) )
    return CThumbnailVisual::_IsImmersiveIconic(this) == 0;
  return v2;
}
