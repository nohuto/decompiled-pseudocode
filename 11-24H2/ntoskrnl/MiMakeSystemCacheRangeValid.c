/*
 * XREFs of MiMakeSystemCacheRangeValid @ 0x14020BFD0
 * Callers:
 *     MmCheckCachedPageStates @ 0x140236420 (MmCheckCachedPageStates.c)
 * Callees:
 *     MiGetMultiplexedVm @ 0x140208168 (MiGetMultiplexedVm.c)
 *     ObFastDereferenceObjectDeferDelete @ 0x1402090F0 (ObFastDereferenceObjectDeferDelete.c)
 *     MiLockWorkingSetOptimal @ 0x14020A640 (MiLockWorkingSetOptimal.c)
 *     MiEmptyDeferredWorkingSetEntries @ 0x14020C4A0 (MiEmptyDeferredWorkingSetEntries.c)
 *     MiStartingOffset @ 0x14020C7B0 (MiStartingOffset.c)
 *     MiReferenceControlAreaFileWithTag @ 0x14020C860 (MiReferenceControlAreaFileWithTag.c)
 *     MiUnlockWorkingSetShared @ 0x140241CF0 (MiUnlockWorkingSetShared.c)
 *     MiUnlockFaultPageTable @ 0x140241ED0 (MiUnlockFaultPageTable.c)
 *     MiWriteValidPteNewProtection @ 0x140245FB0 (MiWriteValidPteNewProtection.c)
 *     MiAllocateWsle @ 0x14024C6D0 (MiAllocateWsle.c)
 *     MiDecrementShareCountEx @ 0x14024D2E0 (MiDecrementShareCountEx.c)
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiGetContainingPageTable @ 0x14034E470 (MiGetContainingPageTable.c)
 *     PfSnLogPageFault @ 0x14034E5A0 (PfSnLogPageFault.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 __fastcall MiMakeSystemCacheRangeValid(unsigned __int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // rbx
  __int64 v6; // r13
  __int64 v7; // r15
  unsigned int v8; // esi
  __int64 v9; // r9
  __int64 MultiplexedVm; // rax
  int v11; // r11d
  __int64 v12; // r10
  __int64 result; // rax
  __int64 v14; // r14
  __int64 v15; // rsi
  __int64 v16; // rsi
  __int64 v17; // rdi
  ULONG_PTR v18; // rbx
  __int64 v19; // rax
  __int64 v20; // rdi
  __int64 v21; // r12
  unsigned __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // r9
  ULONG_PTR BugCheckParameter3; // rbx
  ULONG_PTR v26; // rcx
  char v27; // cl
  _QWORD *v28; // rsi
  __int64 v29; // rdi
  int v30; // edx
  int v31; // eax
  __int64 v32; // rdx
  __int64 v33; // r9
  __int64 v34; // rbx
  unsigned int v35; // edi
  __int64 v36; // rbx
  unsigned int v37; // edi
  unsigned __int8 v38[4]; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int v39; // [rsp+44h] [rbp-BCh]
  __int128 v40; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v41; // [rsp+58h] [rbp-A8h]
  __int64 v42; // [rsp+60h] [rbp-A0h]
  __int64 v43; // [rsp+68h] [rbp-98h]
  __int64 ContainingPageTable; // [rsp+70h] [rbp-90h]
  _QWORD v45[16]; // [rsp+80h] [rbp-80h]
  _QWORD v46[16]; // [rsp+100h] [rbp+0h] BYREF

  v3 = a3;
  v38[0] = 0;
  v40 = 0LL;
  memset_0(v46, 0, sizeof(v46));
  v6 = 0LL;
  v39 = 0;
  v45[0] = 0LL;
  v7 = 0LL;
  v8 = 0;
  MiLockWorkingSetOptimal((__int64)&unk_140E3D6C0, a1, v38, v9);
  ContainingPageTable = MiGetContainingPageTable(a1);
  MultiplexedVm = MiGetMultiplexedVm(0LL, (__int64)(a1 << 25) >> 16);
  BYTE13(v40) |= 8u;
  v11 = MultiplexedVm;
  BYTE12(v40) = v38[0];
  v42 = MultiplexedVm;
  *(_QWORD *)&v40 = MultiplexedVm;
  v41 = v12;
  if ( !(_DWORD)v3 )
    goto LABEL_2;
  v20 = a2 - a1;
  v43 = v20;
  v21 = v3;
  v22 = 0xFFFFDE0000000000uLL;
  v23 = 511LL;
  v24 = 1LL;
  do
  {
    BugCheckParameter3 = *(_QWORD *)(a1 + v20);
    v26 = a1 + v20;
    if ( !BugCheckParameter3 )
      goto LABEL_31;
    if ( (BugCheckParameter3 & 1) != 0 )
    {
      if ( (*(_QWORD *)a1 & 1) == 0 )
      {
        v27 = BYTE13(v40);
        v28 = (_QWORD *)(48 * ((BugCheckParameter3 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL);
        v29 = v28[2];
        if ( (BYTE13(v40) & 8) == 0 || (BYTE13(v40) & 1) != 0 || (BYTE13(v40) & 4) != 0 )
        {
          v30 = 0;
          goto LABEL_24;
        }
        if ( !WORD5(v40) )
          goto LABEL_43;
        if ( WORD5(v40) + WORD4(v40) == (((unsigned int)a1 >> 3) & 0x1FF) )
        {
          v27 = BYTE13(v40);
          if ( (__int64)v28[5] < 0 )
          {
            if ( (BYTE13(v40) & 2) == 0 )
            {
LABEL_21:
              if ( WORD5(v40) )
              {
                ++WORD5(v40);
LABEL_23:
                v30 = 4;
LABEL_24:
                v31 = v30 | 0x10;
                if ( (v27 & 1) == 0 )
                  v31 = v30;
                MiAllocateWsle(v11, a1, 48 * (BugCheckParameter3 >> 12), 0, BugCheckParameter3, v31, 0LL);
                if ( (v29 & 0x400) != 0 && PfSnNumActiveTraces )
                {
                  v32 = v39;
                  v26 = v28[1] | 0x8000000000000000uLL;
                  v46[v39] = v26;
                  v45[v32] = v29;
                  v39 = v32 + 1;
                }
                ++v7;
                goto LABEL_30;
              }
LABEL_43:
              WORD5(v40) = 1;
              WORD4(v40) = ((unsigned int)a1 >> 3) & 0x1FF;
              if ( (__int64)v28[5] >= 0 )
                v27 = BYTE13(v40) | 2;
              else
                v27 = BYTE13(v40) & 0xFD;
              BYTE13(v40) = v27;
              goto LABEL_23;
            }
          }
          else if ( (BYTE13(v40) & 2) != 0 )
          {
            goto LABEL_21;
          }
        }
        MiEmptyDeferredWorkingSetEntries(&v40, 0xFFFFDE0000000000uLL, 511LL, 1LL);
        v11 = v42;
        v27 = BYTE13(v40);
        goto LABEL_21;
      }
    }
    else
    {
      MiWriteValidPteNewProtection(v26);
      v22 = 0xFFFFDE0000000000uLL;
    }
    v36 = 48 * ((*(_QWORD *)(a1 + v20) >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
    v37 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v36 + 24), 0x3FuLL) )
    {
      do
      {
        if ( (++v37 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v26, v22, v23, v24) )
        {
          HvlNotifyLongSpinWait(v37);
        }
        else
        {
          _mm_pause();
        }
      }
      while ( *(__int64 *)(v36 + 24) < 0 );
    }
    MiDecrementShareCountEx(v36, 0LL);
    _InterlockedAnd64((volatile signed __int64 *)(v36 + 24), 0x7FFFFFFFFFFFFFFFuLL);
LABEL_30:
    v11 = v42;
    v24 = 1LL;
    v20 = v43;
    v23 = 511LL;
    v22 = 0xFFFFDE0000000000uLL;
LABEL_31:
    a1 += 8LL;
    --v21;
  }
  while ( v21 );
  if ( v7 )
  {
    v33 = ContainingPageTable;
    v34 = 48 * ContainingPageTable - 0x220000000000LL;
    v35 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v34 + 24), 0x3FuLL) )
    {
      do
      {
        if ( (++v35 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v26, v22, v23, v33) )
        {
          HvlNotifyLongSpinWait(v35);
        }
        else
        {
          _mm_pause();
        }
      }
      while ( *(__int64 *)(v34 + 24) < 0 );
    }
    *(_QWORD *)(v34 + 24) = (*(_QWORD *)(v34 + 24) + v7) ^ (*(_QWORD *)(v34 + 24) ^ (*(_QWORD *)(v34 + 24) + v7)) & 0xC000000000000000uLL;
    _InterlockedAnd64((volatile signed __int64 *)(v34 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  }
  v8 = v39;
LABEL_2:
  MiUnlockFaultPageTable(&v40);
  result = MiUnlockWorkingSetShared(v42, v38[0]);
  if ( v8 )
  {
    v14 = v8;
    do
    {
      v15 = v45[v6];
      if ( qword_140E2DCC0 )
      {
        if ( (v15 & 0x10) == 0 )
          v15 &= ~qword_140E2DCC0;
      }
      v16 = v15 >> 16;
      v17 = *(_QWORD *)v16;
      v18 = MiReferenceControlAreaFileWithTag(*(_QWORD *)v16, 1666411853LL, 0LL);
      v19 = MiStartingOffset(v16, v46[v6], 0xFFFFFFFFLL);
      PfSnLogPageFault(v18, v19, 4LL);
      result = ObFastDereferenceObjectDeferDelete((__int64 *)(v17 + 64), v18);
      ++v6;
      --v14;
    }
    while ( v14 );
  }
  return result;
}
