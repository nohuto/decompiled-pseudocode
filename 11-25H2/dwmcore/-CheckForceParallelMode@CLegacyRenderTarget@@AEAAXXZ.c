/*
 * XREFs of ?CheckForceParallelMode@CLegacyRenderTarget@@AEAAXXZ @ 0x1800C2D54
 * Callers:
 *     ?UpdateMPOCaps@CLegacyRenderTarget@@UEAAJXZ @ 0x1800C2C90 (-UpdateMPOCaps@CLegacyRenderTarget@@UEAAJXZ.c)
 * Callees:
 *     ?reserve_region@?$vector_facade@PEAVIMonitorTarget@@V?$buffer_impl@PEAVIMonitorTarget@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAPEAVIMonitorTarget@@_K0@Z @ 0x1800C2FDC (-reserve_region@-$vector_facade@PEAVIMonitorTarget@@V-$buffer_impl@PEAVIMonitorTarget@@$01$00Vli.c)
 *     ?RemoveRenderTarget@CSyncLockGroup@@QEAAXPEAVIMonitorTarget@@@Z @ 0x180252A2C (-RemoveRenderTarget@CSyncLockGroup@@QEAAXPEAVIMonitorTarget@@@Z.c)
 *     ?GetGroup@CSyncLockGroup@@SAPEAV1@I@Z @ 0x18025A414 (-GetGroup@CSyncLockGroup@@SAPEAV1@I@Z.c)
 */

void __fastcall CLegacyRenderTarget::CheckForceParallelMode(CLegacyRenderTarget *this)
{
  CSyncLockGroup *v2; // rcx
  unsigned __int64 v3; // rdi
  struct CSyncLockGroup *Group; // rax

  v2 = (CSyncLockGroup *)*((_QWORD *)this + 4236);
  if ( v2 && *((_DWORD *)v2 + 2) == -1 )
  {
    v3 = (unsigned __int64)this + 160;
    CSyncLockGroup::RemoveRenderTarget(
      v2,
      (struct IMonitorTarget *)(((unsigned __int64)this + 160) & ((unsigned __int128)-(__int128)(unsigned __int64)this >> 64)));
    *((_QWORD *)this + 4236) = 0LL;
  }
  else
  {
    v3 = (unsigned __int64)this + 160;
    if ( v2 )
      return;
  }
  if ( CCommonRegistryData::m_parallelModePolicy == 1 )
  {
    if ( !*((_BYTE *)this + 19984) )
      return;
LABEL_10:
    Group = CSyncLockGroup::GetGroup(0xFFFFFFFF);
    *((_QWORD *)this + 4236) = Group;
    *(_QWORD *)detail::vector_facade<IMonitorTarget *,detail::buffer_impl<IMonitorTarget *,2,1,detail::liberal_expansion_policy>>::reserve_region(
                 (char *)Group + 16,
                 (__int64)(*((_QWORD *)Group + 3) - *((_QWORD *)Group + 2)) >> 3) = v3 & -(__int64)(this != 0LL);
    return;
  }
  if ( CCommonRegistryData::m_parallelModePolicy == 2 )
    goto LABEL_10;
}
