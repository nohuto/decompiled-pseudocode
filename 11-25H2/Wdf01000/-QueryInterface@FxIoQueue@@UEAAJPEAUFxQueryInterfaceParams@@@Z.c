/*
 * XREFs of ?QueryInterface@FxIoQueue@@UEAAJPEAUFxQueryInterfaceParams@@@Z @ 0x14006B4F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall FxIoQueue::QueryInterface(FxIoQueue *this, FxQueryInterfaceParams *Params)
{
  unsigned __int16 Type; // ax

  Type = Params->Type;
  switch ( Type )
  {
    case 0x1003u:
      goto LABEL_4;
    case 0x1503u:
      this = (FxIoQueue *)((unsigned __int64)&this->IFxHasCallbacks & -(__int64)(this != 0LL));
      goto LABEL_4;
    case 0x1000u:
LABEL_4:
      *Params->Object = this;
      return 0LL;
  }
  return 3221226169LL;
}
