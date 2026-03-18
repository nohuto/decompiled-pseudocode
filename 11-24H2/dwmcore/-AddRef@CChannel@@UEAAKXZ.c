/*
 * XREFs of ?AddRef@CChannel@@UEAAKXZ @ 0x180219F60
 * Callers:
 *     ?AddRef@BufferingMessageCallHost@BamoImpl@Microsoft@@WBA@EAAKXZ @ 0x18026DEB0 (-AddRef@BufferingMessageCallHost@BamoImpl@Microsoft@@WBA@EAAKXZ.c)
 *     ?AddRef@ConnectionIndirector@BamoImpl@Microsoft@@WBI@EAAKXZ @ 0x18026DEC0 (-AddRef@ConnectionIndirector@BamoImpl@Microsoft@@WBI@EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CChannel::AddRef(CChannel *this)
{
  return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)this + 2);
}
