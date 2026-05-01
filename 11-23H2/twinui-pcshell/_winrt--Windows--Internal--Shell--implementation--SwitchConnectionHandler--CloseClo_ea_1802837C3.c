/*
 * XREFs of _winrt::Windows::Internal::Shell::implementation::SwitchConnectionHandler::CloseCloudPCConnection$_ResumeCoro$1_::_1_::dtor$11 @ 0x1802837C3
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$enable_shared_from_this@VCAppThumbnailWindow@@@std@@IEAA@XZ @ 0x18054C48C (--1-$enable_shared_from_this@VCAppThumbnailWindow@@@std@@IEAA@XZ.c)
 */

__int64 __fastcall winrt::Windows::Internal::Shell::implementation::SwitchConnectionHandler::CloseCloudPCConnection__ResumeCoro_1_::_1_::dtor_11(
        __int64 a1,
        __int64 a2)
{
  *(_QWORD *)(a2 + 256) = *(_QWORD *)(a2 + 144) + 248LL;
  return std::enable_shared_from_this<CAppThumbnailWindow>::~enable_shared_from_this<CAppThumbnailWindow>(*(_QWORD *)(a2 + 256));
}
