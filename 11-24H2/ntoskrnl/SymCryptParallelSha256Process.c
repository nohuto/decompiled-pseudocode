/*
 * XREFs of SymCryptParallelSha256Process @ 0x14051AB58
 * Callers:
 *     KeComputeParallelSha256 @ 0x1405AD5C0 (KeComputeParallelSha256.c)
 * Callees:
 *     SymCryptCpuFeaturesNeverPresent @ 0x1404881BC (SymCryptCpuFeaturesNeverPresent.c)
 *     SymCryptSaveXmm @ 0x1404881D4 (SymCryptSaveXmm.c)
 *     SymCryptRestoreXmm @ 0x140494460 (SymCryptRestoreXmm.c)
 *     SymCryptParallelHashProcess @ 0x14051D7E4 (SymCryptParallelHashProcess.c)
 *     SymCryptParallelHashProcess_serial @ 0x14051DAA8 (SymCryptParallelHashProcess_serial.c)
 *     SymCryptRestoreYmm @ 0x1405AE434 (SymCryptRestoreYmm.c)
 *     SymCryptSaveYmm @ 0x1405AE44C (SymCryptSaveYmm.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 __fastcall SymCryptParallelSha256Process(int a1, int a2, int a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned int v10; // ebx
  _BYTE v12[64]; // [rsp+40h] [rbp-78h] BYREF

  memset_0(v12, 0, sizeof(v12));
  if ( (((unsigned __int8)g_SymCryptCpuFeaturesNotPresent | (unsigned __int8)SymCryptCpuFeaturesNeverPresent()) & 0x10) != 0
    || (unsigned int)SymCryptSaveYmm(v12) )
  {
    if ( (((unsigned __int8)g_SymCryptCpuFeaturesNotPresent | (unsigned __int8)SymCryptCpuFeaturesNeverPresent()) & 2) != 0
      || (unsigned int)SymCryptSaveXmm() )
    {
      return (unsigned int)SymCryptParallelHashProcess_serial(
                             (unsigned int)&SymCryptParallelSha256Algorithm_default,
                             a1,
                             a2,
                             a3,
                             a4,
                             a5,
                             a6);
    }
    else
    {
      v10 = SymCryptParallelHashProcess(
              (unsigned int)&SymCryptParallelSha256Algorithm_default,
              a1,
              a2,
              a3,
              a4,
              a5,
              a6,
              4);
      SymCryptRestoreXmm();
    }
  }
  else
  {
    v10 = SymCryptParallelHashProcess((unsigned int)&SymCryptParallelSha256Algorithm_default, a1, a2, a3, a4, a5, a6, 8);
    SymCryptRestoreYmm(v12);
  }
  return v10;
}
