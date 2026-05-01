/*
 * XREFs of ??_GViewManagerInteropTraceLogging@@UEAAPEAXI@Z @ 0x1802DBB40
 * Callers:
 *     ?_lambda_invoker_cdecl_@_lambda_119a121fb38785c27806b92be2d82d86_@@CA@XZ @ 0x1802E14E0 (-_lambda_invoker_cdecl_@_lambda_119a121fb38785c27806b92be2d82d86_@@CA@XZ.c)
 *     ?_lambda_invoker_cdecl_@_lambda_e1ff718f598a6a7bf79a481d174755c1_@@CA@XZ @ 0x1802E1660 (-_lambda_invoker_cdecl_@_lambda_e1ff718f598a6a7bf79a481d174755c1_@@CA@XZ.c)
 *     ?_lambda_invoker_cdecl_@_lambda_868f7fa048835520b2023eeceda2fa98_@@CA@XZ @ 0x180322DC0 (-_lambda_invoker_cdecl_@_lambda_868f7fa048835520b2023eeceda2fa98_@@CA@XZ.c)
 *     ?_lambda_invoker_cdecl_@_lambda_1807517bb2a601749b2ae4fbbb57858f_@@CA@XZ @ 0x180439350 (-_lambda_invoker_cdecl_@_lambda_1807517bb2a601749b2ae4fbbb57858f_@@CA@XZ.c)
 *     ?_lambda_invoker_cdecl_@_lambda_c916e9e9cdf81665e4682fd57ca742e1_@@CA@XZ @ 0x180467450 (-_lambda_invoker_cdecl_@_lambda_c916e9e9cdf81665e4682fd57ca742e1_@@CA@XZ.c)
 *     ?_lambda_invoker_cdecl_@_lambda_c1ca75c4d9a0fc028c30e2199b43bdb4_@@CA@XZ @ 0x180483890 (-_lambda_invoker_cdecl_@_lambda_c1ca75c4d9a0fc028c30e2199b43bdb4_@@CA@XZ.c)
 *     ?_lambda_invoker_cdecl_@_lambda_1bb754991d9aec61d6443053699089ac_@@CA@XZ @ 0x180484410 (-_lambda_invoker_cdecl_@_lambda_1bb754991d9aec61d6443053699089ac_@@CA@XZ.c)
 *     ?_lambda_invoker_cdecl_@_lambda_51d33002daa63bfc4d65f85f7f956340_@@CA@XZ @ 0x1805178C0 (-_lambda_invoker_cdecl_@_lambda_51d33002daa63bfc4d65f85f7f956340_@@CA@XZ.c)
 * Callees:
 *     ??1TraceLoggingProvider@wil@@MEAA@XZ @ 0x1802198EC (--1TraceLoggingProvider@wil@@MEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D1AB8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

ViewManagerInteropTraceLogging *__fastcall ViewManagerInteropTraceLogging::`scalar deleting destructor'(
        ViewManagerInteropTraceLogging *this,
        char a2)
{
  wil::TraceLoggingProvider::~TraceLoggingProvider(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x18);
  return this;
}
