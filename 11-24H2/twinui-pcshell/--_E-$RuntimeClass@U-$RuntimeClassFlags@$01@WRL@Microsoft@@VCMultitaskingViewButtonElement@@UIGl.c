/*
 * XREFs of ??_E?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@VCMultitaskingViewButtonElement@@UIGlyphButton@@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x1804D18A0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D1AB8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1CMultitaskingViewElementBase@@QEAA@XZ @ 0x1804B7494 (--1CMultitaskingViewElementBase@@QEAA@XZ.c)
 */

CMultitaskingViewElementBase *__fastcall Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CMultitaskingViewButtonElement,IGlyphButton>::`vector deleting destructor'(
        CMultitaskingViewElementBase *a1,
        char a2)
{
  *((_DWORD *)a1 + 57) = -1073741823;
  CMultitaskingViewElementBase::~CMultitaskingViewElementBase(a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0xE8);
  return a1;
}
