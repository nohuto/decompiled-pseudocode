/*
 * XREFs of TppIopValidateIo @ 0x1800867B0
 * Callers:
 *     TpReleaseIoCompletion @ 0x180086700 (TpReleaseIoCompletion.c)
 * Callees:
 *     TppRaiseInvalidParameter @ 0x1800880D4 (TppRaiseInvalidParameter.c)
 */

__int64 __fastcall TppIopValidateIo(_PEB_LDR_DATA *Ldr, int a2, int a3)
{
  int ShutdownThreadId; // eax
  void *ThreadPoolData; // rax

  if ( Ldr )
  {
    ShutdownThreadId = (int)Ldr[1].ShutdownThreadId;
    if ( (ShutdownThreadId & 0x10000) == 0
      && ((ShutdownThreadId & 0x20000) == 0
       || a2
       && (ThreadPoolData = NtCurrentTeb()->ThreadPoolData) != 0LL
       && *(_PEB_LDR_DATA **)(*(_QWORD *)ThreadPoolData + 240LL) == Ldr)
      && Ldr->SsHandle == &TppIopCleanupGroupMemberVFuncs )
    {
      Ldr = NtCurrentPeb()->Ldr;
      if ( !Ldr->ShutdownInProgress )
        return 1LL;
    }
  }
  if ( a3 || (Ldr = NtCurrentPeb()->Ldr, !Ldr->ShutdownInProgress) )
    TppRaiseInvalidParameter(Ldr);
  return 0LL;
}
