/*
 * XREFs of _lambda_08f8e6791065478e4a38815f49fd4aba_::_lambda_invoker_cdecl_ @ 0x180209450
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Revert@CMmcssTask@@QEAAXXZ @ 0x1802097C8 (-Revert@CMmcssTask@@QEAAXXZ.c)
 *     ?Apply@CMmcssTask@@QEAAJ_N@Z @ 0x180209828 (-Apply@CMmcssTask@@QEAAJ_N@Z.c)
 */

__int64 __fastcall lambda_08f8e6791065478e4a38815f49fd4aba_::_lambda_invoker_cdecl_(__int64 a1)
{
  __int64 v1; // rax
  struct _RTL_CRITICAL_SECTION *v2; // rcx
  int v4; // eax

  v1 = *(_QWORD *)(a1 + 16);
  v2 = (struct _RTL_CRITICAL_SECTION *)(a1 + 312);
  if ( *(_BYTE *)(v1 + 816) )
  {
    v4 = CMmcssTask::Apply(v2, 1);
    if ( v4 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v4, 0x55u, 0LL);
  }
  else
  {
    CMmcssTask::Revert((CMmcssTask *)v2);
  }
  return 0LL;
}
