/*
 * XREFs of RtlpWaitOnAddress @ 0x1800305D0
 * Callers:
 *     RtlUnsubscribeWnfNotificationWaitForCompletion @ 0x18002EC70 (RtlUnsubscribeWnfNotificationWaitForCompletion.c)
 *     RtlpCSparseBitmapPageDecommit @ 0x18002EE00 (RtlpCSparseBitmapPageDecommit.c)
 *     RtlpCSparseBitmapPageCommit @ 0x18009C064 (RtlpCSparseBitmapPageCommit.c)
 *     RtlpHpEnvAcquireGlobalLockExclusive @ 0x1800D0AD4 (RtlpHpEnvAcquireGlobalLockExclusive.c)
 *     RtlUpdateSwapReference @ 0x1800D1CB4 (RtlUpdateSwapReference.c)
 *     RtlpHpEnvAcquireGlobalLockSharedContended @ 0x18011AE24 (RtlpHpEnvAcquireGlobalLockSharedContended.c)
 *     RtlPosixBarrier @ 0x18013C118 (RtlPosixBarrier.c)
 *     RtlRcuSynchronize @ 0x180146130 (RtlRcuSynchronize.c)
 * Callees:
 *     RtlpOptimizeWaitOnAddressWaitList @ 0x180030880 (RtlpOptimizeWaitOnAddressWaitList.c)
 *     RtlpWaitOnAddressRemoveWaitBlock @ 0x1800308E0 (RtlpWaitOnAddressRemoveWaitBlock.c)
 *     NtWaitForAlertByThreadId @ 0x180163CA0 (NtWaitForAlertByThreadId.c)
 */

__int64 __fastcall RtlpWaitOnAddress(
        unsigned __int64 a1,
        _QWORD *a2,
        __int64 a3,
        LARGE_INTEGER *a4,
        unsigned int a5,
        void *a6)
{
  unsigned int v6; // edi
  struct _TEB *v11; // rcx
  __int64 WaitOnAddressHashTable; // rsi
  __int64 v13; // rax
  signed __int64 v14; // rcx
  volatile signed __int64 *v15; // r9
  PVOID *v16; // rax
  unsigned __int64 v17; // r8
  signed __int64 v18; // rax
  __int64 v19; // rbx
  __int64 v20; // rbx
  __int64 v21; // rbx
  bool v24; // zf
  PVOID v25; // rbp
  unsigned __int64 v26; // r9
  unsigned __int64 v27; // r8
  unsigned __int64 v28; // rcx
  unsigned __int64 v29; // rax
  int i; // edx
  unsigned __int32 v31; // ebx
  bool v32; // zf
  unsigned __int32 v33; // eax
  PVOID Address[5]; // [rsp+20h] [rbp-48h] BYREF
  __int32 v35[8]; // [rsp+48h] [rbp-20h] BYREF

  v6 = 0;
  v35[1] = 0;
  if ( (unsigned __int64)(a3 - 1) <= 7 && ((a3 - 1) & a3) == 0 )
  {
    Address[0] = (PVOID)a1;
    v35[0] = 1;
    Address[3] = 0LL;
    v11 = NtCurrentTeb();
    Address[1] = v11->ClientId.UniqueThread;
    WaitOnAddressHashTable = (__int64)v11->ProcessEnvironmentBlock->WaitOnAddressHashTable;
    v13 = (a1 >> 5) & 0x7F;
    v14 = *(_QWORD *)(WaitOnAddressHashTable + 8 * v13);
    v15 = (volatile signed __int64 *)(WaitOnAddressHashTable + 8 * v13);
    while ( 1 )
    {
      v16 = Address;
      v17 = v14 ^ ((unsigned __int64)Address ^ v14) & 0xFFFFFFFFFFFFFFFCuLL;
      Address[2] = (PVOID)(v14 & 0xFFFFFFFFFFFFFFFCuLL);
      if ( (v14 & 0xFFFFFFFFFFFFFFFCuLL) != 0 )
        v16 = 0LL;
      Address[4] = v16;
      if ( (v14 & 0xFFFFFFFFFFFFFFFCuLL) != 0 )
        v17 |= 2uLL;
      v18 = _InterlockedCompareExchange64(v15, v17, v14);
      if ( v14 == v18 )
        break;
      v14 = v18;
    }
    if ( (((unsigned __int8)v14 ^ (unsigned __int8)v17) & 2) != 0 )
      RtlpOptimizeWaitOnAddressWaitList(v15);
    v19 = a3 - 1;
    if ( v19 )
    {
      v20 = v19 - 1;
      if ( v20 )
      {
        v21 = v20 - 2;
        if ( v21 )
        {
          if ( v21 != 4 )
          {
LABEL_15:
            RtlpWaitOnAddressRemoveWaitBlock(WaitOnAddressHashTable, Address);
            return v6;
          }
          v24 = *(_QWORD *)a1 == *a2;
        }
        else
        {
          v24 = *(_DWORD *)a1 == *(_DWORD *)a2;
        }
        if ( !v24 )
          goto LABEL_15;
LABEL_20:
        v25 = a6;
        if ( MEMORY[0x7FFE036A] > 1u )
        {
          if ( MEMORY[0x7FFE0297] )
          {
            v26 = __rdtsc();
            v27 = v26 + a5;
            while ( 1 )
            {
              __asm { monitorx rax, rcx, rdx }
              if ( (v35[0] & 1) == 0 )
                break;
              v28 = v26;
              v29 = __rdtsc();
              v26 = v29;
              if ( v29 < v28 || v29 >= v27 )
                break;
              __asm { mwaitx  rax, rcx, rbx }
            }
          }
          else
          {
            for ( i = 0; (v35[0] & 1) != 0 && i != a5 / MEMORY[0x7FFE02D6]; ++i )
              _mm_pause();
          }
        }
        if ( !_interlockedbittestandreset(v35, 0) )
          return v6;
        if ( !a6 )
          v25 = Address[0];
        v31 = NtWaitForAlertByThreadId(v25, a4);
        if ( v31 == 258 )
        {
          if ( _InterlockedExchange(v35, 4) == 2 )
          {
            v33 = NtWaitForAlertByThreadId(v25, 0LL);
            if ( v33 != 257 )
              return v33;
            return v6;
          }
          RtlpWaitOnAddressRemoveWaitBlock(WaitOnAddressHashTable, Address);
        }
        if ( v31 != 257 )
          return v31;
        return v6;
      }
      v32 = *(_WORD *)a1 == *(_WORD *)a2;
    }
    else
    {
      v32 = *(_BYTE *)a1 == *(_BYTE *)a2;
    }
    if ( !v32 )
      goto LABEL_15;
    goto LABEL_20;
  }
  return 3221225485LL;
}
