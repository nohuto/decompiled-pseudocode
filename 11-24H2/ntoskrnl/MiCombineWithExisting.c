/*
 * XREFs of MiCombineWithExisting @ 0x140294840
 * Callers:
 *     MiConvertPrivateToProto @ 0x140294520 (MiConvertPrivateToProto.c)
 * Callees:
 *     MiRemoveWsle @ 0x1402007F4 (MiRemoveWsle.c)
 *     MI_WRITE_INVALID_PTE_TB_FLUSH_NEEDED @ 0x140201590 (MI_WRITE_INVALID_PTE_TB_FLUSH_NEEDED.c)
 *     MiMakePrototypePteDirect @ 0x140203600 (MiMakePrototypePteDirect.c)
 *     MiInsertTbFlushEntry @ 0x1402137F0 (MiInsertTbFlushEntry.c)
 *     MiDecrementShareCountEx @ 0x14024D2E0 (MiDecrementShareCountEx.c)
 *     MI_WSLE_LOG_ACCESS @ 0x1402590F0 (MI_WSLE_LOG_ACCESS.c)
 *     EtwTraceKernelEvent @ 0x140285790 (EtwTraceKernelEvent.c)
 *     MiUnlockProtoPoolPage @ 0x14029C7F0 (MiUnlockProtoPoolPage.c)
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiLockProtoPoolPage @ 0x140302230 (MiLockProtoPoolPage.c)
 *     MiIdentifyPfn @ 0x1403113F0 (MiIdentifyPfn.c)
 *     MiGetPfnPriority @ 0x140335630 (MiGetPfnPriority.c)
 *     MiGetWsleContents @ 0x140344BE0 (MiGetWsleContents.c)
 *     MiVmAccessLoggingEnabled @ 0x140346A3C (MiVmAccessLoggingEnabled.c)
 *     MiLockLeafPage @ 0x140349740 (MiLockLeafPage.c)
 *     MiUpdatePfnPriority @ 0x1403DCE10 (MiUpdatePfnPriority.c)
 *     MiMapSinglePage @ 0x1403F14B0 (MiMapSinglePage.c)
 *     MiConfirmCombinePageContents @ 0x1403F1C84 (MiConfirmCombinePageContents.c)
 *     MiResolveProtoCombine @ 0x14047C8C4 (MiResolveProtoCombine.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

__int64 __fastcall MiCombineWithExisting(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  volatile signed __int64 *v5; // r15
  __int64 v6; // rsi
  __int64 v7; // rbp
  __int64 v8; // r13
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // r12
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // r14
  unsigned __int64 v15; // rbx
  unsigned __int64 v16; // rdi
  int v17; // eax
  __int64 v18; // rdx
  int v19; // ebx
  unsigned int PfnPriority; // eax
  ULONG_PTR v21; // rbx
  __int64 v22; // rcx
  unsigned int v23; // esi
  __int64 v24; // rdx
  __int64 v25; // rcx
  char WsleContents; // di
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // r12
  int v30; // esi
  int v31; // edx
  __int64 v32; // rbx
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // r9
  __int64 v37; // rbx
  unsigned int v38; // edi
  __int64 v40; // [rsp+30h] [rbp-C8h]
  int v41; // [rsp+30h] [rbp-C8h]
  _QWORD *v43; // [rsp+40h] [rbp-B8h]
  unsigned __int64 v44; // [rsp+48h] [rbp-B0h]
  __int64 v45; // [rsp+50h] [rbp-A8h]
  __int128 v48; // [rsp+68h] [rbp-90h] BYREF
  __int128 v49; // [rsp+78h] [rbp-80h]
  __int128 *v50; // [rsp+90h] [rbp-68h] BYREF
  int v51; // [rsp+98h] [rbp-60h]
  int v52; // [rsp+9Ch] [rbp-5Ch]

  v40 = *(_QWORD *)(a1 + 112);
  v44 = *(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFF000uLL;
  v48 = 0LL;
  v49 = 0LL;
  v5 = (volatile signed __int64 *)(((v44 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v6 = ((unsigned __int64)*v5 >> 12) & 0xFFFFFFFFFFLL;
  v45 = v6;
  v7 = 48 * v6 - 0x220000000000LL;
  v8 = a3 + 32;
  v43 = *(_QWORD **)a1;
  v11 = MiLockProtoPoolPage(a3 + 32, 0LL);
  if ( !v11 )
    return 3221225496LL;
  v12 = MiLockLeafPage(v8, 0LL, v9, v10);
  v14 = v12;
  if ( !v12 )
  {
    LOBYTE(v13) = 17;
    MiUnlockProtoPoolPage(v11, v13);
    return 3221225496LL;
  }
  v15 = 0xAAAAAAAAAAAAAAABuLL * ((v12 + 0x220000000000LL) >> 4);
  v16 = *(_QWORD *)(a1 + 96);
  MiMapSinglePage(v16, v6, 3221225488LL, 0LL);
  MiMapSinglePage(v16 + 4096, v15, 3221225488LL, 0LL);
  v17 = MiConfirmCombinePageContents(a1, v15, *v43);
  v18 = 0x7FFFFFFFF8LL;
  v19 = v17;
  *(_QWORD *)(((v16 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) = CLFS_LSN_NULL_EXT;
  *(_QWORD *)((((v16 + 4096) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) = CLFS_LSN_NULL_EXT;
  if ( v17 )
  {
    PfnPriority = MiGetPfnPriority(v7);
    MiUpdatePfnPriority(v14, PfnPriority, 0LL);
  }
  _InterlockedAnd64((volatile signed __int64 *)(v14 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  LOBYTE(v18) = 17;
  MiUnlockProtoPoolPage(v11, v18);
  if ( !v19 )
    return 3221225496LL;
  if ( (unsigned int)MiVmAccessLoggingEnabled(v40) )
    MI_WSLE_LOG_ACCESS(v40, (unsigned __int64)v5);
  v21 = MiMakePrototypePteDirect(v8) | 0x800;
  v23 = 0;
  WsleContents = MiGetWsleContents(v22, v44);
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v7 + 24), 0x3FuLL) )
  {
    do
    {
      if ( (++v23 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v25, v24, v27, v28) )
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
  v29 = v40;
  if ( (*(_QWORD *)(v7 + 24) & 0x3FFFFFFFFFFFFFFFLL) != 1 || (unsigned __int16)*(_DWORD *)(v7 + 32) != 1 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    return 3221225496LL;
  }
  if ( (DWORD1(PerfGlobalGroupMask) & 0x8000001) != 0 )
  {
    v30 = 1;
    MiIdentifyPfn(v45, &v48);
  }
  else
  {
    v30 = 0;
  }
  v31 = MI_WRITE_INVALID_PTE_TB_FLUSH_NEEDED(v5, v21, 66);
  *(_QWORD *)(v7 + 24) |= 0x4000000000000000uLL;
  v41 = *(_DWORD *)(v7 + 32);
  BYTE2(v41) |= 7u;
  *(_DWORD *)(v7 + 32) = v41;
  v32 = *(_QWORD *)(v7 + 40) & 0xFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  *(_QWORD *)(a2 + 16) = v7;
  if ( v31 )
  {
    MiInsertTbFlushEntry(a4, v44, 1LL, 0);
    *(_DWORD *)(a4 + 20) |= 1u;
  }
  MiRemoveWsle(v29, v44, WsleContents, 10, 1);
  v37 = 48 * v32 - 0x220000000000LL;
  v38 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v37 + 24), 0x3FuLL) )
  {
    do
    {
      if ( (++v38 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v34, v33, v35, v36) )
      {
        HvlNotifyLongSpinWait(v38);
      }
      else
      {
        _mm_pause();
      }
    }
    while ( *(__int64 *)(v37 + 24) < 0 );
  }
  MiDecrementShareCountEx(v37, 0LL, v35, v36);
  _InterlockedAnd64((volatile signed __int64 *)(v37 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  MiResolveProtoCombine((v44 >> 9) & 0xFFFFFFF8);
  if ( v30 )
  {
    v52 = 0;
    v50 = &v48;
    *((_QWORD *)&v49 + 1) = v8;
    v51 = 32;
    EtwTraceKernelEvent((int)&v50, 1, 0x28000001u, 634, 290462468);
  }
  ++**(_QWORD **)(a1 + 104);
  return 0LL;
}
