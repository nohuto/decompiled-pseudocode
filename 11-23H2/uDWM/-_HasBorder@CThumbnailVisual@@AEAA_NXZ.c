/*
 * XREFs of ?_HasBorder@CThumbnailVisual@@AEAA_NXZ @ 0x18000D078
 * Callers:
 *     ?EnsureSecondaryWindowVisual@CThumbnailVisual@@QEAAJXZ @ 0x180009C74 (-EnsureSecondaryWindowVisual@CThumbnailVisual@@QEAAJXZ.c)
 *     ?EnsureVisualBrush@CThumbnailVisual@@QEAAJXZ @ 0x18000CDB0 (-EnsureVisualBrush@CThumbnailVisual@@QEAAJXZ.c)
 *     ?UpdateDestinationRect@CThumbnailVisual@@QEAAJXZ @ 0x18000D7AC (-UpdateDestinationRect@CThumbnailVisual@@QEAAJXZ.c)
 * Callees:
 *     <none>
 */

char __fastcall CThumbnailVisual::_HasBorder(CThumbnailVisual *this)
{
  __int64 v1; // rdx
  char result; // al

  v1 = *((_QWORD *)this + 47);
  result = 0;
  if ( v1 )
  {
    if ( (*(_DWORD *)(v1 + 36) & 0x400000) != 0 )
      return 1;
  }
  return result;
}
