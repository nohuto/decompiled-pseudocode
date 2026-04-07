/*
 * XREFs of ?UpdateDesc@DXGIOutputInfo@@QEAAJXZ @ 0x180029EE4
 * Callers:
 *     ?EnumerateOutputs@CDWMDisplaySet@@AEAAJXZ @ 0x180029AE0 (-EnumerateOutputs@CDWMDisplaySet@@AEAAJXZ.c)
 *     ?EnumerateDWMOutputs@CDWMDXGIAdapter@@AEAAJXZ @ 0x180029D68 (-EnumerateDWMOutputs@CDWMDXGIAdapter@@AEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180065FCC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall DXGIOutputInfo::UpdateDesc(DXGIOutputInfo *this)
{
  int v2; // eax
  unsigned int v3; // ebx
  int v4; // eax

  v2 = (*(__int64 (__fastcall **)(_QWORD, char *))(**(_QWORD **)this + 56LL))(*(_QWORD *)this, (char *)this + 16);
  v3 = v2;
  if ( v2 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v2, 0x2Bu, 0LL);
  }
  else
  {
    v4 = (*(__int64 (__fastcall **)(_QWORD, char *))(**((_QWORD **)this + 1) + 32LL))(
           *((_QWORD *)this + 1),
           (char *)this + 112);
    v3 = v4;
    if ( v4 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v4, 0x2Cu, 0LL);
  }
  return v3;
}
