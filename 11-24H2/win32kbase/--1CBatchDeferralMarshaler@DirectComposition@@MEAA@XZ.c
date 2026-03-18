/*
 * XREFs of ??1CBatchDeferralMarshaler@DirectComposition@@MEAA@XZ @ 0x140239900
 * Callers:
 *     ??_ECBatchDeferralMarshaler@DirectComposition@@MEAAPEAXI@Z @ 0x140224A40 (--_ECBatchDeferralMarshaler@DirectComposition@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??_GCEvent@DirectComposition@@QEAAPEAXI@Z @ 0x14006E4EC (--_GCEvent@DirectComposition@@QEAAPEAXI@Z.c)
 */

void __fastcall DirectComposition::CBatchDeferralMarshaler::~CBatchDeferralMarshaler(
        DirectComposition::CBatchDeferralMarshaler *this)
{
  DirectComposition::CEvent *v1; // rcx

  *(_QWORD *)this = &DirectComposition::CBatchDeferralMarshaler::`vftable';
  v1 = (DirectComposition::CEvent *)*((_QWORD *)this + 7);
  if ( v1 )
    DirectComposition::CEvent::`scalar deleting destructor'(v1);
}
