/*
 * XREFs of ?FindView@GamingApplicationViewCollection@@AEAA?AV?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@std@@PEAUIApplicationView@@@Z @ 0x1804F19A4
 * Callers:
 *     ?EnterFullScreenForView@KioskPositioner@@UEAAJPEAUIApplicationView@@@Z @ 0x1804F1890 (-EnterFullScreenForView@KioskPositioner@@UEAAJPEAUIApplicationView@@@Z.c)
 *     ?IsViewFullScreen@KioskPositioner@@UEAAJPEAUIApplicationView@@PEAH@Z @ 0x1804F23B0 (-IsViewFullScreen@KioskPositioner@@UEAAJPEAUIApplicationView@@PEAH@Z.c)
 *     ?RemoveView@GamingApplicationViewCollection@@QEAA_NPEAUIApplicationView@@@Z @ 0x1804F2F64 (-RemoveView@GamingApplicationViewCollection@@QEAA_NPEAUIApplicationView@@@Z.c)
 *     ?AddView@GamingApplicationViewCollection@@QEAA_NPEAUIApplicationView@@@Z @ 0x1804FA210 (-AddView@GamingApplicationViewCollection@@QEAA_NPEAUIApplicationView@@@Z.c)
 *     ?BringToFront@GamingApplicationViewCollection@@QEAAXPEAUIApplicationView@@@Z @ 0x1804FB260 (-BringToFront@GamingApplicationViewCollection@@QEAAXPEAUIApplicationView@@@Z.c)
 *     ?ContainView@GamingApplicationViewCollection@@QEAA_NPEAUIApplicationView@@@Z @ 0x1804FB374 (-ContainView@GamingApplicationViewCollection@@QEAA_NPEAUIApplicationView@@@Z.c)
 *     ?HandleFallbackForMinimizedView@GamingPosturePositioner@@AEAAXPEAUIApplicationView@@@Z @ 0x180500750 (-HandleFallbackForMinimizedView@GamingPosturePositioner@@AEAAXPEAUIApplicationView@@@Z.c)
 * Callees:
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x18009B530 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 */

struct IUnknown ***__fastcall GamingApplicationViewCollection::FindView(
        struct IUnknown ***a1,
        struct IUnknown ***a2,
        struct IUnknown *a3)
{
  struct IUnknown **v3; // rsi
  struct IUnknown **i; // rbx
  struct IUnknown ***result; // rax

  v3 = a1[1];
  for ( i = *a1; i != v3 && !SHIsSameObject(a3, *i); ++i )
    ;
  result = a2;
  *a2 = i;
  return result;
}
