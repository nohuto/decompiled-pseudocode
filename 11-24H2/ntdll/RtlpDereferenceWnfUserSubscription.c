/*
 * XREFs of RtlpDereferenceWnfUserSubscription @ 0x180099550
 * Callers:
 *     RtlpRemoveUserSubFromNameSub @ 0x180099388 (RtlpRemoveUserSubFromNameSub.c)
 * Callees:
 *     RtlpWakeByAddress @ 0x180014E60 (RtlpWakeByAddress.c)
 *     RtlFreeHeap @ 0x1800269F0 (RtlFreeHeap.c)
 *     RtlpDecrementWnfSerializationGroup @ 0x180099634 (RtlpDecrementWnfSerializationGroup.c)
 */

signed __int64 __fastcall RtlpDereferenceWnfUserSubscription(unsigned __int64 a1, _QWORD *a2, _QWORD *a3, __int64 a4)
{
  signed __int64 v7; // rax
  bool v8; // cc
  signed __int64 v9; // rax
  signed __int64 result; // rax
  __int64 v11; // rcx
  __int64 v12; // rdx
  _QWORD *v13; // rcx
  _DWORD *v14; // r14
  signed __int32 v15[10]; // [rsp+0h] [rbp-28h] BYREF

  v7 = _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 32), 0xFFFFFFFFFFFFFFFFuLL);
  v8 = v7 <= 1;
  v9 = v7 - 1;
  if ( v8 )
  {
    if ( v9 )
      __fastfail(0xEu);
    v11 = *(_QWORD *)(a1 + 80);
    if ( v11 )
      RtlpDecrementWnfSerializationGroup(v11, a2, a3, a4);
    v12 = *(_QWORD *)(a1 + 8);
    if ( *(_QWORD *)(v12 + 8) != a1 + 8 || (v13 = *(_QWORD **)(a1 + 16), *v13 != a1 + 8) )
      __fastfail(3u);
    *v13 = v12;
    *(_QWORD *)(v12 + 8) = v13;
    v14 = *(_DWORD **)(a1 + 88);
    *a2 = *(_QWORD *)(a1 + 96);
    *a3 = *(_QWORD *)(a1 + 104);
    result = RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, a1);
    if ( v14 )
    {
      *v14 = 1;
      _InterlockedOr(v15, 0);
      return RtlpWakeByAddress((unsigned __int64)v14, 0, 0LL);
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
