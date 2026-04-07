/*
 * XREFs of ??0CDCompVirtualDesktopThumbnailData@@QEAA@XZ @ 0x1800EC8FC
 * Callers:
 *     ?RegisterSharedVirtualDesktopVisual@CWindowList@@UEAAJPEAUHWND__@@T_LARGE_INTEGER@@PEAX@Z @ 0x1800F22E0 (-RegisterSharedVirtualDesktopVisual@CWindowList@@UEAAJPEAUHWND__@@T_LARGE_INTEGER@@PEAX@Z.c)
 * Callees:
 *     ??0CBitmapSourceArray@@QEAA@XZ @ 0x18000C2D0 (--0CBitmapSourceArray@@QEAA@XZ.c)
 */

CDCompVirtualDesktopThumbnailData *__fastcall CDCompVirtualDesktopThumbnailData::CDCompVirtualDesktopThumbnailData(
        CDCompVirtualDesktopThumbnailData *this)
{
  __int64 v1; // r9
  CDCompVirtualDesktopThumbnailData *v2; // r9

  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  *((_DWORD *)this + 8) = 0;
  *(_OWORD *)((char *)this + 36) = 0LL;
  *(_OWORD *)((char *)this + 52) = 0LL;
  *(_QWORD *)((char *)this + 68) = 0LL;
  *((_DWORD *)this + 19) = 0;
  *((_BYTE *)this + 80) = 0;
  *((_QWORD *)this + 11) = 0LL;
  *((_QWORD *)this + 12) = 0LL;
  *((_QWORD *)this + 13) = 0LL;
  *((_QWORD *)this + 14) = 0LL;
  *((_DWORD *)this + 30) = 0;
  *((_QWORD *)this + 16) = 0LL;
  *(_QWORD *)this = &CDCompVirtualDesktopThumbnailData::`vftable';
  CBitmapSourceArray::CBitmapSourceArray((CDCompVirtualDesktopThumbnailData *)((char *)this + 136));
  CBitmapSourceArray::CBitmapSourceArray((CBitmapSourceArray *)(v1 + 168));
  return v2;
}
