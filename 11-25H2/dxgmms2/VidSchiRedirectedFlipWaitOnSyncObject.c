/*
 * XREFs of VidSchiRedirectedFlipWaitOnSyncObject @ 0x14002AEC0
 * Callers:
 *     VidSchSubmitCommandContextless @ 0x14002A2A0 (VidSchSubmitCommandContextless.c)
 * Callees:
 *     VidSchiSubmitPresentHistoryToken @ 0x140014038 (VidSchiSubmitPresentHistoryToken.c)
 *     ?ProcessHwQueues@HwQueueStagingList@@QEAAXPEAU_KLOCK_QUEUE_HANDLE@@@Z @ 0x14001D740 (-ProcessHwQueues@HwQueueStagingList@@QEAAXPEAU_KLOCK_QUEUE_HANDLE@@@Z.c)
 *     ?IncrementNumberOfQueuedFlipPerSource@@YAXPEAU_VIDSCH_GLOBAL@@I@Z @ 0x1400271C8 (-IncrementNumberOfQueuedFlipPerSource@@YAXPEAU_VIDSCH_GLOBAL@@I@Z.c)
 *     ?VidSchiAcquirePrivateDataReference@@YAXPEAU_VIDSCH_GLOBAL@@PEAUVIDSCH_FLIP_MULTIPLANE_OVERLAY2@@@Z @ 0x14002A250 (-VidSchiAcquirePrivateDataReference@@YAXPEAU_VIDSCH_GLOBAL@@PEAUVIDSCH_FLIP_MULTIPLANE_OVERLAY2@.c)
 *     ?Acquire@AcquireSpinLock@@QEAAXXZ @ 0x14002C1B0 (-Acquire@AcquireSpinLock@@QEAAXXZ.c)
 *     ?Release@AcquireSpinLock@@QEAAXXZ @ 0x14002D720 (-Release@AcquireSpinLock@@QEAAXXZ.c)
 *     _guard_dispatch_icall @ 0x1400562A0 (_guard_dispatch_icall.c)
 *     memmove @ 0x140056480 (memmove.c)
 *     VidSchIsVSyncEnabled @ 0x1400D9780 (VidSchIsVSyncEnabled.c)
 */

