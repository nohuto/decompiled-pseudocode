/*
 * XREFs of _winrt::Windows::Internal::Shell::implementation::SwitchConnectionHandler::CloseCloudPCConnection$_ResumeCoro$1_::_1_::dtor$21 @ 0x1802838DD
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$enable_shared_from_this@VCAppThumbnailWindow@@@std@@IEAA@XZ @ 0x18054C48C (--1-$enable_shared_from_this@VCAppThumbnailWindow@@@std@@IEAA@XZ.c)
 */

__int64 __fastcall winrt::Windows::Internal::Shell::implementation::SwitchConnectionHandler::CloseCloudPCConnection__ResumeCoro_1_::_1_::dtor_21(
        __int64 a1,
        __int64 a2)
{
  *(_QWORD *)(a2 + 304) = *(_QWORD *)(a2 + 144) + 632LL;
  return std::enable_shared_from_this<CAppThumbnailWindow>::~enable_shared_from_this<CAppThumbnailWindow>(*(_QWORD *)(a2 + 304));
}
