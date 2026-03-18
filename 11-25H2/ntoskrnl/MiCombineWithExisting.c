/*
 * XREFs of MiCombineWithExisting @ 0x14038A898
 * Callers:
 *     MiConvertPrivateToProto @ 0x14023ACDC (MiConvertPrivateToProto.c)
 * Callees:
 *     MiIdentifyPfn @ 0x140221170 (MiIdentifyPfn.c)
 *     MiMapSinglePage @ 0x140225164 (MiMapSinglePage.c)
 *     MiConfirmCombinePageContents @ 0x1402252E0 (MiConfirmCombinePageContents.c)
 *     MiGetPfnPriority @ 0x140230FB0 (MiGetPfnPriority.c)
 *     MiUnlockProtoPoolPage @ 0x1402353A0 (MiUnlockProtoPoolPage.c)
 *     MiGetWsleContents @ 0x140239750 (MiGetWsleContents.c)
 *     MiLockProtoPoolPage @ 0x140240A70 (MiLockProtoPoolPage.c)
 *     MI_WRITE_INVALID_PTE_TB_FLUSH_NEEDED @ 0x140247E00 (MI_WRITE_INVALID_PTE_TB_FLUSH_NEEDED.c)
 *     EtwTraceKernelEvent @ 0x140254220 (EtwTraceKernelEvent.c)
 *     MiMakePrototypePteDirect @ 0x1402A69A0 (MiMakePrototypePteDirect.c)
 *     MiInsertTbFlushEntry @ 0x1403278B0 (MiInsertTbFlushEntry.c)
 *     HvlNotifyLongSpinWait @ 0x14032DED0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14032DF00 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiLockLeafPage @ 0x14033B770 (MiLockLeafPage.c)
 *     MiDecrementShareCountEx @ 0x1403427F0 (MiDecrementShareCountEx.c)
 *     MiVmAccessLoggingEnabled @ 0x140386C1C (MiVmAccessLoggingEnabled.c)
 *     MiUpdatePfnPriority @ 0x140389C80 (MiUpdatePfnPriority.c)
 *     MI_WSLE_LOG_ACCESS @ 0x140389E74 (MI_WSLE_LOG_ACCESS.c)
 *     MiResolveProtoCombine @ 0x14038AD20 (MiResolveProtoCombine.c)
 *     MiRemoveWsle @ 0x14038B0E4 (MiRemoveWsle.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 */

__int64 __fastcall MiCombineWithExisting(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  volatile signed __int64 *v5; // r15
  __int64 v6; // rsi
  unsigned __int64 v7; // rbp
  unsigned __int64 *v8; // r13
  ULONG_PTR v9; // r12
  __int64 v10; // rax
  __int64 v11; // r8
  unsigned __int64 v12; // r9
  unsigned __int64 v13; // r14
  __int64 v14; // rbx
  unsigned __int64 v15; // rdi
  int v16; // ebx
  __int64 v17; // r8
  unsigned __int64 v18; // r9
  unsigned int PfnPriority; // eax
  ULONG_PTR v20; // rbx
  __int64 v21; // rcx
  int v22; // esi
  char WsleContents; // di
  __int64 v24; // r9
  __int64 v25; // r12
  int v26; // esi
  int v27; // edx
  int v28; // r8d
  __int64 v29; // rbx
  unsigned __int64 v30; // rbx
  int v31; // edi
  __int64 v33; // [rsp+30h] [rbp-C8h]
  int v34; // [rsp+30h] [rbp-C8h]
  unsigned __int64 v36; // [rsp+48h] [rbp-B0h]
  unsigned __int64 v37; // [rsp+50h] [rbp-A8h]
  __int128 v40; // [rsp+68h] [rbp-90h] BYREF
  __int128 v41; // [rsp+78h] [rbp-80h]
  __int128 *v42; // [rsp+90h] [rbp-68h] BYREF
  int v43; // [rsp+98h] [rbp-60h]
  int v44; // [rsp+9Ch] [rbp-5Ch]

  v33 = *(_QWORD *)(a1 + 112);
  v36 = *(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFF000uLL;
  v40 = 0LL;
  v41 = 0LL;
  v5 = (volatile signed __int64 *)(((v36 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v6 = ((unsigned __int64)*v5 >> 12) & 0xFFFFFFFFFFLL;
  v37 = v6;
  v7 = 48 * v6 - 0x220000000000LL;
  v8 = (unsigned __int64 *)(a3 + 32);
  v9 = MiLockProtoPoolPage(a3 + 32, 0LL);
  if ( !v9 )
    return 3221225496LL;
  v10 = MiLockLeafPage(v8, 0);
  v13 = v10;
  if ( !v10 )
  {
    MiUnlockProtoPoolPage(v9, 0x11u, v11, v12);
    return 3221225496LL;
  }
  v14 = 0xAAAAAAAAAAAAAAABuLL * ((v10 + 0x220000000000LL) >> 4);
  v15 = *(_QWORD *)(a1 + 96);
  MiMapSinglePage(v15, v6, -1073741808, 0);
  MiMapSinglePage(v15 + 4096, v14, -1073741808, 0);
  v16 = MiConfirmCombinePageContents(a1, v14);
  *(_QWORD *)(((v15 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) = CLFS_LSN_NULL_EXT;
  *(_QWORD *)((((v15 + 4096) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) = CLFS_LSN_NULL_EXT;
  if ( v16 )
  {
    PfnPriority = MiGetPfnPriority(v7);
    MiUpdatePfnPriority(v13, PfnPriority, 0);
  }
  _InterlockedAnd64((volatile signed __int64 *)(v13 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  MiUnlockProtoPoolPage(v9, 0x11u, v17, v18);
  if ( !v16 )
    return 3221225496LL;
  if ( (unsigned int)MiVmAccessLoggingEnabled(v33) )
    MI_WSLE_LOG_ACCESS(v33, (unsigned __int64)v5);
  v20 = MiMakePrototypePteDirect((__int64)v8) | 0x800;
  v22 = 0;
  WsleContents = MiGetWsleContents(v21, v36);
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v7 + 24), 0x3FuLL) )
  {
    do
    {
      if ( (++v22 & HvlLongSpinCountMask) == 0
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
    MiIdentifyPfn(v37, (__int64 *)&v40);
  }
  else
  {
    v26 = 0;
  }
  v27 = MI_WRITE_INVALID_PTE_TB_FLUSH_NEEDED(v5, v20, 66LL, v24);
  *(_QWORD *)(v7 + 24) |= 0x4000000000000000uLL;
  v34 = *(_DWORD *)(v7 + 32);
  BYTE2(v34) |= 7u;
  *(_DWORD *)(v7 + 32) = v34;
  v29 = *(_QWORD *)(v7 + 40) & 0xFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  *(_QWORD *)(a2 + 16) = v7;
  if ( v27 )
  {
    MiInsertTbFlushEntry(a4, v36, 1LL, 0);
    *(_DWORD *)(a4 + 20) |= 1u;
  }
  LOBYTE(v28) = WsleContents;
  MiRemoveWsle(v25, v36, v28, 10, 1);
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
        HvlNotifyLongSpinWait();
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
    v44 = 0;
    v42 = &v40;
    *((_QWORD *)&v41 + 1) = v8;
    v43 = 32;
    EtwTraceKernelEvent((int)&v42, 1, 0x28000001u, 634, 290462468);
  }
  ++**(_QWORD **)(a1 + 104);
  return 0LL;
}
