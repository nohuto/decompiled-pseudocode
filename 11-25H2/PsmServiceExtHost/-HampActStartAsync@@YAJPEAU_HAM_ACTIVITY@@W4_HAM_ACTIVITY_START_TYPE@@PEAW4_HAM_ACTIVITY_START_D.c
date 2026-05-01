/*
 * XREFs of ?HampActStartAsync@@YAJPEAU_HAM_ACTIVITY@@W4_HAM_ACTIVITY_START_TYPE@@PEAW4_HAM_ACTIVITY_START_DENY_REASON@@PEA_K@Z @ 0x18001A7A8
 * Callers:
 *     ?HamSrvStartActivityAsync@@YAJPEAU_HAM_CLIENT_CONTEXT@@_KW4_HAM_ACTIVITY_START_TYPE@@PEAU_HAM_ACTIVITY_PROPERTIES@@@Z @ 0x180019DA4 (-HamSrvStartActivityAsync@@YAJPEAU_HAM_CLIENT_CONTEXT@@_KW4_HAM_ACTIVITY_START_TYPE@@PEAU_HAM_AC.c)
 *     ?HampDepGroupProcessActionForActivity@@YAJPEAU_HAM_ACTIVITY@@W4_HAM_DEPENDENCY_ACTION@@@Z @ 0x180082970 (-HampDepGroupProcessActionForActivity@@YAJPEAU_HAM_ACTIVITY@@W4_HAM_DEPENDENCY_ACTION@@@Z.c)
 * Callees:
 *     ?HampHostQueueTerminateEx@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEAU_HAM_CLIENT_CONTEXT@@W4_HAM_ROUTINE_DEP_WORK_POLICY@@KPEA_KPEAK@Z @ 0x180007734 (-HampHostQueueTerminateEx@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE.c)
 *     ?HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x180009140 (-HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampUtilQueryHostHistoricCommitUse@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@PEA_K@Z @ 0x18000A444 (-HampUtilQueryHostHistoricCommitUse@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@PEA_K@Z.c)
 *     ?HampFreeHeap@@YAXPEAX@Z @ 0x18000F7E0 (-HampFreeHeap@@YAXPEAX@Z.c)
 *     ?HampActEndStateChange@@YAXPEAU_HAM_ACTIVITY@@K@Z @ 0x18001BBD0 (-HampActEndStateChange@@YAXPEAU_HAM_ACTIVITY@@K@Z.c)
 *     ?HampActBeginStateChange@@YAJPEAU_HAM_ACTIVITY@@W4_HAM_ACTIVITY_STATE@@@Z @ 0x18001BED0 (-HampActBeginStateChange@@YAJPEAU_HAM_ACTIVITY@@W4_HAM_ACTIVITY_STATE@@@Z.c)
 *     ?HampSystemJobIoAttributionStop@@YAXPEAX@Z @ 0x18001D88C (-HampSystemJobIoAttributionStop@@YAXPEAX@Z.c)
 *     ?HampHostUpdateActivityState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x1800277F0 (-HampHostUpdateActivityState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampActCanBeStarted@@YA?AW4_HAM_ACTIVITY_START_DENY_REASON@@PEAU_HAM_ACTIVITY@@@Z @ 0x18002B2D8 (-HampActCanBeStarted@@YA-AW4_HAM_ACTIVITY_START_DENY_REASON@@PEAU_HAM_ACTIVITY@@@Z.c)
 *     CempLockAcquireExclusive @ 0x18002B8B0 (CempLockAcquireExclusive.c)
 *     ?HampHostReleaseLockExclusive@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18003AA84 (-HampHostReleaseLockExclusive@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@3@Z @ 0x18003C408 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tl.c)
 *     ?HampRmContextAcquireResourceSet@@YAJPEAVHAM_ACTIVITY_RM_CONTEXT@@_K@Z @ 0x18005A290 (-HampRmContextAcquireResourceSet@@YAJPEAVHAM_ACTIVITY_RM_CONTEXT@@_K@Z.c)
 *     ?HampActCompareForMaxCommit@@YAJPEAU_HAM_ACTIVITY@@0K@Z @ 0x18005A820 (-HampActCompareForMaxCommit@@YAJPEAU_HAM_ACTIVITY@@0K@Z.c)
 *     ?HampSystemJobIoAttributionStart@@YAJPEAX@Z @ 0x180066AB8 (-HampSystemJobIoAttributionStart@@YAJPEAX@Z.c)
 */

