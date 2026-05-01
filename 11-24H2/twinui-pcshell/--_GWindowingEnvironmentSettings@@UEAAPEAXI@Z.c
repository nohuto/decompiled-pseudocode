/*
 * XREFs of ??_GWindowingEnvironmentSettings@@UEAAPEAXI@Z @ 0x1804196F0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D1AB8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1UwpWindowingEnvironmentSettings@@UEAA@XZ @ 0x180418ECC (--1UwpWindowingEnvironmentSettings@@UEAA@XZ.c)
 */

WindowingEnvironmentSettings *__fastcall WindowingEnvironmentSettings::`scalar deleting destructor'(
        WindowingEnvironmentSettings *this,
        char a2)
{
  UwpWindowingEnvironmentSettings::~UwpWindowingEnvironmentSettings(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0xA0);
  return this;
}
