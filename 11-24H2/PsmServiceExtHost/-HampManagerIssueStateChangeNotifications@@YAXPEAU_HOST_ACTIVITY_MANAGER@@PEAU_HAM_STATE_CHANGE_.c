/*
 * XREFs of ?HampManagerIssueStateChangeNotifications@@YAXPEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_STATE_CHANGE_NOTIFICATION_PAYLOAD@@K@Z @ 0x180016A10
 * Callers:
 *     ?HampPkgUpdateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x180015DA0 (-HampPkgUpdateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 *     ?HampAppCommitStateSummary@@YAXPEAU_HAM_APPLICATION@@PEAT_HAM_EXTERNAL_STATE_SUMMARY@@@Z @ 0x180027080 (-HampAppCommitStateSummary@@YAXPEAU_HAM_APPLICATION@@PEAT_HAM_EXTERNAL_STATE_SUMMARY@@@Z.c)
 * Callees:
 *     CemRcTableGetNext @ 0x180016F20 (CemRcTableGetNext.c)
 *     ?HampClientAcquireLockShared@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x1800170F4 (-HampClientAcquireLockShared@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z.c)
 *     CemRcTableGetFirst @ 0x180043370 (CemRcTableGetFirst.c)
 *     __security_check_cookie @ 0x1800A7B40 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800A9010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall HampManagerIssueStateChangeNotifications(
        struct _HOST_ACTIVITY_MANAGER *a1,
        struct _HAM_STATE_CHANGE_NOTIFICATION_PAYLOAD *a2,
        char a3)
{
  __int64 i; // rax
  int v6; // ecx
  int v7; // eax
  int v8; // edx
  bool v9; // zf
  const wchar_t *v10; // r15
  DWORD v11; // esi
  _QWORD *Value; // rdi
  int v13; // esi
  __int64 *v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rax
  int v17; // eax
  __int64 v18; // rsi
  _DWORD *v19; // rdi
  __int64 *v20; // rax
  __int64 v21; // rcx
  __int64 v22; // rbx
  char *Heap; // rax
  __int64 v24; // rdx
  _OWORD *v25; // rax
  struct _HAM_STATE_CHANGE_NOTIFICATION_PAYLOAD *v26; // rcx
  __int128 v27; // xmm1
  _QWORD *v28; // rax
  __int64 v29; // rcx
  char v30; // [rsp+30h] [rbp-89h] BYREF
  int v31; // [rsp+34h] [rbp-85h] BYREF
  int v32; // [rsp+38h] [rbp-81h] BYREF
  _DWORD v33[3]; // [rsp+3Ch] [rbp-7Dh] BYREF
  __int64 v34; // [rsp+48h] [rbp-71h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+50h] [rbp-69h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+60h] [rbp-59h] BYREF
  void *v37; // [rsp+70h] [rbp-49h]
  int v38; // [rsp+78h] [rbp-41h]
  int v39; // [rsp+7Ch] [rbp-3Dh]
  __int64 *v40; // [rsp+80h] [rbp-39h]
  __int64 v41; // [rsp+88h] [rbp-31h]
  _DWORD *v42; // [rsp+90h] [rbp-29h]
  __int64 v43; // [rsp+98h] [rbp-21h]
  const wchar_t *v44; // [rsp+A0h] [rbp-19h]
  int v45; // [rsp+A8h] [rbp-11h]
  int v46; // [rsp+ACh] [rbp-Dh]
  char *v47; // [rsp+B0h] [rbp-9h]
  __int64 v48; // [rsp+B8h] [rbp-1h]
  int *v49; // [rsp+C0h] [rbp+7h]
  __int64 v50; // [rsp+C8h] [rbp+Fh]

  for ( i = CemRcTableGetFirst((char *)a1 + 304); ; i = CemRcTableGetNext(v22) )
  {
    v22 = i;
    if ( !i )
      break;
    v6 = *((_DWORD *)a2 + 135);
    if ( v6 )
    {
      v7 = *(_DWORD *)(i + 168);
      if ( v7 )
      {
        if ( v6 != v7 )
          continue;
      }
    }
    if ( *(_DWORD *)a2 )
    {
      if ( *(_DWORD *)a2 != 1 )
        continue;
      v8 = *(_DWORD *)(v22 + 172);
      v9 = (v8 & 2) == 0;
    }
    else
    {
      v8 = *(_DWORD *)(v22 + 172);
      v9 = (v8 & 1) == 0;
    }
    if ( !v9 && ((v8 & 4) != 0 && (a3 & 1) != 0 || (v8 & 8) != 0 && (a3 & 2) != 0 || (v8 & 0x10) != 0 && (a3 & 4) != 0) )
    {
      if ( (unsigned int)dword_1800E82B0 > 5 )
      {
        v10 = (const wchar_t *)((char *)a2 + 8);
        v11 = HampLockTrackerId;
        v32 = *((_DWORD *)a2 + 1);
        v30 = *(_BYTE *)a2;
        if ( HampLockTrackerId != -1 )
        {
          Value = TlsGetValue(HampLockTrackerId);
          if ( (*(_QWORD *)TlsGetValue(v11) & 0xFFFFFFFFFFFFFE00uLL) != 0 )
            NT_ASSERT("!CempLockTrackerAreLocksHeldAtLevelOrHigher( TrackerId, MinDisallowedLevel)");
          *Value |= 0x200uLL;
          ++Value[10];
        }
        RtlAcquireSRWLockShared(v22 + 40);
        v13 = *(_DWORD *)(v22 + 176);
        if ( HampLockTrackerId != -1 )
        {
          v14 = (__int64 *)TlsGetValue(HampLockTrackerId);
          v15 = *v14;
          if ( (*v14 & 0x200) == 0 )
            NT_ASSERT("(Tracker->Bitmap & LevelMask) != 0");
          v9 = v14[10]-- == 1;
          if ( v9 )
            *v14 = v15 & 0xFFFFFFFFFFFFFDFFuLL;
        }
        RtlReleaseSRWLockShared(v22 + 40);
        v34 = *(_QWORD *)(v22 + 152);
        v49 = &v32;
        v47 = &v30;
        v33[0] = v13;
        v50 = 4LL;
        v48 = 1LL;
        if ( a2 == (struct _HAM_STATE_CHANGE_NOTIFICATION_PAYLOAD *)-8LL )
        {
          v10 = &word_1800C1FFC;
          v17 = 2;
        }
        else
        {
          v16 = -1LL;
          do
            ++v16;
          while ( v10[v16] );
          v17 = 2 * v16 + 2;
        }
        v45 = v17;
        v44 = v10;
        v42 = v33;
        v46 = 0;
        v40 = &v34;
        *(_DWORD *)&EventDescriptor.Level = 5;
        UserData.Ptr = (ULONGLONG)off_1800E82B8;
        v43 = 4LL;
        v41 = 8LL;
        *(_DWORD *)&EventDescriptor.Id = 184549376;
        EventDescriptor.Keyword = 0LL;
        UserData.Size = *(unsigned __int16 *)off_1800E82B8;
        v37 = &unk_1800D5FBE;
        UserData.Reserved = 2;
        v38 = 81;
        v39 = 1;
        v33[1] = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
        EventWriteTransfer(RegHandle, &EventDescriptor, 0LL, 0LL, 7u, &UserData);
      }
      if ( (*(_BYTE *)(v22 + 144) & 1) != 0 )
      {
        (*(void (__fastcall **)(struct _HAM_STATE_CHANGE_NOTIFICATION_PAYLOAD *, _QWORD))(v22 + 128))(
          a2,
          *(_QWORD *)(v22 + 136));
      }
      else
      {
        HampClientAcquireLockShared((struct _HAM_CLIENT_CONTEXT *)v22);
        if ( *(_DWORD *)(v22 + 120) || *(_DWORD *)(v22 + 124) )
        {
          v18 = *(_QWORD *)(v22 + 128);
          v19 = 0LL;
          v31 = 0;
          RtlAcquireSRWLockExclusive(v18 + 24);
          if ( *(_BYTE *)(v18 + 32) || (int)RtlQueryWnfMetaNotification(&v31, 2LL, *(_QWORD *)(v22 + 120)) >= 0 && !v31 )
          {
            Heap = (char *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0x23CuLL);
            v19 = Heap;
            if ( Heap )
            {
              v24 = 4LL;
              *((_QWORD *)Heap + 2) = *(_QWORD *)(v22 + 120);
              v25 = Heap + 28;
              v26 = a2;
              do
              {
                *v25 = *(_OWORD *)v26;
                v25[1] = *((_OWORD *)v26 + 1);
                v25[2] = *((_OWORD *)v26 + 2);
                v25[3] = *((_OWORD *)v26 + 3);
                v25[4] = *((_OWORD *)v26 + 4);
                v25[5] = *((_OWORD *)v26 + 5);
                v25[6] = *((_OWORD *)v26 + 6);
                v25 += 8;
                v27 = *((_OWORD *)v26 + 7);
                v26 = (struct _HAM_STATE_CHANGE_NOTIFICATION_PAYLOAD *)((char *)v26 + 128);
                *(v25 - 1) = v27;
                --v24;
              }
              while ( v24 );
              *v25 = *(_OWORD *)v26;
              v25[1] = *((_OWORD *)v26 + 1);
              v19[6] = 544;
              v28 = *(_QWORD **)(v18 + 8);
              if ( *v28 != v18 )
                __fastfail(3u);
              *(_QWORD *)v19 = v18;
              *((_QWORD *)v19 + 1) = v28;
              *v28 = v19;
              *(_QWORD *)(v18 + 8) = v19;
              v19 = 0LL;
              if ( !*(_BYTE *)(v18 + 32) )
              {
                v29 = *(_QWORD *)(v18 + 16);
                *(_BYTE *)(v18 + 32) = 1;
                TpPostWork(v29);
              }
            }
          }
          else
          {
            RtlPublishWnfStateData(*(_QWORD *)(v22 + 120), 0LL, a2, 544LL, 0LL);
          }
          RtlReleaseSRWLockExclusive(v18 + 24);
          if ( v19 )
            RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v19);
        }
        if ( HampLockTrackerId != -1 )
        {
          v20 = (__int64 *)TlsGetValue(HampLockTrackerId);
          v21 = *v20;
          if ( (*v20 & 0x200) == 0 )
            NT_ASSERT("(Tracker->Bitmap & LevelMask) != 0");
          v9 = v20[10]-- == 1;
          if ( v9 )
            *v20 = v21 & 0xFFFFFFFFFFFFFDFFuLL;
        }
        RtlReleaseSRWLockShared(v22 + 40);
      }
    }
  }
}
