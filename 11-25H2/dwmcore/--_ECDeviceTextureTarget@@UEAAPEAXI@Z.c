/*
 * XREFs of ??_ECDeviceTextureTarget@@UEAAPEAXI@Z @ 0x1801F8EC0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CDeviceTextureTarget@@UEAA@XZ @ 0x1801F8EFC (--1CDeviceTextureTarget@@UEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x18025C2F4 (--3@YAXPEAX_K@Z.c)
 */

CDeviceTextureTarget *__fastcall CDeviceTextureTarget::`vector deleting destructor'(
        CDeviceTextureTarget *this,
        char a2)
{
  CDeviceTextureTarget::~CDeviceTextureTarget(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, 0x128uLL);
  return this;
}
