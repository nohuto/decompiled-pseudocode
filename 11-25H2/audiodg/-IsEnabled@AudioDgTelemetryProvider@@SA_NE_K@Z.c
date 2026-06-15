/*
 * XREFs of ?IsEnabled@AudioDgTelemetryProvider@@SA_NE_K@Z @ 0x1400359CC
 * Callers:
 *     ?CreateDevicePipeInstance@CPipeInstance@@SAJPEAUIAudioProcessor@@PEAUIDeviceGraphObjectCache@@PEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@AEAV?$unique_ptr@VCPipeInstance@@U?$default_delete@VCPipeInstance@@@wistd@@@wistd@@@Z @ 0x14002563C (-CreateDevicePipeInstance@CPipeInstance@@SAJPEAUIAudioProcessor@@PEAUIDeviceGraphObjectCache@@PE.c)
 * Callees:
 *     ?get@?$static_lazy@VAudioDgTelemetryProvider@@@details@wil@@QEAAPEAVAudioDgTelemetryProvider@@P6AXXZ@Z @ 0x1400073D4 (-get@-$static_lazy@VAudioDgTelemetryProvider@@@details@wil@@QEAAPEAVAudioDgTelemetryProvider@@P6.c)
 *     _tlgKeywordOn @ 0x140035A14 (_tlgKeywordOn.c)
 */

char __fastcall AudioDgTelemetryProvider::IsEnabled(__int64 a1)
{
  __int64 *v1; // rax
  char v2; // r9
  _DWORD *v3; // rcx

  v1 = wil::details::static_lazy<AudioDgTelemetryProvider>::get(
         a1,
         (void (__cdecl *)())_lambda_5306e8013c9084f1ba6b78d0c08c093f_::_lambda_invoker_cdecl_);
  v2 = 0;
  v3 = (_DWORD *)v1[1];
  if ( v3 && *v3 > 4u )
    return (unsigned __int8)tlgKeywordOn(v3, 0x400000000000LL) != 0;
  return v2;
}
