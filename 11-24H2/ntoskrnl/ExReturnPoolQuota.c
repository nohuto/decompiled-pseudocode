/*
 * XREFs of ExReturnPoolQuota @ 0x14021ACC0
 * Callers:
 *     IopFreeMiniCompletionPacket @ 0x140990680 (IopFreeMiniCompletionPacket.c)
 * Callees:
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x140219638 (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 *     PspReturnResourceQuota @ 0x14027BA78 (PspReturnResourceQuota.c)
 *     ExAcquireSpinLockShared @ 0x1402C2D30 (ExAcquireSpinLockShared.c)
 *     ObpPushStackInfo @ 0x14031FC8C (ObpPushStackInfo.c)
 *     ObpDeferObjectDeletion @ 0x1403B341C (ObpDeferObjectDeletion.c)
 *     ExIsSpecialPoolAddress @ 0x14048BD64 (ExIsSpecialPoolAddress.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 */

char __fastcall ExReturnPoolQuota(ULONG_PTR BugCheckParameter2)
{
  unsigned int v1; // ebp
  ULONG_PTR BugCheckParameter4; // r14
  ULONG_PTR v4; // r13
  ULONG_PTR v5; // rbx
  unsigned __int16 v6; // ax
  signed __int64 v7; // rax
  ULONG_PTR v8; // rdi
  ULONG_PTR v9; // r13
  ULONG_PTR v10; // r10
  unsigned __int64 v11; // r11
  char v12; // r13
  unsigned __int64 *v13; // rsi
  unsigned __int64 v14; // rbx
  unsigned __int64 v15; // rax
  unsigned __int64 *v16; // r8
  unsigned __int64 v17; // rdx
  ULONG_PTR v18; // r8
  unsigned __int64 v19; // r9
  signed __int64 v20; // rdx
  bool v21; // zf
  signed __int64 v22; // r12
  bool v23; // cc
  signed __int64 v24; // r12
  __int64 v25; // r8
  KIRQL v26; // r8
  int v27; // edi
  unsigned int v28; // r9d
  char *v29; // rdx
  __int64 retaddr; // [rsp+78h] [rbp+0h]
  __int64 *v32; // [rsp+88h] [rbp+10h]
  KIRQL v33; // [rsp+88h] [rbp+10h]
  ULONG_PTR v34; // [rsp+90h] [rbp+18h]
  unsigned __int64 v35; // [rsp+98h] [rbp+20h]

  v1 = 0;
  BugCheckParameter4 = 0LL;
  if ( ExpSpecialAllocations )
  {
    LODWORD(v7) = ExIsSpecialPoolAddress();
    if ( (_DWORD)v7 )
      return v7;
  }
  if ( BugCheckParameter2 >= 0xFFFF800000000000uLL && byte_140E38AE8[((BugCheckParameter2 >> 39) & 0x1FF) - 256] == 5 )
    v4 = 256LL;
  else
    v4 = 64LL;
  v5 = 0LL;
  if ( (BugCheckParameter2 & 0xFFF) == 0 )
  {
    v26 = ExAcquireSpinLockShared(&ExpLargePoolTableLock);
    v27 = 1;
    v33 = v26;
    v28 = (PoolBigPageTableSize - 1) & ((40543 * (BugCheckParameter2 >> 12)) ^ ((40543 * (BugCheckParameter2 >> 12)) >> 32));
    while ( 1 )
    {
      v29 = (char *)PoolBigPageTable + 32 * v28;
      if ( *(_QWORD *)v29 == BugCheckParameter2 )
        break;
      if ( ++v28 >= (unsigned __int64)PoolBigPageTableSize )
      {
        if ( !v27 )
          goto LABEL_39;
        v28 = 0;
        v27 = 0;
      }
    }
    if ( !v29 )
LABEL_39:
      KeBugCheckEx(0x19u, 0x22uLL, BugCheckParameter2, v4, 0LL);
    if ( (*((_DWORD *)v29 + 3) & 0x100) != 0 )
    {
      v8 = *((_QWORD *)v29 + 3) ^ ExpPoolQuotaCookie ^ BugCheckParameter2;
      BugCheckParameter4 = *((_QWORD *)v29 + 2);
      *((_QWORD *)v29 + 3) = ExpPoolQuotaCookie ^ BugCheckParameter2;
    }
    else
    {
      v8 = -1LL;
    }
    if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
    {
      _InterlockedAnd(&ExpLargePoolTableLock, 0xBFFFFFFF);
      _InterlockedDecrement(&ExpLargePoolTableLock);
    }
    else
    {
      ExpReleaseSpinLockSharedFromDpcLevelInstrumented(&ExpLargePoolTableLock, retaddr);
      v26 = v33;
    }
    if ( KiIrqlFlags )
    {
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v26);
      v26 = v33;
    }
    LOBYTE(v7) = v26;
    __writecr8(v26);
    goto LABEL_10;
  }
  v5 = BugCheckParameter2 - 16;
  if ( (*(_BYTE *)(BugCheckParameter2 - 13) & 4) != 0 )
    v5 += -16LL * (unsigned __int8)*(_WORD *)v5;
  v6 = *(_WORD *)(v5 + 2);
  BugCheckParameter4 = 16LL * (unsigned __int8)v6;
  LOWORD(v7) = HIBYTE(v6);
  if ( (v7 & 8) != 0 )
  {
    v8 = v5 ^ ExpPoolQuotaCookie ^ *(_QWORD *)(v5 + 8);
    LOBYTE(v7) = ExpPoolQuotaCookie ^ v5;
    *(_QWORD *)(v5 + 8) = ExpPoolQuotaCookie ^ v5;
LABEL_10:
    if ( v8 && v8 != -1LL )
    {
      if ( v8 < 0xFFFF800000000000uLL || (LOBYTE(v7) = *(_BYTE *)v8 & 0x7F, (_BYTE)v7 != 3) )
      {
        if ( v5 )
          v1 = *(_DWORD *)(v5 + 4);
        KeBugCheckEx(0xC2u, 0xDuLL, BugCheckParameter2, v1, v8);
      }
      v9 = v4 & 0x100;
      if ( (PEPROCESS)v8 != PsInitialSystemProcess )
      {
        v10 = v9 != 0;
        v11 = v10 << 7;
        v34 = v10;
        v12 = PspResourceFlags[8 * v10];
        v32 = *(__int64 **)(v8 + 760);
        v13 = (unsigned __int64 *)&v32[16 * v10];
        v35 = (unsigned __int64)(unsigned int)v10 << 7;
        _m_prefetchw(v13);
        v14 = *v13;
        v15 = v13[8];
        if ( v13[10] )
        {
          if ( v15 > v14 )
          {
            v16 = (unsigned __int64 *)&qword_140F05B28[7 * v10];
            v17 = *v16;
            if ( v15 - v14 > *v16 )
            {
              if ( v17 > BugCheckParameter4 )
                v17 = BugCheckParameter4;
              if ( v15 == _InterlockedCompareExchange64((volatile signed __int64 *)v13 + 8, v15 - v17, v15)
                && _InterlockedExchangeAdd64((volatile signed __int64 *)v13 + 9, v17) + v17 > *v16 )
              {
                v25 = _InterlockedExchange64((volatile __int64 *)v13 + 9, 0LL);
                if ( v25 )
                {
                  PspReturnResourceQuota((unsigned int)v10, v13, v25, 0LL);
                  v10 = v34;
                  v11 = v35;
                }
              }
            }
          }
        }
        v18 = BugCheckParameter4;
        while ( 1 )
        {
          do
          {
            v19 = v14;
            v20 = 0LL;
            if ( BugCheckParameter4 < v14 )
            {
              v19 = BugCheckParameter4;
              v20 = v14 - BugCheckParameter4;
            }
            v7 = _InterlockedCompareExchange64((volatile signed __int64 *)v13, v20, v14);
            v21 = v14 == v7;
            v14 = v7;
          }
          while ( !v21 );
          BugCheckParameter4 -= v19;
          if ( !BugCheckParameter4 )
            break;
          if ( v32 == &PspSystemQuotaBlock )
            KeBugCheckEx(0x21u, v8, v10, v18, BugCheckParameter4);
          v32 = &PspSystemQuotaBlock;
          v13 = (unsigned __int64 *)((char *)&PspSystemQuotaBlock + v11);
          _m_prefetchw((char *)&PspSystemQuotaBlock + v11);
          v14 = *(__int64 *)((char *)&PspSystemQuotaBlock + v11);
        }
        if ( (v12 & 4) != 0 )
          _InterlockedAdd64((volatile signed __int64 *)(v8 + 8 * v10 + 512), -(__int64)v18);
      }
      if ( ObpTraceFlags )
        LOBYTE(v7) = ObpPushStackInfo((int)v8 - 48);
      v22 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v8 - 48), 0xFFFFFFFFFFFFFFFFuLL);
      v23 = v22 <= 1;
      v24 = v22 - 1;
      if ( v23 )
      {
        if ( *(_QWORD *)(v8 - 40) )
          KeBugCheckEx(
            0x18u,
            ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(v8 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)(v8 - 48) >> 8)],
            v8,
            3uLL,
            *(_QWORD *)(v8 - 40));
        if ( v24 < 0 )
          KeBugCheckEx(0x18u, 0LL, v8, 4uLL, v24);
        LOBYTE(v7) = ObpDeferObjectDeletion(v8 - 48);
      }
    }
  }
  return v7;
}
