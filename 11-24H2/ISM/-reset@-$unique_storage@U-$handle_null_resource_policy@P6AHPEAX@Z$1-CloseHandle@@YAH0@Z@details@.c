/*
 * XREFs of ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x180084CA0
 * Callers:
 *     ??0GameControllerRawInputProvider@@AEAA@PEAUIRawInputClient@@@Z @ 0x18007F064 (--0GameControllerRawInputProvider@@AEAA@PEAUIRawInputClient@@@Z.c)
 *     ??4?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x18009AC50 (--4-$unique_any_t@V-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH.c)
 *     ?CreateInputSink@MPCFocusTarget@@IEAAXXZ @ 0x1800FF4B0 (-CreateInputSink@MPCFocusTarget@@IEAAXXZ.c)
 *     ?Register@CallOnThreadExit@@YAXV?$function@$$A6AXW4CallbackReason@CallOnThreadExit@@@Z@std@@PEA_K@Z @ 0x180131240 (-Register@CallOnThreadExit@@YAXV-$function@$$A6AXW4CallbackReason@CallOnThreadExit@@@Z@std@@PEA_.c)
 *     ?Initialize@SharedTargetWithHandle@SystemCursors@@QEAAJXZ @ 0x18015FC90 (-Initialize@SharedTargetWithHandle@SystemCursors@@QEAAJXZ.c)
 *     ?OnHapticInterfaceQueryRemove@HapticDeviceManager@@QEAAJK@Z @ 0x18018BE48 (-OnHapticInterfaceQueryRemove@HapticDeviceManager@@QEAAJK@Z.c)
 *     ?QueryRemoveHapticMouse@HapticDeviceManager@@QEAAJPEBULegacyDeviceInfo@@@Z @ 0x18018C590 (-QueryRemoveHapticMouse@HapticDeviceManager@@QEAAJPEBULegacyDeviceInfo@@@Z.c)
 *     ?QueryRemoveHapticTouchpad@HapticDeviceManager@@QEAAJPEBULegacyDeviceInfo@@@Z @ 0x18018C654 (-QueryRemoveHapticTouchpad@HapticDeviceManager@@QEAAJPEBULegacyDeviceInfo@@@Z.c)
 *     wil::ResultFromException__lambda_cedfd987e83550419e6052857f0ac72c___ @ 0x18018F9C0 (wil--ResultFromException__lambda_cedfd987e83550419e6052857f0ac72c___.c)
 *     ?Open@PenInterface@@QEAAJXZ @ 0x1801902D0 (-Open@PenInterface@@QEAAJXZ.c)
 *     ?Initialize@CompliantHapticInterface@@QEAAJ$$QEAV?$unique_any_t@V?$unique_storage@U?$handle_invalid_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@$$QEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_HIDP_PREPARSED_DATA@@P6AEPEAU1@@Z$1?HidD_FreePreparsedData@@YAE0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@3@@Z @ 0x180199D80 (-Initialize@CompliantHapticInterface@@QEAAJ$$QEAV-$unique_any_t@V-$unique_storage@U-$handle_inva.c)
 *     ?EnsureDCompTransform@DWMCursor@@AEAAJXZ @ 0x1801C825C (-EnsureDCompTransform@DWMCursor@@AEAAJXZ.c)
 * Callees:
 *     ?close_reset@?$close_invoke_helper@$00P6AHPEAX@Z$1?CloseHandle@@YAH0@ZPEAX@details@wil@@SAXPEAX@Z @ 0x18009AD5C (-close_reset@-$close_invoke_helper@$00P6AHPEAX@Z$1-CloseHandle@@YAH0@ZPEAX@details@wil@@SAXPEAX@.c)
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
