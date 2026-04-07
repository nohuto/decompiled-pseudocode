/*
 * XREFs of ??$push_back@E@write_buffer@tson@@QEAA_NAEBE@Z @ 0x180098800
 * Callers:
 *     ?write_string_bytes@output_archive@tson@@AEAAX_KPEAX0@Z @ 0x18006EEF8 (-write_string_bytes@output_archive@tson@@AEAAX_KPEAX0@Z.c)
 *     ??$?RV?$nvp@AEAE@tson@@@output_archive@tson@@QEAAAEAV01@$$QEAV?$nvp@AEAE@1@@Z @ 0x1800DF52C (--$-RV-$nvp@AEAE@tson@@@output_archive@tson@@QEAAAEAV01@$$QEAV-$nvp@AEAE@1@@Z.c)
 *     ??0output_archive@tson@@QEAA@AEAVwrite_buffer@1@E@Z @ 0x1800E0554 (--0output_archive@tson@@QEAA@AEAVwrite_buffer@1@E@Z.c)
 *     ?finishNode@output_archive@tson@@QEAAXXZ @ 0x1800E29F8 (-finishNode@output_archive@tson@@QEAAXXZ.c)
 *     ?write_name@output_archive@tson@@AEAA_N_N@Z @ 0x1800E3BE4 (-write_name@output_archive@tson@@AEAA_N_N@Z.c)
 *     ?write_type@output_archive@tson@@AEAA_N_NW4archive_marker@details@2@@Z @ 0x1800E3D18 (-write_type@output_archive@tson@@AEAA_N_NW4archive_marker@details@2@@Z.c)
 * Callees:
 *     ?reserve@write_buffer@tson@@AEAA_N_K@Z @ 0x18007818C (-reserve@write_buffer@tson@@AEAA_N_K@Z.c)
 */

bool __fastcall tson::write_buffer::push_back<unsigned char>(tson::write_buffer *a1, _BYTE *a2)
{
  bool result; // al

  if ( *((_QWORD *)a1 + 259) < *((_QWORD *)a1 + 260) || (result = tson::write_buffer::reserve(a1, 1uLL)) )
  {
    result = 1;
    *(_BYTE *)(*((_QWORD *)a1 + 259))++ = *a2;
  }
  return result;
}
