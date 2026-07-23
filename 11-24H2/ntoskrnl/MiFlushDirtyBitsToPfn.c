/*
 * XREFs of MiFlushDirtyBitsToPfn @ 0x1402155E0
 * Callers:
 *     MmFlushVirtualMemory @ 0x1409C187C (MmFlushVirtualMemory.c)
 * Callees:
 *     MiReleaseProcessorFlushList @ 0x140208120 (MiReleaseProcessorFlushList.c)
 *     MiGetNextPageTable @ 0x14020FF30 (MiGetNextPageTable.c)
 *     MiInsertTbFlushEntry @ 0x1402137F0 (MiInsertTbFlushEntry.c)
 *     MiInitializeTbFlushList @ 0x140214780 (MiInitializeTbFlushList.c)
 *     MiSetPfnModified @ 0x140215EC0 (MiSetPfnModified.c)
 *     MiGetLeafVa @ 0x140240700 (MiGetLeafVa.c)
 *     MiLockWorkingSetShared @ 0x140241250 (MiLockWorkingSetShared.c)
 *     MiUnlockWorkingSetShared @ 0x140241CF0 (MiUnlockWorkingSetShared.c)
 *     MiWriteValidPteNewProtection @ 0x140245FB0 (MiWriteValidPteNewProtection.c)
 *     MiGetProcessorFlushList @ 0x1402990BC (MiGetProcessorFlushList.c)
 *     MiFlushTbList @ 0x1402A1330 (MiFlushTbList.c)
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiUnlockPageTableInternal @ 0x1402C9C00 (MiUnlockPageTableInternal.c)
 *     KeYieldProcessorEx @ 0x1403EFB70 (KeYieldProcessorEx.c)
 */

_UNKNOWN **__fastcall MiFlushDirtyBitsToPfn(unsigned __int64 a1, unsigned __int64 a2, __int64 a3)
{
  _UNKNOWN **result; // rax
  _QWORD *v4; // rdi
  unsigned __int64 v5; // rbp
  __int64 v6; // r13
  unsigned __int8 v7; // r12
  unsigned __int64 NextPageTable; // rax
  __int64 v9; // rdx
  __int64 v10; // r9
  unsigned __int64 v11; // r8
  unsigned __int64 v12; // rsi
  __int64 v13; // r14
  __int64 v14; // rcx
  __int64 v15; // r14
  unsigned int v16; // r15d
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  unsigned __int64 v20; // rsi
  __int64 v21; // rdx
  unsigned __int64 v22; // r14
  __int64 v23; // rcx
  __int64 v24; // rdi
  unsigned int v25; // r15d
  volatile signed __int32 *v26; // rbx
  unsigned int v27; // [rsp+30h] [rbp-48h] BYREF
  int v28; // [rsp+34h] [rbp-44h] BYREF
  __int64 ProcessorFlushList; // [rsp+38h] [rbp-40h]
  unsigned __int64 v30; // [rsp+40h] [rbp-38h]
  _UNKNOWN *retaddr; // [rsp+78h] [rbp+0h] BYREF
  unsigned __int8 v32; // [rsp+98h] [rbp+20h]

  result = &retaddr;
  v27 = 0;
  if ( !byte_140E2DC80 )
  {
    v4 = (_QWORD *)(((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
    v5 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v6 = *(_QWORD *)(a3 + 184) + 1024LL;
    v32 = MiLockWorkingSetShared(v6);
    v7 = v32;
    while ( (unsigned __int64)v4 <= v5 )
    {
      NextPageTable = MiGetNextPageTable((__int64)v4, v5, v7, 0, &v27);
      v4 = (_QWORD *)NextPageTable;
      if ( !NextPageTable )
        break;
      v11 = ((NextPageTable >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v30 = v11;
      if ( v27 )
      {
        v20 = ((NextPageTable >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        v21 = v27;
        do
        {
          v11 = ((v11 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
          --v21;
        }
        while ( v21 );
        v30 = v11;
        v22 = 0x200000LL;
        if ( v27 > 1 )
        {
          v23 = v27 - 1;
          do
          {
            v20 = ((v20 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
            v22 <<= 9;
            --v23;
          }
          while ( v23 );
        }
        if ( (*(_QWORD *)v20 & 0x42) != 0 && (*(_QWORD *)v20 & 1) != 0 )
        {
          v24 = 48 * ((*(_QWORD *)v20 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
          v25 = 0;
          if ( v22 )
          {
            v26 = (volatile signed __int32 *)(v24 + 24);
            do
            {
              v28 = 0;
              while ( _interlockedbittestandset64(v26, 0x3FuLL) )
              {
                do
                  KeYieldProcessorEx(&v28);
                while ( *(__int64 *)v26 < 0 );
              }
              MiSetPfnModified(v24, 1LL);
              _InterlockedAnd64((volatile signed __int64 *)v26, 0x7FFFFFFFFFFFFFFFuLL);
              v25 += 4096;
              v24 += 48LL;
              v26 += 12;
            }
            while ( v25 < v22 );
            v7 = v32;
          }
        }
        v4 = (_QWORD *)((((unsigned __int64)MiGetLeafVa(v20 + 8) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
      }
      else
      {
        v12 = (__int64)(NextPageTable << 25) >> 16;
        v13 = 0LL;
        ProcessorFlushList = 0LL;
        do
        {
          if ( (*v4 & 0x42) != 0 && (*v4 & 1) != 0 )
          {
            v14 = 0xFFFFFFFFFFLL;
            v15 = 48 * ((*v4 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
            v16 = 0;
            while ( _interlockedbittestandset64((volatile signed __int32 *)(v15 + 24), 0x3FuLL) )
            {
              do
              {
                if ( (++v16 & HvlLongSpinCountMask) == 0
                  && (HvlEnlightenments & 0x40) != 0
                  && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v14, v9, v11, v10) )
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
            MiWriteValidPteNewProtection((ULONG_PTR)v4);
            v13 = ProcessorFlushList;
            if ( !ProcessorFlushList )
            {
              ProcessorFlushList = MiGetProcessorFlushList(v18, v17, v19);
              v13 = ProcessorFlushList;
              MiInitializeTbFlushList(ProcessorFlushList, v6, *(_DWORD *)(ProcessorFlushList + 12), 0, 10);
            }
            MiInsertTbFlushEntry(v13, v12, 1LL, 0);
          }
          v12 += 4096LL;
          ++v4;
        }
        while ( (v12 & 0x1FFFFF) != 0 && (unsigned __int64)v4 <= v5 );
        v7 = v32;
        if ( v13 )
        {
          MiFlushTbList(v13);
          MiReleaseProcessorFlushList();
        }
      }
      MiUnlockPageTableInternal(v6, v30);
    }
    return (_UNKNOWN **)MiUnlockWorkingSetShared(v6, v7);
  }
  return result;
}
