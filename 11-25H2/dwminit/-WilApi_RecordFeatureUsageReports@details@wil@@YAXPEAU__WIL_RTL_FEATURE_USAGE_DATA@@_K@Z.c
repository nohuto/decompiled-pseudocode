/*
 * XREFs of ?WilApi_RecordFeatureUsageReports@details@wil@@YAXPEAU__WIL_RTL_FEATURE_USAGE_DATA@@_K@Z @ 0x180009A18
 * Callers:
 *     ?RecordCachedUsageUnderLock@EnabledStateManager@details@wil@@AEAAXXZ @ 0x180007694 (-RecordCachedUsageUnderLock@EnabledStateManager@details@wil@@AEAAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180012010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall wil::details::WilApi_RecordFeatureUsageReports(
        wil::details *this,
        struct __WIL_RTL_FEATURE_USAGE_DATA *a2)
{
  struct __WIL_RTL_FEATURE_USAGE_DATA *v2; // rdi
  unsigned __int16 *v3; // rbx
  void (__fastcall *v4)(_QWORD, _QWORD, _QWORD, _QWORD); // rax

  if ( a2 )
  {
    v2 = a2;
    v3 = (unsigned __int16 *)((char *)this + 4);
    do
    {
      v4 = (void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))g_wil_details_internalRecordFeatureUsage;
      if ( g_wil_details_internalRecordFeatureUsage
        || (v4 = (void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))g_wil_details_apiRecordFeatureUsage) != 0LL )
      {
        v4(*((unsigned int *)v3 - 1), *v3, v3[1], 0LL);
      }
      v3 += 4;
      v2 = (struct __WIL_RTL_FEATURE_USAGE_DATA *)((char *)v2 - 1);
    }
    while ( v2 );
  }
}
