/*
 * XREFs of IopFreeIrp @ 0x1402C37E0
 * Callers:
 *     IovFreeIrpPrivate @ 0x140BA8F30 (IovFreeIrpPrivate.c)
 * Callees:
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x140219638 (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 *     PspReturnResourceQuota @ 0x14027BA78 (PspReturnResourceQuota.c)
 *     ExAcquireSpinLockShared @ 0x1402C2D30 (ExAcquireSpinLockShared.c)
 *     IopFreeIrpExtension @ 0x1402C3EF0 (IopFreeIrpExtension.c)
 *     ObpPushStackInfo @ 0x14031FC8C (ObpPushStackInfo.c)
 *     ObpDeferObjectDeletion @ 0x1403B341C (ObpDeferObjectDeletion.c)
 *     ExIsSpecialPoolAddress @ 0x14048BD64 (ExIsSpecialPoolAddress.c)
 *     IopFreeReserveIrp @ 0x1404CD41C (IopFreeReserveIrp.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     RtlpInterlockedPushEntrySList @ 0x1406B4870 (RtlpInterlockedPushEntrySList.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

void __fastcall IopFreeIrp(ULONG_PTR BugCheckParameter2, __int64 a2, __int64 a3)
{
  unsigned int v3; // r14d
  bool v5; // zf
  __int64 v6; // rcx
  struct _KPRCB *CurrentPrcb; // rdx
  char v8; // al
  __int16 v9; // r8
  __int64 v10; // r8
  __int64 v11; // rbp
  __int64 v12; // rcx
  __int64 v13; // rbp
  char v14; // al
  ULONG_PTR BugCheckParameter4; // r12
  ULONG_PTR v16; // r13
  ULONG_PTR v17; // rdi
  __int16 v18; // ax
  ULONG_PTR v19; // rsi
  ULONG_PTR v20; // r13
  ULONG_PTR v21; // r11
  unsigned __int64 *v22; // r13
  unsigned __int64 v23; // rdi
  unsigned __int64 v24; // rax
  unsigned __int64 *v25; // r9
  unsigned __int64 v26; // rdx
  ULONG_PTR v27; // r10
  unsigned __int64 v28; // r9
  signed __int64 v29; // rdx
  signed __int64 v30; // rax
  signed __int64 v31; // r15
  bool v32; // cc
  signed __int64 v33; // r15
  unsigned __int64 v34; // rtt
  __int64 v35; // rax
  KIRQL v36; // r8
  int v37; // esi
  unsigned int v38; // r9d
  char *v39; // rdx
  ULONG_PTR v40; // [rsp+30h] [rbp-58h]
  __int64 retaddr; // [rsp+88h] [rbp+0h]
  char v42; // [rsp+90h] [rbp+8h]
  KIRQL v43; // [rsp+90h] [rbp+8h]
  __int64 *v44; // [rsp+A0h] [rbp+18h]
  ULONG_PTR v45; // [rsp+A8h] [rbp+20h]

  v3 = 0;
  if ( *(_WORD *)BugCheckParameter2 != 6 )
    KeBugCheckEx(0x44u, BugCheckParameter2, 0x27C1uLL, 0LL, 0LL);
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
      || (IopIrpStackProfilerFlags & 3) != 0
      && (v9 = *(_WORD *)(BugCheckParameter2 + 2), v9 != 72 * (char)IopLargeIrpStackLocations + 208)
      && v9 != 72 * (char)IopMediumIrpStackLocations + 208
      && v9 != 280 )
    {
      ExFreePoolWithTag((PVOID)BugCheckParameter2, 0);
      return;
    }
    v10 = *(unsigned __int16 *)(BugCheckParameter2 + 2);
    if ( (unsigned __int16)v10 < (unsigned __int16)(72 * (char)IopLargeIrpStackLocations + 208) )
    {
      if ( (unsigned __int16)v10 < (unsigned __int16)(72 * (char)IopMediumIrpStackLocations + 208) )
      {
        v11 = 2048LL;
        v12 = 2056LL;
      }
      else
      {
        v11 = 2064LL;
        v12 = 2072LL;
      }
    }
    else
    {
      v11 = 2080LL;
      v12 = 2088LL;
    }
    *(_QWORD *)(BugCheckParameter2 + 56) = v10;
    v13 = *(_QWORD *)((char *)&CurrentPrcb->MxCsr + v11);
    ++*(_DWORD *)(v13 + 28);
    if ( *(_WORD *)v13 >= *(_WORD *)(v13 + 16) )
    {
      ++*(_DWORD *)(v13 + 32);
      v13 = *(_QWORD *)((char *)&CurrentPrcb->MxCsr + v12);
      ++*(_DWORD *)(v13 + 28);
      if ( *(_WORD *)v13 >= *(_WORD *)(v13 + 16) )
      {
        ++*(_DWORD *)(v13 + 32);
        ExFreePoolWithTag((PVOID)BugCheckParameter2, 0);
        return;
      }
    }
    v14 = *(_BYTE *)(BugCheckParameter2 + 71);
    if ( (v14 & 1) != 0 )
    {
      *(_BYTE *)(BugCheckParameter2 + 71) = v14 ^ 1;
      BugCheckParameter4 = 0LL;
      if ( !ExpSpecialAllocations || !(unsigned int)ExIsSpecialPoolAddress(BugCheckParameter2) )
      {
        if ( BugCheckParameter2 >= 0xFFFF800000000000uLL
          && byte_140E38AE8[((BugCheckParameter2 >> 39) & 0x1FF) - 256] == 5 )
        {
          v16 = 256LL;
        }
        else
        {
          v16 = 64LL;
        }
        v17 = 0LL;
        if ( (BugCheckParameter2 & 0xFFF) != 0 )
        {
          v17 = BugCheckParameter2 - 16;
          if ( (*(_BYTE *)(BugCheckParameter2 - 13) & 4) != 0 )
            v17 += -16LL * (unsigned __int8)*(_WORD *)v17;
          v18 = *(_WORD *)(v17 + 2);
          BugCheckParameter4 = 16LL * (unsigned __int8)v18;
          if ( (v18 & 0x800) == 0 )
            goto LABEL_45;
          v19 = ExpPoolQuotaCookie ^ *(_QWORD *)(v17 + 8) ^ v17;
          *(_QWORD *)(v17 + 8) = ExpPoolQuotaCookie ^ v17;
        }
        else
        {
          v36 = ExAcquireSpinLockShared(&ExpLargePoolTableLock);
          v37 = 1;
          v43 = v36;
          v38 = (PoolBigPageTableSize - 1) & ((40543 * (BugCheckParameter2 >> 12)) ^ ((40543 * (BugCheckParameter2 >> 12)) >> 32));
          while ( 1 )
          {
            v39 = (char *)PoolBigPageTable + 32 * v38;
            if ( *(_QWORD *)v39 == BugCheckParameter2 )
              break;
            if ( ++v38 >= (unsigned __int64)PoolBigPageTableSize )
            {
              if ( !v37 )
                goto LABEL_63;
              v38 = 0;
              v37 = 0;
            }
          }
          if ( !v39 )
LABEL_63:
            KeBugCheckEx(0x19u, 0x22uLL, BugCheckParameter2, v16, 0LL);
          if ( (*((_DWORD *)v39 + 3) & 0x100) != 0 )
          {
            BugCheckParameter4 = *((_QWORD *)v39 + 2);
            v19 = BugCheckParameter2 ^ ExpPoolQuotaCookie ^ *((_QWORD *)v39 + 3);
            *((_QWORD *)v39 + 3) = ExpPoolQuotaCookie ^ BugCheckParameter2;
          }
          else
          {
            v19 = -1LL;
          }
          if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
          {
            _InterlockedAnd(&ExpLargePoolTableLock, 0xBFFFFFFF);
            _InterlockedDecrement(&ExpLargePoolTableLock);
          }
          else
          {
            ExpReleaseSpinLockSharedFromDpcLevelInstrumented(&ExpLargePoolTableLock, retaddr);
            v36 = v43;
          }
          if ( KiIrqlFlags )
          {
            KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v36);
            v36 = v43;
          }
          __writecr8(v36);
        }
        if ( v19 && v19 != -1LL )
        {
          if ( v19 < 0xFFFF800000000000uLL || (*(_BYTE *)v19 & 0x7F) != 3 )
          {
            if ( v17 )
              v3 = *(_DWORD *)(v17 + 4);
            KeBugCheckEx(0xC2u, 0xDuLL, BugCheckParameter2, v3, v19);
          }
          v20 = v16 & 0x100;
          if ( (PEPROCESS)v19 != PsInitialSystemProcess )
          {
            v44 = *(__int64 **)(v19 + 760);
            v21 = v20 != 0;
            v45 = v21;
            v42 = PspResourceFlags[8 * v21];
            v40 = v21 << 7;
            v22 = (unsigned __int64 *)&v44[16 * v21];
            _m_prefetchw(v22);
            v23 = *v22;
            v24 = v22[8];
            if ( v22[10] )
            {
              if ( v24 > v23 )
              {
                v25 = (unsigned __int64 *)&qword_140F05B28[7 * v21];
                v26 = *v25;
                if ( v24 - v23 > *v25 )
                {
                  if ( v26 > BugCheckParameter4 )
                    v26 = BugCheckParameter4;
                  v34 = v22[8];
                  if ( v34 == _InterlockedCompareExchange64((volatile signed __int64 *)v22 + 8, v24 - v26, v24)
                    && _InterlockedExchangeAdd64((volatile signed __int64 *)v22 + 9, v26) + v26 > *v25 )
                  {
                    v35 = _InterlockedExchange64((volatile __int64 *)v22 + 9, 0LL);
                    if ( v35 )
                    {
                      PspReturnResourceQuota(v21, (__int64)v22, v35, 0);
                      v21 = v45;
                    }
                  }
                }
              }
            }
            v27 = BugCheckParameter4;
            while ( 1 )
            {
              do
              {
                v28 = v23;
                v29 = 0LL;
                if ( BugCheckParameter4 < v23 )
                {
                  v28 = BugCheckParameter4;
                  v29 = v23 - BugCheckParameter4;
                }
                v30 = _InterlockedCompareExchange64((volatile signed __int64 *)v22, v29, v23);
                v5 = v23 == v30;
                v23 = v30;
              }
              while ( !v5 );
              BugCheckParameter4 -= v28;
              if ( !BugCheckParameter4 )
                break;
              if ( v44 == &PspSystemQuotaBlock )
                KeBugCheckEx(0x21u, v19, v21, v27, BugCheckParameter4);
              v22 = (unsigned __int64 *)((char *)&PspSystemQuotaBlock + v40);
              v44 = &PspSystemQuotaBlock;
              _m_prefetchw((char *)&PspSystemQuotaBlock + v40);
              v23 = *v22;
            }
            if ( (v42 & 4) != 0 )
              _InterlockedAdd64((volatile signed __int64 *)(v19 + 8 * v21 + 512), -(__int64)v27);
          }
          if ( ObpTraceFlags )
            ObpPushStackInfo(v19 - 48);
          v31 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v19 - 48), 0xFFFFFFFFFFFFFFFFuLL);
          v32 = v31 <= 1;
          v33 = v31 - 1;
          if ( v32 )
          {
            if ( *(_QWORD *)(v19 - 40) )
              KeBugCheckEx(
                0x18u,
                ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(v19 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)(v19 - 48) >> 8)],
                v19,
                3uLL,
                *(_QWORD *)(v19 - 40));
            if ( v33 < 0 )
              KeBugCheckEx(0x18u, 0LL, v19, 4uLL, v33);
            ObpDeferObjectDeletion(v19 - 48);
          }
        }
      }
    }
LABEL_45:
    RtlpInterlockedPushEntrySList((PSLIST_HEADER)v13, (PSLIST_ENTRY)BugCheckParameter2);
    return;
  }
  IopFreeReserveIrp(BugCheckParameter2);
}
