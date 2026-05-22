/*
 * XREFs of ??$?RV?$nvp@AEAD@tson@@@input_archive@tson@@QEAAAEAV01@$$QEAV?$nvp@AEAD@1@@Z @ 0x180104A60
 * Callers:
 *     ?load_nothrow@tson@@YAXAEAVinput_archive@1@AEAUtest_flag@tip2@@@Z @ 0x180106B34 (-load_nothrow@tson@@YAXAEAVinput_archive@1@AEAUtest_flag@tip2@@@Z.c)
 * Callees:
 *     ?consume_expected_marker@input_archive@tson@@AEAA_NW4archive_marker@details@2@J@Z @ 0x1800A6058 (-consume_expected_marker@input_archive@tson@@AEAA_NW4archive_marker@details@2@J@Z.c)
 *     ?search@input_archive@tson@@AEAA_NXZ @ 0x1800A7138 (-search@input_archive@tson@@AEAA_NXZ.c)
 */

__int64 __fastcall tson::input_archive::operator()<tson::nvp<char &>>(__int64 a1, __int64 a2)
{
  char v2; // r8
  _BYTE *v4; // rdi
  tson::read_buffer *v5; // r8
  char *v6; // rax
  char v7; // cl

  v2 = *(_BYTE *)(a2 + 8);
  *(_QWORD *)(a1 + 16) = *(_QWORD *)a2;
  *(_BYTE *)(a1 + 24) = v2;
  v4 = *(_BYTE **)(a2 + 16);
  if ( tson::input_archive::search((tson::input_archive *)a1) )
  {
    tson::input_archive::consume_expected_marker((tson::read_buffer **)a1);
    v5 = *(tson::read_buffer **)a1;
    v6 = *(char **)(*(_QWORD *)a1 + 8LL);
    if ( (unsigned __int64)v6 >= *(_QWORD *)(*(_QWORD *)a1 + 16LL) )
    {
      *((_BYTE *)v5 + 24) = 1;
    }
    else
    {
      v7 = *v6;
      *((_QWORD *)v5 + 1) = v6 + 1;
      *v4 = v7;
    }
  }
  else
  {
    *v4 = 0;
  }
  return a1;
}
