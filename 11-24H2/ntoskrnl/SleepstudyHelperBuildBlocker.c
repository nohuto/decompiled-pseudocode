/*
 * XREFs of SleepstudyHelperBuildBlocker @ 0x140A24F30
 * Callers:
 *     SleepstudyHelper_RegisterPdoWithParentGuid @ 0x140767990 (SleepstudyHelper_RegisterPdoWithParentGuid.c)
 *     SleepstudyHelper_RegisterPdoWithParentHandle @ 0x140767A70 (SleepstudyHelper_RegisterPdoWithParentHandle.c)
 *     PopPowerRequestStatsCreateSleepstudyBlocker @ 0x140A24E10 (PopPowerRequestStatsCreateSleepstudyBlocker.c)
 *     SleepstudyHelper_RegisterComponentEx @ 0x140ACB790 (SleepstudyHelper_RegisterComponentEx.c)
 *     SleepstudyHelper_RegisterPdoWithParentPdo @ 0x140ACB880 (SleepstudyHelper_RegisterPdoWithParentPdo.c)
 *     PopUserShutdownInitializeSleepstudyDiagnostics @ 0x140C2EB68 (PopUserShutdownInitializeSleepstudyDiagnostics.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140330CB0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     RtlInsertElementGenericTableAvl @ 0x1403F03D0 (RtlInsertElementGenericTableAvl.c)
 *     _tlgKeywordOn @ 0x140426AF0 (_tlgKeywordOn.c)
 *     CmpFreeTransientPoolWithTag @ 0x140441FC0 (CmpFreeTransientPoolWithTag.c)
 *     SshpReferenceBlocker @ 0x140485B6C (SshpReferenceBlocker.c)
 *     SshpTracingWriteBlockerStateRundown @ 0x14048614C (SshpTracingWriteBlockerStateRundown.c)
 *     SSHSupportReleasePushLockExclusive @ 0x14048939C (SSHSupportReleasePushLockExclusive.c)
 *     SSHSupportIsPlatformAoAc @ 0x140490DC8 (SSHSupportIsPlatformAoAc.c)
 *     SSHSupportAllocateNonPaged @ 0x14049BAC4 (SSHSupportAllocateNonPaged.c)
 *     SSHSupportQueryInterruptTime @ 0x1404B1668 (SSHSupportQueryInterruptTime.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     SleepstudyHelperDestroyBlockerBuilder @ 0x140A252E0 (SleepstudyHelperDestroyBlockerBuilder.c)
 *     SshpCacheLookupBlocker @ 0x140A2537C (SshpCacheLookupBlocker.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 */

