/*
 * XREFs of ??$process@V?$nvp@AEAUansistring_tag@tson@@@tson@@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEAUansistring_tag@tson@@@1@@Z @ 0x1800DD0D8
 * Callers:
 *     ?save_nothrow@tson@@YAXAEAVoutput_archive@1@AEAVStoredFailureInfo@wil@@@Z @ 0x1800DCD78 (-save_nothrow@tson@@YAXAEAVoutput_archive@1@AEAVStoredFailureInfo@wil@@@Z.c)
 * Callees:
 *     ??$write_string@Uansistring_tag@tson@@@output_archive@tson@@AEAAXW4archive_marker@details@1@Uansistring_tag@1@@Z @ 0x1800DD2F4 (--$write_string@Uansistring_tag@tson@@@output_archive@tson@@AEAAXW4archive_marker@details@1@Uans.c)
 */

__int64 __fastcall tson::output_archive::process<tson::nvp<tson::ansistring_tag &>>(__int64 a1, __int64 *a2)
{
  __int64 v2; // rax
  __int128 *v3; // rax
  __int64 v4; // xmm1_8
  __int128 v6; // [rsp+20h] [rbp-28h] BYREF
  __int64 v7; // [rsp+30h] [rbp-18h]

  v2 = *a2;
  *(_BYTE *)(a1 + 8) = *((_BYTE *)a2 + 8);
  *(_QWORD *)a1 = v2;
  v3 = (__int128 *)a2[2];
  v4 = *((_QWORD *)v3 + 2);
  v6 = *v3;
  v7 = v4;
  return tson::output_archive::write_string<tson::ansistring_tag>(a1, a2, &v6);
}
