/*
 * XREFs of RtlpDereferenceWnfUserSubscription @ 0x18002E3A0
 * Callers:
 *     RtlpRemoveUserSubFromNameSub @ 0x18002E1D8 (RtlpRemoveUserSubFromNameSub.c)
 * Callees:
 *     RtlpDecrementWnfSerializationGroup @ 0x18002E484 (RtlpDecrementWnfSerializationGroup.c)
 *     RtlpWakeByAddress @ 0x180041860 (RtlpWakeByAddress.c)
 *     RtlFreeHeap @ 0x1800533F0 (RtlFreeHeap.c)
 */

LOGICAL __fastcall RtlpDereferenceWnfUserSubscription(volatile signed __int64 *BaseAddress, _QWORD *a2, _QWORD *a3)
{
  signed __int64 v6; // rax
  bool v7; // cc
  signed __int64 v8; // rax
  LOGICAL result; // eax
  __int64 v10; // rcx
  volatile signed __int64 **v11; // rdx
  PVOID *v12; // rcx
  _DWORD *v13; // r14
  signed __int32 v14[10]; // [rsp+0h] [rbp-28h] BYREF

  v6 = _InterlockedExchangeAdd64(BaseAddress + 4, 0xFFFFFFFFFFFFFFFFuLL);
  v7 = v6 <= 1;
  v8 = v6 - 1;
  if ( v7 )
  {
    if ( v8 )
      __fastfail(0xEu);
    v10 = *((_QWORD *)BaseAddress + 10);
    if ( v10 )
      RtlpDecrementWnfSerializationGroup(v10);
    v11 = (volatile signed __int64 **)*((_QWORD *)BaseAddress + 1);
    if ( v11[1] != BaseAddress + 1 || (v12 = (PVOID *)*((_QWORD *)BaseAddress + 2), *v12 != BaseAddress + 1) )
      __fastfail(3u);
    *v12 = v11;
    v11[1] = (volatile signed __int64 *)v12;
    v13 = (_DWORD *)*((_QWORD *)BaseAddress + 11);
    *a2 = *((_QWORD *)BaseAddress + 12);
    *a3 = *((_QWORD *)BaseAddress + 13);
    result = RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, (PVOID)BaseAddress);
    if ( v13 )
    {
      *v13 = 1;
      _InterlockedOr(v14, 0);
      return RtlpWakeByAddress(v13, 0LL, 0LL);
    }
  }
  else
  {
    result = 0;
    *a2 = 0LL;
    *a3 = 0LL;
  }
  return result;
}
