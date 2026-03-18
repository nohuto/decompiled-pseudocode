/*
 * XREFs of MiDecommitAddToList @ 0x140382190
 * Callers:
 *     MiDeleteVa @ 0x1402B1A90 (MiDeleteVa.c)
 *     MiDecommitHandleValidPte @ 0x140381970 (MiDecommitHandleValidPte.c)
 *     MiDecommitPages @ 0x140381AE0 (MiDecommitPages.c)
 * Callees:
 *     MiTransferSoftwarePte @ 0x1402280C0 (MiTransferSoftwarePte.c)
 *     MiTerminateWsle @ 0x140231080 (MiTerminateWsle.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140231F50 (MI_READ_PTE_LOCK_FREE.c)
 *     MiGetWsleContents @ 0x140239750 (MiGetWsleContents.c)
 *     MI_WRITE_INVALID_PTE_TB_FLUSH_NEEDED @ 0x140247E00 (MI_WRITE_INVALID_PTE_TB_FLUSH_NEEDED.c)
 *     KiFlushAddressSpaceTb @ 0x14026F6A0 (KiFlushAddressSpaceTb.c)
 *     KxFlushEntireTb @ 0x14027043C (KxFlushEntireTb.c)
 *     MiUnlockWsle @ 0x1402CC3B4 (MiUnlockWsle.c)
 *     MiInsertTbFlushEntry @ 0x1403278B0 (MiInsertTbFlushEntry.c)
 *     MiInitializeTbFlushStamps @ 0x140327C9C (MiInitializeTbFlushStamps.c)
 *     HvlNotifyLongSpinWait @ 0x14032DED0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14032DF00 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiWriteWsle @ 0x14037CA80 (MiWriteWsle.c)
 *     MiVmAccessLoggingEnabled @ 0x140386C1C (MiVmAccessLoggingEnabled.c)
 *     MI_WSLE_LOG_ACCESS @ 0x140389E74 (MI_WSLE_LOG_ACCESS.c)
 *     KiPreprocessFlushTb @ 0x140403650 (KiPreprocessFlushTb.c)
 *     MiLogRemoveWsleEvent @ 0x1404CE838 (MiLogRemoveWsleEvent.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     KiSetUserTbFlushPending @ 0x1406A0110 (KiSetUserTbFlushPending.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

void __fastcall MiDecommitAddToList(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // r12
  unsigned __int64 v4; // rdi
  int v5; // ebp
  int v6; // esi
  __int64 v7; // r13
  __int64 v8; // r14
  __int64 v9; // r11
  int v10; // eax
  unsigned __int8 WsleContents; // bl
  int v12; // eax
  unsigned int v13; // r10d
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  int v17; // r15d
  int v18; // eax
  unsigned __int64 v19; // r8
  int v20; // esi
  __int64 v21; // r12
  int v22; // r15d
  __int64 v23; // r9
  unsigned __int64 v24; // r10
  __int64 v25; // rax
  __int64 v26; // rdx
  char v27; // cl
  _QWORD *v28; // r13
  unsigned int v29; // eax
  int v30; // eax
  unsigned __int64 v31; // rbx
  __int64 v32; // rsi
  unsigned int v33; // esi
  int v34; // eax
  int v35; // eax
  int v36; // ecx
  unsigned __int16 v37; // ax
  __int16 v38; // dx
  __int64 v39; // rdx
  ULONG_PTR v40; // rcx
  ULONG_PTR v41; // rax
  char v42; // bl
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
      MI_WSLE_LOG_ACCESS(v3, BugCheckParameter2, v15, v16);
      v9 = v56;
    }
    LODWORD(v14) = *(_DWORD *)(v9 + 40);
    if ( (_DWORD)v14 == 6 )
    {
      v52 = 0;
      if ( !*(_DWORD *)(v59 + 12376) )
        *(_QWORD *)(v9 + 8) = *((_QWORD *)qword_140E2FD48 + ((*(_QWORD *)(v8 + 40) >> 43) & 0x3FFLL));
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
  v17 = 0;
  if ( (WsleContents & 0xF) == 8 )
  {
    v17 = 1;
    v18 = MiUnlockWsle(v3, v58, v8, 1u);
    v9 = v56;
    v54 = v18;
  }
  v19 = v52;
  if ( v52 )
  {
    if ( !v17 )
    {
      if ( !(unsigned int)MiTerminateWsle(v3, v58, *(_DWORD *)(v9 + 96), 6, &v54) )
        return;
      v19 = v52;
    }
    if ( v6 )
    {
      v20 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v8 + 24), 0x3FuLL) )
      {
        do
        {
          if ( (++v20 & HvlLongSpinCountMask) == 0
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
        while ( *(__int64 *)(v8 + 24) < 0 );
      }
      *(_QWORD *)(v8 + 24) |= 0x4000000000000000uLL;
      _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      v19 = v52;
    }
    v21 = v56;
    v22 = v55;
  }
  else
  {
    v22 = v55;
    v33 = 0;
    if ( v55 && !v53 )
    {
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v8 + 24), 0x3FuLL) )
      {
        do
        {
          if ( (++v33 & HvlLongSpinCountMask) == 0
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
        while ( *(__int64 *)(v8 + 24) < 0 );
      }
      v19 = v52;
      *(_QWORD *)(v8 + 24) |= 0x4000000000000000uLL;
      v33 = 64;
    }
    v21 = v56;
    if ( *(_DWORD *)(v56 + 40) == 6 )
    {
      v34 = *(_DWORD *)(v8 + 32);
      if ( (!(_WORD)v34 || (unsigned __int16)v34 > 2u && ((_WORD)v34 != 3 || (v34 & 0x80000) == 0))
        && *((_QWORD *)qword_140E2FD48 + ((*(_QWORD *)(v8 + 40) >> 43) & 0x3FFLL)) != *(_QWORD *)(v56 + 8) )
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
      v35 = MI_WRITE_INVALID_PTE_TB_FLUSH_NEEDED(
              (volatile signed __int64 *)BugCheckParameter2,
              CLFS_LSN_NULL_EXT,
              v33,
              0x7FFFFFFFFFFFFFFFLL);
      v36 = v54;
      v19 = v52;
      if ( v35 )
        v36 = 1;
      v54 = v36;
    }
    if ( v33 )
      _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  }
  v23 = v59;
  v24 = v58;
  if ( !*(_DWORD *)(v59 + 12376) )
    *(_QWORD *)(v21 + 104) = v58;
  *(_QWORD *)(v23 + 8LL * *(unsigned int *)(v23 + 12376) + 12384) = v4;
  v25 = *(unsigned int *)(v23 + 16488);
  ++*(_DWORD *)(v23 + 12376);
  v26 = v23 + 8 * v25;
  *(_DWORD *)(v26 + 16496) = 0;
  v27 = *(_BYTE *)(v26 + 16497) & 3;
  *(_BYTE *)(v26 + 16496) = WsleContents;
  if ( (_DWORD)v19 )
    v27 |= 1u;
  v28 = (_QWORD *)BugCheckParameter2;
  v29 = (unsigned int)BugCheckParameter2 >> 3;
  *(_BYTE *)(v26 + 16497) = (2 * v22) | v27 & 0xFD;
  *(_WORD *)(v26 + 16498) = v29 & 0x1FF;
  v30 = *(_DWORD *)(v23 + 16488);
  if ( !v30 )
    *(_QWORD *)(v23 + 16480) = v24;
  *(_DWORD *)(v23 + 16488) = v30 + 1;
  v31 = *(_QWORD *)(v21 + 176);
  if ( v31 )
  {
    if ( v22 && !v53 )
    {
      v32 = *(_QWORD *)(v21 + 8);
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v8 + 24), 0x3FuLL) )
      {
        do
        {
          if ( (++v5 & HvlLongSpinCountMask) == 0
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
        while ( *(__int64 *)(v8 + 24) < 0 );
      }
      if ( (*(_DWORD *)(v8 + 16) & 2) != 0 )
      {
        v37 = MI_READ_PTE_LOCK_FREE(v8 + 16);
        v38 = *(_WORD *)(*(_QWORD *)(v32 + 8LL * (v37 >> 12) + 18528) + 172LL);
        if ( (v38 & 0x10) == 0 && ((v38 & 0x20) == 0 || (v37 & 2) == 0) && (unsigned __int16)*(_DWORD *)(v8 + 32) == 1 )
        {
          v19 = *(_QWORD *)(v8 + 16);
          *(_QWORD *)(v8 + 16) = v19 & 0xFFFFFFFFFFFFFFFDuLL;
          if ( v19 )
          {
            v39 = *(_QWORD *)(v32 + 8LL * ((unsigned __int16)v19 >> 12) + 18528);
            if ( qword_140E2D940 && (v19 & 0x10) == 0 )
              v19 &= ~qword_140E2D940;
            v31 = MiTransferSoftwarePte(v31, v39, (_KPROCESS *)HIDWORD(v19), 2);
          }
        }
      }
      _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    }
    *v28 = v31;
  }
  else if ( (unsigned __int64)v28 < 0xFFFFF6FB7DBED000uLL || (unsigned __int64)v28 > 0xFFFFF6FB7DBEDFFFuLL )
  {
    ++*(_DWORD *)(v21 + 112);
    if ( (*(_DWORD *)(v21 + 156) & 0x10) != 0 && !*(_DWORD *)(v21 + 96) )
    {
      BugCheckParameter2 = 0LL;
      MiInitializeTbFlushStamps(&BugCheckParameter2);
      v19 = qword_140E2D940;
      v40 = BugCheckParameter2;
      v41 = BugCheckParameter2;
      if ( qword_140E2D940 && (BugCheckParameter2 & 0x10) == 0 )
        v41 = BugCheckParameter2 & ~qword_140E2D940;
      if ( (v41 & 0xFFFFFFFF00000000uLL) != 0 )
      {
        v54 = 0;
      }
      else
      {
        v51 = 0;
        v50 = 0;
        v42 = 0;
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
          v42 = 1;
        }
        if ( v51 )
        {
          KiFlushAddressSpaceTb(0LL, 0LL, 1LL, 1);
        }
        else if ( !v42 )
        {
          KxFlushEntireTb(1LL);
        }
        if ( ExTbFlushActive )
        {
          CurrentIrql = KeGetCurrentIrql();
          __writecr8(0xFuLL);
          if ( KiIrqlFlags )
            KiRaiseIrqlProcessIrqlFlags(CurrentIrql);
          guard_dispatch_icall_no_overrides(ExpSvmIommuSystemContext, 0LL);
          if ( KiIrqlFlags )
            KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
          __writecr8(CurrentIrql);
        }
        v40 = 0LL;
        BugCheckParameter2 = 0LL;
      }
      *v28 = v40;
    }
  }
  v48 = v58;
  if ( v54 )
    MiInsertTbFlushEntry(*(_QWORD *)(v21 + 16), v58, 1LL, 0);
  v49 = *(unsigned int *)(v21 + 40);
  if ( ((_DWORD)v49 == 3 || (*(_DWORD *)(v21 + 156) & 0x20) == 0 && (_DWORD)v49 && (_DWORD)v49 != 6)
    && (DWORD1(PerfGlobalGroupMask) & 0x8000000) != 0 )
  {
    MiLogRemoveWsleEvent(v48, v49, v19);
  }
}
