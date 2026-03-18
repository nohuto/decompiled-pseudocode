/*
 * XREFs of MicrocodeInitLogging @ 0x1406647A0
 * Callers:
 *     GetMicrocodePatchData @ 0x1406642C8 (GetMicrocodePatchData.c)
 *     MicrocodeUpdate @ 0x140664918 (MicrocodeUpdate.c)
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
    dword_140EF7848 = 2;
  }
}
