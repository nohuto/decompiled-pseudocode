/*
 * XREFs of ?SetTraceLoggingProvider@CAudioProcessor@@UEAAXPEBU_tlgProvider_t@@@Z @ 0x14004B1C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CAudioProcessor::SetTraceLoggingProvider(CAudioProcessor *this, const struct _tlgProvider_t *a2)
{
  *((_QWORD *)this + 101) = a2;
}
