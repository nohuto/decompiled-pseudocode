/*
 * XREFs of ?serialize@?$merged_data@U_tip_EduThemeInstalled@@U1@@details@tip2@@EEAAXAEAVoutput_archive@tson@@W4serialize_options@23@@Z @ 0x180606E20
 * Callers:
 *     <none>
 * Callees:
 *     ??$process@V?$nvp@AEA_N@tson@@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEA_N@1@@Z @ 0x1800DDE98 (--$process@V-$nvp@AEA_N@tson@@@output_archive@tson@@AEAAX$$QEAV-$nvp@AEA_N@1@@Z.c)
 *     ?startNode@output_archive@tson@@QEAAXXZ @ 0x1800DE2FC (-startNode@output_archive@tson@@QEAAXXZ.c)
 *     ?finishNode@output_archive@tson@@QEAAXXZ @ 0x1800DED7C (-finishNode@output_archive@tson@@QEAAXXZ.c)
 */

void __fastcall tip2::details::merged_data<_tip_EduThemeInstalled,_tip_EduThemeInstalled>::serialize(
        __int64 a1,
        tson::output_archive *a2,
        char a3)
{
  __int64 v6; // rax
  const char *v7; // [rsp+20h] [rbp-28h] BYREF
  char v8; // [rsp+28h] [rbp-20h]
  __int64 v9; // [rsp+30h] [rbp-18h]

  if ( (a3 & 2) != 0 )
  {
    *((_BYTE *)a2 + 8) = 7;
    *(_QWORD *)a2 = "metrics";
    tson::output_archive::startNode(a2);
    *(_DWORD *)(a1 + 184) = 0;
    tson::output_archive::finishNode(a2);
  }
  if ( (a3 & 1) != 0 )
  {
    *((_BYTE *)a2 + 8) = 4;
    *(_QWORD *)a2 = "test";
    tson::output_archive::startNode(a2);
    v8 = 17;
    v7 = "eduThemeInstalled";
    v6 = a1 + 272;
    if ( !a1 )
      v6 = 16LL;
    v9 = v6;
    tson::output_archive::process<tson::nvp<bool &>>((__int64)a2, (__int64)&v7);
    tson::output_archive::finishNode(a2);
  }
}
