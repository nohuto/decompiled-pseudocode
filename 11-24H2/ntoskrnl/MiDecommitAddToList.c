/*
 * XREFs of MiDecommitAddToList @ 0x1402985A0
 * Callers:
 *     MiDeleteVa @ 0x14023D060 (MiDeleteVa.c)
 *     MiDecommitHandleValidPte @ 0x140297D80 (MiDecommitHandleValidPte.c)
 *     MiDecommitPages @ 0x140297F00 (MiDecommitPages.c)
 * Callees:
 *     MI_WRITE_INVALID_PTE_TB_FLUSH_NEEDED @ 0x140201590 (MI_WRITE_INVALID_PTE_TB_FLUSH_NEEDED.c)
 *     MiTerminateWsle @ 0x140201850 (MiTerminateWsle.c)
 *     MiWriteWsle @ 0x140203470 (MiWriteWsle.c)
 *     MiInsertTbFlushEntry @ 0x1402137F0 (MiInsertTbFlushEntry.c)
 *     MiTransferSoftwarePte @ 0x140215AA0 (MiTransferSoftwarePte.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140246FA0 (MI_READ_PTE_LOCK_FREE.c)
 *     MI_WSLE_LOG_ACCESS @ 0x1402590F0 (MI_WSLE_LOG_ACCESS.c)
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiGetWsleContents @ 0x140344BE0 (MiGetWsleContents.c)
 *     MiVmAccessLoggingEnabled @ 0x140346A3C (MiVmAccessLoggingEnabled.c)
 *     KiPreprocessFlushTb @ 0x14039D3D0 (KiPreprocessFlushTb.c)
 *     KiFlushAddressSpaceTb @ 0x14039E4BC (KiFlushAddressSpaceTb.c)
 *     KxFlushEntireTb @ 0x14039EFB4 (KxFlushEntireTb.c)
 *     MiUnlockWsle @ 0x1403DB664 (MiUnlockWsle.c)
 *     MiInitializeTbFlushStamps @ 0x14043A0EC (MiInitializeTbFlushStamps.c)
 *     MiLogRemoveWsleEvent @ 0x1404C5590 (MiLogRemoveWsleEvent.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     KiSetUserTbFlushPending @ 0x1406AC380 (KiSetUserTbFlushPending.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

void __fastcall MiDecommitAddToList(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // r12
  unsigned __int64 v4; // rdi
  __int64 v5; // rdx
  unsigned int v6; // ebp
  int v7; // esi
  __int64 v8; // r13
  __int64 v9; // r14
  __int64 v10; // r11
  int v11; // eax
  unsigned __int8 WsleContents; // bl
  int v13; // eax
  unsigned int v14; // r10d
  __int64 v15; // rcx
  int v16; // r15d
  int v17; // eax
  __int64 v18; // r8
  __int64 v19; // r9
  unsigned int v20; // esi
  __int64 v21; // r12
  int v22; // r15d
  __int64 v23; // r9
  unsigned __int64 v24; // r10
  __int64 v25; // rax
  __int64 v26; // rdx
  char v27; // cl
  _QWORD *v28; // r13
  unsigned int v29; // eax
  __int64 v30; // rcx
  int v31; // eax
  unsigned __int64 v32; // rbx
  __int64 v33; // rsi
  unsigned int v34; // esi
  int v35; // eax
  int v36; // eax
  int v37; // ecx
  unsigned __int16 v38; // ax
  __int16 v39; // dx
  __int64 v40; // r8
  __int64 v41; // rdx
  ULONG_PTR v42; // rcx
  ULONG_PTR v43; // rax
  char v44; // bl
  unsigned __int64 v45; // rax
  unsigned __int64 v46; // rcx
  unsigned __int64 v47; // rax
  unsigned __int64 v48; // rbx
  unsigned __int8 CurrentIrql; // bl
  unsigned __int64 v50; // rbx
  __int64 v51; // rdx
  unsigned __int8 v52; // [rsp+30h] [rbp-78h] BYREF
  char v53; // [rsp+31h] [rbp-77h] BYREF
  unsigned int v54; // [rsp+34h] [rbp-74h]
  int v55; // [rsp+38h] [rbp-70h]
  int v56; // [rsp+3Ch] [rbp-6Ch] BYREF
  int v57; // [rsp+40h] [rbp-68h]
  __int64 v58; // [rsp+48h] [rbp-60h]
  ULONG_PTR BugCheckParameter2; // [rsp+50h] [rbp-58h] BYREF
  unsigned __int64 v60; // [rsp+58h] [rbp-50h]
  __int64 v61; // [rsp+60h] [rbp-48h]

  v2 = a2 & 0xFFFFFFFFFFFFF000uLL;
  v61 = *(_QWORD *)(a1 + 16);
  v58 = a1;
  v60 = a2 & 0xFFFFFFFFFFFFF000uLL;
  v3 = *(_QWORD *)(a1 + 32);
  BugCheckParameter2 = (((a2 & 0xFFFFFFFFFFFFF000uLL) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v4 = MI_READ_PTE_LOCK_FREE(BugCheckParameter2);
  if ( (v4 & 0x80u) != 0LL || v2 < 0xFFFFF68000000000uLL || v2 > 0xFFFFF6FFFFFFFFFFuLL )
  {
    v6 = 0;
    v5 = 1LL;
    v55 = 0;
    v54 = 1;
    v7 = 0;
    v8 = 48 * ((v4 >> 12) & 0xFFFFFFFFFFLL);
    v10 = v58;
    v9 = v8 - 0x220000000000LL;
    v13 = *(_DWORD *)(v58 + 160);
    if ( (v13 & 0x100) != 0 )
    {
      v54 = 0;
      WsleContents = 0;
      v11 = 1;
    }
    else
    {
      if ( (v13 & 0x60) != 0 )
      {
        WsleContents = 74;
        v54 = 0;
        v55 = 1;
        v57 = 1;
        goto LABEL_16;
      }
      if ( *(_DWORD *)(v58 + 40) == 6 )
      {
        WsleContents = 74;
        v11 = 1;
      }
      else
      {
        WsleContents = MiGetWsleContents(0xFFFFFFFFFFLL, v2);
        v54 = v14;
        v11 = v14;
      }
      v55 = 0;
    }
  }
  else
  {
    v5 = 1LL;
    v54 = 1;
    v6 = 0;
    v7 = 1;
    v55 = 0;
    v8 = 48 * ((v4 >> 12) & 0xFFFFFFFFFFLL);
    v9 = v8 - 0x220000000000LL;
    v10 = v58;
    v11 = 1;
    WsleContents = (*(_QWORD *)(v8 - 0x220000000000LL) >> 42) & 7;
  }
  if ( *(__int64 *)(v9 + 40) < 0 )
    v11 = 0;
  v57 = v11;
LABEL_16:
  v15 = *(unsigned int *)(v10 + 40);
  if ( !(_DWORD)v15 )
    goto LABEL_30;
  if ( !v7 )
  {
    if ( (WsleContents & 0xF) == 9 )
    {
      WsleContents = WsleContents & 0xF0 | 0xA;
      MiWriteWsle(v15, v60, WsleContents);
      v10 = v58;
      v54 = 0;
      goto LABEL_29;
    }
    if ( (((_DWORD)v15 - 2) & 0xFFFFFFFD) == 0 && (unsigned int)MiVmAccessLoggingEnabled(v3) )
    {
      MI_WSLE_LOG_ACCESS(v3, BugCheckParameter2);
      v10 = v58;
    }
    v15 = *(unsigned int *)(v10 + 40);
    if ( (_DWORD)v15 == 6 )
    {
      v54 = 0;
      if ( !*(_DWORD *)(v61 + 12376) )
      {
        v15 = (__int64)qword_140E300C8;
        v5 = *((_QWORD *)qword_140E300C8 + ((*(_QWORD *)(v9 + 40) >> 43) & 0x3FFLL));
        *(_QWORD *)(v10 + 8) = v5;
      }
      goto LABEL_29;
    }
    if ( (WsleContents & 0xF) == 8 )
    {
LABEL_29:
      ++**(_QWORD **)(v10 + 24);
      goto LABEL_30;
    }
  }
  if ( (*(_DWORD *)(v10 + 156) & 0x20) != 0 && (_DWORD)v15 != 3 )
    goto LABEL_29;
LABEL_30:
  v56 = 0;
  v16 = 0;
  if ( (WsleContents & 0xF) == 8 )
  {
    v16 = 1;
    v17 = MiUnlockWsle(v3, v60, v9);
    v10 = v58;
    v56 = v17;
  }
  v18 = v54;
  v19 = 0x7FFFFFFFFFFFFFFFLL;
  if ( v54 )
  {
    if ( !v16 )
    {
      if ( !(unsigned int)MiTerminateWsle(v3, v60, *(_DWORD *)(v10 + 96), 6, &v56) )
        return;
      v18 = v54;
    }
    if ( v7 )
    {
      v20 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v9 + 24), 0x3FuLL) )
      {
        do
        {
          if ( (++v20 & HvlLongSpinCountMask) == 0
            && (HvlEnlightenments & 0x40) != 0
            && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v15, v5, v18, v19) )
          {
            HvlNotifyLongSpinWait(v20);
          }
          else
          {
            _mm_pause();
          }
        }
        while ( *(__int64 *)(v9 + 24) < 0 );
      }
      *(_QWORD *)(v9 + 24) |= 0x4000000000000000uLL;
      _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      v18 = v54;
    }
    v21 = v58;
    v22 = v57;
  }
  else
  {
    v22 = v57;
    v34 = 0;
    if ( v57 && !v55 )
    {
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v9 + 24), 0x3FuLL) )
      {
        do
        {
          if ( (++v34 & HvlLongSpinCountMask) == 0
            && (HvlEnlightenments & 0x40) != 0
            && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v15, v5, v18, v19) )
          {
            HvlNotifyLongSpinWait(v34);
          }
          else
          {
            _mm_pause();
          }
        }
        while ( *(__int64 *)(v9 + 24) < 0 );
      }
      v18 = v54;
      *(_QWORD *)(v9 + 24) |= 0x4000000000000000uLL;
      v34 = 64;
    }
    v21 = v58;
    if ( *(_DWORD *)(v58 + 40) == 6 )
    {
      v35 = *(_DWORD *)(v9 + 32);
      if ( (!(_WORD)v35 || (unsigned __int16)v35 > 2u && ((_WORD)v35 != 3 || (v35 & 0x80000) == 0))
        && *((_QWORD *)qword_140E300C8 + ((*(_QWORD *)(v9 + 40) >> 43) & 0x3FFLL)) != *(_QWORD *)(v58 + 8) )
      {
        KeBugCheckEx(
          0x1Au,
          0x406uLL,
          BugCheckParameter2,
          0xAAAAAAAAAAAAAAABuLL * (v8 >> 4),
          (unsigned __int16)*(_DWORD *)(v9 + 32));
      }
      *(_QWORD *)BugCheckParameter2 = CLFS_LSN_NULL_EXT;
    }
    else
    {
      v36 = MI_WRITE_INVALID_PTE_TB_FLUSH_NEEDED((volatile signed __int64 *)BugCheckParameter2, CLFS_LSN_NULL_EXT, v34);
      v37 = v56;
      v18 = v54;
      if ( v36 )
        v37 = 1;
      v56 = v37;
    }
    if ( v34 )
      _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  }
  v23 = v61;
  v24 = v60;
  if ( !*(_DWORD *)(v61 + 12376) )
    *(_QWORD *)(v21 + 104) = v60;
  *(_QWORD *)(v23 + 8LL * *(unsigned int *)(v23 + 12376) + 12384) = v4;
  v25 = *(unsigned int *)(v23 + 16488);
  ++*(_DWORD *)(v23 + 12376);
  v26 = v23 + 8 * v25;
  *(_DWORD *)(v26 + 16496) = 0;
  v27 = *(_BYTE *)(v26 + 16497) & 3;
  *(_BYTE *)(v26 + 16496) = WsleContents;
  if ( (_DWORD)v18 )
    v27 |= 1u;
  v28 = (_QWORD *)BugCheckParameter2;
  v29 = (unsigned int)BugCheckParameter2 >> 3;
  *(_BYTE *)(v26 + 16497) = (2 * v22) | v27 & 0xFD;
  v30 = 511LL;
  *(_WORD *)(v26 + 16498) = v29 & 0x1FF;
  v31 = *(_DWORD *)(v23 + 16488);
  if ( !v31 )
    *(_QWORD *)(v23 + 16480) = v24;
  *(_DWORD *)(v23 + 16488) = v31 + 1;
  v32 = *(_QWORD *)(v21 + 176);
  if ( v32 )
  {
    if ( v22 && !v55 )
    {
      v33 = *(_QWORD *)(v21 + 8);
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v9 + 24), 0x3FuLL) )
      {
        do
        {
          if ( (++v6 & HvlLongSpinCountMask) == 0
            && (HvlEnlightenments & 0x40) != 0
            && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v30, v26, v18, v23) )
          {
            HvlNotifyLongSpinWait(v6);
          }
          else
          {
            _mm_pause();
          }
        }
        while ( *(__int64 *)(v9 + 24) < 0 );
      }
      if ( (*(_DWORD *)(v9 + 16) & 2) != 0 )
      {
        v38 = MI_READ_PTE_LOCK_FREE(v9 + 16);
        v39 = *(_WORD *)(*(_QWORD *)(v33 + 8LL * (v38 >> 12) + 18528) + 172LL);
        if ( (v39 & 0x10) == 0 && ((v39 & 0x20) == 0 || (v38 & 2) == 0) && (unsigned __int16)*(_DWORD *)(v9 + 32) == 1 )
        {
          v40 = *(_QWORD *)(v9 + 16);
          *(_QWORD *)(v9 + 16) = v40 & 0xFFFFFFFFFFFFFFFDuLL;
          if ( v40 )
          {
            v41 = *(_QWORD *)(v33 + 8LL * ((unsigned __int16)v40 >> 12) + 18528);
            if ( qword_140E2DCC0 && (v40 & 0x10) == 0 )
              v40 &= ~qword_140E2DCC0;
            v32 = MiTransferSoftwarePte(v32, v41, HIDWORD(v40), 2);
          }
        }
      }
      _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    }
    *v28 = v32;
  }
  else if ( (unsigned __int64)v28 < 0xFFFFF6FB7DBED000uLL || (unsigned __int64)v28 > 0xFFFFF6FB7DBEDFFFuLL )
  {
    ++*(_DWORD *)(v21 + 112);
    if ( (*(_DWORD *)(v21 + 156) & 0x10) != 0 && !*(_DWORD *)(v21 + 96) )
    {
      BugCheckParameter2 = 0LL;
      MiInitializeTbFlushStamps(&BugCheckParameter2);
      v42 = BugCheckParameter2;
      v43 = BugCheckParameter2;
      if ( qword_140E2DCC0 && (BugCheckParameter2 & 0x10) == 0 )
        v43 = BugCheckParameter2 & ~qword_140E2DCC0;
      if ( (v43 & 0xFFFFFFFF00000000uLL) != 0 )
      {
        v56 = 0;
      }
      else
      {
        v53 = 0;
        v52 = 0;
        v44 = 0;
        if ( (unsigned __int8)KiPreprocessFlushTb(1, 2, 1, (unsigned int)&v53, (__int64)&v52) )
        {
          if ( KiFlushPcid )
          {
            v45 = __readcr3();
            __writecr3(v45);
            if ( !KeGetCurrentThread()->ApcState.Process->AddressPolicy )
              KiSetUserTbFlushPending();
          }
          else
          {
            v46 = __readcr4();
            if ( (v46 & 0x20080) != 0 )
            {
              __writecr4(v46 ^ 0x80);
              __writecr4(v46);
            }
            else
            {
              v47 = __readcr3();
              __writecr3(v47);
            }
          }
          v48 = v52;
          if ( KiIrqlFlags )
            KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v52);
          __writecr8(v48);
          v44 = 1;
        }
        if ( v53 )
        {
          KiFlushAddressSpaceTb(0LL, 0LL, 1LL, 1LL);
        }
        else if ( !v44 )
        {
          KxFlushEntireTb(1LL);
        }
        if ( ExTbFlushActive )
        {
          CurrentIrql = KeGetCurrentIrql();
          __writecr8(0xFuLL);
          if ( KiIrqlFlags )
            KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 15LL);
          guard_dispatch_icall_no_overrides(ExpSvmIommuSystemContext, 0LL);
          if ( KiIrqlFlags )
            KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
          __writecr8(CurrentIrql);
        }
        v42 = 0LL;
        BugCheckParameter2 = 0LL;
      }
      *v28 = v42;
    }
  }
  v50 = v60;
  if ( v56 )
    MiInsertTbFlushEntry(*(_QWORD *)(v21 + 16), v60, 1LL, 0);
  v51 = *(unsigned int *)(v21 + 40);
  if ( ((_DWORD)v51 == 3 || (*(_DWORD *)(v21 + 156) & 0x20) == 0 && (_DWORD)v51 && (_DWORD)v51 != 6)
    && (DWORD1(PerfGlobalGroupMask) & 0x8000000) != 0 )
  {
    MiLogRemoveWsleEvent(v50, v51);
  }
}
