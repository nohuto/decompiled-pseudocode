/*
 * XREFs of _anonymous_namespace_::GNT_NextTopScan @ 0x1402DB478
 * Callers:
 *     ?NextTopWindow@FindNextTopWindow@@YAPEAUtagWND@@PEBU2@0W4FindOption@1@@Z @ 0x1400F697C (-NextTopWindow@FindNextTopWindow@@YAPEAUtagWND@@PEBU2@0W4FindOption@1@@Z.c)
 *     _anonymous_namespace_::NTW_GetNextTop @ 0x1400F8248 (_anonymous_namespace_--NTW_GetNextTop.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14026C310 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall anonymous_namespace_::GNT_NextTopScan(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 result; // rax

  if ( a2 )
  {
    result = *(_QWORD *)(a2 + 88);
  }
  else
  {
    v5 = *(_QWORD *)(a1 + 496);
    if ( !v5 || (*(_DWORD *)(v5 + 48) & 2) != 0 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 27);
    v6 = *(_QWORD *)(a1 + 496);
    if ( !v6 || (*(_DWORD *)(v6 + 48) & 2) != 0 )
      return 0LL;
    result = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v6 + 8) + 24LL) + 112LL);
  }
  while ( result && *(_QWORD *)(result + 120) != a3 )
    result = *(_QWORD *)(result + 88);
  return result;
}
