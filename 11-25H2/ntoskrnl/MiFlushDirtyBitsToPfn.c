/*
 * XREFs of MiFlushDirtyBitsToPfn @ 0x140388960
 * Callers:
 *     MmFlushVirtualMemory @ 0x1409CEA8C (MmFlushVirtualMemory.c)
 * Callees:
 *     MiLockWorkingSetShared @ 0x140212A90 (MiLockWorkingSetShared.c)
 *     MiReleaseProcessorFlushList @ 0x140237CC0 (MiReleaseProcessorFlushList.c)
 *     MiUnlockPageTable @ 0x14028B6B0 (MiUnlockPageTable.c)
 *     MiGetLeafVa @ 0x1402B5480 (MiGetLeafVa.c)
 *     MiWriteValidPteNewProtection @ 0x1402B83C0 (MiWriteValidPteNewProtection.c)
 *     MiUnlockWorkingSetShared @ 0x1402B9D50 (MiUnlockWorkingSetShared.c)
 *     MiInsertTbFlushEntry @ 0x1403278B0 (MiInsertTbFlushEntry.c)
 *     MiFlushTbList @ 0x14032BCA0 (MiFlushTbList.c)
 *     HvlNotifyLongSpinWait @ 0x14032DED0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14032DF00 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiGetNextPageTable @ 0x14037D8BC (MiGetNextPageTable.c)
 *     MiGetProcessorFlushList @ 0x140381500 (MiGetProcessorFlushList.c)
 *     MiSetPfnModified @ 0x1403871E0 (MiSetPfnModified.c)
 *     MiInitializeTbFlushList @ 0x140388790 (MiInitializeTbFlushList.c)
 *     KeYieldProcessorEx @ 0x1403F49C0 (KeYieldProcessorEx.c)
 */

char __fastcall MiFlushDirtyBitsToPfn(unsigned __int64 a1, unsigned __int64 a2, __int64 a3)
{
  _UNKNOWN **v3; // rax
  unsigned __int64 *v4; // rdi
  unsigned __int64 v5; // rbp
  __int64 v6; // r13
  char v7; // r12
  unsigned __int64 NextPageTable; // rax
  unsigned __int64 v9; // r8
  unsigned __int64 v10; // rsi
  __int64 *v11; // r14
  unsigned __int64 v12; // rbx
  __int64 v13; // r14
  int v14; // r15d
  unsigned __int64 v15; // rsi
  __int64 v16; // rdx
  unsigned __int64 v17; // r14
  __int64 v18; // rcx
  __int64 v19; // rdi
  unsigned int v20; // r15d
  volatile signed __int32 *v21; // rbx
  unsigned int v23; // [rsp+30h] [rbp-48h] BYREF
  int v24; // [rsp+34h] [rbp-44h] BYREF
  __int64 *ProcessorFlushList; // [rsp+38h] [rbp-40h]
  unsigned __int64 v26; // [rsp+40h] [rbp-38h]
  _UNKNOWN *retaddr; // [rsp+78h] [rbp+0h] BYREF
  char v28; // [rsp+98h] [rbp+20h]

  v3 = &retaddr;
  v23 = 0;
  if ( !byte_140E2D900 )
  {
    v4 = (unsigned __int64 *)(((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
    v5 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v6 = *(_QWORD *)(a3 + 184) + 1024LL;
    v28 = MiLockWorkingSetShared(v6);
    v7 = v28;
    while ( (unsigned __int64)v4 <= v5 )
    {
      NextPageTable = MiGetNextPageTable((__int64)v4, v5, v7, 0, &v23);
      v4 = (unsigned __int64 *)NextPageTable;
      if ( !NextPageTable )
        break;
      v9 = ((NextPageTable >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v26 = v9;
      if ( v23 )
      {
        v15 = ((NextPageTable >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        v16 = v23;
        do
        {
          v9 = ((v9 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
          --v16;
        }
        while ( v16 );
        v26 = v9;
        v17 = 0x200000LL;
        if ( v23 > 1 )
        {
          v18 = v23 - 1;
          do
          {
            v15 = ((v15 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
            v17 <<= 9;
            --v18;
          }
          while ( v18 );
        }
        if ( (*(_QWORD *)v15 & 0x42) != 0 && (*(_QWORD *)v15 & 1) != 0 )
        {
          v19 = 48 * ((*(_QWORD *)v15 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
          v20 = 0;
          if ( v17 )
          {
            v21 = (volatile signed __int32 *)(v19 + 24);
            do
            {
              v24 = 0;
              while ( _interlockedbittestandset64(v21, 0x3FuLL) )
              {
                do
                  KeYieldProcessorEx(&v24);
                while ( *(__int64 *)v21 < 0 );
              }
              MiSetPfnModified(v19, 1);
              _InterlockedAnd64((volatile signed __int64 *)v21, 0x7FFFFFFFFFFFFFFFuLL);
              v20 += 4096;
              v19 += 48LL;
              v21 += 12;
            }
            while ( v20 < v17 );
            v7 = v28;
          }
        }
        v4 = (unsigned __int64 *)(((MiGetLeafVa(v15 + 8) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
      }
      else
      {
        v10 = (__int64)(NextPageTable << 25) >> 16;
        v11 = 0LL;
        ProcessorFlushList = 0LL;
        do
        {
          v12 = *v4;
          if ( (*v4 & 0x42) != 0 && (*v4 & 1) != 0 )
          {
            v13 = 48 * ((v12 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
            v14 = 0;
            while ( _interlockedbittestandset64((volatile signed __int32 *)(v13 + 24), 0x3FuLL) )
            {
              do
              {
                if ( (++v14 & HvlLongSpinCountMask) == 0
                  && (HvlEnlightenments & 0x40) != 0
                  && KiCheckVpBackingLongSpinWaitHypercall() )
                {
                  HvlNotifyLongSpinWait();
                }
                else
                {
                  _mm_pause();
                }
              }
              while ( *(__int64 *)(v13 + 24) < 0 );
            }
            MiSetPfnModified(v13, 1);
            _InterlockedAnd64((volatile signed __int64 *)(v13 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            MiWriteValidPteNewProtection((ULONG_PTR)v4, v12 & 0xFFFFFFFFFFFFFFBDuLL);
            v11 = ProcessorFlushList;
            if ( !ProcessorFlushList )
            {
              ProcessorFlushList = MiGetProcessorFlushList();
              v11 = ProcessorFlushList;
              MiInitializeTbFlushList((__int64)ProcessorFlushList, v6, *((_DWORD *)ProcessorFlushList + 3), 0, 10);
            }
            MiInsertTbFlushEntry((__int64)v11, v10, 1LL, 0);
          }
          v10 += 4096LL;
          ++v4;
        }
        while ( (v10 & 0x1FFFFF) != 0 && (unsigned __int64)v4 <= v5 );
        v7 = v28;
        if ( v11 )
        {
          MiFlushTbList((__int64)v11);
          MiReleaseProcessorFlushList();
        }
      }
      MiUnlockPageTable(v6, v26);
    }
    LOBYTE(v3) = MiUnlockWorkingSetShared(v6, v7);
  }
  return (char)v3;
}
