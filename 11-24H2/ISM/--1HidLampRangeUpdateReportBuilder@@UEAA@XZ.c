/*
 * XREFs of ??1HidLampRangeUpdateReportBuilder@@UEAA@XZ @ 0x1800354A0
 * Callers:
 *     ??_GHidLampRangeUpdateReportBuilder@@UEAAPEAXI@Z @ 0x180035450 (--_GHidLampRangeUpdateReportBuilder@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?Release@InputContext@@UEAAKXZ @ 0x180035CE0 (-Release@InputContext@@UEAAKXZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall HidLampRangeUpdateReportBuilder::~HidLampRangeUpdateReportBuilder(
        HidLampRangeUpdateReportBuilder *this)
{
  InputContext *v2; // rcx

  *(_QWORD *)this = &HidLampRangeUpdateReportBuilder::`vftable';
  v2 = (InputContext *)*((_QWORD *)this + 5);
  if ( v2 )
  {
    *((_QWORD *)this + 5) = 0LL;
    InputContext::Release(v2);
  }
  *(_QWORD *)this = &RefCountedObject::`vftable';
}
