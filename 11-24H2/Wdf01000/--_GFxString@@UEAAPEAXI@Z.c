/*
 * XREFs of ??_GFxString@@UEAAPEAXI@Z @ 0x140052740
 * Callers:
 *     <none>
 * Callees:
 *     ??3FxObject@@SAXPEAX@Z @ 0x14000EB94 (--3FxObject@@SAXPEAX@Z.c)
 *     ??1FxString@@UEAA@XZ @ 0x140052778 (--1FxString@@UEAA@XZ.c)
 */

FxString *__fastcall FxString::`scalar deleting destructor'(FxString *this, char a2)
{
  FxString::~FxString(this);
  if ( (a2 & 1) != 0 )
    FxObject::operator delete((char *)this);
  return this;
}
