/*
 * XREFs of ??$?RV?$nvp@AEAU?$test_data_metrics@Vtest_data_dynamic@tip2@@@details@tip2@@@tson@@@output_archive@tson@@QEAAAEAV01@$$QEAV?$nvp@AEAU?$test_data_metrics@Vtest_data_dynamic@tip2@@@details@tip2@@@1@@Z @ 0x1803AE820
 * Callers:
 *     ?serialize@?$merged_data@U_tip_tip_test_dynamic_attributes@tip2@@Vtest_data_dynamic@2@@details@tip2@@EEAAXAEAVoutput_archive@tson@@W4serialize_options@23@@Z @ 0x1803C4510 (-serialize@-$merged_data@U_tip_tip_test_dynamic_attributes@tip2@@Vtest_data_dynamic@2@@details@t.c)
 * Callees:
 *     ?startNode@output_archive@tson@@QEAAXXZ @ 0x1800DE2FC (-startNode@output_archive@tson@@QEAAXXZ.c)
 *     ?finishNode@output_archive@tson@@QEAAXXZ @ 0x1800DED7C (-finishNode@output_archive@tson@@QEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

tson::output_archive *__fastcall tson::output_archive::operator()<tson::nvp<tip2::details::test_data_metrics<tip2::test_data_dynamic> &>>(
        tson::output_archive *this,
        __int64 a2)
{
  char v2; // r8
  _DWORD **v4; // rdi
  int v5; // r8d
  __int64 v6; // rcx

  v2 = *(_BYTE *)(a2 + 8);
  *(_QWORD *)this = *(_QWORD *)a2;
  *((_BYTE *)this + 8) = v2;
  v4 = *(_DWORD ***)(a2 + 16);
  tson::output_archive::startNode(this);
  v5 = 0;
  v6 = *((_QWORD *)*v4 + 11);
  if ( v6 )
    v5 = (*(__int64 (__fastcall **)(__int64, _QWORD, tson::output_archive *))(*(_QWORD *)v6 + 8LL))(
           v6,
           *((_QWORD *)*v4 + 10),
           this);
  *v4[1] = v5;
  tson::output_archive::finishNode(this);
  return this;
}
