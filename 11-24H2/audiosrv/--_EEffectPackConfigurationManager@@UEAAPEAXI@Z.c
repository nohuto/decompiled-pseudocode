/*
 * XREFs of ??_EEffectPackConfigurationManager@@UEAAPEAXI@Z @ 0x1800CBF40
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800A426C (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1EffectPackConfigurationManager@@UEAA@XZ @ 0x1800FB898 (--1EffectPackConfigurationManager@@UEAA@XZ.c)
 */

EffectPackConfigurationManager *__fastcall EffectPackConfigurationManager::`vector deleting destructor'(
        EffectPackConfigurationManager *this,
        char a2)
{
  EffectPackConfigurationManager::~EffectPackConfigurationManager(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x60);
  return this;
}
