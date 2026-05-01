/*
 * XREFs of ?IsDesktopZBand@GamingPosturePositioner@@AEAA_NPEAUIApplicationView@@@Z @ 0x180501EE4
 * Callers:
 *     ?HandleViewRecovery@GamingPosturePositioner@@AEAAXXZ @ 0x180500E88 (-HandleViewRecovery@GamingPosturePositioner@@AEAAXXZ.c)
 *     ?IsViewManaged@GamingPosturePositioner@@AEAA_NPEAUIApplicationView@@@Z @ 0x180502290 (-IsViewManaged@GamingPosturePositioner@@AEAA_NPEAUIApplicationView@@@Z.c)
 * Callees:
 *     ?GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z @ 0x180029D9C (-GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z.c)
 */

bool __fastcall GamingPosturePositioner::IsDesktopZBand(
        GamingPosturePositioner *this,
        __int64 (__fastcall ***a2)(ApplicationViewHelpers *, GUID *, __int64 *))
{
  __int64 WindowForView; // rax
  int v4; // [rsp+30h] [rbp+8h] BYREF
  int v5; // [rsp+34h] [rbp+Ch]

  v5 = HIDWORD(this);
  v4 = 0;
  WindowForView = ApplicationViewHelpers::GetWindowForView(a2, (struct IApplicationView *)a2);
  return !WindowForView || !(unsigned int)GetWindowBand(WindowForView, &v4) || v4 == 1;
}
