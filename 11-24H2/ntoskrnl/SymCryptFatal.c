/*
 * XREFs of SymCryptFatal @ 0x1405B1490
 * Callers:
 *     SymCryptInitEnvWindowsKernelmodeWin8_1nLater @ 0x14051AC68 (SymCryptInitEnvWindowsKernelmodeWin8_1nLater.c)
 *     SymCryptSaveYmmEnvWindowsKernelmodeWin8_1nLater @ 0x14051AD40 (SymCryptSaveYmmEnvWindowsKernelmodeWin8_1nLater.c)
 *     SymCryptInitEnvCommon @ 0x14051DB88 (SymCryptInitEnvCommon.c)
 *     SymCryptEcDhSecretAgreementSelftest @ 0x140529594 (SymCryptEcDhSecretAgreementSelftest.c)
 *     SymCryptEcDsaSelftest @ 0x14052972C (SymCryptEcDsaSelftest.c)
 *     SymCryptRsaSelftest @ 0x140529908 (SymCryptRsaSelftest.c)
 *     SymCryptFdefModSetRandomGeneric @ 0x1405368D0 (SymCryptFdefModSetRandomGeneric.c)
 * Callees:
 *     SymCryptFatalEnvWindowsKernelmodeWin8_1nLater @ 0x14051AC34 (SymCryptFatalEnvWindowsKernelmodeWin8_1nLater.c)
 */

void __fastcall __noreturn SymCryptFatal(ULONG_PTR a1)
{
  SymCryptFatalEnvWindowsKernelmodeWin8_1nLater(a1);
}