__int64 __fastcall SleepstudyHelperBuildBlocker(__int64 *a1, PKSPIN_LOCK *a2)
{
  PKSPIN_LOCK v2; // rbx
  ULONG v3; // r15d
  ULONG_PTR *v4; // rsi
  ULONG_PTR *v6; // r15
  __int64 v7; // r13
  unsigned __int64 *v8; // r12
  _QWORD *v9; // rax
  _QWORD *v10; // rdi
  int v11; // edi
  unsigned int v12; // eax
  __int64 Pool2; // rax
  PKSPIN_LOCK v15; // rbx
  ULONG_PTR v16; // r13
  ULONG_PTR **v17; // rax
  _QWORD *v18; // rax
  _QWORD *v19; // rbx
  ULONG_PTR *v20; // rsi
  ULONG_PTR **v21; // rcx
  PKSPIN_LOCK v22; // rbx
  PKSPIN_LOCK *v23; // rax
  __int64 v24; // r8
  int v25; // r9d
  int v26; // r10d
  BOOLEAN NewElement[4]; // [rsp+30h] [rbp-D0h] BYREF
  ULONG v28; // [rsp+34h] [rbp-CCh]
  PKSPIN_LOCK SpinLock; // [rsp+38h] [rbp-C8h] BYREF
  PKSPIN_LOCK *v30; // [rsp+40h] [rbp-C0h] BYREF
  int v31; // [rsp+48h] [rbp-B8h] BYREF
  int v32; // [rsp+4Ch] [rbp-B4h] BYREF
  int v33; // [rsp+50h] [rbp-B0h] BYREF
  int v34; // [rsp+54h] [rbp-ACh] BYREF
  __int64 v35; // [rsp+58h] [rbp-A8h] BYREF
  _DWORD Buffer[2]; // [rsp+60h] [rbp-A0h] BYREF
  PKSPIN_LOCK v37; // [rsp+68h] [rbp-98h]
  struct _EVENT_DATA_DESCRIPTOR v38; // [rsp+70h] [rbp-90h] BYREF
  int *v39; // [rsp+90h] [rbp-70h]
  int v40; // [rsp+98h] [rbp-68h]
  int v41; // [rsp+9Ch] [rbp-64h]
  int *v42; // [rsp+A0h] [rbp-60h]
  int v43; // [rsp+A8h] [rbp-58h]
  int v44; // [rsp+ACh] [rbp-54h]
  int *v45; // [rsp+B0h] [rbp-50h]
  int v46; // [rsp+B8h] [rbp-48h]
  int v47; // [rsp+BCh] [rbp-44h]
  int *v48; // [rsp+C0h] [rbp-40h]
  int v49; // [rsp+C8h] [rbp-38h]
  int v50; // [rsp+CCh] [rbp-34h]
  PKSPIN_LOCK **v51; // [rsp+D0h] [rbp-30h]
  int v52; // [rsp+D8h] [rbp-28h]
  int v53; // [rsp+DCh] [rbp-24h]
  _DWORD *v54; // [rsp+E0h] [rbp-20h]
  int v55; // [rsp+E8h] [rbp-18h]
  int v56; // [rsp+ECh] [rbp-14h]
  __int64 v57; // [rsp+F0h] [rbp-10h]
  _DWORD v58[2]; // [rsp+F8h] [rbp-8h] BYREF
  __int64 *v59; // [rsp+100h] [rbp+0h]
  int v60; // [rsp+108h] [rbp+8h]
  int v61; // [rsp+10Ch] [rbp+Ch]

  v2 = 0LL;
  v30 = a2;
  v3 = 0;
  SpinLock = 0LL;
  v4 = 0LL;
  if ( a1 && a2 )
  {
    v6 = &SshpBlockerCollections + 6 * *((int *)a1 + 2);
    if ( *((_BYTE *)v6 + 24) && !SSHSupportIsPlatformAoAc() )
      return (unsigned int)-1073741637;
    v7 = *a1;
    v8 = (unsigned __int64 *)(*a1 + 16);
    v28 = *(_DWORD *)(*a1 + 24);
    v9 = KeAbPreAcquire((__int64)v8, 0LL);
    v10 = v9;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v8, 0LL) )
      ExfAcquirePushLockExclusiveEx(v8, (__int64)v9, (__int64)v8);
    if ( v10 )
      *((_BYTE *)v10 + 10) = 1;
    v11 = SshpCacheLookupBlocker(v7, a1, &SpinLock);
    if ( v11 >= 0 )
    {
      v15 = SpinLock;
      SshpReferenceBlocker(SpinLock, 0);
      *v30 = v15;
      v2 = 0LL;
    }
    else
    {
      if ( _InterlockedIncrement64(&SshpGlobalBlockerCount) > (unsigned int)SleepstudyHelperBlockerGlobalLimit
        || (v12 = *(_DWORD *)(v7 + 40), v12 >= SleepstudyHelperBlockerLibraryLimit) )
      {
        _InterlockedDecrement64(&SshpGlobalBlockerCount);
        if ( SshpTelemetryHandleRegistered
          && (unsigned int)dword_140E084F0 > 5
          && tlgKeywordOn((__int64)&dword_140E084F0, 0x400000000000LL) )
        {
          v41 = 0;
          v44 = 0;
          v39 = &v31;
          v40 = 4;
          v42 = &v32;
          v32 = v25;
          v43 = 4;
          if ( v24 > 0xFFFFFFFFLL )
            LODWORD(v24) = -1;
          v46 = 4;
          v47 = 0;
          v50 = 0;
          v53 = 0;
          v56 = 0;
          v58[1] = 0;
          v61 = 0;
          v45 = &v33;
          v34 = *(_DWORD *)(v7 + 40);
          v48 = &v34;
          LODWORD(v30) = *(_DWORD *)(v7 + 24);
          v51 = &v30;
          v54 = v58;
          v57 = a1[7];
          v58[0] = *((unsigned __int16 *)a1 + 24);
          v59 = &v35;
          v33 = v24;
          v49 = 4;
          v52 = 4;
          v31 = v26;
          v55 = 2;
          v35 = 0x1000000LL;
          v60 = 8;
          tlgWriteTransfer_EtwWriteTransfer(
            (__int64)&dword_140E084F0,
            (unsigned __int8 *)word_14004F832,
            0LL,
            0LL,
            0xAu,
            &v38);
        }
        v2 = SpinLock;
      }
      else
      {
        *(_DWORD *)(v7 + 40) = v12 + 1;
        SpinLock = (PKSPIN_LOCK)SSHSupportAllocateNonPaged();
        v2 = SpinLock;
        Pool2 = ExAllocatePool2(0x100uLL);
        v4 = (ULONG_PTR *)Pool2;
        if ( v2 && Pool2 )
        {
          v2[38] = Pool2;
          *(_QWORD *)(Pool2 + 112) = v2;
          *v2 = 0LL;
          *((_DWORD *)v2 + 4) = 1;
          *((_DWORD *)v2 + 3) = 1;
          if ( *((_BYTE *)a1 + 88) )
            *((_DWORD *)v2 + 2) |= 4u;
          v2[37] = a1[10];
          *(_QWORD *)(Pool2 + 8) = Pool2;
          *(_QWORD *)Pool2 = Pool2;
          *(_QWORD *)(Pool2 + 24) = Pool2 + 16;
          *(_QWORD *)(Pool2 + 16) = Pool2 + 16;
          *(_QWORD *)(Pool2 + 32) = v7;
          *(_DWORD *)(Pool2 + 40) = *((_DWORD *)a1 + 2);
          *(_QWORD *)(Pool2 + 96) = a1[8];
          *(_QWORD *)(Pool2 + 104) = a1[9];
          *(_OWORD *)(Pool2 + 48) = *((_OWORD *)a1 + 1);
          *(_OWORD *)(Pool2 + 64) = *((_OWORD *)a1 + 2);
          *(_OWORD *)(Pool2 + 80) = *((_OWORD *)a1 + 3);
          if ( !*(_DWORD *)(v7 + 44)
            || (Buffer[1] = 0,
                Buffer[0] = 1,
                v37 = v2,
                RtlInsertElementGenericTableAvl((PRTL_AVL_TABLE)(v7 + 48), Buffer, 0x10u, NewElement)) )
          {
            v16 = v7 + 152;
            v17 = *(ULONG_PTR ***)(v16 + 8);
            if ( *v17 != (ULONG_PTR *)v16 )
              goto LABEL_31;
            *v4 = v16;
            v4[1] = (ULONG_PTR)v17;
            *v17 = v4;
            *(_QWORD *)(v16 + 8) = v4;
            SSHSupportReleasePushLockExclusive((volatile signed __int64 *)v8);
            v18 = KeAbPreAcquire((__int64)v6, 0LL);
            v19 = v18;
            if ( _interlockedbittestandset64((volatile signed __int32 *)v6, 0LL) )
              ExfAcquirePushLockExclusiveEx(v6, (__int64)v18, (__int64)v6);
            v11 = 0;
            if ( v19 )
              *((_BYTE *)v19 + 10) = 1;
            v20 = v4 + 2;
            v21 = (ULONG_PTR **)v6[5];
            if ( *v21 != v6 + 4 )
LABEL_31:
              __fastfail(3u);
            v22 = SpinLock;
            v20[1] = (ULONG_PTR)v21;
            *v20 = (ULONG_PTR)(v6 + 4);
            *v21 = v20;
            v6[5] = (ULONG_PTR)v20;
            *((_DWORD *)v22 + 2) ^= ((unsigned __int8)*((_DWORD *)v22 + 2) ^ (unsigned __int8)(2 * *((_DWORD *)v6 + 7))) & 2;
            if ( (*((_DWORD *)v6 + 7) & 1) != 0 )
              v22[4] = SSHSupportQueryInterruptTime();
            if ( (*((_DWORD *)v6 + 7) & 2) != 0 )
              SshpReferenceBlocker(v22, 1);
            SSHSupportReleasePushLockExclusive((volatile signed __int64 *)v6);
            SshpTracingWriteBlockerStateRundown(&SLEEPSTUDY_EVT_BLOCKER_CREATED, v22);
            v23 = v30;
            a1[10] = 0LL;
            a1[8] = 0LL;
            a1[9] = 0LL;
            *((_OWORD *)a1 + 3) = 0LL;
            *v23 = v22;
            goto LABEL_27;
          }
        }
      }
      v11 = -1073741670;
    }
    if ( v7 )
      SSHSupportReleasePushLockExclusive((volatile signed __int64 *)(v7 + 16));
    v3 = v28;
  }
  else
  {
    v11 = -1073741811;
  }
  if ( v2 )
    CmpFreeTransientPoolWithTag(v2, v3);
  if ( v4 )
    CmpFreeTransientPoolWithTag(v4, v3);
  if ( v11 >= 0 )
LABEL_27:
    SleepstudyHelperDestroyBlockerBuilder(a1);
  return (unsigned int)v11;
}
