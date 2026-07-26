/*
 * XREFs of ??1KRundownHolder@@QEAA@XZ @ 0x140151878
 * Callers:
 *     NdisMRegisterWdiMiniportDriver @ 0x140151C60 (NdisMRegisterWdiMiniportDriver.c)
 * Callees:
 *     <none>
 */

void __fastcall KRundownHolder::~KRundownHolder(KRundownHolder *this)
{
  ULONG m_count; // edx

  m_count = this->m_count;
  if ( m_count )
  {
    this->m_count = 0;
    ExReleaseRundownProtectionEx(&this->m_rundown->m_rundown, m_count);
  }
}
