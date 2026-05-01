/*
 * XREFs of ?NotifyFailure@?$test_watcher@V?$merged_data@U_tip_TaskbarEnterprisePinTest_attributes@PinnedListTip@@Vtest_data_basic@tip2@@@details@tip2@@@tip2@@EEAA_NAEBUFailureInfo@wil@@@Z @ 0x1806934B0
 * Callers:
 *     <none>
 * Callees:
 *     ?reset@shared_buffer@details@wil@@QEAAXXZ @ 0x18002694C (-reset@shared_buffer@details@wil@@QEAAXXZ.c)
 *     ?begin_update@?$shared_data@$0A@$0A@$00@details@tip2@@AEAA_NXZ @ 0x18028B450 (-begin_update@-$shared_data@$0A@$0A@$00@details@tip2@@AEAA_NXZ.c)
 *     ??0StoredFailureInfo@wil@@QEAA@AEBUFailureInfo@1@@Z @ 0x1802CB3B8 (--0StoredFailureInfo@wil@@QEAA@AEBUFailureInfo@1@@Z.c)
 *     ?push_back@?$vector_nothrow@VStoredFailureInfo@wil@@@tip2@@QEAA_N$$QEAVStoredFailureInfo@wil@@@Z @ 0x180337800 (-push_back@-$vector_nothrow@VStoredFailureInfo@wil@@@tip2@@QEAA_N$$QEAVStoredFailureInfo@wil@@@Z.c)
 *     ?end_update@?$shared_data@$0A@$0A@$00@details@tip2@@AEAAXXZ @ 0x180698A34 (-end_update@-$shared_data@$0A@$0A@$00@details@tip2@@AEAAXXZ.c)
 */

char __fastcall tip2::test_watcher<tip2::details::merged_data<PinnedListTip::_tip_TaskbarEnterprisePinTest_attributes,tip2::test_data_basic>>::NotifyFailure(
        __int64 a1,
        const struct wil::FailureInfo *a2)
{
  __int64 v2; // rdi
  char v4; // bl
  _BYTE v6[152]; // [rsp+20h] [rbp-B8h] BYREF
  volatile signed __int32 *v7; // [rsp+B8h] [rbp-20h] BYREF

  v2 = *(_QWORD *)(a1 + 56);
  if ( tip2::details::shared_data<0,0,1>::begin_update(v2 + 8) )
  {
    wil::StoredFailureInfo::StoredFailureInfo((wil::StoredFailureInfo *)v6, a2);
    v4 = tip2::vector_nothrow<wil::StoredFailureInfo>::push_back((_QWORD *)(v2 + 80), (__int64)v6);
    wil::details::shared_buffer::reset(&v7);
    if ( !v4 )
      *(_DWORD *)(v2 + 72) |= 0x100000u;
  }
  tip2::details::shared_data<0,0,1>::end_update(v2 + 8);
  return 0;
}
