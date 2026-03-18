/*
 * XREFs of MiFlushDirtyBitsToPfn @ 0x140233F80
 * Callers:
 *     MmFlushVirtualMemory @ 0x1409D1A4C (MmFlushVirtualMemory.c)
 * Callees:
 *     MiWriteValidPteNewProtection @ 0x140219260 (MiWriteValidPteNewProtection.c)
 *     MiInitializeTbFlushList @ 0x140233BB0 (MiInitializeTbFlushList.c)
 *     MiGetNextPageTable @ 0x140235DA0 (MiGetNextPageTable.c)
 *     MiReleaseProcessorFlushList @ 0x14023FFD0 (MiReleaseProcessorFlushList.c)
 *     MiInsertTbFlushEntry @ 0x1402432E0 (MiInsertTbFlushEntry.c)
 *     MiGetProcessorFlushList @ 0x1402894BC (MiGetProcessorFlushList.c)
 *     MiFlushTbList @ 0x140291730 (MiFlushTbList.c)
 *     HvlNotifyLongSpinWait @ 0x140293260 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140293290 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiGetLeafVa @ 0x1402DEE20 (MiGetLeafVa.c)
 *     MiLockWorkingSetShared @ 0x1402DF970 (MiLockWorkingSetShared.c)
 *     MiUnlockWorkingSetShared @ 0x1402E0410 (MiUnlockWorkingSetShared.c)
 *     MiSetPfnModified @ 0x1402E4730 (MiSetPfnModified.c)
 *     MiUnlockPageTableInternal @ 0x140321070 (MiUnlockPageTableInternal.c)
 *     KeYieldProcessorEx @ 0x1403F9C60 (KeYieldProcessorEx.c)
 */

_UNKNOWN **__fastcall MiFlushDirtyBitsToPfn(unsigned __int64 a1, unsigned __int64 a2, __int64 a3)
{
  _UNKNOWN **result; // rax
  unsigned __int64 *v4; // rdi
  unsigned __int64 v5; // rbp
  __int64 v6; // r13
  unsigned __int8 v7; // r12
  unsigned __int64 NextPageTable; // rax
  __int64 v9; // rdx
  unsigned __int64 v10; // r8
  __int64 v11; // rsi
  __int64 v12; // r14
  unsigned __int64 v13; // rbx
  __int64 v14; // rcx
  __int64 v15; // r14
  unsigned int v16; // r15d
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  unsigned __int64 v22; // rsi
  __int64 v23; // rdx
  unsigned __int64 v24; // r14
  __int64 v25; // rcx
  __int64 v26; // rdi
  unsigned int v27; // r15d
  volatile signed __int32 *v28; // rbx
  unsigned int v29; // [rsp+30h] [rbp-48h] BYREF
  int v30; // [rsp+34h] [rbp-44h] BYREF
  __int64 ProcessorFlushList; // [rsp+38h] [rbp-40h]
  unsigned __int64 v32; // [rsp+40h] [rbp-38h]
  _UNKNOWN *retaddr; // [rsp+78h] [rbp+0h] BYREF
  unsigned __int8 v34; // [rsp+98h] [rbp+20h]

  result = &retaddr;
  v29 = 0;
  if ( !byte_140E2DB40 )
  {
    v4 = (unsigned __int64 *)(((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
    v5 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v6 = *(_QWORD *)(a3 + 184) + 1024LL;
    v34 = MiLockWorkingSetShared(v6);
    v7 = v34;
    while ( (unsigned __int64)v4 <= v5 )
    {
      NextPageTable = MiGetNextPageTable((_DWORD)v4, v5, v7, 0, (__int64)&v29);
      v4 = (unsigned __int64 *)NextPageTable;
      if ( !NextPageTable )
        break;
      v10 = ((NextPageTable >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v32 = v10;
      if ( v29 )
      {
        v22 = ((NextPageTable >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        v23 = v29;
        do
        {
          v10 = ((v10 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
          --v23;
        }
        while ( v23 );
        v32 = v10;
        v24 = 0x200000LL;
        if ( v29 > 1 )
        {
          v25 = v29 - 1;
          do
          {
            v22 = ((v22 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
            v24 <<= 9;
            --v25;
          }
          while ( v25 );
        }
        if ( (*(_QWORD *)v22 & 0x42) != 0 && (*(_QWORD *)v22 & 1) != 0 )
        {
          v26 = 48 * ((*(_QWORD *)v22 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
          v27 = 0;
          if ( v24 )
          {
            v28 = (volatile signed __int32 *)(v26 + 24);
            do
            {
              v30 = 0;
              while ( _interlockedbittestandset64(v28, 0x3FuLL) )
              {
                do
                  KeYieldProcessorEx(&v30);
                while ( *(__int64 *)v28 < 0 );
              }
              MiSetPfnModified(v26, 1LL);
              _InterlockedAnd64((volatile signed __int64 *)v28, 0x7FFFFFFFFFFFFFFFuLL);
              v27 += 4096;
              v26 += 48LL;
              v28 += 12;
            }
            while ( v27 < v24 );
            v7 = v34;
          }
        }
        v4 = (unsigned __int64 *)((((unsigned __int64)MiGetLeafVa(v22 + 8) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
      }
      else
      {
        v11 = (__int64)(NextPageTable << 25) >> 16;
        v12 = 0LL;
        ProcessorFlushList = 0LL;
        do
        {
          v13 = *v4;
          if ( (*v4 & 0x42) != 0 && (*v4 & 1) != 0 )
          {
            v14 = 0xFFFFFFFFFFLL;
            v15 = 48 * ((v13 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
            v16 = 0;
            while ( _interlockedbittestandset64((volatile signed __int32 *)(v15 + 24), 0x3FuLL) )
            {
              do
              {
                if ( (++v16 & HvlLongSpinCountMask) == 0
                  && (HvlEnlightenments & 0x40) != 0
                  && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v14) )
                {
                  HvlNotifyLongSpinWait(v16);
                }
                else
                {
                  _mm_pause();
                }
              }
              while ( *(__int64 *)(v15 + 24) < 0 );
            }
            MiSetPfnModified(v15, 1LL);
            _InterlockedAnd64((volatile signed __int64 *)(v15 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            MiWriteValidPteNewProtection((ULONG_PTR)v4, v13 & 0xFFFFFFFFFFFFFFBDuLL);
            v12 = ProcessorFlushList;
            if ( !ProcessorFlushList )
            {
              ProcessorFlushList = MiGetProcessorFlushList(v18, v17);
              v12 = ProcessorFlushList;
              MiInitializeTbFlushList(ProcessorFlushList, v6, *(_DWORD *)(ProcessorFlushList + 12), 0, 10);
            }
            MiInsertTbFlushEntry(v12, v11, 1LL);
          }
          v11 += 4096LL;
          ++v4;
        }
        while ( (v11 & 0x1FFFFF) != 0 && (unsigned __int64)v4 <= v5 );
        v7 = v34;
        if ( v12 )
        {
          MiFlushTbList(v12, v9);
          MiReleaseProcessorFlushList(v20, v19, v21);
        }
      }
      MiUnlockPageTableInternal(v6, v32);
    }
    return (_UNKNOWN **)MiUnlockWorkingSetShared(v6, v7);
  }
  return result;
}
