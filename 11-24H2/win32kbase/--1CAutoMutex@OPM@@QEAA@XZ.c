/*
 * XREFs of ??1CAutoMutex@OPM@@QEAA@XZ @ 0x14008BFE0
 * Callers:
 *     <none>
 * Callees:
 *     ?Unlock@CMutex@OPM@@QEAAXXZ @ 0x14008C010 (-Unlock@CMutex@OPM@@QEAAXXZ.c)
 */

void __fastcall OPM::CAutoMutex::~CAutoMutex(OPM::CMutex **this)
{
  OPM::CMutex::Unlock(*this);
  *this = 0LL;
}
