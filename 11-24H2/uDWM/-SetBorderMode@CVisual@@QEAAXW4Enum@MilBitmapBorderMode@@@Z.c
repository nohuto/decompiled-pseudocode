/*
 * XREFs of ?SetBorderMode@CVisual@@QEAAXW4Enum@MilBitmapBorderMode@@@Z @ 0x180021758
 * Callers:
 *     ?EnsureVisualBrush@CThumbnailVisual@@QEAAJXZ @ 0x18001EAC8 (-EnsureVisualBrush@CThumbnailVisual@@QEAAJXZ.c)
 *     ?InitializeVisualTreeClone@CVisual@@IEAAJPEAV1@W4CloneOptions@@@Z @ 0x180021600 (-InitializeVisualTreeClone@CVisual@@IEAAJPEAV1@W4CloneOptions@@@Z.c)
 *     ?SetBorderModeForContentClip@CWindowBorder@@AEAAXXZ @ 0x18002EF74 (-SetBorderModeForContentClip@CWindowBorder@@AEAAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800FA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CVisual::SetBorderMode(__int64 *a1, int a2)
{
  __int64 v2; // rax
  __int64 result; // rax

  if ( *((_DWORD *)a1 + 34) != a2 )
  {
    v2 = *a1;
    *((_DWORD *)a1 + 34) = a2;
    return (*(__int64 (__fastcall **)(__int64 *, __int64))(v2 + 24))(a1, 128LL);
  }
  return result;
}
