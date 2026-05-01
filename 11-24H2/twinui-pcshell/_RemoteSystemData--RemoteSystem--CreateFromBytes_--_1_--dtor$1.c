/*
 * XREFs of _RemoteSystemData::RemoteSystem::CreateFromBytes_::_1_::dtor$1 @ 0x180701EB1
 * Callers:
 *     <none>
 * Callees:
 *     ??1RemoteSystem@RemoteSystemData@@QEAA@XZ @ 0x180611564 (--1RemoteSystem@RemoteSystemData@@QEAA@XZ.c)
 */

void __fastcall RemoteSystemData::RemoteSystem::CreateFromBytes_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 32) & 1) != 0 )
  {
    *(_DWORD *)(a2 + 32) &= ~1u;
    RemoteSystemData::RemoteSystem::~RemoteSystem(*(volatile signed __int32 ***)(a2 + 64));
  }
}
