/*
 * XREFs of SymCryptSha256AppendBlocks @ 0x1405187F0
 * Callers:
 *     SymCryptSha256Append @ 0x140518710 (SymCryptSha256Append.c)
 *     SymCryptSha256Result @ 0x140519EE0 (SymCryptSha256Result.c)
 *     SymCryptParallelSha256AppendBytes_serial @ 0x14051AA94 (SymCryptParallelSha256AppendBytes_serial.c)
 * Callees:
 *     SymCryptCpuFeaturesNeverPresent @ 0x1404881BC (SymCryptCpuFeaturesNeverPresent.c)
 *     SymCryptSaveXmm @ 0x1404881D4 (SymCryptSaveXmm.c)
 *     SymCryptRestoreXmm @ 0x140494460 (SymCryptRestoreXmm.c)
 *     SymCryptSha256AppendBlocks_shani @ 0x1405188BC (SymCryptSha256AppendBlocks_shani.c)
 *     SymCryptSha256AppendBlocks_ul1 @ 0x140518C80 (SymCryptSha256AppendBlocks_ul1.c)
 *     SymCryptSha256AppendBlocks_xmm_ssse3_asm @ 0x14051B540 (SymCryptSha256AppendBlocks_xmm_ssse3_asm.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

void __fastcall SymCryptSha256AppendBlocks(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _BYTE v8[64]; // [rsp+20h] [rbp-78h] BYREF

  memset_0(v8, 0, sizeof(v8));
  if ( (((unsigned __int8)g_SymCryptCpuFeaturesNotPresent | (unsigned __int8)SymCryptCpuFeaturesNeverPresent()) & 0x42) == 0
    && !(unsigned int)SymCryptSaveXmm() )
  {
    SymCryptSha256AppendBlocks_shani(a1, a2, a3, a4);
LABEL_7:
    SymCryptRestoreXmm();
    return;
  }
  if ( (((unsigned __int8)g_SymCryptCpuFeaturesNotPresent | (unsigned __int8)SymCryptCpuFeaturesNeverPresent()) & 0x82) == 0
    && !(unsigned int)SymCryptSaveXmm() )
  {
    SymCryptSha256AppendBlocks_xmm_ssse3_asm(a1, a2, a3, a4);
    goto LABEL_7;
  }
  SymCryptSha256AppendBlocks_ul1(a1, a2, a3, a4);
}
