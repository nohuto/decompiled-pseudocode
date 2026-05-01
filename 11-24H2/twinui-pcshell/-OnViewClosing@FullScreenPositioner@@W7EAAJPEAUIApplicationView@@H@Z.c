/*
 * XREFs of ?OnViewClosing@FullScreenPositioner@@W7EAAJPEAUIApplicationView@@H@Z @ 0x180324FA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall FullScreenPositioner::OnViewClosing(
        __int64 a1,
        __int64 (__fastcall ***a2)(ApplicationViewHelpers *, GUID *, __int64 *),
        int a3)
{
  return SurfaceHubPositioner::OnViewClosing((SurfaceHubPositioner *)(a1 - 8), a2, a3);
}
