/*
 * XREFs of ?CommitRecordedStatistics@CBindInfo@CGlobalCompositionSurfaceInfo@@QEBAJXZ @ 0x1802912D0
 * Callers:
 *     ?CommitRecordedStatistics@CGlobalCompositionSurfaceInfo@@UEBAJXZ @ 0x1800F3950 (-CommitRecordedStatistics@CGlobalCompositionSurfaceInfo@@UEBAJXZ.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180040010 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CGlobalCompositionSurfaceInfo::CBindInfo::CommitRecordedStatistics(
        CGlobalCompositionSurfaceInfo::CBindInfo *this)
{
  __int64 v2; // rcx
  int v3; // eax
  unsigned int v4; // ebx
  __int64 v6; // [rsp+40h] [rbp+8h] BYREF

  v2 = *((_QWORD *)this + 24);
  v6 = 0LL;
  if ( v2 )
    (*(void (__fastcall **)(__int64, GUID *, __int64 *))(*(_QWORD *)v2 + 24LL))(
      v2,
      &GUID_2c1fe8d2_95c7_47a6_865f_9c56f4e898cc,
      &v6);
  v3 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 2) + 56LL))(*((_QWORD *)this + 2));
  v4 = v3;
  if ( v3 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v3, 0x821u, 0LL);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v6);
  return v4;
}
