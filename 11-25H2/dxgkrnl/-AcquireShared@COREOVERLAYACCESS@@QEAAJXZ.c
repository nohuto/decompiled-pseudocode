/*
 * XREFs of ?AcquireShared@COREOVERLAYACCESS@@QEAAJXZ @ 0x1400766F0
 * Callers:
 *     DxgkFlipOverlay @ 0x1401E3F00 (DxgkFlipOverlay.c)
 *     DxgkGetOverlayState @ 0x1401E4400 (DxgkGetOverlayState.c)
 *     DxgkUpdateOverlay @ 0x1401E49A0 (DxgkUpdateOverlay.c)
 * Callees:
 *     ?AcquireShared@COREACCESS@@QEAAXPEBD@Z @ 0x14001D9E0 (-AcquireShared@COREACCESS@@QEAAXPEBD@Z.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x14001F190 (-Release@COREACCESS@@QEAAXXZ.c)
 */

__int64 __fastcall COREOVERLAYACCESS::AcquireShared(COREOVERLAYACCESS *this)
{
  COREACCESS::AcquireShared((COREOVERLAYACCESS *)((char *)this + 8), 0LL);
  if ( *(_DWORD *)(*((_QWORD *)this + 9) + 28LL) == 1 )
    return 0LL;
  COREACCESS::Release((COREOVERLAYACCESS *)((char *)this + 8));
  return 3221226166LL;
}
