/*
 * XREFs of PoGetRequester @ 0x1404E12D0
 * Callers:
 *     PoCaptureReasonContext @ 0x1402BC6B8 (PoCaptureReasonContext.c)
 * Callees:
 *     PsGetSessionIdEx @ 0x14030CBE0 (PsGetSessionIdEx.c)
 *     ObfReferenceObjectWithTag @ 0x14031F8C0 (ObfReferenceObjectWithTag.c)
 *     RtlReadULong64FromUser @ 0x1406FA06C (RtlReadULong64FromUser.c)
 *     RtlReadULongFromUser @ 0x1406FA0A8 (RtlReadULongFromUser.c)
 *     PopUnicodeStringDeepCopy @ 0x140A473D8 (PopUnicodeStringDeepCopy.c)
 */

__int64 __fastcall PoGetRequester(char a1, void *a2, __int64 a3)
{
  struct _KTHREAD *CurrentThread; // rdx
  char *Teb; // rdx
  _KPROCESS *Process; // rcx
  __int16 v7; // ax
  char v8; // al
  __int64 ULongFromUser; // rax
  _KPROCESS *v10; // rbx
  __int64 result; // rax
  __int64 v12; // [rsp+48h] [rbp+20h]

  if ( !a1 )
  {
    *(_DWORD *)a3 = 0;
    *(_QWORD *)(a3 + 8) = a2;
    if ( a2 )
      ObfReferenceObjectWithTag(a2, 0x67446F50u);
    return 0LL;
  }
  v12 = 0LL;
  CurrentThread = KeGetCurrentThread();
  if ( (CurrentThread->MiscFlags & 0x400) != 0 || CurrentThread->ApcStateIndex == 1 )
    Teb = 0LL;
  else
    Teb = (char *)CurrentThread->Teb;
  if ( Teb )
  {
    if ( KeGetCurrentThread()->ApcState.Process[1].ReadyTime
      && (Process = KeGetCurrentThread()->ApcState.Process, Process[1].ReadyTime)
      && ((v7 = WORD2(Process[3].PerProcessorCycleTimes), v7 == 332) || v7 == 452 ? (v8 = 1) : (v8 = 0), v8) )
    {
      ULongFromUser = (unsigned int)RtlReadULongFromUser(Teb + 12128);
    }
    else
    {
      ULongFromUser = RtlReadULong64FromUser(Teb + 5920);
    }
    v12 = ULongFromUser;
  }
  *(_DWORD *)a3 = (v12 != 0) + 1;
  v10 = KeGetCurrentThread()->ApcState.Process;
  *(_DWORD *)(a3 + 32) = v10[1].Header.WaitListHead.Flink;
  *(_DWORD *)(a3 + 36) = PsGetSessionIdEx((__int64)v10);
  result = PopUnicodeStringDeepCopy((PUNICODE_STRING)(a3 + 16), (PCUNICODE_STRING)v10[1].LastRebalanceQpc);
  if ( (int)result >= 0 )
  {
    *(_DWORD *)(a3 + 40) = v12;
    return 0LL;
  }
  return result;
}
