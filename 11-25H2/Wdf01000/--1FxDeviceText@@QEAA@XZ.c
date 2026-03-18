/*
 * XREFs of ??1FxDeviceText@@QEAA@XZ @ 0x1400832AC
 * Callers:
 *     ??_GFxDeviceText@@QEAAPEAXI@Z @ 0x140083284 (--_GFxDeviceText@@QEAAPEAXI@Z.c)
 * Callees:
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x140034320 (-FxPoolFree@@YAXPEAX@Z.c)
 */

void __fastcall FxDeviceText::~FxDeviceText(FxDeviceText *this)
{
  wchar_t *m_Description; // rcx
  wchar_t *m_LocationInformation; // rcx

  m_Description = this->m_Description;
  if ( m_Description )
  {
    FxPoolFree(m_Description);
    this->m_Description = 0LL;
  }
  m_LocationInformation = this->m_LocationInformation;
  if ( m_LocationInformation )
  {
    FxPoolFree(m_LocationInformation);
    this->m_LocationInformation = 0LL;
  }
}
