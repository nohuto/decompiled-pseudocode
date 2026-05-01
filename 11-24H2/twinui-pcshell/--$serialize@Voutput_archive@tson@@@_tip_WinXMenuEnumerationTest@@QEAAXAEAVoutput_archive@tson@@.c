/*
 * XREFs of ??$serialize@Voutput_archive@tson@@@_tip_WinXMenuEnumerationTest@@QEAAXAEAVoutput_archive@tson@@@Z @ 0x1805FF200
 * Callers:
 *     ?serialize@?$merged_data@U_tip_WinXMenuEnumerationTest@@U1@@details@tip2@@EEAAXAEAVoutput_archive@tson@@W4serialize_options@23@@Z @ 0x1806039F0 (-serialize@-$merged_data@U_tip_WinXMenuEnumerationTest@@U1@@details@tip2@@EEAAXAEAVoutput_archiv.c)
 * Callees:
 *     ??$process@V?$nvp@AEA_N@tson@@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEA_N@1@@Z @ 0x1800DDE98 (--$process@V-$nvp@AEA_N@tson@@@output_archive@tson@@AEAAX$$QEAV-$nvp@AEA_N@1@@Z.c)
 *     ??$process@V?$nvp@AEA_N@tson@@V?$nvp@AEAV?$vector@KV?$allocator@K@std@@@std@@@2@V?$nvp@AEAJ@2@V12@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEA_N@1@$$QEAV?$nvp@AEAV?$vector@KV?$allocator@K@std@@@std@@@1@$$QEAV?$nvp@AEAJ@1@0@Z @ 0x1805FF0A0 (--$process@V-$nvp@AEA_N@tson@@V-$nvp@AEAV-$vector@KV-$allocator@K@std@@@std@@@2@V-$_ea_1805FF0A0.c)
 */

char __fastcall _tip_WinXMenuEnumerationTest::serialize<tson::output_archive>(__int64 a1, tson::output_archive *a2)
{
  const char *v4; // [rsp+30h] [rbp-29h] BYREF
  char v5; // [rsp+38h] [rbp-21h]
  __int64 v6; // [rsp+40h] [rbp-19h]
  __int64 v7; // [rsp+48h] [rbp-11h] BYREF
  char v8; // [rsp+50h] [rbp-9h]
  __int64 v9; // [rsp+58h] [rbp-1h]
  const char *v10; // [rsp+60h] [rbp+7h] BYREF
  char v11; // [rsp+68h] [rbp+Fh]
  __int64 v12; // [rsp+70h] [rbp+17h]
  const char *v13; // [rsp+78h] [rbp+1Fh] BYREF
  char v14; // [rsp+80h] [rbp+27h]
  __int64 v15; // [rsp+88h] [rbp+2Fh]
  const char *v16; // [rsp+90h] [rbp+37h] BYREF
  char v17; // [rsp+98h] [rbp+3Fh]
  __int64 v18; // [rsp+A0h] [rbp+47h]

  v8 = 20;
  v11 = 17;
  v7 = (__int64)"wasObsoleteLinkFound";
  v14 = 12;
  v9 = a1 + 52;
  v10 = "enumerationResult";
  v12 = a1 + 48;
  v13 = "missingItems";
  v15 = a1 + 24;
  v16 = "wereAllLinksFound";
  v18 = a1 + 17;
  v4 = "wasDefaultProfileLookupNecessary";
  v6 = a1 + 16;
  v17 = 17;
  v5 = 32;
  tson::output_archive::process<tson::nvp<bool &>>((__int64)a2, (__int64)&v4);
  return tson::output_archive::process<tson::nvp<bool &>,tson::nvp<std::vector<unsigned long> &>,tson::nvp<long &>,tson::nvp<bool &>>(
           a2,
           (__int64)&v16,
           (__int64)&v13,
           (__int64 *)&v10,
           (__int64)&v7);
}
