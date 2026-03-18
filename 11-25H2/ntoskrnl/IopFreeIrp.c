/*
 * XREFs of IopFreeIrp @ 0x140250FE0
 * Callers:
 *     IovFreeIrpPrivate @ 0x140B96F50 (IovFreeIrpPrivate.c)
 * Callees:
 *     IopFreeIrpExtension @ 0x140252920 (IopFreeIrpExtension.c)
 *     ObpPushStackInfo @ 0x14029C310 (ObpPushStackInfo.c)
 *     ExAcquireSpinLockShared @ 0x1402BBA30 (ExAcquireSpinLockShared.c)
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x140323E4C (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 *     ObpDeferObjectDeletion @ 0x14036FDD8 (ObpDeferObjectDeletion.c)
 *     PspReturnResourceQuota @ 0x1403C651C (PspReturnResourceQuota.c)
 *     ExIsSpecialPoolAddress @ 0x1403C6C50 (ExIsSpecialPoolAddress.c)
 *     IopFreeReserveIrp @ 0x1404D4334 (IopFreeReserveIrp.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 *     RtlpInterlockedPushEntrySList @ 0x1406A8600 (RtlpInterlockedPushEntrySList.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

void __fastcall IopFreeIrp(ULONG_PTR BugCheckParameter2, __int64 a2, __int64 a3)
{
  unsigned int v3; // r14d
  bool v5; // zf
  __int64 v6; // rcx
  struct _KPRCB *CurrentPrcb; // rdx
  char v8; // al
  ULONG_PTR v9; // r9
  __int16 v10; // r8
  __int64 v11; // r8
  __int64 v12; // rbp
  __int64 v13; // rcx
  __int64 v14; // rbp
  char v15; // al
  ULONG_PTR BugCheckParameter4; // r12
  signed __int64 v17; // rdx
  ULONG_PTR v18; // r13
  ULONG_PTR v19; // rdi
  __int16 v20; // ax
  __int64 v21; // r8
  ULONG_PTR v22; // rsi
  ULONG_PTR v23; // r13
  ULONG_PTR v24; // r11
  unsigned __int64 *v25; // r13
  unsigned __int64 v26; // rdi
  unsigned __int64 v27; // rax
  unsigned __int64 *v28; // r9
  unsigned __int64 v29; // rdx
  ULONG_PTR v30; // r10
  signed __int64 v31; // rax
  signed __int64 v32; // r15
  bool v33; // cc
  signed __int64 v34; // r15
  unsigned __int64 v35; // rtt
  __int64 v36; // rax
  KIRQL v37; // al
  KIRQL v38; // r8
  int v39; // esi
  char *v40; // rdx
  ULONG_PTR v41; // [rsp+30h] [rbp-58h]
  void *retaddr; // [rsp+88h] [rbp+0h]
  char v43; // [rsp+90h] [rbp+8h]
  KIRQL v44; // [rsp+90h] [rbp+8h]
  unsigned int v45; // [rsp+98h] [rbp+10h]
  __int64 *v46; // [rsp+A0h] [rbp+18h]
  ULONG_PTR v47; // [rsp+A8h] [rbp+20h]

  v3 = 0;
  if ( *(_WORD *)BugCheckParameter2 != 6 )
    KeBugCheckEx(0x44u, BugCheckParameter2, 0x27A2uLL, 0LL, 0LL);
  v5 = (*(_BYTE *)(BugCheckParameter2 + 71) & 0x40) == 0;
  *(_WORD *)BugCheckParameter2 = 0;
  if ( !v5 )
  {
    LOBYTE(a3) = 1;
    IopFreeIrpExtension(BugCheckParameter2, 0xFFFFFFFFLL, a3);
  }
  if ( (*(_BYTE *)(BugCheckParameter2 + 71) & 0x21) != 0x21 )
  {
    v6 = *(unsigned __int16 *)(BugCheckParameter2 + 4);
    if ( (unsigned int)v6 >= (unsigned int)KeNumberProcessors_0 )
    {
      CurrentPrcb = KeGetCurrentPrcb();
    }
    else
    {
      _mm_lfence();
      CurrentPrcb = (struct _KPRCB *)KiProcessorBlock[v6];
    }
    v8 = *(_BYTE *)(BugCheckParameter2 + 71);
    if ( (v8 & 8) != 0 )
    {
      *(_BYTE *)(BugCheckParameter2 + 71) = v8 ^ 8;
      _InterlockedIncrement(&CurrentPrcb->LookasideIrpFloat);
    }
    if ( (*(_BYTE *)(BugCheckParameter2 + 71) & 4) == 0
      || (v9 = (unsigned int)(char)IopMediumIrpStackLocations, (IopIrpStackProfilerFlags & 3) != 0)
      && (v10 = *(_WORD *)(BugCheckParameter2 + 2), v10 != 72 * (char)IopLargeIrpStackLocations + 208)
      && v10 != 72 * (char)IopMediumIrpStackLocations + 208
      && v10 != 280 )
    {
      ExFreePoolWithTag((PVOID)BugCheckParameter2, 0);
      return;
    }
    v11 = *(unsigned __int16 *)(BugCheckParameter2 + 2);
    if ( (unsigned __int16)v11 < (unsigned __int16)(72 * (char)IopLargeIrpStackLocations + 208) )
    {
      if ( (unsigned __int16)v11 < (unsigned __int16)(72 * (char)IopMediumIrpStackLocations + 208) )
      {
        v12 = 2048LL;
        v13 = 2056LL;
      }
      else
      {
        v12 = 2064LL;
        v13 = 2072LL;
      }
    }
    else
    {
      v12 = 2080LL;
      v13 = 2088LL;
    }
    *(_QWORD *)(BugCheckParameter2 + 56) = v11;
    v14 = *(_QWORD *)((char *)&CurrentPrcb->MxCsr + v12);
    ++*(_DWORD *)(v14 + 28);
    if ( *(_WORD *)v14 >= *(_WORD *)(v14 + 16) )
    {
      ++*(_DWORD *)(v14 + 32);
      v14 = *(_QWORD *)((char *)&CurrentPrcb->MxCsr + v13);
      ++*(_DWORD *)(v14 + 28);
      if ( *(_WORD *)v14 >= *(_WORD *)(v14 + 16) )
      {
        ++*(_DWORD *)(v14 + 32);
        ExFreePoolWithTag((PVOID)BugCheckParameter2, 0);
        return;
      }
    }
    v15 = *(_BYTE *)(BugCheckParameter2 + 71);
    if ( (v15 & 1) != 0 )
    {
      v45 = 0;
      *(_BYTE *)(BugCheckParameter2 + 71) = v15 ^ 1;
      BugCheckParameter4 = 0LL;
      if ( !ExpSpecialAllocations || !(unsigned int)ExIsSpecialPoolAddress(BugCheckParameter2, CurrentPrcb, v11, v9) )
      {
        v17 = 0xFFFF800000000000uLL;
        if ( BugCheckParameter2 >= 0xFFFF800000000000uLL
          && byte_140E38768[((BugCheckParameter2 >> 39) & 0x1FF) - 256] == 5 )
        {
          v18 = 256LL;
        }
        else
        {
          v18 = 64LL;
        }
        v19 = 0LL;
        if ( (BugCheckParameter2 & 0xFFF) != 0 )
        {
          v19 = BugCheckParameter2 - 16;
          if ( (*(_BYTE *)(BugCheckParameter2 - 13) & 4) != 0 )
            v19 += -16LL * (unsigned __int8)*(_WORD *)v19;
          v20 = *(_WORD *)(v19 + 2);
          v21 = *(unsigned int *)(v19 + 4);
          BugCheckParameter4 = 16LL * (unsigned __int8)v20;
          v45 = *(_DWORD *)(v19 + 4);
          if ( (v20 & 0x800) == 0 )
            goto LABEL_43;
          v22 = ExpPoolQuotaCookie ^ *(_QWORD *)(v19 + 8) ^ v19;
          *(_QWORD *)(v19 + 8) = ExpPoolQuotaCookie ^ v19;
        }
        else
        {
          v37 = ExAcquireSpinLockShared(&ExpLargePoolTableLock);
          v38 = v37;
          v39 = 1;
          v44 = v37;
          v9 = ((int)PoolBigPageTableSize - 1) & ((40543 * (unsigned int)(BugCheckParameter2 >> 12)) ^ ((40543 * (BugCheckParameter2 >> 12)) >> 32));
          while ( 1 )
          {
            v40 = (char *)PoolBigPageTable + 32 * (unsigned int)v9;
            if ( *(_QWORD *)v40 == BugCheckParameter2 )
              break;
            v9 = (unsigned int)(v9 + 1);
            if ( (unsigned int)v9 >= (unsigned __int64)PoolBigPageTableSize )
            {
              if ( !v39 )
                goto LABEL_63;
              v9 = 0LL;
              v39 = 0;
            }
          }
          if ( !v40 )
LABEL_63:
            KeBugCheckEx(0x19u, 0x22uLL, BugCheckParameter2, v18, 0LL);
          if ( (*((_DWORD *)v40 + 3) & 0x100) != 0 )
          {
            BugCheckParameter4 = *((_QWORD *)v40 + 2);
            v22 = BugCheckParameter2 ^ ExpPoolQuotaCookie ^ *((_QWORD *)v40 + 3);
            *((_QWORD *)v40 + 3) = ExpPoolQuotaCookie ^ BugCheckParameter2;
            v45 = *((_DWORD *)v40 + 2);
          }
          else
          {
            v22 = -1LL;
          }
          if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
          {
            _InterlockedAnd(&ExpLargePoolTableLock, 0xBFFFFFFF);
            _InterlockedDecrement(&ExpLargePoolTableLock);
          }
          else
          {
            ExpReleaseSpinLockSharedFromDpcLevelInstrumented(&ExpLargePoolTableLock, retaddr, v37);
            v38 = v44;
          }
          if ( KiIrqlFlags )
            KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v38);
          __writecr8(v44);
          v21 = v45;
          v17 = 0xFFFF800000000000uLL;
        }
        if ( v22 && v22 != -1LL )
        {
          if ( v22 < 0xFFFF800000000000uLL || (*(_BYTE *)v22 & 0x7F) != 3 )
          {
            if ( v19 )
              v3 = *(_DWORD *)(v19 + 4);
            KeBugCheckEx(0xC2u, 0xDuLL, BugCheckParameter2, v3, v22);
          }
          v23 = v18 & 0x100;
          if ( (PEPROCESS)v22 != PsInitialSystemProcess )
          {
            v46 = *(__int64 **)(v22 + 760);
            v24 = v23 != 0;
            v47 = v24;
            v43 = PspResourceFlags[8 * v24];
            v41 = v24 << 7;
            v25 = (unsigned __int64 *)&v46[16 * v24];
            _m_prefetchw(v25);
            v26 = *v25;
            v27 = v25[8];
            if ( v25[10] )
            {
              if ( v27 > v26 )
              {
                v28 = (unsigned __int64 *)&qword_140F05468[7 * v24];
                v29 = *v28;
                if ( v27 - v26 > *v28 )
                {
                  if ( v29 > BugCheckParameter4 )
                    v29 = BugCheckParameter4;
                  v35 = v25[8];
                  if ( v35 == _InterlockedCompareExchange64((volatile signed __int64 *)v25 + 8, v27 - v29, v27)
                    && _InterlockedExchangeAdd64((volatile signed __int64 *)v25 + 9, v29) + v29 > *v28 )
                  {
                    v36 = _InterlockedExchange64((volatile __int64 *)v25 + 9, 0LL);
                    if ( v36 )
                    {
                      PspReturnResourceQuota((unsigned int)v24, v25, v36, 0LL);
                      v21 = v45;
                      v24 = v47;
                    }
                  }
                }
              }
            }
            v30 = BugCheckParameter4;
            while ( 1 )
            {
              do
              {
                v9 = v26;
                v17 = 0LL;
                if ( BugCheckParameter4 < v26 )
                {
                  v9 = BugCheckParameter4;
                  v17 = v26 - BugCheckParameter4;
                }
                v31 = _InterlockedCompareExchange64((volatile signed __int64 *)v25, v17, v26);
                v5 = v26 == v31;
                v26 = v31;
              }
              while ( !v5 );
              BugCheckParameter4 -= v9;
              if ( !BugCheckParameter4 )
                break;
              if ( v46 == &PspSystemQuotaBlock )
                KeBugCheckEx(0x21u, v22, v24, v30, BugCheckParameter4);
              v25 = (unsigned __int64 *)((char *)&PspSystemQuotaBlock + v41);
              v46 = &PspSystemQuotaBlock;
              _m_prefetchw((char *)&PspSystemQuotaBlock + v41);
              v26 = *v25;
            }
            if ( (v43 & 4) != 0 )
              _InterlockedAdd64((volatile signed __int64 *)(v22 + 8 * v24 + 512), -(__int64)v30);
          }
          if ( ObpTraceFlags )
            ObpPushStackInfo(v22 - 48);
          v32 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v22 - 48), 0xFFFFFFFFFFFFFFFFuLL);
          v33 = v32 <= 1;
          v34 = v32 - 1;
          if ( v33 )
          {
            if ( *(_QWORD *)(v22 - 40) )
              KeBugCheckEx(
                0x18u,
                ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(v22 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)(v22 - 48) >> 8)],
                v22,
                3uLL,
                *(_QWORD *)(v22 - 40));
            if ( v34 < 0 )
              KeBugCheckEx(0x18u, 0LL, v22, 4uLL, v34);
            ObpDeferObjectDeletion(v22 - 48, v17, v21, v9);
          }
        }
      }
    }
LABEL_43:
    RtlpInterlockedPushEntrySList((PSLIST_HEADER)v14, (PSLIST_ENTRY)BugCheckParameter2);
    return;
  }
  IopFreeReserveIrp(BugCheckParameter2);
}
