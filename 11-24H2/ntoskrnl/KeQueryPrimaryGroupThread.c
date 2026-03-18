/*
 * XREFs of KeQueryPrimaryGroupThread @ 0x140485128
 * Callers:
 *     NtCreateProfile @ 0x1407C41C0 (NtCreateProfile.c)
 *     NtPowerInformation @ 0x1409F0230 (NtPowerInformation.c)
 *     NtSetInformationJobObject @ 0x140ACE760 (NtSetInformationJobObject.c)
 *     NtQuerySystemInformation @ 0x140AE0FD0 (NtQuerySystemInformation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeQueryPrimaryGroupThread(__int64 a1)
{
  return *(unsigned __int16 *)(a1 + 584);
}
