/*
 * XREFs of ??1BRUSHMEMOBJ@@QEAA@XZ @ 0x14000D550
 * Callers:
 *     GreCreateSolidBrush @ 0x14000CE80 (GreCreateSolidBrush.c)
 *     hCreateSolidBrushInternal @ 0x14000D270 (hCreateSolidBrushInternal.c)
 *     GreCreatePatternBrushInternal @ 0x14000DD70 (GreCreatePatternBrushInternal.c)
 *     bInitBRUSHOBJ @ 0x1402E409C (bInitBRUSHOBJ.c)
 *     bInitBrush @ 0x1402E4824 (bInitBrush.c)
 * Callees:
 *     bDeleteBrush @ 0x140014820 (bDeleteBrush.c)
 *     PopThreadGuardedObject @ 0x1400260C0 (PopThreadGuardedObject.c)
 *     HmgDecrementShareReferenceCountEx @ 0x1400358E0 (HmgDecrementShareReferenceCountEx.c)
 */

void __fastcall BRUSHMEMOBJ::~BRUSHMEMOBJ(HBRUSH **this)
{
  HBRUSH *v2; // rcx

  v2 = *this;
  if ( v2 )
  {
    HmgDecrementShareReferenceCountEx((struct _BASEOBJECT *)v2, 0LL);
    if ( !*((_DWORD *)this + 12) )
      bDeleteBrush(**this);
    *this = 0LL;
  }
  PopThreadGuardedObject(this + 2);
}
