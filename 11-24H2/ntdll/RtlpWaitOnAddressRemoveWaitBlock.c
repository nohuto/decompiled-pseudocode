/*
 * XREFs of RtlpWaitOnAddressRemoveWaitBlock @ 0x1800308E0
 * Callers:
 *     RtlpWaitOnCriticalSection @ 0x18002F5F0 (RtlpWaitOnCriticalSection.c)
 *     RtlWaitOnAddress @ 0x180030330 (RtlWaitOnAddress.c)
 *     RtlpWaitOnAddress @ 0x1800305D0 (RtlpWaitOnAddress.c)
 *     RtlpWaitOnAddressWithTimeout @ 0x180031350 (RtlpWaitOnAddressWithTimeout.c)
 * Callees:
 *     RtlpWaitOnAddressWithTimeout @ 0x180031350 (RtlpWaitOnAddressWithTimeout.c)
 *     RtlpWaitOnAddressWakeEntireList @ 0x180031484 (RtlpWaitOnAddressWakeEntireList.c)
 *     NtWaitForAlertByThreadId @ 0x180163CA0 (NtWaitForAlertByThreadId.c)
 */

__int64 __fastcall RtlpWaitOnAddressRemoveWaitBlock(__int64 a1, __int64 a2)
{
  volatile signed __int64 *v3; // rdi
  signed __int64 v4; // rax
  signed __int64 v5; // rbx
  signed __int64 v6; // rtt
  unsigned __int64 v7; // rcx
  char v8; // r8
  unsigned __int64 v9; // rbp
  unsigned __int64 v10; // rsi
  unsigned __int64 v11; // rdx
  signed __int64 v12; // rtt
  __int64 result; // rax
  unsigned __int64 v14; // rcx
  unsigned __int64 v15; // rcx
  char v16; // dl
  bool v17; // zf

  v3 = (volatile signed __int64 *)(a1 + 8LL * ((*(_DWORD *)a2 >> 5) & 0x7F));
  v4 = *v3;
  do
  {
    while ( 1 )
    {
      if ( !v4 )
      {
LABEL_11:
        result = (unsigned int)_InterlockedExchange((volatile __int32 *)(a2 + 40), 1);
        if ( (_DWORD)result != 2 )
          return RtlpWaitOnAddressWithTimeout(a1, a2, 0LL, (unsigned int)RtlpWaitOnAddressSpinCycleCount, 0LL);
        return result;
      }
      if ( (v4 & 2) == 0 )
        break;
      v12 = v4;
      v4 = _InterlockedCompareExchange64(v3, v4 | 1, v4);
      if ( v12 == v4 )
        goto LABEL_11;
    }
    v5 = v4 | 2;
    v6 = v4;
    v4 = _InterlockedCompareExchange64(v3, v4 | 2, v4);
  }
  while ( v6 != v4 );
  v7 = v5 & 0xFFFFFFFFFFFFFFFCuLL;
  v8 = 0;
LABEL_6:
  v9 = *(_QWORD *)(v7 + 24);
  v10 = v7;
  while ( v7 )
  {
    v11 = *(_QWORD *)(v7 + 16);
    if ( v7 == a2 )
    {
      v8 = 1;
      if ( v7 == v10 )
      {
        v14 = *(_QWORD *)(v7 + 16);
        if ( v11 )
          v14 = v5 ^ (v11 ^ v5) & 0xFFFFFFFFFFFFFFFCuLL;
        result = _InterlockedCompareExchange64(v3, v14, v5);
        if ( v5 != result )
        {
          v5 = result;
          v7 = result & 0xFFFFFFFFFFFFFFFCuLL;
          goto LABEL_6;
        }
        if ( !v14 )
          return result;
        *(_QWORD *)(v11 + 24) = 0LL;
        v7 = v11;
        v10 = v11;
      }
      else
      {
        *(_QWORD *)(v9 + 16) = v11;
        if ( v11 )
          *(_QWORD *)(v11 + 24) = v9;
        else
          *(_QWORD *)(v9 + 32) = v9;
        v7 = v11;
      }
    }
    else
    {
      *(_QWORD *)(v7 + 24) = v9;
      v9 = v7;
      v7 = v11;
    }
  }
  if ( !v8 && _InterlockedExchange((volatile __int32 *)(a2 + 40), 0) != 2 )
    NtWaitForAlertByThreadId(*(PVOID *)a2, 0LL);
  *(_QWORD *)(v10 + 32) = v9;
  do
  {
    v15 = 0LL;
    v16 = v5 & 1;
    if ( (v5 & 1) == 0 )
      v15 = v5 & 0xFFFFFFFFFFFFFFFCuLL;
    result = _InterlockedCompareExchange64(v3, v15, v5);
    v17 = v5 == result;
    v5 = result;
  }
  while ( !v17 );
  if ( v16 )
    return RtlpWaitOnAddressWakeEntireList(result);
  return result;
}
