/*
 * XREFs of ??_E?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@VHotTrackingElement@@UIMultitaskingViewGridElement@@UISwitchItemElement@@UIGlyphButtonHost@@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x1804B76F0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D1AB8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1CMultitaskingViewElementBase@@QEAA@XZ @ 0x1804B7494 (--1CMultitaskingViewElementBase@@QEAA@XZ.c)
 */

CMultitaskingViewElementBase *__fastcall Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,HotTrackingElement,IMultitaskingViewGridElement,ISwitchItemElement,IGlyphButtonHost>::`vector deleting destructor'(
        CMultitaskingViewElementBase *a1,
        char a2)
{
  *((_DWORD *)a1 + 61) = -1073741823;
  CMultitaskingViewElementBase::~CMultitaskingViewElementBase(a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0xF8);
  return a1;
}
