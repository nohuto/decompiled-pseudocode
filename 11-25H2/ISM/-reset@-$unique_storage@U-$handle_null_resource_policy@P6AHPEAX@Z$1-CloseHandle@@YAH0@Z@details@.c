/*
 * XREFs of ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x180084C80
 * Callers:
 *     ??0GameControllerRawInputProvider@@AEAA@PEAUIRawInputClient@@@Z @ 0x18007F234 (--0GameControllerRawInputProvider@@AEAA@PEAUIRawInputClient@@@Z.c)
 *     ??4?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x18009AAB0 (--4-$unique_any_t@V-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH.c)
 *     ?CreateInputSink@MPCFocusTarget@@IEAAXXZ @ 0x1800FD7E0 (-CreateInputSink@MPCFocusTarget@@IEAAXXZ.c)
 *     ?Register@CallOnThreadExit@@YAXV?$function@$$A6AXXZ@std@@PEA_K@Z @ 0x18012EC04 (-Register@CallOnThreadExit@@YAXV-$function@$$A6AXXZ@std@@PEA_K@Z.c)
 *     ?Initialize@SharedTargetWithHandle@SystemCursors@@QEAAJXZ @ 0x18015EE60 (-Initialize@SharedTargetWithHandle@SystemCursors@@QEAAJXZ.c)
 *     wil::ResultFromException__lambda_cedfd987e83550419e6052857f0ac72c___ @ 0x180187E68 (wil--ResultFromException__lambda_cedfd987e83550419e6052857f0ac72c___.c)
 *     ?Open@PenInterface@@QEAAJXZ @ 0x1801887B0 (-Open@PenInterface@@QEAAJXZ.c)
 *     ?EnsureDCompTransform@DWMCursor@@AEAAJXZ @ 0x1801C0B4C (-EnsureDCompTransform@DWMCursor@@AEAAJXZ.c)
 * Callees:
 *     ?close_reset@?$close_invoke_helper@$00P6AHPEAX@Z$1?CloseHandle@@YAH0@ZPEAX@details@wil@@SAXPEAX@Z @ 0x18009ABBC (-close_reset@-$close_invoke_helper@$00P6AHPEAX@Z$1-CloseHandle@@YAH0@ZPEAX@details@wil@@SAXPEAX@.c)
 */

__int64 __fastcall wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
        void **a1,
        void *a2)
{
  char *v4; // rcx
  __int64 result; // rax

  v4 = (char *)*a1;
  result = (__int64)(v4 - 1);
  if ( (unsigned __int64)(v4 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    result = wil::details::close_invoke_helper<1,int (*)(void *),&int CloseHandle(void *),void *>::close_reset(v4);
  *a1 = a2;
  return result;
}
