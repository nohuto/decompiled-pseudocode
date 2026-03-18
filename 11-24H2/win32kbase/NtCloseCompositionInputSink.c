/*
 * XREFs of NtCloseCompositionInputSink @ 0x1400F5470
 * Callers:
 *     <none>
 * Callees:
 *     ?Close@InputSink@InputTraceLogging@@SAXPEAX_N@Z @ 0x1400F549C (-Close@InputSink@InputTraceLogging@@SAXPEAX_N@Z.c)
 */

NTSTATUS __fastcall NtCloseCompositionInputSink(HANDLE Handle)
{
  InputTraceLogging::InputSink::Close(Handle, 0);
  return NtClose(Handle);
}
