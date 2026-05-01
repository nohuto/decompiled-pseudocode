/*
 * XREFs of ??_GCMultitaskingViewServiceProvider@@UEAAPEAXI@Z @ 0x180498D34
 * Callers:
 *     ??_ECMultitaskingViewServiceProvider@@WBI@EAAPEAXI@Z @ 0x180498CE0 (--_ECMultitaskingViewServiceProvider@@WBI@EAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D1AB8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1CMultitaskingViewServiceProvider@@UEAA@XZ @ 0x180498C08 (--1CMultitaskingViewServiceProvider@@UEAA@XZ.c)
 */

CMultitaskingViewServiceProvider *__fastcall CMultitaskingViewServiceProvider::`scalar deleting destructor'(
        CMultitaskingViewServiceProvider *this,
        char a2)
{
  CMultitaskingViewServiceProvider::~CMultitaskingViewServiceProvider(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x108);
  return this;
}
