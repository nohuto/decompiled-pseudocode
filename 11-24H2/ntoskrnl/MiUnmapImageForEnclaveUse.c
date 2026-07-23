/*
 * XREFs of MiUnmapImageForEnclaveUse @ 0x140A9CF34
 * Callers:
 *     MiInitializeVsmEnclave @ 0x1407F7EF0 (MiInitializeVsmEnclave.c)
 *     MiLoadSectionIntoVsmEnclave @ 0x140A2A370 (MiLoadSectionIntoVsmEnclave.c)
 * Callees:
 *     KiStackAttachProcess @ 0x1402C9570 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1402CAA50 (KiUnstackDetachProcess.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     MiUnmapViewOfSection @ 0x140896E14 (MiUnmapViewOfSection.c)
 */

__int64 __fastcall MiUnmapImageForEnclaveUse(unsigned __int64 a1)
{
  __int64 v2; // r8
  __int64 v3; // r9
  _OWORD v5[3]; // [rsp+20h] [rbp-48h] BYREF

  memset(v5, 0, sizeof(v5));
  KiStackAttachProcess((_KPROCESS *)PsSecureSystemProcess, 0, (__int64)v5);
  MiUnmapViewOfSection((PRKPROCESS)PsSecureSystemProcess, a1, 0, 0);
  return KiUnstackDetachProcess((__int64)v5, 0, v2, v3);
}
