/*
 * XREFs of RtlQueryElevationFlags @ 0x140A4AFD0
 * Callers:
 *     SeTokenCanImpersonate @ 0x1408A58F0 (SeTokenCanImpersonate.c)
 *     NtQueryInformationToken @ 0x140AC8E20 (NtQueryInformationToken.c)
 *     NtSetInformationToken @ 0x140ACC810 (NtSetInformationToken.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl RtlQueryElevationFlags(PRTL_ELEVATION_FLAGS Flags)
{
  ULONG v1; // edx
  NTSTATUS result; // eax

  v1 = 0;
  Flags->Flags = 0;
  if ( (MEMORY[0xFFFFF780000002F0] & 2) != 0 )
  {
    v1 = 1;
    Flags->Flags = 1;
  }
  if ( (MEMORY[0xFFFFF780000002F0] & 4) != 0 )
  {
    v1 |= 2u;
    Flags->Flags = v1;
  }
  if ( (MEMORY[0xFFFFF780000002F0] & 8) != 0 )
  {
    v1 |= 4u;
    Flags->Flags = v1;
  }
  result = 0;
  Flags->Flags = v1 | ((MEMORY[0xFFFFF780000002F0] & 0x1000) != 0 ? 16 : 8);
  return result;
}
