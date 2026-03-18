/*
 * XREFs of ?QueryInterface@FxMemoryObject@@MEAAJPEAUFxQueryInterfaceParams@@@Z @ 0x140057D30
 * Callers:
 *     ?QueryInterface@FxRequestMemory@@UEAAJPEAUFxQueryInterfaceParams@@@Z @ 0x140057CF0 (-QueryInterface@FxRequestMemory@@UEAAJPEAUFxQueryInterfaceParams@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall FxMemoryObject::QueryInterface(FxMemoryObject *this, FxQueryInterfaceParams *Params)
{
  unsigned __int16 Type; // ax
  IFxMemory *v4; // rcx

  Type = Params->Type;
  if ( Type == 4106 )
  {
    v4 = &this->IFxMemory;
    if ( !this )
      v4 = 0LL;
    *Params->Object = v4;
    return 0LL;
  }
  else if ( Type == 4096 )
  {
    *Params->Object = this;
    return 0LL;
  }
  else
  {
    return 3221226169LL;
  }
}
