/*
 * XREFs of ?OnSessionRevoked@UniqueExtendedExecutionSession@@QEAAJPEAUIInspectable@@PEAUIExtendedExecutionRevokedEventArgs@ExtendedExecution@ApplicationModel@Windows@@@Z @ 0x18008E5D0
 * Callers:
 *     <none>
 * Callees:
 *     ?CloseSession@UniqueExtendedExecutionSession@@AEAAX_N@Z @ 0x18008D5E0 (-CloseSession@UniqueExtendedExecutionSession@@AEAAX_N@Z.c)
 */

__int64 __fastcall UniqueExtendedExecutionSession::OnSessionRevoked(
        struct IUnknown *this,
        struct IInspectable *a2,
        struct Windows::ApplicationModel::ExtendedExecution::IExtendedExecutionRevokedEventArgs *a3)
{
  UniqueExtendedExecutionSession::CloseSession(this, 1);
  return 0LL;
}
