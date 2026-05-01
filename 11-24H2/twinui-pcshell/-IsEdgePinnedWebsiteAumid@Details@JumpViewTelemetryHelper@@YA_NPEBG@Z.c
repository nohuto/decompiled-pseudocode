/*
 * XREFs of ?IsEdgePinnedWebsiteAumid@Details@JumpViewTelemetryHelper@@YA_NPEBG@Z @ 0x1802C7214
 * Callers:
 *     ?StartActivity@ShowJumpViewActivity@JumpViewProvider@@QEAAXPEBG0W4JumpViewInvocationSurfaceType@JumpView@Shell@Internal@Windows@@W4JumpViewInvocationMethod@4567@@Z @ 0x180208734 (-StartActivity@ShowJumpViewActivity@JumpViewProvider@@QEAAXPEBG0W4JumpViewInvocationSurfaceType@.c)
 * Callees:
 *     <none>
 */

char __fastcall JumpViewTelemetryHelper::Details::IsEdgePinnedWebsiteAumid(
        LPCWCH lpString2,
        const unsigned __int16 *a2)
{
  unsigned __int64 v2; // rax
  char v3; // bl

  if ( !lpString2 )
    return 0;
  v2 = -1LL;
  do
    ++v2;
  while ( lpString2[v2] );
  if ( v2 < 0x10 )
    return 0;
  v3 = 1;
  if ( CompareStringOrdinal(L"Microsoft.Edge.?", 16, lpString2, 16, 1) != 2 )
    return 0;
  return v3;
}
