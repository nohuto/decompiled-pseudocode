/*
 * XREFs of MiMakeSystemCacheRangeValid @ 0x1402C5040
 * Callers:
 *     MmCheckCachedPageStates @ 0x14025B020 (MmCheckCachedPageStates.c)
 * Callees:
 *     MiAllocateWsle @ 0x14024B590 (MiAllocateWsle.c)
 *     MiWriteValidPteNewProtection @ 0x1402B83C0 (MiWriteValidPteNewProtection.c)
 *     MiQueueCoreWorkingSetEntries @ 0x1402B9360 (MiQueueCoreWorkingSetEntries.c)
 *     MiUnlockWorkingSetShared @ 0x1402B9D50 (MiUnlockWorkingSetShared.c)
 *     MiUnlockFaultPageTable @ 0x1402B9F30 (MiUnlockFaultPageTable.c)
 *     MiLockWorkingSetOptimal @ 0x1402C0690 (MiLockWorkingSetOptimal.c)
 *     ObFastDereferenceObjectDeferDelete @ 0x1402C2260 (ObFastDereferenceObjectDeferDelete.c)
 *     MiGetMultiplexedVm @ 0x1402C2444 (MiGetMultiplexedVm.c)
 *     MiGetContainingPageTable @ 0x1402C3750 (MiGetContainingPageTable.c)
 *     PfSnLogPageFault @ 0x1403041E0 (PfSnLogPageFault.c)
 *     MiReferenceControlAreaFileWithTag @ 0x140323330 (MiReferenceControlAreaFileWithTag.c)
 *     MiStartingOffset @ 0x1403236B0 (MiStartingOffset.c)
 *     HvlNotifyLongSpinWait @ 0x14032DED0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14032DF00 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiDecrementShareCountEx @ 0x1403427F0 (MiDecrementShareCountEx.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 */

