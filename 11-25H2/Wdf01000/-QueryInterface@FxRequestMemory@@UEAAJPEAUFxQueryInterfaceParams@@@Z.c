/*
 * XREFs of ?QueryInterface@FxRequestMemory@@UEAAJPEAUFxQueryInterfaceParams@@@Z @ 0x14005BE90
 * Callers:
 *     <none>
 * Callees:
 *     ?QueryInterface@FxMemoryObject@@MEAAJPEAUFxQueryInterfaceParams@@@Z @ 0x14005BED0 (-QueryInterface@FxMemoryObject@@MEAAJPEAUFxQueryInterfaceParams@@@Z.c)
 */

int __fastcall FxRequestMemory::QueryInterface(FxRequestMemory *this, FxQueryInterfaceParams *Params)
{
  unsigned __int16 Type; // ax

  Type = Params->Type;
  if ( Type != 4146 && Type != 4130 )
    return FxMemoryObject::QueryInterface(this, Params);
  *Params->Object = this;
  return 0;
}
