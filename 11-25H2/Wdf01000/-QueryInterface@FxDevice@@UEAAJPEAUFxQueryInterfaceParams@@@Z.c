/*
 * XREFs of ?QueryInterface@FxDevice@@UEAAJPEAUFxQueryInterfaceParams@@@Z @ 0x1400573B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall FxDevice::QueryInterface(FxDevice *this, FxQueryInterfaceParams *Params)
{
  unsigned __int16 Type; // ax
  IFxHasCallbacks *v5; // rcx

  Type = Params->Type;
  switch ( Type )
  {
    case 0x1002u:
      *Params->Object = this;
      return 0LL;
    case 0x1030u:
LABEL_5:
      *Params->Object = this;
      return 0LL;
    case 0x1503u:
      v5 = &this->IFxHasCallbacks;
      if ( !this )
        v5 = 0LL;
      *Params->Object = v5;
      return 0LL;
    case 0x1000u:
      goto LABEL_5;
    default:
      return 3221226169LL;
  }
}
