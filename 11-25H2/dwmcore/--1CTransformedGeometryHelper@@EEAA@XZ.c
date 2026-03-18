/*
 * XREFs of ??1CTransformedGeometryHelper@@EEAA@XZ @ 0x1801B3680
 * Callers:
 *     ??_ECTransformedGeometryHelper@@EEAAPEAXI@Z @ 0x1801B3500 (--_ECTransformedGeometryHelper@@EEAAPEAXI@Z.c)
 *     ?Release@?$CMILCOMBaseT@UID2D1SimplifiedGeometrySink@@U1@VCMilObjectDeleter@@@@UEAAKXZ @ 0x1801B3540 (-Release@-$CMILCOMBaseT@UID2D1SimplifiedGeometrySink@@U1@VCMilObjectDeleter@@@@UEAAKXZ.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180069F90 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall CTransformedGeometryHelper::~CTransformedGeometryHelper(CTransformedGeometryHelper *this)
{
  _QWORD *v2; // rcx

  v2 = (_QWORD *)*((_QWORD *)this + 5);
  if ( v2 )
  {
    std::_Deallocate<16,0>(v2, (*((_QWORD *)this + 7) - (_QWORD)v2) & 0xFFFFFFFFFFFFFFF8uLL);
    *((_QWORD *)this + 5) = 0LL;
    *((_QWORD *)this + 6) = 0LL;
    *((_QWORD *)this + 7) = 0LL;
  }
}
