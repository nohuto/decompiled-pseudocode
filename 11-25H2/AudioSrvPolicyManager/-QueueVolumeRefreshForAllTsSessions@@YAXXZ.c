/*
 * XREFs of ?QueueVolumeRefreshForAllTsSessions@@YAXXZ @ 0x180040EBC
 * Callers:
 *     _lambda_b2025209d5eaef5f99f9deda65cc799e_::operator() @ 0x18004038C (_lambda_b2025209d5eaef5f99f9deda65cc799e_--operator().c)
 *     ?TS_SessionChanged@@YAXKPEAUtagWTSSESSION_NOTIFICATION@@@Z @ 0x180041340 (-TS_SessionChanged@@YAXKPEAUtagWTSSESSION_NOTIFICATION@@@Z.c)
 * Callees:
 *     ?QueueGenericWorkItem@@YAJV?$function@$$A6AXXZ@std@@@Z @ 0x180006D70 (-QueueGenericWorkItem@@YAJV-$function@$$A6AXXZ@std@@@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002D4AC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     std::function_void___cdecl(void)_::function_void___cdecl(void)___lambda_0a903797054c4de60318e94de109d2f9__0_ @ 0x18003F1A0 (std--function_void___cdecl(void)_--function_void___cdecl(void)___lambda_0a903797054c4de60318e94d.c)
 */

void QueueVolumeRefreshForAllTsSessions(void)
{
  __int64 *v0; // rax
  int v1; // eax
  _QWORD v2[9]; // [rsp+20h] [rbp-48h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  v0 = std::function_void___cdecl_void__::function_void___cdecl_void____lambda_0a903797054c4de60318e94de109d2f9__0_(v2);
  v1 = QueueGenericWorkItem(v0);
  if ( v1 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      1457LL,
      (__int64)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
      (const char *)(unsigned int)v1);
}
