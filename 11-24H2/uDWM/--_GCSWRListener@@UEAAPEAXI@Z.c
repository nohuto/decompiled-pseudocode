/*
 * XREFs of ??_GCSWRListener@@UEAAPEAXI@Z @ 0x18007AAF8
 * Callers:
 *     ??_ECSWRListener@@W7EAAPEAXI@Z @ 0x1800EDBD0 (--_ECSWRListener@@W7EAAPEAXI@Z.c)
 * Callees:
 *     ??3CDisplayBlackCurtainAnimatedVisual@@KAXPEAXAEBUnothrow_t@std@@@Z @ 0x180029370 (--3CDisplayBlackCurtainAnimatedVisual@@KAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1CSWRListener@@UEAA@XZ @ 0x18007AB30 (--1CSWRListener@@UEAA@XZ.c)
 */

CSWRListener *__fastcall CSWRListener::`scalar deleting destructor'(CSWRListener *this, char a2)
{
  const struct std::nothrow_t *v4; // rdx

  CSWRListener::~CSWRListener(this);
  if ( (a2 & 1) != 0 )
    CDisplayBlackCurtainAnimatedVisual::operator delete(this, v4);
  return this;
}
