/*
 * XREFs of ??$process@V?$nvp@Uansistring_tag@tson@@@tson@@@output_archive@tson@@AEAAX$$QEAV?$nvp@Uansistring_tag@tson@@@1@@Z @ 0x1800DD270
 * Callers:
 *     ?save_nothrow@tson@@YAXAEAVoutput_archive@1@AEAUtest_flag@tip2@@@Z @ 0x180338184 (-save_nothrow@tson@@YAXAEAVoutput_archive@1@AEAUtest_flag@tip2@@@Z.c)
 * Callees:
 *     ??$write_string@Uansistring_tag@tson@@@output_archive@tson@@AEAAXW4archive_marker@details@1@Uansistring_tag@1@@Z @ 0x1800DD2F4 (--$write_string@Uansistring_tag@tson@@@output_archive@tson@@AEAAXW4archive_marker@details@1@Uans.c)
 */

__int64 __fastcall tson::output_archive::process<tson::nvp<tson::ansistring_tag>>(__int64 a1, __int64 *a2)
{
  __int64 v2; // rax
  __int64 v3; // xmm1_8
  __int128 v5; // [rsp+20h] [rbp-28h] BYREF
  __int64 v6; // [rsp+30h] [rbp-18h]

  v2 = *a2;
  *(_BYTE *)(a1 + 8) = *((_BYTE *)a2 + 8);
  *(_QWORD *)a1 = v2;
  v3 = a2[4];
  v5 = *((_OWORD *)a2 + 1);
  v6 = v3;
  return tson::output_archive::write_string<tson::ansistring_tag>(a1, a2, &v5);
}
