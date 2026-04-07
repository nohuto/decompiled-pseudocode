/*
 * XREFs of ?_HasBorder@CThumbnailVisual@@AEAA_NXZ @ 0x18001F674
 * Callers:
 *     ?EnsureVisualBrush@CThumbnailVisual@@QEAAJXZ @ 0x18001EAC8 (-EnsureVisualBrush@CThumbnailVisual@@QEAAJXZ.c)
 *     ?UpdateDestinationRect@CThumbnailVisual@@QEAAJXZ @ 0x18003B9BC (-UpdateDestinationRect@CThumbnailVisual@@QEAAJXZ.c)
 *     ?EnsureSecondaryWindowVisual@CThumbnailVisual@@QEAAJXZ @ 0x1800792A8 (-EnsureSecondaryWindowVisual@CThumbnailVisual@@QEAAJXZ.c)
 * Callees:
 *     <none>
 */

char __fastcall CThumbnailVisual::_HasBorder(CThumbnailVisual *this)
{
  __int64 v1; // rdx
  char result; // al

  v1 = *((_QWORD *)this + 41);
  result = 0;
  if ( v1 )
  {
    if ( (*(_DWORD *)(v1 + 36) & 0x400000) != 0 )
      return 1;
  }
  return result;
}
