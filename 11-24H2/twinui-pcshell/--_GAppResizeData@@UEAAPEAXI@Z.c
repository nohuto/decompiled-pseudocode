/*
 * XREFs of ??_GAppResizeData@@UEAAPEAXI@Z @ 0x180536120
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D1AB8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1AppResizeData@@UEAA@XZ @ 0x1805360E0 (--1AppResizeData@@UEAA@XZ.c)
 */

AppResizeData *__fastcall AppResizeData::`scalar deleting destructor'(AppResizeData *this, char a2)
{
  AppResizeData::~AppResizeData(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x70);
  return this;
}
