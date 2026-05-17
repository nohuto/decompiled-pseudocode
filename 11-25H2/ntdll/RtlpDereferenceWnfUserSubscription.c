/*
 * XREFs of RtlpDereferenceWnfUserSubscription @ 0x180004BC0
 * Callers:
 *     RtlpRemoveUserSubFromNameSub @ 0x1800049F8 (RtlpRemoveUserSubFromNameSub.c)
 * Callees:
 *     RtlpDecrementWnfSerializationGroup @ 0x180004CA4 (RtlpDecrementWnfSerializationGroup.c)
 *     RtlpWakeByAddress @ 0x18007C470 (RtlpWakeByAddress.c)
 *     RtlFreeHeap @ 0x180080DD0 (RtlFreeHeap.c)
 */

__int64 __fastcall RtlpDereferenceWnfUserSubscription(__int64 a1, _QWORD *a2, _QWORD *a3)
{
  signed __int64 v6; // rax
  bool v7; // cc
  signed __int64 v8; // rax
  __int64 result; // rax
  __int64 v10; // rcx
  __int64 v11; // rdx
  _QWORD *v12; // rcx
  _DWORD *v13; // r14
  signed __int32 v14[10]; // [rsp+0h] [rbp-28h] BYREF

  v6 = _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 32), 0xFFFFFFFFFFFFFFFFuLL);
  v7 = v6 <= 1;
  v8 = v6 - 1;
  if ( v7 )
  {
    if ( v8 )
      __fastfail(0xEu);
    v10 = *(_QWORD *)(a1 + 80);
    if ( v10 )
      RtlpDecrementWnfSerializationGroup(v10);
    v11 = *(_QWORD *)(a1 + 8);
    if ( *(_QWORD *)(v11 + 8) != a1 + 8 || (v12 = *(_QWORD **)(a1 + 16), *v12 != a1 + 8) )
      __fastfail(3u);
    *v12 = v11;
    *(_QWORD *)(v11 + 8) = v12;
    v13 = *(_DWORD **)(a1 + 88);
    *a2 = *(_QWORD *)(a1 + 96);
    *a3 = *(_QWORD *)(a1 + 104);
    result = RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0LL, a1);
    if ( v13 )
    {
      *v13 = 1;
      _InterlockedOr(v14, 0);
      return RtlpWakeByAddress(v13, 0LL, 0LL);
    }
  }
  else
  {
    result = 0LL;
    *a2 = 0LL;
    *a3 = 0LL;
  }
  return result;
}
