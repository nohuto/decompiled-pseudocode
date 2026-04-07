/*
 * XREFs of ?UpdateProperties@CThumbnailData@@QEAAJPEBU_DWM_THUMBNAIL_PROPERTIES@@@Z @ 0x18000E108
 * Callers:
 *     ?UpdateSharedVirtualDesktopVisual@CWindowList@@UEAAJKPEBUMILCMD_DWM_REDIRECTION_UPDATESHAREDVIRTUALDESKTOPVISUAL@@PEBU_REMOTE_PORT_VIEW@@@Z @ 0x180005140 (-UpdateSharedVirtualDesktopVisual@CWindowList@@UEAAJKPEBUMILCMD_DWM_REDIRECTION_UPDATESHAREDVIRT.c)
 *     ?UpdateThumbnailProperties@CWindowList@@AEAAJKPEAUMILCMD_DWM_REDIRECTION_UPDATETHUMBNAILPROPERTIES@@@Z @ 0x18000535C (-UpdateThumbnailProperties@CWindowList@@AEAAJKPEAUMILCMD_DWM_REDIRECTION_UPDATETHUMBNAILPROPERTI.c)
 *     ?RegisterSharedThumbnailVisual@CWindowList@@UEAAJPEAUHWND__@@0HHAEBU_DWM_THUMBNAIL_PROPERTIES@@T_LARGE_INTEGER@@PEAX@Z @ 0x18000E380 (-RegisterSharedThumbnailVisual@CWindowList@@UEAAJPEAUHWND__@@0HHAEBU_DWM_THUMBNAIL_PROPERTIES@@T.c)
 * Callees:
 *     ?UpdateProperties@CThumbnailVisual@@QEAAJK@Z @ 0x18000D09C (-UpdateProperties@CThumbnailVisual@@QEAAJK@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180065FCC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CThumbnailData::UpdateProperties(CThumbnailData *this, const struct _DWM_THUMBNAIL_PROPERTIES *a2)
{
  unsigned int v2; // r14d
  _BYTE *v3; // rbx
  int v4; // esi
  int v7; // ecx
  int v8; // edx
  DWORD v9; // edx
  DWORD v10; // ecx
  DWORD v11; // ecx
  signed int v12; // ecx
  CThumbnailVisual *v13; // rcx
  int updated; // eax
  int v16; // eax

  v2 = 0;
  v3 = (char *)this + 36;
  v4 = 0;
  if ( (a2->dwFlags & 1) != 0 )
  {
    if ( !EqualRect((const RECT *)((char *)this + 40), &a2->rcDestination) || (*v3 & 1) == 0 )
      v4 = 1;
    *(_DWORD *)v3 |= 1u;
    *(RECT *)((char *)this + 40) = a2->rcDestination;
  }
  if ( (a2->dwFlags & 2) != 0 )
  {
    if ( !EqualRect((const RECT *)((char *)this + 56), &a2->rcSource) || (*v3 & 2) == 0 )
      v4 |= 2u;
    *(_DWORD *)v3 |= 2u;
    *(RECT *)((char *)this + 56) = a2->rcSource;
  }
  if ( (a2->dwFlags & 4) != 0 )
  {
    if ( *((_BYTE *)this + 72) != a2->opacity || (*v3 & 4) == 0 )
      v4 |= 4u;
    *(_DWORD *)v3 |= 4u;
    *((_BYTE *)this + 72) = a2->opacity;
  }
  if ( (a2->dwFlags & 8) != 0 )
  {
    if ( *(_DWORD *)((char *)this + 73) != a2->fVisible || (*v3 & 8) == 0 )
      v4 |= 8u;
    *(_DWORD *)v3 |= 8u;
    *(_DWORD *)((char *)this + 73) = a2->fVisible;
  }
  if ( (a2->dwFlags & 0x10) != 0 )
  {
    if ( *(_DWORD *)((char *)this + 77) != a2->fSourceClientAreaOnly || (*v3 & 0x10) == 0 )
      v4 |= 0x10u;
    *(_DWORD *)v3 |= 0x10u;
    *(_DWORD *)((char *)this + 77) = a2->fSourceClientAreaOnly;
  }
  v7 = v4 | 0x80000;
  if ( (a2->dwFlags & 0x80000) == 0 )
    v7 = v4;
  v8 = v7;
  if ( (a2->dwFlags & 0x400000) != 0 && (*(_DWORD *)v3 & 0x400000) == 0 )
  {
    v8 = v7 | 0x400000;
    *(_DWORD *)v3 |= 0x400000u;
  }
  v9 = a2->dwFlags & 0x30000 | v8;
  if ( (a2->dwFlags & 0x100000) != 0 )
  {
    v9 |= 0x100000u;
    *(_DWORD *)v3 |= 0x100000u;
  }
  if ( (a2->dwFlags & 0x800000) != 0 )
  {
    v9 |= 0x800000u;
    *(_DWORD *)v3 |= 0x800000u;
  }
  if ( (a2->dwFlags & 0x1000000) != 0 )
  {
    v9 |= 0x1000000u;
    *(_DWORD *)v3 |= 0x1000000u;
  }
  v10 = a2->dwFlags & 0xC000000;
  if ( v10 )
  {
    v9 |= v10;
    *(_DWORD *)v3 = v10 | *(_DWORD *)v3 & 0xF3FFFFFF;
  }
  v11 = a2->dwFlags & 0x30000000;
  if ( v11 )
  {
    v9 |= v11;
    *(_DWORD *)v3 = v11 | *(_DWORD *)v3 & 0xCFFFFFFF;
  }
  v12 = a2->dwFlags & 0xC0000000;
  if ( v12 )
  {
    v9 |= v12;
    v16 = v12 | *(_DWORD *)v3 & 0x3FFFFFFF;
    *(_DWORD *)v3 = v16;
    if ( v12 < 0 )
      *(_DWORD *)v3 = v16 & 0xFFEFFFFF;
  }
  v13 = (CThumbnailVisual *)*((_QWORD *)this + 11);
  if ( v13 )
  {
    updated = CThumbnailVisual::UpdateProperties(v13, v9);
    v2 = updated;
    if ( updated < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, updated, 0xEDu, 0LL);
  }
  return v2;
}
