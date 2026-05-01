/*
 * XREFs of ?CensorPath@JumpViewTelemetryHelper@@YAPEBGPEBG@Z @ 0x180208878
 * Callers:
 *     ?StartActivity@ShowJumpViewActivity@JumpViewProvider@@QEAAXPEBG0W4JumpViewInvocationSurfaceType@JumpView@Shell@Internal@Windows@@W4JumpViewInvocationMethod@4567@@Z @ 0x180208734 (-StartActivity@ShowJumpViewActivity@JumpViewProvider@@QEAAXPEBG0W4JumpViewInvocationSurfaceType@.c)
 * Callees:
 *     <none>
 */

const unsigned __int16 *__fastcall JumpViewTelemetryHelper::CensorPath(LPCWSTR pszPath, const unsigned __int16 *a2)
{
  const WCHAR *v2; // rbx

  v2 = pszPath;
  if ( pszPath && !PathIsFileSpecW(pszPath) )
    return PathFindFileNameW(v2);
  return v2;
}
