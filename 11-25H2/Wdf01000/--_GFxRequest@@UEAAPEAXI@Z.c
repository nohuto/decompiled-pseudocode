/*
 * XREFs of ??_GFxRequest@@UEAAPEAXI@Z @ 0x140034280
 * Callers:
 *     <none>
 * Callees:
 *     ??1FxRequestBase@@MEAA@XZ @ 0x140032A20 (--1FxRequestBase@@MEAA@XZ.c)
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x140034320 (-FxPoolFree@@YAXPEAX@Z.c)
 */

FxRequest *__fastcall FxRequest::`scalar deleting destructor'(FxRequest *this, __int64 a2)
{
  char v2; // bl
  FxRequest *v5; // rcx

  v2 = a2;
  FxRequestBase::~FxRequestBase(this, a2);
  if ( (v2 & 1) != 0 )
  {
    v5 = (FxRequest *)((char *)this - 48);
    if ( SLOBYTE(this->m_ObjectFlags) >= 0 )
      v5 = this;
    FxPoolFree(v5);
  }
  return this;
}
