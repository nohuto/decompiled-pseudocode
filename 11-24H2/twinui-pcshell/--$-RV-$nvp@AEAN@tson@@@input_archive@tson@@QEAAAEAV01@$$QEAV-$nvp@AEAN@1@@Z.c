/*
 * XREFs of ??$?RV?$nvp@AEAN@tson@@@input_archive@tson@@QEAAAEAV01@$$QEAV?$nvp@AEAN@1@@Z @ 0x180329AAC
 * Callers:
 *     ?load_nothrow@tson@@YAXAEAVinput_archive@1@AEAUtest_flag@tip2@@@Z @ 0x180336F94 (-load_nothrow@tson@@YAXAEAVinput_archive@1@AEAUtest_flag@tip2@@@Z.c)
 * Callees:
 *     ?search@input_archive@tson@@AEAA_NXZ @ 0x180183250 (-search@input_archive@tson@@AEAA_NXZ.c)
 *     ?consume_expected_marker@input_archive@tson@@AEAA_NW4archive_marker@details@2@J@Z @ 0x180183364 (-consume_expected_marker@input_archive@tson@@AEAA_NW4archive_marker@details@2@J@Z.c)
 *     ?consume_n@read_buffer@tson@@QEAA_NPEAX_K@Z @ 0x180335E8C (-consume_n@read_buffer@tson@@QEAA_NPEAX_K@Z.c)
 */

__int64 __fastcall tson::input_archive::operator()<tson::nvp<double &>>(__int64 a1, __int64 a2)
{
  char v2; // r8
  _QWORD *v4; // rdi

  v2 = *(_BYTE *)(a2 + 8);
  *(_QWORD *)(a1 + 16) = *(_QWORD *)a2;
  *(_BYTE *)(a1 + 24) = v2;
  v4 = *(_QWORD **)(a2 + 16);
  if ( tson::input_archive::search((tson::input_archive *)a1) )
  {
    tson::input_archive::consume_expected_marker((_DWORD *)a1, 21, -2147023267);
    tson::read_buffer::consume_n(*(tson::read_buffer **)a1, v4, 8uLL);
  }
  else
  {
    *v4 = 0LL;
  }
  return a1;
}
