/*
 * XREFs of ??$?RAEAUstring_tag@tson@@@output_archive@tson@@QEAAAEAV01@AEAUstring_tag@1@@Z @ 0x1800DD044
 * Callers:
 *     ?save_nothrow@tson@@YAXAEAVoutput_archive@1@AEAVStoredFailureInfo@wil@@@Z @ 0x1800DCD78 (-save_nothrow@tson@@YAXAEAVoutput_archive@1@AEAVStoredFailureInfo@wil@@@Z.c)
 *     ?save_nothrow@tson@@YAXAEAVoutput_archive@1@AEAUtest_flag@tip2@@@Z @ 0x180338184 (-save_nothrow@tson@@YAXAEAVoutput_archive@1@AEAUtest_flag@tip2@@@Z.c)
 * Callees:
 *     ??$write_string@Ustring_tag@tson@@@output_archive@tson@@AEAAXW4archive_marker@details@1@Ustring_tag@1@@Z @ 0x1800DD154 (--$write_string@Ustring_tag@tson@@@output_archive@tson@@AEAAXW4archive_marker@details@1@Ustring_.c)
 */

__int64 __fastcall tson::output_archive::operator()<tson::string_tag &>(__int64 a1, __int128 *a2)
{
  __int64 v3; // xmm1_8
  __int128 v5; // [rsp+20h] [rbp-28h] BYREF
  __int64 v6; // [rsp+30h] [rbp-18h]

  v3 = *((_QWORD *)a2 + 2);
  v5 = *a2;
  v6 = v3;
  tson::output_archive::write_string<tson::string_tag>(a1, a2, &v5);
  return a1;
}
