/*
 * XREFs of ??_GWindowingEnvironmentConfig@@UEAAPEAXI@Z @ 0x18044DF20
 * Callers:
 *     <none>
 * Callees:
 *     ??1WindowingEnvironmentConfig@@UEAA@XZ @ 0x1801C9514 (--1WindowingEnvironmentConfig@@UEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D1AB8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

WindowingEnvironmentConfig *__fastcall WindowingEnvironmentConfig::`scalar deleting destructor'(
        WindowingEnvironmentConfig *this,
        char a2)
{
  WindowingEnvironmentConfig::~WindowingEnvironmentConfig(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x78);
  return this;
}
