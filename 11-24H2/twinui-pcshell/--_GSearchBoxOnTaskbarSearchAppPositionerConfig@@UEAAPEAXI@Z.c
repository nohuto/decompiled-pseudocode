/*
 * XREFs of ??_GSearchBoxOnTaskbarSearchAppPositionerConfig@@UEAAPEAXI@Z @ 0x1803D58B0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D1AB8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1SearchBoxOnTaskbarSearchAppPositionerConfig@@UEAA@XZ @ 0x1803D5844 (--1SearchBoxOnTaskbarSearchAppPositionerConfig@@UEAA@XZ.c)
 */

SearchBoxOnTaskbarSearchAppPositionerConfig *__fastcall SearchBoxOnTaskbarSearchAppPositionerConfig::`scalar deleting destructor'(
        SearchBoxOnTaskbarSearchAppPositionerConfig *this,
        char a2)
{
  SearchBoxOnTaskbarSearchAppPositionerConfig::~SearchBoxOnTaskbarSearchAppPositionerConfig(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x10);
  return this;
}
