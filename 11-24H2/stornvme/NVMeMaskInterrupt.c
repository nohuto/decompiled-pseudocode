/*
 * XREFs of NVMeMaskInterrupt @ 0x1400069E0
 * Callers:
 *     ProcessCompletionQueues @ 0x140006790 (ProcessCompletionQueues.c)
 *     WaitForCommandCompleteWithCustomTimeout @ 0x140008650 (WaitForCommandCompleteWithCustomTimeout.c)
 *     NVMeHwMSIInterrupt @ 0x140008FC0 (NVMeHwMSIInterrupt.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall NVMeMaskInterrupt(__int64 a1, char a2)
{
  __int64 result; // rax
  _UNKNOWN *retaddr; // [rsp+0h] [rbp+0h] BYREF

  result = a1;
  if ( (*(_BYTE *)(a1 + 21) & 0x20) == 0 && (unsigned int)(*(_DWORD *)(a1 + 16) - 1) <= 1 )
  {
    *(_DWORD *)(*(_QWORD *)(a1 + 176) + 12LL) = 1 << a2;
    _InterlockedOr((volatile signed __int32 *)&retaddr, 0);
    *(_BYTE *)(a1 + 21) |= 0x20u;
  }
  return result;
}
