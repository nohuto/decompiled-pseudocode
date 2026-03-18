/*
 * XREFs of ??_GCGenericInkTipPointSource@@EEAAPEAXI@Z @ 0x1802AB470
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180250CC4 (--3@YAXPEAX_K@Z.c)
 *     ??1CGenericInkTipPointSource@@EEAA@XZ @ 0x1802AB42C (--1CGenericInkTipPointSource@@EEAA@XZ.c)
 */

void **__fastcall CGenericInkTipPointSource::`scalar deleting destructor'(void **this, char a2)
{
  CGenericInkTipPointSource::~CGenericInkTipPointSource(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
