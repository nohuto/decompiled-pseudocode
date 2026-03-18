/*
 * XREFs of ??1FxDeviceInterface@@QEAA@XZ @ 0x14004A630
 * Callers:
 *     ??_GFxDeviceInterface@@QEAAPEAXI@Z @ 0x14004A608 (--_GFxDeviceInterface@@QEAAPEAXI@Z.c)
 * Callees:
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x140034320 (-FxPoolFree@@YAXPEAX@Z.c)
 */

void __fastcall FxDeviceInterface::~FxDeviceInterface(FxDeviceInterface *this)
{
  wchar_t *Buffer; // rcx

  Buffer = this->m_ReferenceString.Buffer;
  if ( Buffer )
  {
    FxPoolFree(Buffer);
    this->m_ReferenceString = 0LL;
  }
  if ( this->m_SymbolicLinkName.Buffer )
    RtlFreeUnicodeString(&this->m_SymbolicLinkName);
}
