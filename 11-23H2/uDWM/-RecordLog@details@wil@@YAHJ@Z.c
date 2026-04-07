/*
 * XREFs of ?RecordLog@details@wil@@YAHJ@Z @ 0x18009C67C
 * Callers:
 *     ?LogFailure@details@wil@@YAXPEAXIPEBD110W4FailureType@2@AEBUResultStatus@12@PEBG_NPEAG_KPEAD7PEAUFailureInfo@2@@Z @ 0x18009BB74 (-LogFailure@details@wil@@YAXPEAXIPEBD110W4FailureType@2@AEBUResultStatus@12@PEBG_NPEAG_KPEAD7PEA.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall wil::details::RecordLog(wil::details *this)
{
  `wil::details::RecordLog'::`2'::s_hrErrorLast = (int)this;
  return (unsigned int)_InterlockedIncrement(&`wil::details::RecordLog'::`2'::s_cErrorCount);
}
