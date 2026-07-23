/*
 * XREFs of PiIsHVCIEnabled @ 0x140718CD8
 * Callers:
 *     PiIsDriverBlocked @ 0x1409ADF08 (PiIsDriverBlocked.c)
 * Callees:
 *     ZwQuerySystemInformation @ 0x14069B800 (ZwQuerySystemInformation.c)
 */

bool PiIsHVCIEnabled()
{
  char v0; // bl
  __int64 SystemInformation; // [rsp+30h] [rbp+8h] BYREF

  v0 = 0;
  SystemInformation = 8LL;
  if ( ZwQuerySystemInformation(SystemCodeIntegrityInformation, &SystemInformation, 8u, 0LL) >= 0 )
    return (SystemInformation & 0x40000000000LL) != 0;
  return v0;
}
