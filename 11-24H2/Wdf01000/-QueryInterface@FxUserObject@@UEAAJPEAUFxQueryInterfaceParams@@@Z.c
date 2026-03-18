/*
 * XREFs of ?QueryInterface@FxUserObject@@UEAAJPEAUFxQueryInterfaceParams@@@Z @ 0x140069A00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall FxUserObject::QueryInterface(FxUserObject *this, FxQueryInterfaceParams *Params)
{
  unsigned __int16 Type; // ax

  Type = Params->Type;
  if ( Type != 4108 && Type != 4096 )
    return 3221226169LL;
  *Params->Object = this;
  return 0LL;
}
