/*
 * XREFs of ?UpdateCompositorClock@CComposition@@IEAAXXZ @ 0x1800F0B34
 * Callers:
 *     ?PostRender@CComposition@@IEAAJ_N@Z @ 0x1800F1F40 (-PostRender@CComposition@@IEAAJ_N@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180041E40 (--2@YAPEAX_K@Z.c)
 *     ??0CMonitorClock@@QEAA@PEAVIMonitorTarget@@@Z @ 0x1800ED9BC (--0CMonitorClock@@QEAA@PEAVIMonitorTarget@@@Z.c)
 *     ??4?$com_ptr_t@VCComputeScribble@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCComputeScribble@@@Z @ 0x1800F0BCC (--4-$com_ptr_t@VCComputeScribble@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCComputeScrib.c)
 */

void __fastcall CComposition::UpdateCompositorClock(CComposition *this)
{
  struct IMonitorTarget **v2; // rax
  struct IMonitorTarget *v3; // rdi
  __int64 v4; // rdx
  CMonitorClock *v5; // rax

  if ( CCommonRegistryData::m_compositorClockPolicy == 1 )
    v2 = (struct IMonitorTarget **)(*((_QWORD *)this + 77) + 8LL);
  else
    v2 = (struct IMonitorTarget **)*((_QWORD *)this + 77);
  v3 = *v2;
  if ( *v2 )
  {
    v5 = (CMonitorClock *)operator new(0x70uLL);
    if ( v5 )
      v5 = CMonitorClock::CMonitorClock(v5, v3);
    wil::com_ptr_t<CComputeScribble,wil::err_returncode_policy>::operator=((char *)this + 312, v5);
    *((_BYTE *)this + 6468) = 0;
  }
  else
  {
    v4 = *((_QWORD *)this + 38);
    if ( *((_QWORD *)this + 39) != v4 )
      wil::com_ptr_t<CComputeScribble,wil::err_returncode_policy>::operator=((char *)this + 312, v4);
  }
}
