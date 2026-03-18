/*
 * XREFs of ??_GDXGK_GAMMA_RAMP@@UEAAPEAXI@Z @ 0x140011FB0
 * Callers:
 *     <none>
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x1400110B0 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ??1DXGK_GAMMA_RAMP@@UEAA@XZ @ 0x140011FE8 (--1DXGK_GAMMA_RAMP@@UEAA@XZ.c)
 */

DXGK_GAMMA_RAMP *__fastcall DXGK_GAMMA_RAMP::`scalar deleting destructor'(DXGK_GAMMA_RAMP *this, char a2)
{
  DXGK_GAMMA_RAMP::~DXGK_GAMMA_RAMP(this);
  if ( (a2 & 1) != 0 )
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(this);
  return this;
}
