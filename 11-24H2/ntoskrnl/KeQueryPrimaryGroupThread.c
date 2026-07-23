/*
 * XREFs of KeQueryPrimaryGroupThread @ 0x140480638
 * Callers:
 *     NtCreateProfile @ 0x1407C1FE0 (NtCreateProfile.c)
 *     NtPowerInformation @ 0x1409EDB00 (NtPowerInformation.c)
 *     NtSetInformationJobObject @ 0x140ACC7F0 (NtSetInformationJobObject.c)
 *     NtQuerySystemInformation @ 0x140AE28B0 (NtQuerySystemInformation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeQueryPrimaryGroupThread(__int64 a1)
{
  return *(unsigned __int16 *)(a1 + 584);
}
