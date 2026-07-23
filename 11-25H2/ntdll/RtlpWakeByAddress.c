/*
 * XREFs of RtlpWakeByAddress @ 0x18007C470
 * Callers:
 *     RtlWakeAddressAll @ 0x1800044C0 (RtlWakeAddressAll.c)
 *     RtlpDereferenceWnfUserSubscription @ 0x180004BC0 (RtlpDereferenceWnfUserSubscription.c)
 *     RtlpWnfWalkUserSubscriptionList @ 0x180042A00 (RtlpWnfWalkUserSubscriptionList.c)
 *     LdrpAddUnicodeStringToSnapsBuffer @ 0x18007BAE0 (LdrpAddUnicodeStringToSnapsBuffer.c)
 *     RtlLeaveCriticalSection @ 0x18007C000 (RtlLeaveCriticalSection.c)
 *     RtlWakeAddressSingle @ 0x1800F1F50 (RtlWakeAddressSingle.c)
 *     RtlpUnWaitCriticalSection @ 0x18013C320 (RtlpUnWaitCriticalSection.c)
 *     RtlWakeAddressAllNoFence @ 0x180149F20 (RtlWakeAddressAllNoFence.c)
 *     RtlWakeAddressSingleNoFence @ 0x180149F30 (RtlWakeAddressSingleNoFence.c)
 * Callees:
 *     RtlpWaitOnAddressWakeEntireList @ 0x180007734 (RtlpWaitOnAddressWakeEntireList.c)
 *     ZwAlertThreadByThreadIdEx @ 0x180164050 (ZwAlertThreadByThreadIdEx.c)
 */

int __fastcall RtlpWakeByAddress(unsigned __int64 a1, char a2, __int64 a3)
{
  bool v3; // bp
  __int64 v4; // rdi
  unsigned __int64 v7; // r9
  _PEB *ProcessEnvironmentBlock; // rbx
  __int64 v9; // r8
  signed __int64 v10; // rax
  signed __int64 v11; // rdx
  signed __int64 v12; // rtt
  signed __int64 v13; // rtt
  __int64 v14; // r10
  __int64 v15; // r13
  unsigned __int64 v16; // rcx
  __int64 v17; // r15
  __int64 v18; // r14
  __int64 v19; // rsi
  unsigned __int64 v20; // rdx
  char v21; // r8
  signed __int64 v22; // rtt
  __int64 v23; // rcx
  __int64 v24; // rax
  unsigned __int64 v25; // r14
  _QWORD *v26; // r10

  v3 = 0;
  v4 = (a1 >> 5) & 0x7F;
  v7 = a1;
  ProcessEnvironmentBlock = NtCurrentTeb()->ProcessEnvironmentBlock;
  v9 = 0LL;
  v10 = (signed __int64)ProcessEnvironmentBlock->WaitOnAddressHashTable[v4];
  while ( v10 && (v10 & 1) == 0 )
  {
    if ( (v10 & 2) != 0 )
    {
      v13 = v10;
      v10 = _InterlockedCompareExchange64(
              (volatile signed __int64 *)&ProcessEnvironmentBlock->WaitOnAddressHashTable[v4],
              v10 | 1,
              v10);
      if ( v13 == v10 )
        return v10;
    }
    else
    {
      v11 = v10 | 2;
      v12 = v10;
      v10 = _InterlockedCompareExchange64(
              (volatile signed __int64 *)&ProcessEnvironmentBlock->WaitOnAddressHashTable[v4],
              v10 | 2,
              v10);
      if ( v12 == v10 )
      {
LABEL_38:
        v25 = v11 & 0xFFFFFFFFFFFFFFFCuLL;
        v26 = (_QWORD *)(v11 & 0xFFFFFFFFFFFFFFFCuLL);
        if ( !*(_QWORD *)((v11 & 0xFFFFFFFFFFFFFFFCuLL) + 32) )
        {
          do
          {
            v10 = (signed __int64)v26;
            v26 = (_QWORD *)v26[2];
            v26[3] = v10;
          }
          while ( !v26[4] );
        }
        v14 = v26[4];
        *(_QWORD *)(v25 + 32) = v14;
        while ( v14 )
        {
          v15 = *(_QWORD *)(v14 + 24);
          if ( *(_QWORD *)v14 == v7 )
          {
            v16 = *(_QWORD *)(v14 + 16);
            if ( v14 == v25 )
            {
              if ( v16 )
                v16 = v11 ^ (v11 ^ v16) & 0xFFFFFFFFFFFFFFFCuLL;
              v10 = _InterlockedCompareExchange64(
                      (volatile signed __int64 *)&ProcessEnvironmentBlock->WaitOnAddressHashTable[v4],
                      v16,
                      v11);
              if ( v11 != v10 )
              {
                v11 = v10;
                goto LABEL_38;
              }
              v17 = *(_QWORD *)(v14 + 16);
              v3 = v16 == 0;
              if ( v17 )
              {
                *(_QWORD *)(v17 + 24) = 0LL;
                *(_QWORD *)(v17 + 32) = *(_QWORD *)(v14 + 32);
              }
            }
            else
            {
              *(_QWORD *)(v15 + 16) = v16;
              v23 = *(_QWORD *)(v14 + 16);
              v24 = *(_QWORD *)(v14 + 24);
              if ( v23 )
              {
                *(_QWORD *)(v23 + 24) = v24;
              }
              else
              {
                *(_QWORD *)(v25 + 32) = v24;
                *(_QWORD *)(*(_QWORD *)(v14 + 24) + 32LL) = *(_QWORD *)(v14 + 24);
              }
            }
            LODWORD(v10) = _InterlockedExchange((volatile __int32 *)(v14 + 40), 2);
            if ( (_DWORD)v10 != 2 )
            {
              if ( !(_DWORD)v10 )
              {
                *(_QWORD *)(v14 + 16) = v9;
                v9 = v14;
              }
              if ( !a2 )
                break;
            }
          }
          v14 = v15;
        }
        v18 = 0LL;
        if ( !a2 )
          v18 = a3;
        if ( v9 )
        {
          do
          {
            v19 = *(_QWORD *)(v9 + 16);
            LODWORD(v10) = ZwAlertThreadByThreadIdEx(*(_QWORD *)(v9 + 8), v18, v9, v7);
            v9 = v19;
          }
          while ( v19 );
        }
        if ( !v3 )
        {
          v10 = (signed __int64)ProcessEnvironmentBlock->WaitOnAddressHashTable[v4];
          do
          {
            v20 = 0LL;
            v21 = v10 & 1;
            if ( (v10 & 1) == 0 )
              v20 = v10 & 0xFFFFFFFFFFFFFFFCuLL;
            v22 = v10;
            v10 = _InterlockedCompareExchange64(
                    (volatile signed __int64 *)&ProcessEnvironmentBlock->WaitOnAddressHashTable[v4],
                    v20,
                    v10);
          }
          while ( v22 != v10 );
          if ( v21 )
            LODWORD(v10) = RtlpWaitOnAddressWakeEntireList(v10);
        }
        return v10;
      }
    }
  }
  return v10;
}
