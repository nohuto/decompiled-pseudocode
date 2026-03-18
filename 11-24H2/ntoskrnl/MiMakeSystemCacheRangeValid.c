/*
 * XREFs of MiMakeSystemCacheRangeValid @ 0x140243570
 * Callers:
 *     MmCheckCachedPageStates @ 0x140280E90 (MmCheckCachedPageStates.c)
 * Callees:
 *     MiWriteValidPteNewProtection @ 0x140219260 (MiWriteValidPteNewProtection.c)
 *     MiAllocateWsle @ 0x14021F980 (MiAllocateWsle.c)
 *     MiDecrementShareCountEx @ 0x140220590 (MiDecrementShareCountEx.c)
 *     MiGetMultiplexedVm @ 0x140240018 (MiGetMultiplexedVm.c)
 *     ObFastDereferenceObjectDeferDelete @ 0x140240FA0 (ObFastDereferenceObjectDeferDelete.c)
 *     MiLockWorkingSetOptimal @ 0x1402424F0 (MiLockWorkingSetOptimal.c)
 *     MiStartingOffset @ 0x140244020 (MiStartingOffset.c)
 *     MiReferenceControlAreaFileWithTag @ 0x1402440D0 (MiReferenceControlAreaFileWithTag.c)
 *     HvlNotifyLongSpinWait @ 0x140293260 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140293290 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiUnlockWorkingSetShared @ 0x1402E0410 (MiUnlockWorkingSetShared.c)
 *     MiUnlockFaultPageTable @ 0x1402E05F0 (MiUnlockFaultPageTable.c)
 *     MiEmptyDeferredWorkingSetEntries @ 0x1402E1B00 (MiEmptyDeferredWorkingSetEntries.c)
 *     MiGetContainingPageTable @ 0x1402ECE30 (MiGetContainingPageTable.c)
 *     PfSnLogPageFault @ 0x1402ECF60 (PfSnLogPageFault.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 */

