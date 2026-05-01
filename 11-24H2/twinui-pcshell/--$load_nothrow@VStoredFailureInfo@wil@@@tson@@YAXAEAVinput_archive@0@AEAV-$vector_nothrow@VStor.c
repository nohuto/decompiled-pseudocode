/*
 * XREFs of ??$load_nothrow@VStoredFailureInfo@wil@@@tson@@YAXAEAVinput_archive@0@AEAV?$vector_nothrow@VStoredFailureInfo@wil@@@tip2@@@Z @ 0x18028EB5C
 * Callers:
 *     ??$?RV?$nvp@AEAV?$vector_nothrow@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEADP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEADPEAD$0A@$$T@details@wil@@@details@wil@@@wil@@@tip2@@@tson@@V?$nvp@AEAV?$vector_nothrow@VStoredFailureInfo@wil@@@tip2@@@1@V?$nvp@AEAV?$vector_nothrow@Utest_flag@tip2@@@tip2@@@1@@input_archive@tson@@QEAAAEAV01@$$QEAV?$nvp@AEAV?$vector_nothrow@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEADP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEADPEAD$0A@$$T@details@wil@@@details@wil@@@wil@@@tip2@@@1@$$QEAV?$nvp@AEAV?$vector_nothrow@VStoredFailureInfo@wil@@@tip2@@@1@$$QEAV?$nvp@AEAV?$vector_nothrow@Utest_flag@tip2@@@tip2@@@1@@Z @ 0x18028E69C (--$-RV-$nvp@AEAV-$vector_nothrow@V-$unique_any_t@V-$unique_storage@U-$resource_poli_ea_18028E69C.c)
 * Callees:
 *     ?reset@shared_buffer@details@wil@@QEAAXXZ @ 0x18002694C (-reset@shared_buffer@details@wil@@QEAAXXZ.c)
 *     ?startNode@input_archive@tson@@QEAAXXZ @ 0x180183220 (-startNode@input_archive@tson@@QEAAXXZ.c)
 *     ?finishNode@input_archive@tson@@QEAAXXZ @ 0x180183750 (-finishNode@input_archive@tson@@QEAAXXZ.c)
 *     ??$?RAEAUsize_tag@tson@@@input_archive@tson@@QEAAAEAV01@AEAUsize_tag@1@@Z @ 0x180212C5C (--$-RAEAUsize_tag@tson@@@input_archive@tson@@QEAAAEAV01@AEAUsize_tag@1@@Z.c)
 *     ?clear@?$vector_nothrow@VStoredFailureInfo@wil@@@tip2@@QEAAXXZ @ 0x18028EACC (-clear@-$vector_nothrow@VStoredFailureInfo@wil@@@tip2@@QEAAXXZ.c)
 *     memset_0 @ 0x1802D25CC (memset_0.c)
 *     ?load_nothrow@tson@@YAXAEAVinput_archive@1@AEAVStoredFailureInfo@wil@@@Z @ 0x1803372C8 (-load_nothrow@tson@@YAXAEAVinput_archive@1@AEAVStoredFailureInfo@wil@@@Z.c)
 *     ?push_back@?$vector_nothrow@VStoredFailureInfo@wil@@@tip2@@QEAA_N$$QEAVStoredFailureInfo@wil@@@Z @ 0x180337800 (-push_back@-$vector_nothrow@VStoredFailureInfo@wil@@@tip2@@QEAA_N$$QEAVStoredFailureInfo@wil@@@Z.c)
 */

void __fastcall tson::load_nothrow<wil::StoredFailureInfo>(tson *this, _QWORD *a2)
{
  unsigned int v4; // edx
  __int64 i; // rbx
  struct wil::StoredFailureInfo *v6; // r8
  _BYTE v7[152]; // [rsp+20h] [rbp-B8h] BYREF
  volatile signed __int32 *v8[3]; // [rsp+B8h] [rbp-20h] BYREF
  __int64 v9; // [rsp+F0h] [rbp+18h] BYREF

  v9 = 0LL;
  tson::input_archive::operator()<tson::size_tag &>((__int64)this, &v9);
  tip2::vector_nothrow<wil::StoredFailureInfo>::clear(a2, v4);
  for ( i = v9; i; --i )
  {
    v8[0] = 0LL;
    v8[1] = 0LL;
    memset_0(v7, 0, sizeof(v7));
    tson::input_archive::startNode(this);
    tson::load_nothrow(this, (struct tson::input_archive *)v7, v6);
    tson::input_archive::finishNode(this);
    tip2::vector_nothrow<wil::StoredFailureInfo>::push_back(a2, v7);
    wil::details::shared_buffer::reset(v8);
  }
}
