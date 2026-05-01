/*
 * XREFs of ??_GAppViewIconLoader@@UEAAPEAXI@Z @ 0x1801DBD80
 * Callers:
 *     <none>
 * Callees:
 *     ??1AppViewIconLoader@@UEAA@XZ @ 0x1801DBDBC (--1AppViewIconLoader@@UEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D1AB8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

AppViewIconLoader *__fastcall AppViewIconLoader::`scalar deleting destructor'(AppViewIconLoader *this, char a2)
{
  AppViewIconLoader::~AppViewIconLoader(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x30);
  return this;
}
