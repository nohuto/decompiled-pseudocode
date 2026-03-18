/*
 * XREFs of KeQueryPrimaryGroupThread @ 0x14048489C
 * Callers:
 *     NtCreateProfile @ 0x1407B23C0 (NtCreateProfile.c)
 *     NtPowerInformation @ 0x14096E740 (NtPowerInformation.c)
 *     NtQuerySystemInformation @ 0x1409DB410 (NtQuerySystemInformation.c)
 *     NtSetInformationJobObject @ 0x140AC4C00 (NtSetInformationJobObject.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeQueryPrimaryGroupThread(__int64 a1)
{
  return *(unsigned __int16 *)(a1 + 584);
}