__int64 __fastcall MiMakeSystemCacheRangeValid(unsigned __int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // rbx
  __int64 v6; // r13
  __int64 v7; // r15
  unsigned int v8; // esi
  __int64 MultiplexedVm; // rax
  __int64 v10; // r11
  __int64 v11; // r10
  __int64 result; // rax
  __int64 v13; // r9
  __int64 v14; // r14
  __int64 v15; // rsi
  __int64 v16; // rsi
  __int64 v17; // rdi
  ULONG_PTR v18; // rbx
  __int64 v19; // rax
  __int64 v20; // rdi
  __int64 v21; // r12
  ULONG_PTR v22; // rbx
  ULONG_PTR v23; // rcx
  char v24; // cl
  _QWORD *v25; // rsi
  __int64 v26; // rdi
  int v27; // edx
  int v28; // eax
  __int64 v29; // rdx
  __int64 v30; // rbx
  unsigned int v31; // edi
  unsigned __int64 v32; // rbx
  unsigned int v33; // edi
  unsigned __int8 v34[4]; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int v35; // [rsp+44h] [rbp-BCh]
  __int128 v36; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v37; // [rsp+58h] [rbp-A8h]
  __int64 v38; // [rsp+60h] [rbp-A0h]
  __int64 v39; // [rsp+68h] [rbp-98h]
  __int64 ContainingPageTable; // [rsp+70h] [rbp-90h]
  _QWORD v41[16]; // [rsp+80h] [rbp-80h]
  _QWORD v42[16]; // [rsp+100h] [rbp+0h] BYREF

  v3 = a3;
  v34[0] = 0;
  v36 = 0LL;
  memset_0(v42, 0, sizeof(v42));
  v6 = 0LL;
  v35 = 0;
  v41[0] = 0LL;
  v7 = 0LL;
  v8 = 0;
  MiLockWorkingSetOptimal((__int64)&unk_140E3D580, a1, v34);
  ContainingPageTable = MiGetContainingPageTable(a1);
  MultiplexedVm = MiGetMultiplexedVm(0LL, (__int64)(a1 << 25) >> 16);
  BYTE13(v36) |= 8u;
  v10 = MultiplexedVm;
  BYTE12(v36) = v34[0];
  v38 = MultiplexedVm;
  *(_QWORD *)&v36 = MultiplexedVm;
  v37 = v11;
  if ( !(_DWORD)v3 )
    goto LABEL_2;
  v20 = a2 - a1;
  v39 = v20;
  v21 = v3;
  do
  {
    v22 = *(_QWORD *)(a1 + v20);
    v23 = a1 + v20;
    if ( !v22 )
      goto LABEL_31;
    if ( (v22 & 1) != 0 )
    {
      if ( (*(_QWORD *)a1 & 1) == 0 )
      {
        v24 = BYTE13(v36);
        v25 = (_QWORD *)(48 * ((v22 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL);
        v26 = v25[2];
        if ( (BYTE13(v36) & 8) == 0 || (BYTE13(v36) & 1) != 0 || (BYTE13(v36) & 4) != 0 )
        {
          v27 = 0;
          goto LABEL_24;
        }
        if ( !WORD5(v36) )
          goto LABEL_43;
        if ( WORD5(v36) + WORD4(v36) == (((unsigned int)a1 >> 3) & 0x1FF) )
        {
          v24 = BYTE13(v36);
          if ( (__int64)v25[5] < 0 )
          {
            if ( (BYTE13(v36) & 2) == 0 )
            {
LABEL_21:
              if ( WORD5(v36) )
              {
                ++WORD5(v36);
LABEL_23:
                v27 = 4;
LABEL_24:
                v28 = v27 | 0x10;
                if ( (v24 & 1) == 0 )
                  v28 = v27;
                MiAllocateWsle(v10, a1, (ULONG_PTR)v25, 0, v22, v28, 0LL);
                if ( (v26 & 0x400) != 0 && PfSnNumActiveTraces )
                {
                  v29 = v35;
                  v23 = v25[1] | 0x8000000000000000uLL;
                  v42[v35] = v23;
                  v41[v29] = v26;
                  v35 = v29 + 1;
                }
                ++v7;
                goto LABEL_30;
              }
LABEL_43:
              WORD5(v36) = 1;
              WORD4(v36) = ((unsigned int)a1 >> 3) & 0x1FF;
              if ( (__int64)v25[5] >= 0 )
                v24 = BYTE13(v36) | 2;
              else
                v24 = BYTE13(v36) & 0xFD;
              BYTE13(v36) = v24;
              goto LABEL_23;
            }
          }
          else if ( (BYTE13(v36) & 2) != 0 )
          {
            goto LABEL_21;
          }
        }
        MiEmptyDeferredWorkingSetEntries(&v36, 0xFFFFDE0000000000uLL, 511LL);
        v10 = v38;
        v24 = BYTE13(v36);
        goto LABEL_21;
      }
    }
    else
    {
      MiWriteValidPteNewProtection(v23, v22 | 1);
    }
    v32 = 48 * ((*(_QWORD *)(a1 + v20) >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
    v33 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v32 + 24), 0x3FuLL) )
    {
      do
      {
        if ( (++v33 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v23) )
        {
          HvlNotifyLongSpinWait(v33);
        }
        else
        {
          _mm_pause();
        }
      }
      while ( *(__int64 *)(v32 + 24) < 0 );
    }
    MiDecrementShareCountEx(v32, 0LL);
    _InterlockedAnd64((volatile signed __int64 *)(v32 + 24), 0x7FFFFFFFFFFFFFFFuLL);
LABEL_30:
    v10 = v38;
    v20 = v39;
LABEL_31:
    a1 += 8LL;
    --v21;
  }
  while ( v21 );
  if ( v7 )
  {
    v30 = 48 * ContainingPageTable - 0x220000000000LL;
    v31 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v30 + 24), 0x3FuLL) )
    {
      do
      {
        if ( (++v31 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v23) )
        {
          HvlNotifyLongSpinWait(v31);
        }
        else
        {
          _mm_pause();
        }
      }
      while ( *(__int64 *)(v30 + 24) < 0 );
    }
    *(_QWORD *)(v30 + 24) = (*(_QWORD *)(v30 + 24) + v7) ^ (*(_QWORD *)(v30 + 24) ^ (*(_QWORD *)(v30 + 24) + v7)) & 0xC000000000000000uLL;
    _InterlockedAnd64((volatile signed __int64 *)(v30 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  }
  v8 = v35;
LABEL_2:
  MiUnlockFaultPageTable(&v36);
  result = MiUnlockWorkingSetShared(v38, v34[0]);
  if ( v8 )
  {
    v14 = v8;
    do
    {
      v15 = v41[v6];
      if ( qword_140E2DB80 )
      {
        if ( (v15 & 0x10) == 0 )
          v15 &= ~qword_140E2DB80;
      }
      v16 = v15 >> 16;
      v17 = *(_QWORD *)v16;
      v18 = MiReferenceControlAreaFileWithTag(*(_QWORD *)v16, 1666411853LL, 0LL, v13);
      v19 = MiStartingOffset(v16, v42[v6], 0xFFFFFFFFLL);
      PfSnLogPageFault(v18, v19, 4LL);
      result = ObFastDereferenceObjectDeferDelete((__int64 *)(v17 + 64), v18);
      ++v6;
      --v14;
    }
    while ( v14 );
  }
  return result;
}
