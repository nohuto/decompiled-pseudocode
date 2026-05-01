/*
 * XREFs of ??$serialize@Voutput_archive@tson@@@_tip_ColumnSmartFillTest@@QEAAXAEAVoutput_archive@tson@@@Z @ 0x1805A9B34
 * Callers:
 *     ?serialize@?$merged_data@U_tip_ColumnSmartFillTest@@U1@@details@tip2@@EEAAXAEAVoutput_archive@tson@@W4serialize_options@23@@Z @ 0x1805ACC80 (-serialize@-$merged_data@U_tip_ColumnSmartFillTest@@U1@@details@tip2@@EEAAXAEAVoutput_archive@ts.c)
 * Callees:
 *     ??$?RAEAH@output_archive@tson@@QEAAAEAV01@AEAH@Z @ 0x1800DCD30 (--$-RAEAH@output_archive@tson@@QEAAAEAV01@AEAH@Z.c)
 *     ??$process@V?$nvp@AEAI@tson@@V?$nvp@AEAJ@2@V32@V32@V32@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEAI@1@$$QEAV?$nvp@AEAJ@1@111@Z @ 0x18059340C (--$process@V-$nvp@AEAI@tson@@V-$nvp@AEAJ@2@V32@V32@V32@@output_archive@tson@@AEAAX$$QEAV-$nvp@AE.c)
 */

__int64 __fastcall _tip_ColumnSmartFillTest::serialize<tson::output_archive>(__int64 a1, __int64 a2, __int64 a3)
{
  const char *v5; // [rsp+30h] [rbp-29h] BYREF
  char v6; // [rsp+38h] [rbp-21h]
  __int64 v7; // [rsp+40h] [rbp-19h]
  const char *v8; // [rsp+48h] [rbp-11h] BYREF
  char v9; // [rsp+50h] [rbp-9h]
  __int64 v10; // [rsp+58h] [rbp-1h]
  const char *v11; // [rsp+60h] [rbp+7h] BYREF
  char v12; // [rsp+68h] [rbp+Fh]
  __int64 v13; // [rsp+70h] [rbp+17h]
  const char *v14; // [rsp+78h] [rbp+1Fh] BYREF
  char v15; // [rsp+80h] [rbp+27h]
  __int64 v16; // [rsp+88h] [rbp+2Fh]
  const char *v17; // [rsp+90h] [rbp+37h] BYREF
  char v18; // [rsp+98h] [rbp+3Fh]
  __int64 v19; // [rsp+A0h] [rbp+47h]

  *(_BYTE *)(a2 + 8) = 18;
  v5 = "resultRect.left";
  v6 = 15;
  v7 = a1 + 48;
  v8 = "resultRect.right";
  v10 = a1 + 56;
  v11 = "workArea.right";
  v13 = a1 + 28;
  v14 = "workArea.left";
  v16 = a1 + 20;
  v17 = "dpi";
  v19 = a1 + 36;
  *(_QWORD *)a2 = "horizontalPosition";
  v9 = 16;
  v12 = 14;
  v15 = 13;
  v18 = 3;
  tson::output_archive::operator()<int &>(a2, (int *)(a1 + 16), a3);
  return tson::output_archive::process<tson::nvp<unsigned int &>,tson::nvp<long &>,tson::nvp<long &>,tson::nvp<long &>,tson::nvp<long &>>(
           a2,
           (__int64 *)&v17,
           (__int64)&v14,
           (__int64)&v11,
           (__int64)&v8,
           (__int64)&v5);
}
