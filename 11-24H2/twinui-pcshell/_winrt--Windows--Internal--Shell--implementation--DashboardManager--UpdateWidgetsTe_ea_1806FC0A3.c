/*
 * XREFs of _winrt::Windows::Internal::Shell::implementation::DashboardManager::UpdateWidgetsTelemetryAsync$_ResumeCoro$1_::_1_::dtor$6 @ 0x1806FC0A3
 * Callers:
 *     <none>
 * Callees:
 *     std::optional__anonymous_namespace_::DashboardExtensionVersion_::_optional__anonymous_namespace_::DashboardExtensionVersion_ @ 0x18021E900 (std--optional__anonymous_namespace_--DashboardExtensionVersion_--_optional__anonymous_namespace_.c)
 */

__int64 __fastcall winrt::Windows::Internal::Shell::implementation::DashboardManager::UpdateWidgetsTelemetryAsync__ResumeCoro_1_::_1_::dtor_6(
        __int64 a1,
        __int64 a2)
{
  *(_QWORD *)(a2 + 320) = *(_QWORD *)(a2 + 120) + 192LL;
  return std::optional__anonymous_namespace_::DashboardExtensionVersion_::_optional__anonymous_namespace_::DashboardExtensionVersion_(*(_QWORD *)(a2 + 320));
}
