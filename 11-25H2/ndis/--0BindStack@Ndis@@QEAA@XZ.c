/*
 * XREFs of ??0BindStack@Ndis@@QEAA@XZ @ 0x14016C8B0
 * Callers:
 *     ??0_NDIS_MINIPORT_BLOCK@@QEAA@XZ @ 0x14006E6A0 (--0_NDIS_MINIPORT_BLOCK@@QEAA@XZ.c)
 * Callees:
 *     ??0BindState@Ndis@@QEAA@XZ @ 0x14016C9C0 (--0BindState@Ndis@@QEAA@XZ.c)
 */

Ndis::BindStack *__fastcall Ndis::BindStack::BindStack(Ndis::BindStack *this)
{
  Ndis::BindStack *result; // rax

  *(_QWORD *)&this->Protocols.m_bufferSize = 0LL;
  this->Protocols._p = 0LL;
  *(_QWORD *)&this->Filters.m_bufferSize = 0LL;
  this->Filters._p = 0LL;
  Ndis::BindState::BindState(&this->Miniport);
  result = this;
  this->ChangeEpoch = 0;
  return result;
}