char __fastcall MiMakeSystemCacheRangeValid(unsigned __int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v5; // rbx
  __int64 v6; // r12
  __int64 v7; // rbp
  unsigned int v8; // edi
  __int64 v9; // r9
  __int64 MultiplexedVm; // rax
  __int64 v11; // r15
  __int64 v12; // r10
  char result; // al
  __int64 v14; // rbp
  __int64 v15; // rsi
  __int64 v16; // rsi
  __int64 v17; // rdi
  ULONG_PTR v18; // rbx
  __int64 v19; // rax
  __int64 v20; // r13
  __int64 v21; // r14
  ULONG_PTR v22; // rbx
  ULONG_PTR v23; // rcx
  __int64 v24; // r15
  __int64 v25; // rdi
  int v26; // eax
  int v27; // ecx
  __int64 v28; // rdx
  __int64 v29; // rbx
  unsigned int v30; // edi
  __int64 v31; // rbx
  unsigned int v32; // edi
  unsigned __int8 v33[4]; // [rsp+40h] [rbp-178h] BYREF
  unsigned int v34; // [rsp+44h] [rbp-174h]
  __int64 v35; // [rsp+48h] [rbp-170h]
  __int128 v36; // [rsp+50h] [rbp-168h] BYREF
  __int64 v37; // [rsp+60h] [rbp-158h]
  __int64 ContainingPageTable; // [rsp+68h] [rbp-150h]
  _QWORD v39[16]; // [rsp+70h] [rbp-148h]
  _QWORD v40[16]; // [rsp+F0h] [rbp-C8h] BYREF

  v5 = a3;
  v33[0] = 0;
  v36 = 0LL;
  memset_0(v40, 0, sizeof(v40));
  v6 = 0LL;
  v34 = 0;
  v39[0] = 0LL;
  v7 = 0LL;
  v8 = 0;
  MiLockWorkingSetOptimal((__int64)&unk_140E3D340, a1, v33, v9);
  ContainingPageTable = MiGetContainingPageTable(a1);
  MultiplexedVm = MiGetMultiplexedVm(0LL, (__int64)(a1 << 25) >> 16);
  BYTE13(v36) |= 8u;
  v11 = MultiplexedVm;
  BYTE12(v36) = v33[0];
  v35 = MultiplexedVm;
  *(_QWORD *)&v36 = MultiplexedVm;
  v37 = v12;
  if ( !(_DWORD)v5 )
    goto LABEL_2;
  v20 = a2 - a1;
  v21 = v5;
  do
  {
    v22 = *(_QWORD *)(a1 + v20);
    v23 = a1 + v20;
    if ( !v22 )
      goto LABEL_20;
    if ( (v22 & 1) == 0 )
    {
      MiWriteValidPteNewProtection(v23, v22 | 1);
LABEL_27:
      v31 = 48 * ((*(_QWORD *)(a1 + v20) >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
      v32 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v31 + 24), 0x3FuLL) )
      {
        do
        {
          if ( (++v32 & HvlLongSpinCountMask) == 0
            && (HvlEnlightenments & 0x40) != 0
            && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v23) )
          {
            HvlNotifyLongSpinWait(v32);
          }
          else
          {
            _mm_pause();
          }
        }
        while ( *(__int64 *)(v31 + 24) < 0 );
      }
      MiDecrementShareCountEx(v31, 0LL);
      _InterlockedAnd64((volatile signed __int64 *)(v31 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      goto LABEL_20;
    }
    if ( (*(_QWORD *)a1 & 1) != 0 )
      goto LABEL_27;
    v24 = 48 * ((v22 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
    v25 = *(_QWORD *)(v24 + 16);
    v26 = MiQueueCoreWorkingSetEntries(&v36, a1, v24);
    v27 = (v26 != 0 ? 4 : 0) | 0x10;
    if ( (BYTE13(v36) & 1) == 0 )
      v27 = v26 != 0 ? 4 : 0;
    MiAllocateWsle(v35, a1, v24, 0, v22, v27, 0LL);
    if ( (v25 & 0x400) != 0 && PfSnNumActiveTraces )
    {
      v28 = v34;
      v23 = *(_QWORD *)(v24 + 8) | 0x8000000000000000uLL;
      v40[v34] = v23;
      v39[v28] = v25;
      v34 = v28 + 1;
    }
    ++v7;
LABEL_20:
    a1 += 8LL;
    --v21;
  }
  while ( v21 );
  if ( v7 )
  {
    v29 = 48 * ContainingPageTable - 0x220000000000LL;
    v30 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v29 + 24), 0x3FuLL) )
    {
      do
      {
        if ( (++v30 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v23) )
        {
          HvlNotifyLongSpinWait(v30);
        }
        else
        {
          _mm_pause();
        }
      }
      while ( *(__int64 *)(v29 + 24) < 0 );
    }
    *(_QWORD *)(v29 + 24) = (*(_QWORD *)(v29 + 24) + v7) ^ (*(_QWORD *)(v29 + 24) ^ (*(_QWORD *)(v29 + 24) + v7)) & 0xC000000000000000uLL;
    _InterlockedAnd64((volatile signed __int64 *)(v29 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  }
  v11 = v35;
  v8 = v34;
LABEL_2:
  MiUnlockFaultPageTable((__int64 *)&v36);
  result = MiUnlockWorkingSetShared(v11, v33[0]);
  if ( v8 )
  {
    v14 = v8;
    do
    {
      v15 = v39[v6];
      if ( qword_140E2D940 )
      {
        if ( (v15 & 0x10) == 0 )
          v15 &= ~qword_140E2D940;
      }
      v16 = v15 >> 16;
      v17 = *(_QWORD *)v16;
      v18 = MiReferenceControlAreaFileWithTag(*(_QWORD *)v16, 1666411853LL, 0LL);
      v19 = MiStartingOffset(v16, v40[v6], 0xFFFFFFFFLL);
      PfSnLogPageFault(v18, v19, 4LL);
      result = ObFastDereferenceObjectDeferDelete((__int64 *)(v17 + 64), v18, 1666411853LL);
      ++v6;
      --v14;
    }
    while ( v14 );
  }
  return result;
}
