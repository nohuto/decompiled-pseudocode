/*
 * XREFs of ??$push_back@W4archive_marker@details@tson@@@write_buffer@tson@@QEAA_NAEBW4archive_marker@details@1@@Z @ 0x180169574
 * Callers:
 *     ?finishNode@output_archive@tson@@QEAAXXZ @ 0x1800DED7C (-finishNode@output_archive@tson@@QEAAXXZ.c)
 *     ?serialize_properties@test_data_dynamic@tip2@@AEAAXAEAVoutput_archive@tson@@@Z @ 0x1803C4824 (-serialize_properties@test_data_dynamic@tip2@@AEAAXAEAVoutput_archive@tson@@@Z.c)
 * Callees:
 *     ?reserve@write_buffer@tson@@AEAA_N_K@Z @ 0x1800DE248 (-reserve@write_buffer@tson@@AEAA_N_K@Z.c)
 */

char __fastcall tson::write_buffer::push_back<enum tson::details::archive_marker>(tson::write_buffer *a1, _BYTE *a2)
{
  char result; // al

  if ( *((_QWORD *)a1 + 259) < *((_QWORD *)a1 + 260) || (result = tson::write_buffer::reserve(a1, 1uLL)) != 0 )
  {
    result = 1;
    *(_BYTE *)(*((_QWORD *)a1 + 259))++ = *a2;
  }
  return result;
}
