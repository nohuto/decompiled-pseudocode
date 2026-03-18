/*
 * XREFs of ??$?4U?$default_delete@UHighResourceUsageReport@CProcessResourceAttributionReporter@@@std@@$0A@@?$unique_ptr@UHighResourceUsageReport@CProcessResourceAttributionReporter@@U?$default_delete@UHighResourceUsageReport@CProcessResourceAttributionReporter@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180180500
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_d726b1e7ec95932be2432bf4c2269415__void_void___unsigned_long_unsigned___int64_unsigned_short_const___enum_ProcessAttributionFlags_ProcessAttributionResourceCounters_const_&_::_Do_call @ 0x1801812E0 (std--_Func_impl_no_alloc__lambda_d726b1e7ec95932be2432bf4c2269415__void_void___unsigned_long_uns.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180069F90 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x18025C2F4 (--3@YAXPEAX_K@Z.c)
 */

_QWORD **__fastcall std::unique_ptr<CProcessResourceAttributionReporter::HighResourceUsageReport>::operator=<std::default_delete<CProcessResourceAttributionReporter::HighResourceUsageReport>,0>(
        _QWORD **a1,
        _QWORD *a2)
{
  _QWORD *v2; // rax
  _QWORD *v4; // rbx
  _QWORD *v6; // rcx

  v2 = (_QWORD *)*a2;
  *a2 = 0LL;
  v4 = *a1;
  *a1 = v2;
  if ( v4 )
  {
    v6 = (_QWORD *)v4[2];
    if ( v6 )
    {
      std::_Deallocate<16,0>(v6, 8 * ((__int64)(v4[4] - (_QWORD)v6) >> 3));
      v4[2] = 0LL;
      v4[3] = 0LL;
      v4[4] = 0LL;
    }
    operator delete(v4, 0x30uLL);
  }
  return a1;
}
