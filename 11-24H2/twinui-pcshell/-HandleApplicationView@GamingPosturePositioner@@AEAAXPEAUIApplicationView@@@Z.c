/*
 * XREFs of ?HandleApplicationView@GamingPosturePositioner@@AEAAXPEAUIApplicationView@@@Z @ 0x180500710
 * Callers:
 *     _lambda_1c7927ef699b7e1a5db16bb78f566198_::operator() @ 0x1804F90AC (_lambda_1c7927ef699b7e1a5db16bb78f566198_--operator().c)
 *     ?HandleViewRecovery@GamingPosturePositioner@@AEAAXXZ @ 0x180500E88 (-HandleViewRecovery@GamingPosturePositioner@@AEAAXXZ.c)
 * Callees:
 *     ?IsWin32ApplicationView@GamingPosturePositioner@@AEAA_NPEAUIApplicationView@@@Z @ 0x1804F24AC (-IsWin32ApplicationView@GamingPosturePositioner@@AEAA_NPEAUIApplicationView@@@Z.c)
 *     ?HandleUwpApplicationView@GamingPosturePositioner@@AEAAXPEAUIApplicationView@@_N@Z @ 0x1805008B0 (-HandleUwpApplicationView@GamingPosturePositioner@@AEAAXPEAUIApplicationView@@_N@Z.c)
 *     ?HandleWin32ApplicationView@GamingPosturePositioner@@AEAAXPEAUIApplicationView@@@Z @ 0x180501458 (-HandleWin32ApplicationView@GamingPosturePositioner@@AEAAXPEAUIApplicationView@@@Z.c)
 */

void __fastcall GamingPosturePositioner::HandleApplicationView(
        GamingPosturePositioner *this,
        struct IApplicationView *a2)
{
  if ( GamingPosturePositioner::IsWin32ApplicationView(this, a2) )
    GamingPosturePositioner::HandleWin32ApplicationView(this, a2);
  else
    GamingPosturePositioner::HandleUwpApplicationView(this, a2, 0);
}
