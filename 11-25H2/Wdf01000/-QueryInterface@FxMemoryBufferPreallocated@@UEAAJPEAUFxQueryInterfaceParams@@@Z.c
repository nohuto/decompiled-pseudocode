/*
 * XREFs of ?QueryInterface@FxMemoryBufferPreallocated@@UEAAJPEAUFxQueryInterfaceParams@@@Z @ 0x1400629A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall FxMemoryBufferPreallocated::QueryInterface(
        FxMemoryBufferPreallocated *this,
        FxQueryInterfaceParams *Params)
{
  unsigned __int16 Type; // ax

  Type = Params->Type;
  switch ( Type )
  {
    case 0x1022u:
      goto LABEL_2;
    case 0x100Au:
      this = (FxMemoryBufferPreallocated *)((unsigned __int64)&this->IFxMemory & -(__int64)(this != 0LL));
LABEL_2:
      *Params->Object = this;
      return 0LL;
    case 0x1000u:
      goto LABEL_2;
  }
  return 3221226169LL;
}
