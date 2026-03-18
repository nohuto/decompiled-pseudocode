/*
 * XREFs of MiInitializeCrashDumpPtes @ 0x140C53FC0
 * Callers:
 *     MiInitSystem @ 0x140C4DC40 (MiInitSystem.c)
 * Callees:
 *     MiReservePtes @ 0x14028FF10 (MiReservePtes.c)
 *     Feature_CrashDumpOneMBTransferSize__private_IsEnabledDeviceUsageNoInline @ 0x1405D3348 (Feature_CrashDumpOneMBTransferSize__private_IsEnabledDeviceUsageNoInline.c)
 */

__int64 MiInitializeCrashDumpPtes()
{
  __int64 result; // rax

  if ( (unsigned int)Feature_CrashDumpOneMBTransferSize__private_IsEnabledDeviceUsageNoInline() )
  {
    result = MiReservePtes((__int64)&qword_140E37568, 0x101u);
    dword_140E300C0 = 257;
  }
  else
  {
    result = MiReservePtes((__int64)&qword_140E37568, 0x20u);
  }
  qword_140E300B8 = result;
  return result;
}
