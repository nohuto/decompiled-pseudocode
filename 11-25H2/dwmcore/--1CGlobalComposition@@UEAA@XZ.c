/*
 * XREFs of ??1CGlobalComposition@@UEAA@XZ @ 0x18026F4A4
 * Callers:
 *     ??_ECGlobalComposition@@UEAAPEAXI@Z @ 0x18026F500 (--_ECGlobalComposition@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180069F90 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall CGlobalComposition::~CGlobalComposition(CGlobalComposition *this, __int64 a2)
{
  _QWORD *v3; // rcx

  v3 = (_QWORD *)*((_QWORD *)this + 819);
  if ( v3 )
  {
    std::_Deallocate<16,0>(v3, (*((_QWORD *)this + 821) - (_QWORD)v3) & 0xFFFFFFFFFFFFFFF8uLL);
    *((_QWORD *)this + 819) = 0LL;
    *((_QWORD *)this + 820) = 0LL;
    *((_QWORD *)this + 821) = 0LL;
  }
  CComposition::~CComposition(this, a2);
}
