/*
 * XREFs of ??$process@V?$nvp@AEAJ@tson@@V?$nvp@AEA_N@2@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEAJ@1@$$QEAV?$nvp@AEA_N@1@@Z @ 0x18032AFE4
 * Callers:
 *     ??$process@V?$nvp@AEA_N@tson@@V12@V12@V12@V12@V12@V?$nvp@AEAJ@2@V12@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEA_N@1@00000$$QEAV?$nvp@AEAJ@1@0@Z @ 0x18032B8DC (--$process@V-$nvp@AEA_N@tson@@V12@V12@V12@V12@V12@V-$nvp@AEAJ@2@V12@@output_archive@tson@@AEAAX$.c)
 *     ??$process@V?$nvp@AEA_N@tson@@V?$nvp@AEAV?$vector@KV?$allocator@K@std@@@std@@@2@V?$nvp@AEAJ@2@V12@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEA_N@1@$$QEAV?$nvp@AEAV?$vector@KV?$allocator@K@std@@@std@@@1@$$QEAV?$nvp@AEAJ@1@0@Z @ 0x1805FF0A0 (--$process@V-$nvp@AEA_N@tson@@V-$nvp@AEAV-$vector@KV-$allocator@K@std@@@std@@@2@V-$_ea_1805FF0A0.c)
 * Callees:
 *     ??$process@V?$nvp@AEAJ@tson@@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEAJ@1@@Z @ 0x1800DD4E8 (--$process@V-$nvp@AEAJ@tson@@@output_archive@tson@@AEAAX$$QEAV-$nvp@AEAJ@1@@Z.c)
 */

char __fastcall tson::output_archive::process<tson::nvp<long &>,tson::nvp<bool &>>(__int64 a1, __int64 *a2, __int64 a3)
{
  tson::output_archive::process<tson::nvp<long &>>(a1, a2, a3);
  return tson::output_archive::process<tson::nvp<bool &>>(a1, a3);
}
