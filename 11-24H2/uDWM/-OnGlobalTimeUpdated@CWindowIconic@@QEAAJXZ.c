/*
 * XREFs of ?OnGlobalTimeUpdated@CWindowIconic@@QEAAJXZ @ 0x18001DE54
 * Callers:
 *     ?OnGlobalTimeUpdated@CTopLevelWindow@@UEAAJXZ @ 0x18001D910 (-OnGlobalTimeUpdated@CTopLevelWindow@@UEAAJXZ.c)
 * Callees:
 *     ?LoadCentralImage@CWindowIconic@@AEAAJXZ @ 0x180008370 (-LoadCentralImage@CWindowIconic@@AEAAJXZ.c)
 *     ?Restart@CTimelineBase@@QEAAXN@Z @ 0x180015AEC (-Restart@CTimelineBase@@QEAAXN@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800FA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CWindowIconic::OnGlobalTimeUpdated(CWindowIconic *this)
{
  unsigned int v2; // eax
  CTimelineBase *v3; // rcx

  v2 = *((_DWORD *)this + 14) - 1;
  if ( v2 >= (int)*(double *)(*((_QWORD *)this + 8) + 48LL) )
    v2 = (int)*(double *)(*((_QWORD *)this + 8) + 48LL);
  if ( *(_QWORD *)(*((_QWORD *)this + 4) + 8LL * v2) != *(_QWORD *)(*((_QWORD *)this + 12) + 240LL) )
  {
    CWindowIconic::LoadCentralImage(this);
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 13) + 48LL))(*((_QWORD *)this + 13));
  }
  v3 = (CTimelineBase *)*((_QWORD *)this + 8);
  if ( *((_BYTE *)v3 + 72) )
    CTimelineBase::Restart(v3, 0.54);
  return 0LL;
}
