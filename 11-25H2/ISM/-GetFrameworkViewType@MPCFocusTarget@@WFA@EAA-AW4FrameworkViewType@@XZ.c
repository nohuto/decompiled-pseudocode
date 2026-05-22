/*
 * XREFs of ?GetFrameworkViewType@MPCFocusTarget@@WFA@EAA?AW4FrameworkViewType@@XZ @ 0x1800FDAD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall MPCFocusTarget::GetFrameworkViewType(__int64 a1)
{
  return MPCTarget::GetFrameworkViewType(a1 - 80);
}
