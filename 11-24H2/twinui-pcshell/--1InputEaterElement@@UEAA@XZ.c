/*
 * XREFs of ??1InputEaterElement@@UEAA@XZ @ 0x1804DBCA0
 * Callers:
 *     ??_GInputEaterElement@@UEAAPEAXI@Z @ 0x1804DBD40 (--_GInputEaterElement@@UEAAPEAXI@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall InputEaterElement::~InputEaterElement(InputEaterElement *this)
{
  __int64 v2; // rcx

  v2 = *((_QWORD *)this + 27);
  if ( v2 )
  {
    *((_QWORD *)this + 27) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  *((_DWORD *)this + 53) = -1073741823;
  CMultitaskingViewElementBase::~CMultitaskingViewElementBase(this);
}
