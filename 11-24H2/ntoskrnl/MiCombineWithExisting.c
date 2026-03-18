/*
 * XREFs of MiCombineWithExisting @ 0x1402F92E0
 * Callers:
 *     MiConvertPrivateToProto @ 0x1402F9768 (MiConvertPrivateToProto.c)
 * Callees:
 *     MiGetPfnPriority @ 0x1402141E0 (MiGetPfnPriority.c)
 *     MiDecrementShareCountEx @ 0x140220590 (MiDecrementShareCountEx.c)
 *     MiLockProtoPoolPage @ 0x14022E920 (MiLockProtoPoolPage.c)
 *     MiMakePrototypePteDirect @ 0x1402331F0 (MiMakePrototypePteDirect.c)
 *     MiInsertTbFlushEntry @ 0x1402432E0 (MiInsertTbFlushEntry.c)
 *     EtwTraceKernelEvent @ 0x140255180 (EtwTraceKernelEvent.c)
 *     MI_WRITE_INVALID_PTE_TB_FLUSH_NEEDED @ 0x1402869A0 (MI_WRITE_INVALID_PTE_TB_FLUSH_NEEDED.c)
 *     MiUnlockProtoPoolPage @ 0x14028CBF0 (MiUnlockProtoPoolPage.c)
 *     HvlNotifyLongSpinWait @ 0x140293260 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140293290 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiRemoveWsle @ 0x1402C8340 (MiRemoveWsle.c)
 *     MiVmAccessLoggingEnabled @ 0x1402E47A4 (MiVmAccessLoggingEnabled.c)
 *     MiGetWsleContents @ 0x1402E5390 (MiGetWsleContents.c)
 *     MiLockLeafPage @ 0x1402E8100 (MiLockLeafPage.c)
 *     MI_WSLE_LOG_ACCESS @ 0x1402EFF38 (MI_WSLE_LOG_ACCESS.c)
 *     MiIdentifyPfn @ 0x140307510 (MiIdentifyPfn.c)
 *     MiMapSinglePage @ 0x140314164 (MiMapSinglePage.c)
 *     MiConfirmCombinePageContents @ 0x140314938 (MiConfirmCombinePageContents.c)
 *     MiUpdatePfnPriority @ 0x1403FE790 (MiUpdatePfnPriority.c)
 *     MiResolveProtoCombine @ 0x140481604 (MiResolveProtoCombine.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 */

