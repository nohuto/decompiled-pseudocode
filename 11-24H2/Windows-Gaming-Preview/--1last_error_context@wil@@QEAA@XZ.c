/*
 * XREFs of ??1last_error_context@wil@@QEAA@XZ @ 0x180004B40
 * Callers:
 *     _wil::details::StagingFailureInformation::StagingFailureInformation_::_1_::dtor$0 @ 0x1800436A6 (_wil--details--StagingFailureInformation--StagingFailureInformation_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

void __fastcall wil::last_error_context::~last_error_context(wil::last_error_context *this)
{
  if ( !*(_BYTE *)this )
    SetLastError(*((_DWORD *)this + 1));
}
