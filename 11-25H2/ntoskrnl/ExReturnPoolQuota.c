/*
 * XREFs of ExReturnPoolQuota @ 0x1403C5CF0
 * Callers:
 *     IopFreeMiniCompletionPacket @ 0x1409A6C70 (IopFreeMiniCompletionPacket.c)
 * Callees:
 *     ObpPushStackInfo @ 0x14029C310 (ObpPushStackInfo.c)
 *     ExAcquireSpinLockShared @ 0x1402BBA30 (ExAcquireSpinLockShared.c)
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x140323E4C (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 *     ObpDeferObjectDeletion @ 0x14036FDD8 (ObpDeferObjectDeletion.c)
 *     PspReturnResourceQuota @ 0x1403C651C (PspReturnResourceQuota.c)
 *     ExIsSpecialPoolAddress @ 0x1403C6C50 (ExIsSpecialPoolAddress.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 */

void __fastcall ExReturnPoolQuota(ULONG_PTR BugCheckParameter2, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // ebp
  ULONG_PTR BugCheckParameter4; // r14
  unsigned int v7; // r15d
  ULONG_PTR v8; // r13
  ULONG_PTR v9; // rbx
  __int16 v10; // ax
  ULONG_PTR v11; // rdi
  ULONG_PTR v12; // r13
  ULONG_PTR v13; // r10
  unsigned __int64 v14; // r11
  char v15; // r13
  unsigned __int64 *v16; // rsi
  unsigned __int64 v17; // rbx
  unsigned __int64 v18; // rax
  unsigned __int64 *v19; // r8
  unsigned __int64 v20; // rdx
  ULONG_PTR v21; // r8
  unsigned __int64 v22; // r9
  signed __int64 v23; // rdx
  bool v24; // zf
  signed __int64 v25; // rax
  signed __int64 v26; // r12
  bool v27; // cc
  signed __int64 v28; // r12
  __int64 v29; // r8
  KIRQL v30; // r8
  int v31; // edi
  unsigned int v32; // r9d
  char *v33; // rdx
  __int64 retaddr; // [rsp+78h] [rbp+0h]
  __int64 *v35; // [rsp+88h] [rbp+10h]
  KIRQL v36; // [rsp+88h] [rbp+10h]
  ULONG_PTR v37; // [rsp+90h] [rbp+18h]
  unsigned __int64 v38; // [rsp+98h] [rbp+20h]

  v4 = 0;
  BugCheckParameter4 = 0LL;
  v7 = 0;
  if ( ExpSpecialAllocations && (unsigned int)ExIsSpecialPoolAddress(BugCheckParameter2, a2, a3, a4) )
    return;
  if ( BugCheckParameter2 >= 0xFFFF800000000000uLL && byte_140E38768[((BugCheckParameter2 >> 39) & 0x1FF) - 256] == 5 )
    v8 = 256LL;
  else
    v8 = 64LL;
  v9 = 0LL;
  if ( (BugCheckParameter2 & 0xFFF) == 0 )
  {
    v30 = ExAcquireSpinLockShared(&ExpLargePoolTableLock);
    v31 = 1;
    v36 = v30;
    v32 = (PoolBigPageTableSize - 1) & ((40543 * (BugCheckParameter2 >> 12)) ^ ((40543 * (BugCheckParameter2 >> 12)) >> 32));
    while ( 1 )
    {
      v33 = (char *)PoolBigPageTable + 32 * v32;
      if ( *(_QWORD *)v33 == BugCheckParameter2 )
        break;
      if ( ++v32 >= (unsigned __int64)PoolBigPageTableSize )
      {
        if ( !v31 )
          goto LABEL_39;
        v32 = 0;
        v31 = 0;
      }
    }
    if ( !v33 )
LABEL_39:
      KeBugCheckEx(0x19u, 0x22uLL, BugCheckParameter2, v8, 0LL);
    if ( (*((_DWORD *)v33 + 3) & 0x100) != 0 )
    {
      v7 = *((_DWORD *)v33 + 2);
      v11 = *((_QWORD *)v33 + 3) ^ ExpPoolQuotaCookie ^ BugCheckParameter2;
      BugCheckParameter4 = *((_QWORD *)v33 + 2);
      *((_QWORD *)v33 + 3) = ExpPoolQuotaCookie ^ BugCheckParameter2;
    }
    else
    {
      v11 = -1LL;
    }
    if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
    {
      _InterlockedAnd(&ExpLargePoolTableLock, 0xBFFFFFFF);
      _InterlockedDecrement(&ExpLargePoolTableLock);
    }
    else
    {
      ExpReleaseSpinLockSharedFromDpcLevelInstrumented(&ExpLargePoolTableLock, retaddr);
      v30 = v36;
    }
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v30);
    __writecr8(v36);
    goto LABEL_10;
  }
  v9 = BugCheckParameter2 - 16;
  if ( (*(_BYTE *)(BugCheckParameter2 - 13) & 4) != 0 )
    v9 += -16LL * (unsigned __int8)*(_WORD *)v9;
  v10 = *(_WORD *)(v9 + 2);
  v7 = *(_DWORD *)(v9 + 4);
  BugCheckParameter4 = 16LL * (unsigned __int8)v10;
  if ( (v10 & 0x800) != 0 )
  {
    v11 = v9 ^ ExpPoolQuotaCookie ^ *(_QWORD *)(v9 + 8);
    *(_QWORD *)(v9 + 8) = ExpPoolQuotaCookie ^ v9;
LABEL_10:
    if ( v11 && v11 != -1LL )
    {
      if ( v11 < 0xFFFF800000000000uLL || (*(_BYTE *)v11 & 0x7F) != 3 )
      {
        if ( v9 )
          v4 = *(_DWORD *)(v9 + 4);
        KeBugCheckEx(0xC2u, 0xDuLL, BugCheckParameter2, v4, v11);
      }
      v12 = v8 & 0x100;
      if ( (PEPROCESS)v11 != PsInitialSystemProcess )
      {
        v13 = v12 != 0;
        v14 = v13 << 7;
        v37 = v13;
        v15 = PspResourceFlags[8 * v13];
        v35 = *(__int64 **)(v11 + 760);
        v16 = (unsigned __int64 *)&v35[16 * v13];
        v38 = (unsigned __int64)(unsigned int)v13 << 7;
        _m_prefetchw(v16);
        v17 = *v16;
        v18 = v16[8];
        if ( v16[10] )
        {
          if ( v18 > v17 )
          {
            v19 = (unsigned __int64 *)&qword_140F05468[7 * v13];
            v20 = *v19;
            if ( v18 - v17 > *v19 )
            {
              if ( v20 > BugCheckParameter4 )
                v20 = BugCheckParameter4;
              if ( v18 == _InterlockedCompareExchange64((volatile signed __int64 *)v16 + 8, v18 - v20, v18)
                && _InterlockedExchangeAdd64((volatile signed __int64 *)v16 + 9, v20) + v20 > *v19 )
              {
                v29 = _InterlockedExchange64((volatile __int64 *)v16 + 9, 0LL);
                if ( v29 )
                {
                  PspReturnResourceQuota((unsigned int)v13, v16, v29, 0LL);
                  v13 = v37;
                  v14 = v38;
                }
              }
            }
          }
        }
        v21 = BugCheckParameter4;
        while ( 1 )
        {
          do
          {
            v22 = v17;
            v23 = 0LL;
            if ( BugCheckParameter4 < v17 )
            {
              v22 = BugCheckParameter4;
              v23 = v17 - BugCheckParameter4;
            }
            v25 = _InterlockedCompareExchange64((volatile signed __int64 *)v16, v23, v17);
            v24 = v17 == v25;
            v17 = v25;
          }
          while ( !v24 );
          BugCheckParameter4 -= v22;
          if ( !BugCheckParameter4 )
            break;
          if ( v35 == &PspSystemQuotaBlock )
            KeBugCheckEx(0x21u, v11, v13, v21, BugCheckParameter4);
          v35 = &PspSystemQuotaBlock;
          v16 = (unsigned __int64 *)((char *)&PspSystemQuotaBlock + v14);
          _m_prefetchw((char *)&PspSystemQuotaBlock + v14);
          v17 = *(__int64 *)((char *)&PspSystemQuotaBlock + v14);
        }
        if ( (v15 & 4) != 0 )
          _InterlockedAdd64((volatile signed __int64 *)(v11 + 8 * v13 + 512), -(__int64)v21);
      }
      if ( ObpTraceFlags )
        ObpPushStackInfo(v11 - 48, 0, 1u, v7);
      v26 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v11 - 48), 0xFFFFFFFFFFFFFFFFuLL);
      v27 = v26 <= 1;
      v28 = v26 - 1;
      if ( v27 )
      {
        if ( *(_QWORD *)(v11 - 40) )
          KeBugCheckEx(
            0x18u,
            ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(v11 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)(v11 - 48) >> 8)],
            v11,
            3uLL,
            *(_QWORD *)(v11 - 40));
        if ( v28 < 0 )
          KeBugCheckEx(0x18u, 0LL, v11, 4uLL, v28);
        ObpDeferObjectDeletion(v11 - 48);
      }
    }
  }
}
