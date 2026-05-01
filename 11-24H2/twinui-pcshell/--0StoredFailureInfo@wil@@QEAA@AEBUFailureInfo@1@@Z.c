/*
 * XREFs of ??0StoredFailureInfo@wil@@QEAA@AEBUFailureInfo@1@@Z @ 0x1802CB3B8
 * Callers:
 *     ?ThrowResultExceptionInternal@details@wil@@YAXAEBUFailureInfo@2@@Z @ 0x1802DDAC0 (-ThrowResultExceptionInternal@details@wil@@YAXAEBUFailureInfo@2@@Z.c)
 *     ?NotifyFailure@?$test_watcher@V?$merged_data@U_tip_tip_test_dynamic_attributes@tip2@@Vtest_data_dynamic@2@@details@tip2@@@tip2@@EEAA_NAEBUFailureInfo@wil@@@Z @ 0x1803BD6C0 (-NotifyFailure@-$test_watcher@V-$merged_data@U_tip_tip_test_dynamic_attributes@tip2@@Vtest_data_.c)
 *     ?log_failure@?$shared_data@$00$0A@$0A@@details@tip2@@AEAAXAEBUFailureInfo@wil@@@Z @ 0x1803C3C2C (-log_failure@-$shared_data@$00$0A@$0A@@details@tip2@@AEAAXAEBUFailureInfo@wil@@@Z.c)
 *     ?log_failure@?$shared_data@$0A@$0A@$0A@@details@tip2@@AEAAXAEBUFailureInfo@wil@@@Z @ 0x1803C3C9C (-log_failure@-$shared_data@$0A@$0A@$0A@@details@tip2@@AEAAXAEBUFailureInfo@wil@@@Z.c)
 *     ?NotifyFailure@?$test_watcher@V?$merged_data@U_tip_TaskbarEnterprisePinTest_attributes@PinnedListTip@@Vtest_data_basic@tip2@@@details@tip2@@@tip2@@EEAA_NAEBUFailureInfo@wil@@@Z @ 0x1806934B0 (-NotifyFailure@-$test_watcher@V-$merged_data@U_tip_TaskbarEnterprisePinTest_attributes@PinnedLis.c)
 * Callees:
 *     ?SetFailureInfo@StoredFailureInfo@wil@@QEAAXAEBUFailureInfo@2@@Z @ 0x18017FA60 (-SetFailureInfo@StoredFailureInfo@wil@@QEAAXAEBUFailureInfo@2@@Z.c)
 */

wil::StoredFailureInfo *__fastcall wil::StoredFailureInfo::StoredFailureInfo(
        wil::StoredFailureInfo *this,
        const struct wil::FailureInfo *a2)
{
  *((_QWORD *)this + 19) = 0LL;
  *((_QWORD *)this + 20) = 0LL;
  wil::StoredFailureInfo::SetFailureInfo(this, a2);
  return this;
}
