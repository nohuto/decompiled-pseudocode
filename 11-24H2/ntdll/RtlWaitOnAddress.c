/*
 * XREFs of RtlWaitOnAddress @ 0x18009B4E0
 * Callers:
 *     <none>
 * Callees:
 *     RtlpOptimizeWaitOnAddressWaitList @ 0x18009BA30 (RtlpOptimizeWaitOnAddressWaitList.c)
 *     RtlpWaitOnAddressRemoveWaitBlock @ 0x18009BA90 (RtlpWaitOnAddressRemoveWaitBlock.c)
 *     NtWaitForAlertByThreadId @ 0x1801658E0 (NtWaitForAlertByThreadId.c)
 */

__int64 __fastcall RtlWaitOnAddress(unsigned __int64 a1, _QWORD *a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbp
  unsigned int v5; // edi
  struct _TEB *v10; // rcx
  __int64 WaitOnAddressHashTable; // rsi
  __int64 v12; // rax
  signed __int64 v13; // rcx
  volatile signed __int64 *v14; // r9
  _QWORD *v15; // rax
  unsigned __int64 v16; // r8
  signed __int64 v17; // rax
  __int64 v18; // rbx
  __int64 v19; // rbx
  __int64 v20; // rbx
  bool v23; // zf
  unsigned __int64 v24; // r9
  unsigned __int64 v25; // r8
  unsigned __int64 v26; // rcx
  unsigned __int64 v27; // rax
  int i; // edx
  __int64 v29; // rbp
  unsigned int v30; // ebx
  bool v31; // zf
  unsigned int v32; // eax
  _QWORD v33[5]; // [rsp+20h] [rbp-48h] BYREF
  __int32 v34[2]; // [rsp+48h] [rbp-20h] BYREF

  v4 = (unsigned int)RtlpWaitOnAddressSpinCycleCount;
  v5 = 0;
  v34[1] = 0;
  if ( (unsigned __int64)(a3 - 1) <= 7 && ((a3 - 1) & a3) == 0 )
  {
    v33[0] = a1;
    v34[0] = 1;
    v33[3] = 0LL;
    v10 = NtCurrentTeb();
    v33[1] = v10->ClientId.UniqueThread;
    WaitOnAddressHashTable = (__int64)v10->ProcessEnvironmentBlock->WaitOnAddressHashTable;
    v12 = (a1 >> 5) & 0x7F;
    v13 = *(_QWORD *)(WaitOnAddressHashTable + 8 * v12);
    v14 = (volatile signed __int64 *)(WaitOnAddressHashTable + 8 * v12);
    while ( 1 )
    {
      v15 = v33;
      v16 = v13 ^ ((unsigned __int64)v33 ^ v13) & 0xFFFFFFFFFFFFFFFCuLL;
      v33[2] = v13 & 0xFFFFFFFFFFFFFFFCuLL;
      if ( (v13 & 0xFFFFFFFFFFFFFFFCuLL) != 0 )
        v15 = 0LL;
      v33[4] = v15;
      if ( (v13 & 0xFFFFFFFFFFFFFFFCuLL) != 0 )
        v16 |= 2uLL;
      v17 = _InterlockedCompareExchange64(v14, v16, v13);
      if ( v13 == v17 )
        break;
      v13 = v17;
    }
    if ( (((unsigned __int8)v13 ^ (unsigned __int8)v16) & 2) != 0 )
      RtlpOptimizeWaitOnAddressWaitList(v14);
    v18 = a3 - 1;
    if ( v18 )
    {
      v19 = v18 - 1;
      if ( v19 )
      {
        v20 = v19 - 2;
        if ( v20 )
        {
          if ( v20 != 4 )
          {
LABEL_15:
            RtlpWaitOnAddressRemoveWaitBlock(WaitOnAddressHashTable, v33);
            return v5;
          }
          v23 = *(_QWORD *)a1 == *a2;
        }
        else
        {
          v23 = *(_DWORD *)a1 == *(_DWORD *)a2;
        }
        if ( !v23 )
          goto LABEL_15;
LABEL_20:
        if ( MEMORY[0x7FFE036A] > 1u )
        {
          if ( MEMORY[0x7FFE0297] )
          {
            v24 = __rdtsc();
            v25 = v24 + v4;
            while ( 1 )
            {
              __asm { monitorx rax, rcx, rdx }
              if ( (v34[0] & 1) == 0 )
                break;
              v26 = v24;
              v27 = __rdtsc();
              v24 = v27;
              if ( v27 < v26 || v27 >= v25 )
                break;
              __asm { mwaitx  rax, rcx, rbx }
            }
          }
          else
          {
            for ( i = 0; (v34[0] & 1) != 0 && i != (unsigned int)v4 / MEMORY[0x7FFE02D6]; ++i )
              _mm_pause();
          }
        }
        if ( !_interlockedbittestandreset(v34, 0) )
          return v5;
        v29 = v33[0];
        v30 = NtWaitForAlertByThreadId(v33[0], a4);
        if ( v30 == 258 )
        {
          if ( _InterlockedExchange(v34, 4) == 2 )
          {
            v32 = NtWaitForAlertByThreadId(v29, 0LL);
            if ( v32 != 257 )
              return v32;
            return v5;
          }
          RtlpWaitOnAddressRemoveWaitBlock(WaitOnAddressHashTable, v33);
        }
        if ( v30 != 257 )
          return v30;
        return v5;
      }
      v31 = *(_WORD *)a1 == *(_WORD *)a2;
    }
    else
    {
      v31 = *(_BYTE *)a1 == *(_BYTE *)a2;
    }
    if ( !v31 )
      goto LABEL_15;
    goto LABEL_20;
  }
  return 3221225485LL;
}
