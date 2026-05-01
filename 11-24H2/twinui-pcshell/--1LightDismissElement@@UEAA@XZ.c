/*
 * XREFs of ??1LightDismissElement@@UEAA@XZ @ 0x1804DB874
 * Callers:
 *     ??_GLightDismissElement@@UEAAPEAXI@Z @ 0x1804DB8C0 (--_GLightDismissElement@@UEAAPEAXI@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall LightDismissElement::~LightDismissElement(LightDismissElement *this)
{
  __int64 v2; // rcx

  v2 = *((_QWORD *)this + 29);
  if ( v2 )
  {
    *((_QWORD *)this + 29) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  *((_DWORD *)this + 57) = -1073741823;
  CMultitaskingViewElementBase::~CMultitaskingViewElementBase(this);
}
