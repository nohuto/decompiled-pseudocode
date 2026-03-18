/*
 * XREFs of VidSchiProcessNativeFenceSignaledDpc @ 0x1400469A0
 * Callers:
 *     VidSchDdiNotifyDpcWorker @ 0x14000779C (VidSchDdiNotifyDpcWorker.c)
 *     VidSchDdiNotifyDpc @ 0x1400079E0 (VidSchDdiNotifyDpc.c)
 * Callees:
 *     ?VidSchiUpdateHwSchRunningTime@@YAXPEAU_VIDSCH_NODE@@@Z @ 0x140018A48 (-VidSchiUpdateHwSchRunningTime@@YAXPEAU_VIDSCH_NODE@@@Z.c)
 *     ?ProcessHwQueues@HwQueueStagingList@@QEAAXPEAU_KLOCK_QUEUE_HANDLE@@@Z @ 0x14001D740 (-ProcessHwQueues@HwQueueStagingList@@QEAAXPEAU_KLOCK_QUEUE_HANDLE@@@Z.c)
 *     ?Acquire@AcquireSpinLock@@QEAAXXZ @ 0x14002C1B0 (-Acquire@AcquireSpinLock@@QEAAXXZ.c)
 *     ?Release@AcquireSpinLock@@QEAAXXZ @ 0x14002D720 (-Release@AcquireSpinLock@@QEAAXXZ.c)
 *     NativeFenceUmdHandleCompareFunction @ 0x140051338 (NativeFenceUmdHandleCompareFunction.c)
 *     ?UnwaitFencesFromNativeFenceSignaledDpc@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_NODE@@PEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x140051E5C (-UnwaitFencesFromNativeFenceSignaledDpc@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@PEAU_VID.c)
 *     __security_check_cookie @ 0x140056260 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400562A0 (_guard_dispatch_icall.c)
 *     memmove @ 0x140056480 (memmove.c)
 *     memset @ 0x140056780 (memset.c)
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall VidSchiProcessNativeFenceSignaledDpc(PSLIST_ENTRY ListEntry)
{
  struct _SLIST_ENTRY *Next; // r13
  struct _SLIST_ENTRY *v3; // rdi
  unsigned int v4; // r14d
  __int64 v5; // r15
  char v6; // r12
  _QWORD *v7; // rsi
  __int64 v8; // rcx
  void (__fastcall *v9)(__int64, _QWORD *); // rax
  __int64 *v10; // rdi
  unsigned int v11; // ecx
  __int64 v12; // rdi
  __int64 v13; // rbx
  unsigned int v14; // edx
  __int64 v15; // rax
  _QWORD *v16; // rsi
  int v17; // eax
  struct _VIDSCH_SYNC_OBJECT *v18; // r9
  unsigned int i; // ebx
  struct _VIDSCH_SYNC_OBJECT *v20; // r9
  int v21; // [rsp+38h] [rbp-D0h] BYREF
  unsigned int v22; // [rsp+3Ch] [rbp-CCh]
  __int64 v23; // [rsp+40h] [rbp-C8h]
  _QWORD *v24; // [rsp+48h] [rbp-C0h]
  __int64 v25; // [rsp+50h] [rbp-B8h] BYREF
  _QWORD v26[2]; // [rsp+58h] [rbp-B0h] BYREF
  char v27; // [rsp+68h] [rbp-A0h]
  int v28; // [rsp+6Ch] [rbp-9Ch]
  struct _SLIST_ENTRY *v29; // [rsp+70h] [rbp-98h] BYREF
  _QWORD v30[4]; // [rsp+78h] [rbp-90h] BYREF
  __int16 v31; // [rsp+98h] [rbp-70h]
  _QWORD v32[2]; // [rsp+A0h] [rbp-68h] BYREF
  __int128 v33; // [rsp+B0h] [rbp-58h]
  __int128 v34; // [rsp+C0h] [rbp-48h]
  __int64 v35; // [rsp+D0h] [rbp-38h]
  struct _VIDSCH_SYNC_OBJECT *v36[8]; // [rsp+D8h] [rbp-30h] BYREF

  Next = ListEntry[2].Next;
  v3 = 0LL;
  v4 = 0;
  v5 = *((_QWORD *)&Next[1].Next + 1);
  memset(v36, 0, sizeof(v36));
  if ( *(_BYTE *)(v5 + 7066) )
  {
    v3 = ListEntry[7].Next;
  }
  else
  {
    v4 = *((_DWORD *)&ListEntry[2].Next + 2);
    if ( v4 )
      memmove(v36, &ListEntry[3], 8LL * v4);
  }
  ExpInterlockedPushEntrySList((PSLIST_HEADER)&Next[193], ListEntry);
  v31 = 256;
  v30[0] = v5 + 1984;
  AcquireSpinLock::Acquire((Acquire *)v30);
  v25 = v5;
  v27 = 0;
  v28 = 2;
  v6 = 1;
  v26[1] = v26;
  v26[0] = v26;
  if ( !v3 )
  {
    if ( !v4 )
      goto LABEL_28;
    for ( i = 0; i < v4; ++i )
    {
      v20 = v36[i];
      if ( !v20 || *((_DWORD *)v20 + 12) != 6 )
      {
        g_DxgMmsBugcheckExportIndex = 1;
        WdLogSingleEntry5(0LL, 281LL, 20LL, v20, v4, 0LL);
        WdLogGlobalForLineNumber = 906;
        JUMPOUT(0x140046CF2LL);
      }
      UnwaitFencesFromNativeFenceSignaledDpc((struct HwQueueStagingList *)&v25, 0LL, 0LL, v20);
    }
    goto LABEL_29;
  }
  v7 = (_QWORD *)*((_QWORD *)&v3[2].Next + 1);
  v8 = *(_QWORD *)(v5 + 8);
  v29 = v3[2].Next;
  v35 = 0LL;
  v32[1] = &v29;
  v24 = v7;
  v33 = 0LL;
  v32[0] = 1LL;
  v9 = (void (__fastcall *)(__int64, _QWORD *))DxgCoreInterface[104];
  v34 = 0LL;
  v9(v8, v32);
  v10 = (__int64 *)v7[39];
  v11 = *((_DWORD *)v10 + 4);
  v12 = *v10;
  v13 = v7[40];
  v14 = (unsigned int)v12 % v11;
  HIDWORD(v23) = HIDWORD(v12);
  LODWORD(v23) = (unsigned int)v12 % v11;
  v22 = v11;
  if ( v13 != v23 && HIDWORD(v13) <= HIDWORD(v23) )
  {
    if ( HIDWORD(v13) == HIDWORD(v23) )
    {
      if ( (unsigned int)v13 > v14 )
        goto LABEL_27;
    }
    else if ( HIDWORD(v13) + 1 != HIDWORD(v23) || (unsigned int)v13 < v14 )
    {
      goto LABEL_27;
    }
    v6 = 0;
    while ( 1 )
    {
      v15 = v7[5];
      v21 = *(_DWORD *)(v7[39] + 48 * ((unsigned int)v13 + 1LL));
      v16 = *(_QWORD **)(*(_QWORD *)(v15 + 8) + 1968LL);
      while ( v16 )
      {
        v17 = NativeFenceUmdHandleCompareFunction(&v21, v16);
        if ( v17 >= 0 )
        {
          if ( v17 <= 0 )
            break;
          v16 = (_QWORD *)v16[1];
        }
        else
        {
          v16 = (_QWORD *)*v16;
        }
      }
      if ( !v16 )
        break;
      v18 = (struct _VIDSCH_SYNC_OBJECT *)*(v16 - 1);
      if ( !v18 || *((_DWORD *)v18 + 12) != 6 )
      {
        g_DxgMmsBugcheckExportIndex = 1;
        WdLogSingleEntry5(0LL, 281LL, 20LL, v18, v4, 0LL);
        WdLogGlobalForLineNumber = 906;
        break;
      }
      UnwaitFencesFromNativeFenceSignaledDpc((struct HwQueueStagingList *)&v25, 0LL, 0LL, v18);
      v7 = v24;
      LODWORD(v13) = ((int)v13 + 1) % v22;
      if ( (_DWORD)v13 == (_DWORD)v12 )
        goto LABEL_27;
    }
    v7 = v24;
    v6 = 1;
  }
LABEL_27:
  v7[40] = v12;
  if ( v6 )
LABEL_28:
    UnwaitFencesFromNativeFenceSignaledDpc(
      (struct HwQueueStagingList *)&v25,
      (struct _VIDSCH_GLOBAL *)v5,
      (struct _VIDSCH_NODE *)Next,
      0LL);
LABEL_29:
  VidSchiUpdateHwSchRunningTime((struct _VIDSCH_NODE *)Next);
  if ( v28 && !v27 )
    HwQueueStagingList::ProcessHwQueues((HwQueueStagingList *)&v25, 0LL);
  AcquireSpinLock::Release((AcquireSpinLock *)v30);
}
