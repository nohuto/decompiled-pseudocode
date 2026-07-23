/*
 * XREFs of MiInitializeCrashDumpPtes @ 0x140C56150
 * Callers:
 *     MiInitSystem @ 0x140C4FDD0 (MiInitSystem.c)
 * Callees:
 *     MiReservePtes @ 0x14029FB10 (MiReservePtes.c)
 *     Feature_CrashDumpOneMBTransferSize__private_IsEnabledDeviceUsageNoInline @ 0x1405D0A68 (Feature_CrashDumpOneMBTransferSize__private_IsEnabledDeviceUsageNoInline.c)
 */

__int64 MiInitializeCrashDumpPtes()
{
  __int64 result; // rax

  if ( (unsigned int)Feature_CrashDumpOneMBTransferSize__private_IsEnabledDeviceUsageNoInline() )
  {
    result = MiReservePtes((__int64)&qword_140E376A8, 0x101u);
    dword_140E30200 = 257;
  }
  else
  {
    result = MiReservePtes((__int64)&qword_140E376A8, 0x20u);
  }
  qword_140E301F8 = result;
  return result;
}
