/*
 * XREFs of ??_ERimBackedDeviceBase@@UEAAPEAXI@Z @ 0x1402ED1F0
 * Callers:
 *     <none>
 * Callees:
 *     ?UnInitialize@RimBackedDeviceBase@@UEAAXXZ @ 0x1402EE3E0 (-UnInitialize@RimBackedDeviceBase@@UEAAXXZ.c)
 */

RimBackedDeviceBase *__fastcall RimBackedDeviceBase::`vector deleting destructor'(RimBackedDeviceBase *this, char a2)
{
  *(_QWORD *)this = &RimBackedDeviceBase::`vftable';
  RimBackedDeviceBase::UnInitialize(this);
  if ( (a2 & 1) != 0 )
    Win32FreePool(this);
  return this;
}
