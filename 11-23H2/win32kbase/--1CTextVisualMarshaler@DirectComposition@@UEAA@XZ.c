/*
 * XREFs of ??1CTextVisualMarshaler@DirectComposition@@UEAA@XZ @ 0x1C020DA48
 * Callers:
 *     ??_ECTextVisualMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C020DFC0 (--_ECTextVisualMarshaler@DirectComposition@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1CVisualMarshaler@DirectComposition@@UEAA@XZ @ 0x1C0030364 (--1CVisualMarshaler@DirectComposition@@UEAA@XZ.c)
 *     ??1CResourceMarshalerArrayBase@DirectComposition@@QEAA@XZ @ 0x1C00303FC (--1CResourceMarshalerArrayBase@DirectComposition@@QEAA@XZ.c)
 */

void __fastcall DirectComposition::CTextVisualMarshaler::~CTextVisualMarshaler(
        DirectComposition::CTextVisualMarshaler *this)
{
  DirectComposition::CResourceMarshalerArrayBase::~CResourceMarshalerArrayBase((DirectComposition::CTextVisualMarshaler *)((char *)this + 424));
  DirectComposition::CResourceMarshalerArrayBase::~CResourceMarshalerArrayBase((DirectComposition::CTextVisualMarshaler *)((char *)this + 400));
  DirectComposition::CResourceMarshalerArrayBase::~CResourceMarshalerArrayBase((DirectComposition::CTextVisualMarshaler *)((char *)this + 376));
  DirectComposition::CVisualMarshaler::~CVisualMarshaler(this);
}