__int64 __fastcall HampActStartAsync(__int64 a1, int a2, int *a3, unsigned __int64 *a4)
{
  int v7; // r12d
  int v8; // eax
  unsigned __int64 v9; // rcx
  _OWORD *Heap; // rax
  __int64 v11; // rdx
  void *v12; // r15
  int v13; // esi
  struct _RM_HAM_ACTIVITY_HOST *v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rax
  int CanBeStarted; // eax
  int v18; // edi
  __int64 v19; // rsi
  unsigned __int64 v20; // r14
  __int64 v21; // rcx
  struct _HAM_ACTIVITY *v22; // rdx
  unsigned __int64 v23; // r11
  __int64 *Value; // rax
  __int64 v25; // rdx
  bool v26; // zf
  unsigned int v28; // r14d
  DWORD v29; // r15d
  __int64 v30; // r12
  _QWORD *v31; // rsi
  __int64 v32; // rsi
  __int64 *v33; // rax
  __int64 v34; // rdx
  struct _HAM_CLIENT_CONTEXT *v35; // r9
  int v36; // eax
  struct _RM_HAM_ACTIVITY_HOST *v37; // rcx
  unsigned __int64 v38; // [rsp+40h] [rbp-10h] BYREF
  struct _RM_HAM_ACTIVITY_HOST *v39; // [rsp+48h] [rbp-8h] BYREF
  unsigned int v40; // [rsp+98h] [rbp+48h] BYREF
  int *v41; // [rsp+A0h] [rbp+50h]

  v41 = a3;
  v38 = 0LL;
  v7 = 0;
  if ( a2 != 1 || (*(_DWORD *)(a1 + 112) & 0x40000) == 0 )
  {
    v39 = *(struct _RM_HAM_ACTIVITY_HOST **)(a1 + 80);
    v8 = HampUtilQueryHostHistoricCommitUse(v39, &v38);
    v9 = v38;
    if ( v8 < 0 )
      v9 = 0LL;
    v38 = v9;
    Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0x30uLL);
    v12 = Heap;
    if ( Heap )
    {
      *Heap = 0LL;
      Heap[1] = 0LL;
      Heap[2] = 0LL;
      RtlQueryPerformanceCounter(Heap);
    }
    LOBYTE(v11) = 2;
    v13 = HampActBeginStateChange(a1, v11);
    if ( v13 < 0 )
    {
      v18 = 16;
      v28 = 0x2000;
      goto LABEL_53;
    }
    v14 = *(struct _RM_HAM_ACTIVITY_HOST **)(a1 + 80);
    *(_BYTE *)(a1 + 563) = 0;
    HampHostUpdateActivityState(v14);
    v15 = *(_QWORD *)(a1 + 512);
    *(_DWORD *)(a1 + 552) |= 4u;
    if ( v15 && a2 == 1 )
    {
      v18 = 16;
      v13 = -1073741776;
      v28 = 12288;
    }
    else
    {
      v16 = *(_QWORD *)(a1 + 520);
      if ( v16 && !v15 )
        *(_QWORD *)(a1 + 512) = v16;
      if ( v12 )
      {
        CanBeStarted = HampActCanBeStarted(a1);
        v18 = CanBeStarted;
        if ( CanBeStarted == 15 )
        {
          v13 = -1058275327;
          v28 = 20480;
        }
        else if ( (unsigned int)(CanBeStarted - 1) <= 7 )
        {
          v13 = -1058275328;
          v28 = 24576;
        }
        else
        {
          if ( (unsigned int)(CanBeStarted - 9) > 5 )
          {
            *(_QWORD *)(a1 + 528) = v12;
            v12 = 0LL;
            if ( a2 == 1 )
            {
              v35 = *(struct _HAM_CLIENT_CONTEXT **)(a1 + 64);
              v36 = ((*(_DWORD *)(a1 + 552) & 2) == 0) | 2;
              v40 = 0;
              HampHostQueueTerminateEx((__int64)v39, 1, 0x1500u, v35, v36, 0, 0LL, &v40);
            }
            v19 = *(_QWORD *)(a1 + 80);
            v20 = *(_QWORD *)(a1 + 400);
            if ( v38 && v38 <= *(_QWORD *)(a1 + 456) && v20 && (*(_BYTE *)(a1 + 408) & 1) != 0 )
              v20 = v38;
            if ( (*(_BYTE *)(a1 + 480) & 0x20) != 0 )
            {
              v21 = 1200LL;
              if ( v19 )
                v21 = v19 + 1136;
              v22 = *(struct _HAM_ACTIVITY **)(v19 + 1016);
              v23 = *(_QWORD *)v21 & -(__int64)((*(_QWORD *)(v19 + 664) & 0x2000000000000LL) != 0);
              if ( v22
                && v22 != (struct _HAM_ACTIVITY *)a1
                && (int)HampActCompareForMaxCommit((struct _HAM_ACTIVITY *)a1, v22, 1u) <= 0 )
              {
                v20 = 0LL;
              }
            }
            else
            {
              v23 = 0LL;
            }
            if ( v20 != -1LL )
            {
              if ( v20 < v23 )
                v20 = 0LL;
              else
                v20 -= v23;
            }
            if ( HampLockTrackerId != -1 )
            {
              Value = (__int64 *)TlsGetValue(HampLockTrackerId);
              v25 = *Value;
              if ( (*Value & 2) == 0 )
                NT_ASSERT("(Tracker->Bitmap & LevelMask) != 0");
              v26 = Value[2]-- == 1;
              if ( v26 )
                *Value = v25 & 0xFFFFFFFFFFFFFFFDuLL;
            }
            *(_DWORD *)(v19 + 8) = 0;
            RtlReleaseSRWLockExclusive(v19);
            if ( a4 )
              *a4 = v20;
            if ( (*(_DWORD *)(a1 + 112) & 0x4000000) != 0 )
            {
              v13 = HampSystemJobIoAttributionStart(*((HANDLE *)v39 + 72));
              if ( v13 < 0 )
              {
                v18 = 16;
                v28 = 0x8000;
                goto LABEL_77;
              }
              v29 = HampLockTrackerId;
              v30 = *(_QWORD *)(a1 + 80);
              if ( HampLockTrackerId != -1 )
              {
                v31 = TlsGetValue(HampLockTrackerId);
                if ( (*(_QWORD *)TlsGetValue(v29) & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
                  NT_ASSERT("!CempLockTrackerAreLocksHeldAtLevelOrHigher( TrackerId, MinDisallowedLevel)");
                *v31 |= 2uLL;
                ++v31[2];
              }
              CempLockAcquireExclusive(v30);
              *(_DWORD *)(a1 + 552) |= 0x80u;
              v32 = *(_QWORD *)(a1 + 80);
              if ( HampLockTrackerId != -1 )
              {
                v33 = (__int64 *)TlsGetValue(HampLockTrackerId);
                v34 = *v33;
                if ( (*v33 & 2) == 0 )
                  NT_ASSERT("(Tracker->Bitmap & LevelMask) != 0");
                v26 = v33[2]-- == 1;
                if ( v26 )
                  *v33 = v34 & 0xFFFFFFFFFFFFFFFDuLL;
              }
              *(_DWORD *)(v32 + 8) = 0;
              RtlReleaseSRWLockExclusive(v32);
              v7 = 1;
            }
            v13 = HampRmContextAcquireResourceSet(*(struct HAM_ACTIVITY_RM_CONTEXT **)(a1 + 88), v20);
            if ( v13 >= 0 )
            {
              HampActEndStateChange((struct _HAM_ACTIVITY *)a1, 0);
              v13 = 0;
              goto LABEL_37;
            }
            v12 = 0LL;
            v18 = 16;
            v28 = 36864;
            if ( v7 )
            {
              HampHostAcquireLockExclusiveEx(*(struct _RM_HAM_ACTIVITY_HOST **)(a1 + 80), 0);
              v37 = *(struct _RM_HAM_ACTIVITY_HOST **)(a1 + 80);
              *(_DWORD *)(a1 + 552) &= ~0x80u;
              HampHostReleaseLockExclusive(v37);
              HampSystemJobIoAttributionStop(*(HANDLE *)(*(_QWORD *)(a1 + 80) + 576LL));
            }
            goto LABEL_77;
          }
          v13 = -1058275324;
          v28 = 28672;
        }
      }
      else
      {
        v18 = 16;
        v13 = -1073741801;
        v28 = 0x4000;
      }
    }
    HampHostReleaseLockExclusive(*(struct _RM_HAM_ACTIVITY_HOST **)(a1 + 80));
LABEL_77:
    HampActEndStateChange((struct _HAM_ACTIVITY *)a1, 1u);
LABEL_53:
    if ( v12 )
      HampFreeHeap(v12);
    goto LABEL_55;
  }
  v18 = 16;
  v13 = -1073741776;
  v28 = 4096;
LABEL_55:
  if ( (unsigned int)dword_1800E72B0 > 4 && (qword_1800E72C0 & 8) != 0 && (qword_1800E72C8 & 8) == qword_1800E72C8 )
  {
    v39 = *(struct _RM_HAM_ACTIVITY_HOST **)(a1 + 40);
    v40 = v28;
    LODWORD(v38) = v13;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
      (unsigned int)&dword_1800E72B0,
      (unsigned int)&unk_1800D532E,
      (_DWORD)a3,
      (_DWORD)a4,
      (__int64)&v38,
      (__int64)&v39,
      (__int64)&v40);
  }
LABEL_37:
  *v41 = v18;
  return (unsigned int)v13;
}
