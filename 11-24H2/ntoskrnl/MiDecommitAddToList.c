/*
 * XREFs of MiDecommitAddToList @ 0x1402889A0
 * Callers:
 *     MiDecommitHandleValidPte @ 0x140288180 (MiDecommitHandleValidPte.c)
 *     MiDecommitPages @ 0x140288300 (MiDecommitPages.c)
 *     MiDeleteVa @ 0x1402DB780 (MiDeleteVa.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x14021A250 (MI_READ_PTE_LOCK_FREE.c)
 *     MiWriteWsle @ 0x140232940 (MiWriteWsle.c)
 *     MiInsertTbFlushEntry @ 0x1402432E0 (MiInsertTbFlushEntry.c)
 *     MiTerminateWsle @ 0x1402856F0 (MiTerminateWsle.c)
 *     MI_WRITE_INVALID_PTE_TB_FLUSH_NEEDED @ 0x1402869A0 (MI_WRITE_INVALID_PTE_TB_FLUSH_NEEDED.c)
 *     HvlNotifyLongSpinWait @ 0x140293260 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140293290 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiUnlockWsle @ 0x1402C7B94 (MiUnlockWsle.c)
 *     MiVmAccessLoggingEnabled @ 0x1402E47A4 (MiVmAccessLoggingEnabled.c)
 *     MiGetWsleContents @ 0x1402E5390 (MiGetWsleContents.c)
 *     MI_WSLE_LOG_ACCESS @ 0x1402EFF38 (MI_WSLE_LOG_ACCESS.c)
 *     MiTransferSoftwarePte @ 0x14039F300 (MiTransferSoftwarePte.c)
 *     KiPreprocessFlushTb @ 0x1403AEBC0 (KiPreprocessFlushTb.c)
 *     KiFlushAddressSpaceTb @ 0x1403AFCAC (KiFlushAddressSpaceTb.c)
 *     KxFlushEntireTb @ 0x1403B07A4 (KxFlushEntireTb.c)
 *     MiInitializeTbFlushStamps @ 0x14044464C (MiInitializeTbFlushStamps.c)
 *     MiLogRemoveWsleEvent @ 0x1404CC120 (MiLogRemoveWsleEvent.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     KiSetUserTbFlushPending @ 0x1406AB3E0 (KiSetUserTbFlushPending.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

void __fastcall MiDecommitAddToList(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // r12
  unsigned __int64 v4; // rdi
  unsigned int v5; // ebp
  int v6; // esi
  __int64 v7; // r13
  __int64 v8; // r14
  __int64 v9; // r11
  int v10; // eax
  unsigned __int8 WsleContents; // bl
  int v12; // eax
  unsigned int v13; // r10d
  __int64 v14; // rcx
  int v15; // r15d
  int v16; // eax
  unsigned __int64 v17; // r8
  unsigned int v18; // esi
  __int64 v19; // r12
  int v20; // r15d
  __int64 v21; // r9
  unsigned __int64 v22; // r10
  __int64 v23; // rax
  __int64 v24; // rdx
  char v25; // cl
  _QWORD *v26; // r13
  unsigned int v27; // eax
  __int64 v28; // rcx
  int v29; // eax
  __int64 v30; // rbx
  __int64 v31; // rsi
  unsigned int v32; // esi
  int v33; // eax
  int v34; // eax
  int v35; // ecx
  unsigned __int16 v36; // ax
  __int16 v37; // dx
  __int64 v38; // rdx
  ULONG_PTR v39; // rcx
  ULONG_PTR v40; // rax
  char v41; // bl
  __int64 v42; // r9
  unsigned __int64 v43; // rax
  unsigned __int64 v44; // rcx
  unsigned __int64 v45; // rax
  unsigned __int64 v46; // rbx
  unsigned __int8 CurrentIrql; // bl
  unsigned __int64 v48; // rbx
  __int64 v49; // rdx
  unsigned __int8 v50; // [rsp+30h] [rbp-78h] BYREF
  char v51; // [rsp+31h] [rbp-77h] BYREF
  unsigned int v52; // [rsp+34h] [rbp-74h]
  int v53; // [rsp+38h] [rbp-70h]
  int v54; // [rsp+3Ch] [rbp-6Ch] BYREF
  int v55; // [rsp+40h] [rbp-68h]
  __int64 v56; // [rsp+48h] [rbp-60h]
  ULONG_PTR BugCheckParameter2; // [rsp+50h] [rbp-58h] BYREF
  unsigned __int64 v58; // [rsp+58h] [rbp-50h]
  __int64 v59; // [rsp+60h] [rbp-48h]

  v2 = a2 & 0xFFFFFFFFFFFFF000uLL;
  v59 = *(_QWORD *)(a1 + 16);
  v56 = a1;
  v58 = a2 & 0xFFFFFFFFFFFFF000uLL;
  v3 = *(_QWORD *)(a1 + 32);
  BugCheckParameter2 = (((a2 & 0xFFFFFFFFFFFFF000uLL) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v4 = MI_READ_PTE_LOCK_FREE(BugCheckParameter2);
  if ( (v4 & 0x80u) != 0LL || v2 < 0xFFFFF68000000000uLL || v2 > 0xFFFFF6FFFFFFFFFFuLL )
  {
    v5 = 0;
    v53 = 0;
    v52 = 1;
    v6 = 0;
    v7 = 48 * ((v4 >> 12) & 0xFFFFFFFFFFLL);
    v9 = v56;
    v8 = v7 - 0x220000000000LL;
    v12 = *(_DWORD *)(v56 + 160);
    if ( (v12 & 0x100) != 0 )
    {
      v52 = 0;
      WsleContents = 0;
      v10 = 1;
    }
    else
    {
      if ( (v12 & 0x60) != 0 )
      {
        WsleContents = 74;
        v52 = 0;
        v53 = 1;
        v55 = 1;
        goto LABEL_16;
      }
      if ( *(_DWORD *)(v56 + 40) == 6 )
      {
        WsleContents = 74;
        v10 = 1;
      }
      else
      {
        WsleContents = MiGetWsleContents(0xFFFFFFFFFFLL, v2);
        v52 = v13;
        v10 = v13;
      }
      v53 = 0;
    }
  }
  else
  {
    v52 = 1;
    v5 = 0;
    v6 = 1;
    v53 = 0;
    v7 = 48 * ((v4 >> 12) & 0xFFFFFFFFFFLL);
    v8 = v7 - 0x220000000000LL;
    v9 = v56;
    v10 = 1;
    WsleContents = (*(_QWORD *)(v7 - 0x220000000000LL) >> 42) & 7;
  }
  if ( *(__int64 *)(v8 + 40) < 0 )
    v10 = 0;
  v55 = v10;
LABEL_16:
  v14 = *(unsigned int *)(v9 + 40);
  if ( !(_DWORD)v14 )
    goto LABEL_30;
  if ( !v6 )
  {
    if ( (WsleContents & 0xF) == 9 )
    {
      WsleContents = WsleContents & 0xF0 | 0xA;
      MiWriteWsle(v14, v58, WsleContents);
      v9 = v56;
      v52 = 0;
      goto LABEL_29;
    }
    if ( (((_DWORD)v14 - 2) & 0xFFFFFFFD) == 0 && (unsigned int)MiVmAccessLoggingEnabled(v3) )
    {
      MI_WSLE_LOG_ACCESS(v3, BugCheckParameter2);
      v9 = v56;
    }
    v14 = *(unsigned int *)(v9 + 40);
    if ( (_DWORD)v14 == 6 )
    {
      v52 = 0;
      if ( !*(_DWORD *)(v59 + 12376) )
      {
        v14 = (__int64)qword_140E2FF88;
        *(_QWORD *)(v9 + 8) = *((_QWORD *)qword_140E2FF88 + ((*(_QWORD *)(v8 + 40) >> 43) & 0x3FFLL));
      }
      goto LABEL_29;
    }
    if ( (WsleContents & 0xF) == 8 )
    {
LABEL_29:
      ++**(_QWORD **)(v9 + 24);
      goto LABEL_30;
    }
  }
  if ( (*(_DWORD *)(v9 + 156) & 0x20) != 0 && (_DWORD)v14 != 3 )
    goto LABEL_29;
LABEL_30:
  v54 = 0;
  v15 = 0;
  if ( (WsleContents & 0xF) == 8 )
  {
    v15 = 1;
    v16 = MiUnlockWsle(v3, v58, v8);
    v9 = v56;
    v54 = v16;
  }
  v17 = v52;
  if ( v52 )
  {
    if ( !v15 )
    {
      if ( !(unsigned int)MiTerminateWsle(v3, v58, *(_DWORD *)(v9 + 96), 6, &v54) )
        return;
      v17 = v52;
    }
    if ( v6 )
    {
      v18 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v8 + 24), 0x3FuLL) )
      {
        do
        {
          if ( (++v18 & HvlLongSpinCountMask) == 0
            && (HvlEnlightenments & 0x40) != 0
            && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v14) )
          {
            HvlNotifyLongSpinWait(v18);
          }
          else
          {
            _mm_pause();
          }
        }
        while ( *(__int64 *)(v8 + 24) < 0 );
      }
      *(_QWORD *)(v8 + 24) |= 0x4000000000000000uLL;
      _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      v17 = v52;
    }
    v19 = v56;
    v20 = v55;
  }
  else
  {
    v20 = v55;
    v32 = 0;
    if ( v55 && !v53 )
    {
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v8 + 24), 0x3FuLL) )
      {
        do
        {
          if ( (++v32 & HvlLongSpinCountMask) == 0
            && (HvlEnlightenments & 0x40) != 0
            && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v14) )
          {
            HvlNotifyLongSpinWait(v32);
          }
          else
          {
            _mm_pause();
          }
        }
        while ( *(__int64 *)(v8 + 24) < 0 );
      }
      v17 = v52;
      *(_QWORD *)(v8 + 24) |= 0x4000000000000000uLL;
      v32 = 64;
    }
    v19 = v56;
    if ( *(_DWORD *)(v56 + 40) == 6 )
    {
      v33 = *(_DWORD *)(v8 + 32);
      if ( (!(_WORD)v33 || (unsigned __int16)v33 > 2u && ((_WORD)v33 != 3 || (v33 & 0x80000) == 0))
        && *((_QWORD *)qword_140E2FF88 + ((*(_QWORD *)(v8 + 40) >> 43) & 0x3FFLL)) != *(_QWORD *)(v56 + 8) )
      {
        KeBugCheckEx(
          0x1Au,
          0x406uLL,
          BugCheckParameter2,
          0xAAAAAAAAAAAAAAABuLL * (v7 >> 4),
          (unsigned __int16)*(_DWORD *)(v8 + 32));
      }
      *(_QWORD *)BugCheckParameter2 = CLFS_LSN_NULL_EXT;
    }
    else
    {
      v34 = MI_WRITE_INVALID_PTE_TB_FLUSH_NEEDED((volatile signed __int64 *)BugCheckParameter2, CLFS_LSN_NULL_EXT, v32);
      v35 = v54;
      v17 = v52;
      if ( v34 )
        v35 = 1;
      v54 = v35;
    }
    if ( v32 )
      _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  }
  v21 = v59;
  v22 = v58;
  if ( !*(_DWORD *)(v59 + 12376) )
    *(_QWORD *)(v19 + 104) = v58;
  *(_QWORD *)(v21 + 8LL * *(unsigned int *)(v21 + 12376) + 12384) = v4;
  v23 = *(unsigned int *)(v21 + 16488);
  ++*(_DWORD *)(v21 + 12376);
  v24 = v21 + 8 * v23;
  *(_DWORD *)(v24 + 16496) = 0;
  v25 = *(_BYTE *)(v24 + 16497) & 3;
  *(_BYTE *)(v24 + 16496) = WsleContents;
  if ( (_DWORD)v17 )
    v25 |= 1u;
  v26 = (_QWORD *)BugCheckParameter2;
  v27 = (unsigned int)BugCheckParameter2 >> 3;
  *(_BYTE *)(v24 + 16497) = (2 * v20) | v25 & 0xFD;
  v28 = 511LL;
  *(_WORD *)(v24 + 16498) = v27 & 0x1FF;
  v29 = *(_DWORD *)(v21 + 16488);
  if ( !v29 )
    *(_QWORD *)(v21 + 16480) = v22;
  *(_DWORD *)(v21 + 16488) = v29 + 1;
  v30 = *(_QWORD *)(v19 + 176);
  if ( v30 )
  {
    if ( v20 && !v53 )
    {
      v31 = *(_QWORD *)(v19 + 8);
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v8 + 24), 0x3FuLL) )
      {
        do
        {
          if ( (++v5 & HvlLongSpinCountMask) == 0
            && (HvlEnlightenments & 0x40) != 0
            && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v28) )
          {
            HvlNotifyLongSpinWait(v5);
          }
          else
          {
            _mm_pause();
          }
        }
        while ( *(__int64 *)(v8 + 24) < 0 );
      }
      if ( (*(_DWORD *)(v8 + 16) & 2) != 0 )
      {
        v36 = MI_READ_PTE_LOCK_FREE(v8 + 16);
        v37 = *(_WORD *)(*(_QWORD *)(v31 + 8LL * (v36 >> 12) + 18528) + 172LL);
        if ( (v37 & 0x10) == 0 && ((v37 & 0x20) == 0 || (v36 & 2) == 0) && (unsigned __int16)*(_DWORD *)(v8 + 32) == 1 )
        {
          v17 = *(_QWORD *)(v8 + 16);
          *(_QWORD *)(v8 + 16) = v17 & 0xFFFFFFFFFFFFFFFDuLL;
          if ( v17 )
          {
            v38 = *(_QWORD *)(v31 + 8LL * ((unsigned __int16)v17 >> 12) + 18528);
            if ( qword_140E2DB80 && (v17 & 0x10) == 0 )
              v17 &= ~qword_140E2DB80;
            v30 = MiTransferSoftwarePte(v30, v38, HIDWORD(v17), 2LL);
          }
        }
      }
      _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    }
    *v26 = v30;
  }
  else if ( (unsigned __int64)v26 < 0xFFFFF6FB7DBED000uLL || (unsigned __int64)v26 > 0xFFFFF6FB7DBEDFFFuLL )
  {
    ++*(_DWORD *)(v19 + 112);
    if ( (*(_DWORD *)(v19 + 156) & 0x10) != 0 && !*(_DWORD *)(v19 + 96) )
    {
      BugCheckParameter2 = 0LL;
      MiInitializeTbFlushStamps(&BugCheckParameter2);
      v17 = qword_140E2DB80;
      v39 = BugCheckParameter2;
      v40 = BugCheckParameter2;
      if ( qword_140E2DB80 && (BugCheckParameter2 & 0x10) == 0 )
        v40 = BugCheckParameter2 & ~qword_140E2DB80;
      if ( (v40 & 0xFFFFFFFF00000000uLL) != 0 )
      {
        v54 = 0;
      }
      else
      {
        v51 = 0;
        v50 = 0;
        v41 = 0;
        if ( (unsigned __int8)KiPreprocessFlushTb(1, 2, 1, (unsigned int)&v51, (__int64)&v50) )
        {
          if ( KiFlushPcid )
          {
            v43 = __readcr3();
            __writecr3(v43);
            if ( !KeGetCurrentThread()->ApcState.Process->AddressPolicy )
              KiSetUserTbFlushPending();
          }
          else
          {
            v44 = __readcr4();
            if ( (v44 & 0x20080) != 0 )
            {
              __writecr4(v44 ^ 0x80);
              __writecr4(v44);
            }
            else
            {
              v45 = __readcr3();
              __writecr3(v45);
            }
          }
          v46 = v50;
          if ( KiIrqlFlags )
            KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v50);
          __writecr8(v46);
          v41 = 1;
        }
        if ( v51 )
        {
          KiFlushAddressSpaceTb(0LL, 0LL, 1LL, 1LL);
        }
        else if ( !v41 )
        {
          KxFlushEntireTb(1LL);
        }
        if ( ExTbFlushActive )
        {
          CurrentIrql = KeGetCurrentIrql();
          __writecr8(0xFuLL);
          if ( KiIrqlFlags )
            KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 15LL);
          guard_dispatch_icall_no_overrides(ExpSvmIommuSystemContext, 0LL, 0LL, v42);
          if ( KiIrqlFlags )
            KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
          __writecr8(CurrentIrql);
        }
        v39 = 0LL;
        BugCheckParameter2 = 0LL;
      }
      *v26 = v39;
    }
  }
  v48 = v58;
  if ( v54 )
    MiInsertTbFlushEntry(*(_QWORD *)(v19 + 16), v58, 1LL, 0);
  v49 = *(unsigned int *)(v19 + 40);
  if ( ((_DWORD)v49 == 3 || (*(_DWORD *)(v19 + 156) & 0x20) == 0 && (_DWORD)v49 && (_DWORD)v49 != 6)
    && (DWORD1(PerfGlobalGroupMask) & 0x8000000) != 0 )
  {
    MiLogRemoveWsleEvent(v48, v49, v17);
  }
}
