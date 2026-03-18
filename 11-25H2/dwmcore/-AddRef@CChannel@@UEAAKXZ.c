/*
 * XREFs of ?AddRef@CChannel@@UEAAKXZ @ 0x180225BF0
 * Callers:
 *     ?AddRef@BufferingMessageCallHost@BamoImpl@Microsoft@@WBA@EAAKXZ @ 0x1802785C0 (-AddRef@BufferingMessageCallHost@BamoImpl@Microsoft@@WBA@EAAKXZ.c)
 *     ?AddRef@ConnectionIndirector@BamoImpl@Microsoft@@WBI@EAAKXZ @ 0x1802785D0 (-AddRef@ConnectionIndirector@BamoImpl@Microsoft@@WBI@EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CChannel::AddRef(CChannel *this)
{
  return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)this + 2);
}
