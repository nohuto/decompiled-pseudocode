/*
 * XREFs of TppIopValidateIo @ 0x1800D6D50
 * Callers:
 *     TpReleaseIoCompletion @ 0x1800D6CA0 (TpReleaseIoCompletion.c)
 * Callees:
 *     TppRaiseInvalidParameter @ 0x18003EEE4 (TppRaiseInvalidParameter.c)
 */

__int64 __fastcall TppIopValidateIo(__int64 a1, int a2, int a3)
{
  int v3; // eax
  void *ThreadPoolData; // rax

  if ( a1 )
  {
    v3 = *(_DWORD *)(a1 + 168);
    if ( (v3 & 0x10000) == 0
      && ((v3 & 0x20000) == 0
       || a2
       && (ThreadPoolData = NtCurrentTeb()->ThreadPoolData) != 0LL
       && *(_QWORD *)(*(_QWORD *)ThreadPoolData + 240LL) == a1)
      && *(__int64 (__fastcall ***)(PVOID))(a1 + 8) == &TppIopCleanupGroupMemberVFuncs
      && !NtCurrentPeb()->Ldr->ShutdownInProgress )
    {
      return 1LL;
    }
  }
  if ( a3 || !NtCurrentPeb()->Ldr->ShutdownInProgress )
    TppRaiseInvalidParameter();
  return 0LL;
}
