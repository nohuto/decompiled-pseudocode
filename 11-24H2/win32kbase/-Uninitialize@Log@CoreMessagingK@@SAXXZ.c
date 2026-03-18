/*
 * XREFs of ?Uninitialize@Log@CoreMessagingK@@SAXXZ @ 0x14019E7FC
 * Callers:
 *     CoreMsgUninitialize @ 0x1400FC290 (CoreMsgUninitialize.c)
 * Callees:
 *     <none>
 */

void __fastcall CoreMessagingK::Log::Uninitialize(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 CurrentProcess; // rax
  REGHANDLE v5; // rcx

  CurrentProcess = PsGetCurrentProcess(a1, a2, a3, a4);
  if ( !(unsigned int)PsGetProcessSessionId(CurrentProcess) )
  {
    v5 = qword_14029B160;
    qword_14029B160 = 0LL;
    dword_14029B140 = 0;
    EtwUnregister(v5);
  }
}