__int64 __fastcall MiCombineWithExisting(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  volatile signed __int64 *v5; // r15
  __int64 v6; // rsi
  unsigned __int64 v7; // rbp
  unsigned __int64 *v8; // r13
  ULONG_PTR v9; // r12
  ULONG_PTR v10; // rax
  unsigned __int64 v11; // rdx
  __int64 v12; // r8
  ULONG_PTR v13; // r14
  unsigned __int64 v14; // rbx
  unsigned __int64 v15; // rdi
  int v16; // eax
  __int64 v17; // r8
  unsigned __int64 v18; // rdx
  int v19; // ebx
  unsigned int PfnPriority; // eax
  ULONG_PTR v21; // rbx
  __int64 v22; // rcx
  unsigned int v23; // esi
  char WsleContents; // di
  __int64 v25; // r12
  int v26; // esi
  int v27; // edx
  __int64 v28; // r8
  __int64 v29; // rbx
  unsigned __int64 v30; // rbx
  unsigned int v31; // edi
  __int64 v33; // [rsp+30h] [rbp-C8h]
  int v34; // [rsp+30h] [rbp-C8h]
  _QWORD *v36; // [rsp+40h] [rbp-B8h]
  unsigned __int64 v37; // [rsp+48h] [rbp-B0h]
  __int64 v38; // [rsp+50h] [rbp-A8h]
  __int128 v41; // [rsp+68h] [rbp-90h] BYREF
  __int128 v42; // [rsp+78h] [rbp-80h]
  __int128 *v43; // [rsp+90h] [rbp-68h] BYREF
  int v44; // [rsp+98h] [rbp-60h]
  int v45; // [rsp+9Ch] [rbp-5Ch]

  v33 = *(_QWORD *)(a1 + 112);
  v37 = *(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFF000uLL;
  v41 = 0LL;
  v42 = 0LL;
  v5 = (volatile signed __int64 *)(((v37 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v6 = ((unsigned __int64)*v5 >> 12) & 0xFFFFFFFFFFLL;
  v38 = v6;
  v7 = 48 * v6 - 0x220000000000LL;
  v8 = (unsigned __int64 *)(a3 + 32);
  v36 = *(_QWORD **)a1;
  v9 = MiLockProtoPoolPage(a3 + 32, 0LL);
  if ( !v9 )
    return 3221225496LL;
  v10 = MiLockLeafPage(v8, 0);
  v13 = v10;
  if ( !v10 )
  {
    LOBYTE(v11) = 17;
    MiUnlockProtoPoolPage(v9, v11, v12);
    return 3221225496LL;
  }
  v14 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)(v10 + 0x220000000000LL) >> 4);
  v15 = *(_QWORD *)(a1 + 96);
  MiMapSinglePage(v15, v6, 3221225488LL, 0LL);
  MiMapSinglePage(v15 + 4096, v14, 3221225488LL, 0LL);
  v16 = MiConfirmCombinePageContents(a1, v14, *v36);
  v18 = 0x7FFFFFFFF8LL;
  v19 = v16;
  *(_QWORD *)(((v15 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) = CLFS_LSN_NULL_EXT;
  *(_QWORD *)((((v15 + 4096) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) = CLFS_LSN_NULL_EXT;
  if ( v16 )
  {
    PfnPriority = MiGetPfnPriority(v7);
    MiUpdatePfnPriority(v13, PfnPriority, 0LL);
  }
  _InterlockedAnd64((volatile signed __int64 *)(v13 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  LOBYTE(v18) = 17;
  MiUnlockProtoPoolPage(v9, v18, v17);
  if ( !v19 )
    return 3221225496LL;
  if ( (unsigned int)MiVmAccessLoggingEnabled(v33) )
    MI_WSLE_LOG_ACCESS(v33, (unsigned __int64)v5);
  v21 = MiMakePrototypePteDirect((__int64)v8) | 0x800;
  v23 = 0;
  WsleContents = MiGetWsleContents(v22, v37);
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v7 + 24), 0x3FuLL) )
  {
    do
    {
      if ( (++v23 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && KiCheckVpBackingLongSpinWaitHypercall() )
      {
        HvlNotifyLongSpinWait(v23);
      }
      else
      {
        _mm_pause();
      }
    }
    while ( *(__int64 *)(v7 + 24) < 0 );
  }
  v25 = v33;
  if ( (*(_QWORD *)(v7 + 24) & 0x3FFFFFFFFFFFFFFFLL) != 1 || (unsigned __int16)*(_DWORD *)(v7 + 32) != 1 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    return 3221225496LL;
  }
  if ( (DWORD1(PerfGlobalGroupMask) & 0x8000001) != 0 )
  {
    v26 = 1;
    MiIdentifyPfn(v38, &v41);
  }
  else
  {
    v26 = 0;
  }
  v27 = MI_WRITE_INVALID_PTE_TB_FLUSH_NEEDED(v5, v21, 66);
  *(_QWORD *)(v7 + 24) |= 0x4000000000000000uLL;
  v34 = *(_DWORD *)(v7 + 32);
  BYTE2(v34) |= 7u;
  *(_DWORD *)(v7 + 32) = v34;
  v29 = *(_QWORD *)(v7 + 40) & 0xFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  *(_QWORD *)(a2 + 16) = v7;
  if ( v27 )
  {
    MiInsertTbFlushEntry(a4, v37, 1LL, 0);
    *(_DWORD *)(a4 + 20) |= 1u;
  }
  LOBYTE(v28) = WsleContents;
  MiRemoveWsle(v25, v37, v28, 10LL, 1);
  v30 = 48 * v29 - 0x220000000000LL;
  v31 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v30 + 24), 0x3FuLL) )
  {
    do
    {
      if ( (++v31 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && KiCheckVpBackingLongSpinWaitHypercall() )
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
  MiDecrementShareCountEx(v30, 0LL);
  _InterlockedAnd64((volatile signed __int64 *)(v30 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  MiResolveProtoCombine(v5, v25, v8);
  if ( v26 )
  {
    v45 = 0;
    v43 = &v41;
    *((_QWORD *)&v42 + 1) = v8;
    v44 = 32;
    EtwTraceKernelEvent((int)&v43, 1, 0x28000001u, 634, 290462468);
  }
  ++**(_QWORD **)(a1 + 104);
  return 0LL;
}
