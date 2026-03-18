/*
 * XREFs of MicrocodeInitLogging @ 0x1406584E0
 * Callers:
 *     GetMicrocodePatchData @ 0x140658008 (GetMicrocodePatchData.c)
 *     MicrocodeUpdate @ 0x140658658 (MicrocodeUpdate.c)
 * Callees:
 *     <none>
 */

void __fastcall MicrocodeInitLogging(int a1, int a2)
{
  if ( !(_DWORD)MCUpdateRegistryData )
    LODWORD(MCUpdateRegistryData) = 1;
  if ( a1 )
  {
    DWORD2(MCUpdateRegistryData) = a1;
    DWORD1(MCUpdateRegistryData) = a2;
    dword_140EF74C8 = 2;
  }
}
