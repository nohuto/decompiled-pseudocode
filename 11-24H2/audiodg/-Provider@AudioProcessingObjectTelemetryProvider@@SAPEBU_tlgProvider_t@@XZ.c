/*
 * XREFs of ?Provider@AudioProcessingObjectTelemetryProvider@@SAPEBU_tlgProvider_t@@XZ @ 0x14003DC50
 * Callers:
 *     ?ApoLog@CAPOServiceProvider@@UEAAXW4APO_LOG_LEVEL@@PEBGZZ @ 0x14003D990 (-ApoLog@CAPOServiceProvider@@UEAAXW4APO_LOG_LEVEL@@PEBGZZ.c)
 * Callees:
 *     ?get@?$static_lazy@VAudioProcessingObjectTelemetryProvider@@@details@wil@@QEAAPEAVAudioProcessingObjectTelemetryProvider@@P6AXXZ@Z @ 0x14003DC70 (-get@-$static_lazy@VAudioProcessingObjectTelemetryProvider@@@details@wil@@QEAAPEAVAudioProcessin.c)
 */

const struct _tlgProvider_t *__fastcall AudioProcessingObjectTelemetryProvider::Provider(__int64 a1)
{
  return *(const struct _tlgProvider_t **)(wil::details::static_lazy<AudioProcessingObjectTelemetryProvider>::get(
                                             a1,
                                             _lambda_913fed5b937de95f3abbbafa6f2496a6_::_lambda_invoker_cdecl_)
                                         + 8);
}
