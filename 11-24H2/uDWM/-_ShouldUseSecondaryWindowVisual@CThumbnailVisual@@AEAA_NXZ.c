/*
 * XREFs of ?_ShouldUseSecondaryWindowVisual@CThumbnailVisual@@AEAA_NXZ @ 0x18001FD18
 * Callers:
 *     ?ValidateVisual@CThumbnailVisual@@UEAAJXZ @ 0x18001F970 (-ValidateVisual@CThumbnailVisual@@UEAAJXZ.c)
 * Callees:
 *     ?_IsImmersiveIconic@CThumbnailVisual@@AEAA_NXZ @ 0x18001E410 (-_IsImmersiveIconic@CThumbnailVisual@@AEAA_NXZ.c)
 *     ?GetThumbnailType@CSecondaryWindowRepresentation@@QEBA?AW4THUMBNAIL_TYPE@@XZ @ 0x180061C00 (-GetThumbnailType@CSecondaryWindowRepresentation@@QEBA-AW4THUMBNAIL_TYPE@@XZ.c)
 */

char __fastcall CThumbnailVisual::_ShouldUseSecondaryWindowVisual(CThumbnailVisual *this)
{
  char v2; // bl
  __int64 v4; // rcx
  int v5; // r9d
  int v6; // eax
  int v7; // ecx

  v2 = 1;
  if ( !EqualRect(
          (const RECT *)(*(_QWORD *)(*((_QWORD *)this + 41) + 24LL) + 48LL),
          (const RECT *)(*(_QWORD *)(*((_QWORD *)this + 41) + 24LL) + 236LL)) )
    return 0;
  if ( CThumbnailVisual::_IsImmersiveIconic(this) )
    return 0;
  v4 = *((_QWORD *)this + 41);
  if ( (*(_BYTE *)(v4 + 36) & 2) != 0
    && (*(_DWORD *)(v4 + 36) & 0x100000) == 0
    && !EqualRect((const RECT *)(*(_QWORD *)(v4 + 24) + 48LL), (const RECT *)(v4 + 56)) )
  {
    return 0;
  }
  v5 = *(_DWORD *)(*((_QWORD *)this + 41) + 36LL);
  if ( (v5 & 0x40000000) != 0 )
    return 0;
  if ( *((_QWORD *)this + 42)
    && (unsigned int)CSecondaryWindowRepresentation::GetThumbnailType() != 1
    && (v6 = *((_DWORD *)this + 118)) != 0
    && (v7 = *((_DWORD *)this + 119)) != 0 )
  {
    if ( (float)((float)*((int *)this + 114) / (float)v6) < 0.5
      || (float)((float)*((int *)this + 115) / (float)v7) < 0.5 )
    {
      return 0;
    }
  }
  else if ( (v5 & 0x4000000) != 0 )
  {
    return 0;
  }
  return v2;
}
