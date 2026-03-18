/*
 * XREFs of PsGetVersion @ 0x140489C00
 * Callers:
 *     DifPsGetVersionWrapper @ 0x140638AB0 (DifPsGetVersionWrapper.c)
 *     Win7PsGetVersion @ 0x140741180 (Win7PsGetVersion.c)
 *     Win81PsGetVersion @ 0x140741260 (Win81PsGetVersion.c)
 *     Win8PsGetVersion @ 0x140741340 (Win8PsGetVersion.c)
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall PsGetVersion(
        PULONG MajorVersion,
        PULONG MinorVersion,
        PULONG BuildNumber,
        PUNICODE_STRING CSDVersion)
{
  if ( MajorVersion )
    *MajorVersion = 10;
  if ( MinorVersion )
    *MinorVersion = 0;
  if ( BuildNumber )
    *BuildNumber = (unsigned __int16)NtBuildNumber;
  if ( CSDVersion )
    *CSDVersion = CmCSDVersionString;
  return (NtBuildNumber & 0xF0000000) == -1073741824;
}
