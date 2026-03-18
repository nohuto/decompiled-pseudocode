/*
 * XREFs of MiUnmapImageForEnclaveUse @ 0x140AA1BA4
 * Callers:
 *     MiInitializeVsmEnclave @ 0x1407F777C (MiInitializeVsmEnclave.c)
 *     MiLoadSectionIntoVsmEnclave @ 0x1408DA8E0 (MiLoadSectionIntoVsmEnclave.c)
 * Callees:
 *     KiStackAttachProcess @ 0x1403209E0 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x140321EC0 (KiUnstackDetachProcess.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     MiUnmapViewOfSection @ 0x1408E4E04 (MiUnmapViewOfSection.c)
 */

__int64 __fastcall MiUnmapImageForEnclaveUse(unsigned __int64 a1)
{
  _OWORD v3[3]; // [rsp+20h] [rbp-48h] BYREF

  memset(v3, 0, sizeof(v3));
  KiStackAttachProcess((_KPROCESS *)PsSecureSystemProcess, 0, (__int64)v3);
  MiUnmapViewOfSection((PRKPROCESS)PsSecureSystemProcess, a1, 0, 0);
  return KiUnstackDetachProcess((__int64)v3, 0);
}
