/*
 * XREFs of LdrpDereferenceEnclave @ 0x1800DE050
 * Callers:
 *     LdrGetProcedureAddressForCaller @ 0x180007BE0 (LdrGetProcedureAddressForCaller.c)
 *     LdrpUnlockAndDereferenceEnclave @ 0x1800D8E20 (LdrpUnlockAndDereferenceEnclave.c)
 *     LdrDeleteEnclave @ 0x180134740 (LdrDeleteEnclave.c)
 * Callees:
 *     RtlFreeHeap @ 0x180080DD0 (RtlFreeHeap.c)
 */

__int64 __fastcall LdrpDereferenceEnclave(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  __int64 v6; // r9

  result = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 60), 0xFFFFFFFF);
  if ( (_DWORD)result == 1 )
  {
    RtlFreeHeap(LdrpHeap, 0, *(_QWORD *)(a1 + 112), a4);
    return RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, a1, v6);
  }
  return result;
}
