/*
 * XREFs of ??$?RV?$nvp@AEAD@tson@@@output_archive@tson@@QEAAAEAV01@$$QEAV?$nvp@AEAD@1@@Z @ 0x180329924
 * Callers:
 *     ?save_nothrow@tson@@YAXAEAVoutput_archive@1@AEAUtest_flag@tip2@@@Z @ 0x180338184 (-save_nothrow@tson@@YAXAEAVoutput_archive@1@AEAUtest_flag@tip2@@@Z.c)
 * Callees:
 *     ?write_type@output_archive@tson@@AEAA_N_NW4archive_marker@details@2@@Z @ 0x1800DD78C (-write_type@output_archive@tson@@AEAA_N_NW4archive_marker@details@2@@Z.c)
 *     ?reserve@write_buffer@tson@@AEAA_N_K@Z @ 0x1800DE248 (-reserve@write_buffer@tson@@AEAA_N_K@Z.c)
 */

__int64 __fastcall tson::output_archive::operator()<tson::nvp<char &>>(__int64 a1, __int64 *a2)
{
  __int64 v3; // rax
  char v4; // si
  __int64 v5; // rbx

  v3 = *a2;
  *(_BYTE *)(a1 + 8) = *((_BYTE *)a2 + 8);
  *(_QWORD *)a1 = v3;
  v4 = *(_BYTE *)a2[2];
  if ( tson::output_archive::write_type(a1, v4 == 0, 11) )
  {
    v5 = *(_QWORD *)(a1 + 144);
    if ( *(_QWORD *)(v5 + 2072) < *(_QWORD *)(v5 + 2080)
      || tson::write_buffer::reserve(*(tson::write_buffer **)(a1 + 144), 1uLL) )
    {
      *(_BYTE *)(*(_QWORD *)(v5 + 2072))++ = v4;
    }
  }
  return a1;
}
