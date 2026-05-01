/*
 * XREFs of ?Instance@ViewManagerInteropTraceLogging@@KAPEAV1@XZ @ 0x18001EEA4
 * Callers:
 *     ??$CommitImportanceVector@IAEAT_RM_ACTIVITY_IMPORTANCE@@@ViewManagerInteropTraceLogging@@SAX$$QEAIAEAT_RM_ACTIVITY_IMPORTANCE@@@Z @ 0x18001EA04 (--$CommitImportanceVector@IAEAT_RM_ACTIVITY_IMPORTANCE@@@ViewManagerInteropTraceLogging@@SAX$$QE.c)
 *     ?CommitImportanceVector@UwpWindowWrapperBase@@AEAAXXZ @ 0x18001EDAC (-CommitImportanceVector@UwpWindowWrapperBase@@AEAAXXZ.c)
 *     ?IsEnabled@ViewManagerInteropTraceLogging@@SA_NE_K@Z @ 0x18001EE7C (-IsEnabled@ViewManagerInteropTraceLogging@@SA_NE_K@Z.c)
 * Callees:
 *     ??1Completer@?$static_lazy@VViewManagerInteropTraceLogging@@@details@wil@@QEAA@XZ @ 0x180186D84 (--1Completer@-$static_lazy@VViewManagerInteropTraceLogging@@@details@wil@@QEAA@XZ.c)
 *     atexit @ 0x1802D1A98 (atexit.c)
 */

struct ViewManagerInteropTraceLogging *ViewManagerInteropTraceLogging::Instance(void)
{
  union _RTL_RUN_ONCE *v1; // [rsp+20h] [rbp-18h] BYREF
  int v2; // [rsp+28h] [rbp-10h]
  WINBOOL v3; // [rsp+40h] [rbp+8h] BYREF
  __int64 *v4; // [rsp+48h] [rbp+10h] BYREF

  v4 = 0LL;
  v3 = 0;
  if ( __std_init_once_begin_initialize(
         &`ViewManagerInteropTraceLogging::Instance'::`2'::wrapper,
         0,
         &v3,
         (LPVOID *)&v4)
    && v3 )
  {
    qword_1808CB6C8 = 0LL;
    dword_1808CB6D4 = 0;
    v4 = &qword_1808CB6C0;
    qword_1808CB6C0 = (__int64)&IamTraceLogging::`vftable';
    v1 = &`ViewManagerInteropTraceLogging::Instance'::`2'::wrapper;
    byte_1808CB6D0 = 0;
    atexit(_lambda_1807517bb2a601749b2ae4fbbb57858f_::_lambda_invoker_cdecl_);
    v2 = 0;
    wil::details::static_lazy<ViewManagerInteropTraceLogging>::Completer::~Completer(&v1);
  }
  return (struct ViewManagerInteropTraceLogging *)v4;
}
