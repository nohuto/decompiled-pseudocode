/*
 * XREFs of ??1FxQueryInterface@@QEAA@XZ @ 0x140073EC8
 * Callers:
 *     ??_GFxQueryInterface@@QEAAPEAXI@Z @ 0x140073EA0 (--_GFxQueryInterface@@QEAAPEAXI@Z.c)
 * Callees:
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x14000EC70 (-FxPoolFree@@YAXPEAX@Z.c)
 */

void __fastcall FxQueryInterface::~FxQueryInterface(FxQueryInterface *this)
{
  _INTERFACE *m_Interface; // rcx

  m_Interface = this->m_Interface;
  if ( m_Interface )
  {
    if ( !this->m_EmbeddedInterface )
      FxPoolFree(m_Interface);
  }
}