__int64 __fastcall VidSchiRedirectedFlipWaitOnSyncObject(struct _VIDSCH_GLOBAL *a1, char *Src, __int64 a3, int *a4)
{
  __int64 v8; // rax
  __int64 v9; // r13
  __int64 v10; // r14
  int v11; // eax
  unsigned __int64 v12; // r9
  _DWORD *v13; // r8
  unsigned int **v14; // rdx
  _QWORD *v15; // rax
  _QWORD *v16; // r14
  __int64 v17; // rcx
  char *v18; // rsi
  char *v19; // r14
  char **v20; // rax
  unsigned int *v21; // rax
  __int64 v22; // r8
  __int64 v23; // rcx
  unsigned int v24; // edi
  void (__fastcall *v26)(_QWORD, __int64, __int64, const wchar_t *, __int64, _QWORD, _QWORD, _QWORD, _QWORD); // rax
  void (__fastcall *v27)(_QWORD, __int64, __int64, const wchar_t *, __int64, _QWORD, _QWORD, _QWORD, _QWORD); // rax
  __int64 v28; // rdx
  void (__fastcall *v29)(_QWORD, __int64, __int64); // rax
  unsigned int v30; // edx
  struct _VIDSCH_GLOBAL *v31; // [rsp+58h] [rbp-19h] BYREF
  _QWORD v32[2]; // [rsp+60h] [rbp-11h] BYREF
  char v33; // [rsp+70h] [rbp-1h]
  int v34; // [rsp+74h] [rbp+3h]
  _QWORD v35[4]; // [rsp+78h] [rbp+7h] BYREF
  __int16 v36; // [rsp+98h] [rbp+27h]

  v8 = *(_QWORD *)&Src[*((_DWORD *)Src + 151) * ((8 * *((_DWORD *)Src + 152) + 231) & 0xFFFFFFF8) + 648];
  if ( v8 )
    v9 = *(_QWORD *)(*(_QWORD *)(v8 + 8) + 32LL);
  else
    v9 = 0LL;
  v10 = *((unsigned int *)Src + 29);
  if ( (*(_DWORD *)Src & 0x1000000) != 0 && (_DWORD)v10 != -1 )
  {
    v28 = *(unsigned int *)(*((_QWORD *)a1 + v10 + 429) + 44488LL);
    if ( (_DWORD)v28 != -1 )
    {
      v29 = (void (__fastcall *)(_QWORD, __int64, __int64))*((_QWORD *)a1 + 411);
      if ( v29 )
        v29(*((_QWORD *)a1 + 419), v28, 0xFFFFFFFFLL);
    }
  }
  v11 = *a4;
  if ( (*a4 & 0x1000) != 0
    && ((v11 & 0x400) == 0 || (v11 & 0x800) != 0)
    && (_DWORD)v10 != -1
    && (*(_DWORD *)Src & 0x1040000) == 0x1040000 )
  {
    _InterlockedAdd((volatile signed __int32 *)a1 + 198, 1u);
    IncrementNumberOfQueuedFlipPerSource(a1, v10);
    _InterlockedAdd((volatile signed __int32 *)(v9 + 1828), 1u);
    _InterlockedAdd((volatile signed __int32 *)(v9 + 4 * v10 + 1764), 1u);
    if ( (*(_DWORD *)(v9 + 48) & 2) != 0 || *((int *)Src + 30) >= 4 || *((_BYTE *)a1 + 156) )
      VidSchIsVSyncEnabled(a1, v30);
  }
  v36 = 0;
  v35[0] = (char *)a1 + 1984;
  AcquireSpinLock::Acquire((AcquireSpinLock *)v35);
  v12 = *((_QWORD *)Src + 59);
  v13 = (_DWORD *)(a3 + 48);
  v14 = (unsigned int **)(a3 + 72);
  v31 = a1;
  v32[1] = v32;
  v32[0] = v32;
  v33 = 0;
  v34 = 1;
  if ( *(_BYTE *)(a3 + 29) )
    goto LABEL_17;
  if ( *v13 != 6 && !*(_BYTE *)(a3 + 30) )
  {
    if ( (int)(**v14 - v12) < 0 )
      goto LABEL_11;
LABEL_17:
    v21 = *v14;
    if ( *v13 == 6 || *(_BYTE *)(a3 + 30) )
      v22 = *(_QWORD *)v21;
    else
      v22 = *v21;
    WdLogSingleEntry3(4LL, a3, v22, *((_QWORD *)Src + 59));
    WdLogGlobalForLineNumber = 13671;
    VidSchiAcquirePrivateDataReference(a1, (struct VIDSCH_FLIP_MULTIPLANE_OVERLAY2 *)(Src + 600));
    v23 = *((_QWORD *)Src + 4);
    if ( v23 )
      _InterlockedAdd((volatile signed __int32 *)(v23 + 12), 1u);
    VidSchiSubmitPresentHistoryToken((struct HwQueueStagingList *)&v31, 0LL, Src, 0LL, (__int64)a1);
    goto LABEL_23;
  }
  if ( *(_QWORD *)*v14 >= v12 )
    goto LABEL_17;
LABEL_11:
  if ( *(_DWORD *)(a3 + 36) == 0x7FFFFFFF )
  {
    WdLogSingleEntry0(1LL);
    v27 = (void (__fastcall *)(_QWORD, __int64, __int64, const wchar_t *, __int64, _QWORD, _QWORD, _QWORD, _QWORD))DxgCoreInterface[88];
    WdLogGlobalForLineNumber = 13709;
    v27(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"Synchronization object already has LONG_MAX reference pending, can't reference more.\n",
      13709LL,
      0LL,
      0LL,
      0LL,
      0LL);
    v24 = -1073741823;
    goto LABEL_24;
  }
  v15 = ExAllocateFromLookasideListEx((PLOOKASIDE_LIST_EX)((char *)a1 + 928));
  v16 = v15;
  if ( !v15 )
  {
    WdLogSingleEntry0(1LL);
    v26 = (void (__fastcall *)(_QWORD, __int64, __int64, const wchar_t *, __int64, _QWORD, _QWORD, _QWORD, _QWORD))DxgCoreInterface[88];
    WdLogGlobalForLineNumber = 13721;
    v26(0LL, 0x40000LL, 0xFFFFFFFFLL, L"Failed to allocate VIDSCH_SYNCOBJ_PHT_DATA", 13721LL, 0LL, 0LL, 0LL, 0LL);
    v24 = -1073741801;
    goto LABEL_24;
  }
  v15[1] = a3;
  v15[2] = *((_QWORD *)Src + 59);
  memmove(v15 + 5, Src, *((unsigned int *)Src + 139));
  VidSchiAcquirePrivateDataReference(a1, (struct VIDSCH_FLIP_MULTIPLANE_OVERLAY2 *)(v16 + 80));
  v17 = v16[9];
  if ( v17 )
    _InterlockedAdd((volatile signed __int32 *)(v17 + 12), 1u);
  v18 = (char *)a1 + 912;
  v19 = (char *)(v16 + 3);
  v20 = (char **)*((_QWORD *)v18 + 1);
  if ( *v20 != v18 )
    __fastfail(3u);
  *(_QWORD *)v19 = v18;
  *((_QWORD *)v19 + 1) = v20;
  *v20 = v19;
  *((_QWORD *)v18 + 1) = v19;
  ++*(_DWORD *)(a3 + 44);
  _InterlockedAdd((volatile signed __int32 *)(a3 + 36), 1u);
LABEL_23:
  v24 = 0;
LABEL_24:
  if ( !v33 && v34 )
    HwQueueStagingList::ProcessHwQueues((HwQueueStagingList *)&v31, 0LL);
  AcquireSpinLock::Release((AcquireSpinLock *)v35);
  return v24;
}
