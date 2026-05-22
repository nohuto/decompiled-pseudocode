/*
 * XREFs of ??1TraceSessionConfig@@QEAA@XZ @ 0x1800D248C
 * Callers:
 *     GetHolographicInputSession @ 0x1800D32B0 (GetHolographicInputSession.c)
 *     ?OnDeviceAttach@SpatialRimDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x1800D48A0 (-OnDeviceAttach@SpatialRimDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z.c)
 *     ?OnFinalRelease@SpatialRimDeviceCollection@@MEAAXXZ @ 0x1800D4A50 (-OnFinalRelease@SpatialRimDeviceCollection@@MEAAXXZ.c)
 *     ?StartTracingSession@SpatialRimDeviceCollection@@UEAAXXZ @ 0x1800D5C90 (-StartTracingSession@SpatialRimDeviceCollection@@UEAAXXZ.c)
 *     _GetHolographicInputSession_::_1_::dtor$3 @ 0x1801CE259 (_GetHolographicInputSession_--_1_--dtor$3.c)
 *     _SpatialRimDeviceCollection::OnFinalRelease_::_1_::dtor$0 @ 0x1801CE340 (_SpatialRimDeviceCollection--OnFinalRelease_--_1_--dtor$0.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001AB00 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x18007FAB0 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 */

void __fastcall TraceSessionConfig::~TraceSessionConfig(TraceSessionConfig *this)
{
  char *v2; // rcx

  v2 = (char *)*((_QWORD *)this + 13);
  if ( v2 )
  {
    std::_Deallocate<16,0>(
      v2,
      (const struct std::nothrow_t *)(8 * ((__int64)(*((_QWORD *)this + 15) - (_QWORD)v2) >> 3)));
    *((_QWORD *)this + 13) = 0LL;
    *((_QWORD *)this + 14) = 0LL;
    *((_QWORD *)this + 15) = 0LL;
  }
  std::wstring::_Tidy_deallocate((__int64)this + 48);
  std::wstring::_Tidy_deallocate((__int64)this);
}
