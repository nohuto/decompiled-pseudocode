/*
 * XREFs of SleepstudyHelperBuildBlocker @ 0x140A18F20
 * Callers:
 *     SleepstudyHelper_RegisterPdoWithParentGuid @ 0x140767BC0 (SleepstudyHelper_RegisterPdoWithParentGuid.c)
 *     SleepstudyHelper_RegisterPdoWithParentHandle @ 0x140767C90 (SleepstudyHelper_RegisterPdoWithParentHandle.c)
 *     PopPowerRequestStatsCreateSleepstudyBlocker @ 0x140A18E00 (PopPowerRequestStatsCreateSleepstudyBlocker.c)
 *     SleepstudyHelper_RegisterComponentEx @ 0x140AC9430 (SleepstudyHelper_RegisterComponentEx.c)
 *     SleepstudyHelper_RegisterPdoWithParentPdo @ 0x140AC9510 (SleepstudyHelper_RegisterPdoWithParentPdo.c)
 *     PopUserShutdownInitializeSleepstudyDiagnostics @ 0x140C30C88 (PopUserShutdownInitializeSleepstudyDiagnostics.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1402B92F0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     RtlInsertElementGenericTableAvl @ 0x1403E40F0 (RtlInsertElementGenericTableAvl.c)
 *     _tlgKeywordOn @ 0x14041A970 (_tlgKeywordOn.c)
 *     CmpFreeTransientPoolWithTag @ 0x140438B90 (CmpFreeTransientPoolWithTag.c)
 *     SshpReferenceBlocker @ 0x14048115C (SshpReferenceBlocker.c)
 *     SshpTracingWriteBlockerStateRundown @ 0x14048173C (SshpTracingWriteBlockerStateRundown.c)
 *     SSHSupportReleasePushLockExclusive @ 0x1404843BC (SSHSupportReleasePushLockExclusive.c)
 *     SSHSupportIsPlatformAoAc @ 0x14048B408 (SSHSupportIsPlatformAoAc.c)
 *     SSHSupportAllocateNonPaged @ 0x1404965F4 (SSHSupportAllocateNonPaged.c)
 *     SSHSupportQueryInterruptTime @ 0x1404ABEF8 (SSHSupportQueryInterruptTime.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     SleepstudyHelperDestroyBlockerBuilder @ 0x140A192D0 (SleepstudyHelperDestroyBlockerBuilder.c)
 *     SshpCacheLookupBlocker @ 0x140A1936C (SshpCacheLookupBlocker.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 */

__int64 __fastcall SleepstudyHelperBuildBlocker(int *a1, PKSPIN_LOCK *a2)
{
  PKSPIN_LOCK v2; // rbx
  ULONG v3; // r15d
  ULONG_PTR *v4; // rsi
  ULONG_PTR *v6; // r15
  __int64 v7; // r13
  ULONG v8; // ebx
  unsigned __int64 *v9; // r12
  char *v10; // rax
  char *v11; // rdi
  int v12; // edi
  unsigned int v13; // eax
  __int64 Pool2; // rax
  PKSPIN_LOCK v16; // rbx
  ULONG_PTR v17; // r13
  ULONG_PTR **v18; // rax
  char *v19; // rax
  char *v20; // rbx
  ULONG_PTR *v21; // rsi
  ULONG_PTR **v22; // rcx
  PKSPIN_LOCK v23; // rbx
  PKSPIN_LOCK *v24; // rax
  __int64 v25; // r8
  int v26; // r9d
  int v27; // r10d
  BOOLEAN NewElement[4]; // [rsp+30h] [rbp-D0h] BYREF
  ULONG v29; // [rsp+34h] [rbp-CCh]
  PKSPIN_LOCK SpinLock; // [rsp+38h] [rbp-C8h] BYREF
  PKSPIN_LOCK *v31; // [rsp+40h] [rbp-C0h] BYREF
  int v32; // [rsp+48h] [rbp-B8h] BYREF
  int v33; // [rsp+4Ch] [rbp-B4h] BYREF
  int v34; // [rsp+50h] [rbp-B0h] BYREF
  int v35; // [rsp+54h] [rbp-ACh] BYREF
  __int64 v36; // [rsp+58h] [rbp-A8h] BYREF
  _DWORD Buffer[2]; // [rsp+60h] [rbp-A0h] BYREF
  PKSPIN_LOCK v38; // [rsp+68h] [rbp-98h]
  struct _EVENT_DATA_DESCRIPTOR v39; // [rsp+70h] [rbp-90h] BYREF
  int *v40; // [rsp+90h] [rbp-70h]
  int v41; // [rsp+98h] [rbp-68h]
  int v42; // [rsp+9Ch] [rbp-64h]
  int *v43; // [rsp+A0h] [rbp-60h]
  int v44; // [rsp+A8h] [rbp-58h]
  int v45; // [rsp+ACh] [rbp-54h]
  int *v46; // [rsp+B0h] [rbp-50h]
  int v47; // [rsp+B8h] [rbp-48h]
  int v48; // [rsp+BCh] [rbp-44h]
  int *v49; // [rsp+C0h] [rbp-40h]
  int v50; // [rsp+C8h] [rbp-38h]
  int v51; // [rsp+CCh] [rbp-34h]
  PKSPIN_LOCK **v52; // [rsp+D0h] [rbp-30h]
  int v53; // [rsp+D8h] [rbp-28h]
  int v54; // [rsp+DCh] [rbp-24h]
  _DWORD *v55; // [rsp+E0h] [rbp-20h]
  int v56; // [rsp+E8h] [rbp-18h]
  int v57; // [rsp+ECh] [rbp-14h]
  __int64 v58; // [rsp+F0h] [rbp-10h]
  _DWORD v59[2]; // [rsp+F8h] [rbp-8h] BYREF
  __int64 *v60; // [rsp+100h] [rbp+0h]
  int v61; // [rsp+108h] [rbp+8h]
  int v62; // [rsp+10Ch] [rbp+Ch]

  v2 = 0LL;
  v31 = a2;
  v3 = 0;
  SpinLock = 0LL;
  v4 = 0LL;
  if ( a1 && a2 )
  {
    v6 = &SshpBlockerCollections + 6 * a1[2];
    if ( *((_BYTE *)v6 + 24) && !SSHSupportIsPlatformAoAc() )
      return (unsigned int)-1073741637;
    v7 = *(_QWORD *)a1;
    v8 = *(_DWORD *)(*(_QWORD *)a1 + 24LL);
    v9 = (unsigned __int64 *)(*(_QWORD *)a1 + 16LL);
    v29 = v8;
    v10 = (char *)KeAbPreAcquire((__int64)v9, 0LL);
    v11 = v10;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v9, 0LL) )
      ExfAcquirePushLockExclusiveEx(v9, v10, (__int64)v9);
    if ( v11 )
      v11[10] = 1;
    v12 = SshpCacheLookupBlocker(v7, a1, &SpinLock);
    if ( v12 >= 0 )
    {
      v16 = SpinLock;
      SshpReferenceBlocker(SpinLock, 0);
      *v31 = v16;
      v2 = 0LL;
    }
    else
    {
      if ( _InterlockedIncrement64(&SshpGlobalBlockerCount) > (unsigned int)SleepstudyHelperBlockerGlobalLimit
        || (v13 = *(_DWORD *)(v7 + 40), v13 >= SleepstudyHelperBlockerLibraryLimit) )
      {
        _InterlockedDecrement64(&SshpGlobalBlockerCount);
        if ( SshpTelemetryHandleRegistered
          && (unsigned int)dword_140E08560 > 5
          && tlgKeywordOn((__int64)&dword_140E08560, 0x400000000000LL) )
        {
          v42 = 0;
          v45 = 0;
          v40 = &v32;
          v41 = 4;
          v43 = &v33;
          v33 = v26;
          v44 = 4;
          if ( v25 > 0xFFFFFFFFLL )
            LODWORD(v25) = -1;
          v47 = 4;
          v48 = 0;
          v51 = 0;
          v54 = 0;
          v57 = 0;
          v59[1] = 0;
          v62 = 0;
          v46 = &v34;
          v35 = *(_DWORD *)(v7 + 40);
          v49 = &v35;
          LODWORD(v31) = *(_DWORD *)(v7 + 24);
          v52 = &v31;
          v55 = v59;
          v58 = *((_QWORD *)a1 + 7);
          v59[0] = *((unsigned __int16 *)a1 + 24);
          v60 = &v36;
          v34 = v25;
          v50 = 4;
          v53 = 4;
          v32 = v27;
          v56 = 2;
          v36 = 0x1000000LL;
          v61 = 8;
          tlgWriteTransfer_EtwWriteTransfer(
            (__int64)&dword_140E08560,
            (unsigned __int8 *)&dword_14005032C,
            0LL,
            0LL,
            0xAu,
            &v39);
        }
        v2 = SpinLock;
      }
      else
      {
        *(_DWORD *)(v7 + 40) = v13 + 1;
        SpinLock = (PKSPIN_LOCK)SSHSupportAllocateNonPaged(0x138uLL, v8);
        v2 = SpinLock;
        Pool2 = ExAllocatePool2(0x100uLL, 0x78uLL, v29);
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
          v2[37] = *((_QWORD *)a1 + 10);
          *(_QWORD *)(Pool2 + 8) = Pool2;
          *(_QWORD *)Pool2 = Pool2;
          *(_QWORD *)(Pool2 + 24) = Pool2 + 16;
          *(_QWORD *)(Pool2 + 16) = Pool2 + 16;
          *(_QWORD *)(Pool2 + 32) = v7;
          *(_DWORD *)(Pool2 + 40) = a1[2];
          *(_QWORD *)(Pool2 + 96) = *((_QWORD *)a1 + 8);
          *(_QWORD *)(Pool2 + 104) = *((_QWORD *)a1 + 9);
          *(_OWORD *)(Pool2 + 48) = *((_OWORD *)a1 + 1);
          *(_OWORD *)(Pool2 + 64) = *((_OWORD *)a1 + 2);
          *(_OWORD *)(Pool2 + 80) = *((_OWORD *)a1 + 3);
          if ( !*(_DWORD *)(v7 + 44)
            || (Buffer[1] = 0,
                Buffer[0] = 1,
                v38 = v2,
                RtlInsertElementGenericTableAvl((PRTL_AVL_TABLE)(v7 + 48), Buffer, 0x10u, NewElement)) )
          {
            v17 = v7 + 152;
            v18 = *(ULONG_PTR ***)(v17 + 8);
            if ( *v18 != (ULONG_PTR *)v17 )
              goto LABEL_31;
            *v4 = v17;
            v4[1] = (ULONG_PTR)v18;
            *v18 = v4;
            *(_QWORD *)(v17 + 8) = v4;
            SSHSupportReleasePushLockExclusive((volatile signed __int64 *)v9);
            v19 = (char *)KeAbPreAcquire((__int64)v6, 0LL);
            v20 = v19;
            if ( _interlockedbittestandset64((volatile signed __int32 *)v6, 0LL) )
              ExfAcquirePushLockExclusiveEx(v6, v19, (__int64)v6);
            v12 = 0;
            if ( v20 )
              v20[10] = 1;
            v21 = v4 + 2;
            v22 = (ULONG_PTR **)v6[5];
            if ( *v22 != v6 + 4 )
LABEL_31:
              __fastfail(3u);
            v23 = SpinLock;
            v21[1] = (ULONG_PTR)v22;
            *v21 = (ULONG_PTR)(v6 + 4);
            *v22 = v21;
            v6[5] = (ULONG_PTR)v21;
            *((_DWORD *)v23 + 2) ^= ((unsigned __int8)*((_DWORD *)v23 + 2) ^ (unsigned __int8)(2 * *((_DWORD *)v6 + 7))) & 2;
            if ( (*((_DWORD *)v6 + 7) & 1) != 0 )
              v23[4] = SSHSupportQueryInterruptTime();
            if ( (*((_DWORD *)v6 + 7) & 2) != 0 )
              SshpReferenceBlocker(v23, 1);
            SSHSupportReleasePushLockExclusive((volatile signed __int64 *)v6);
            SshpTracingWriteBlockerStateRundown(&SLEEPSTUDY_EVT_BLOCKER_CREATED, v23);
            v24 = v31;
            *((_QWORD *)a1 + 10) = 0LL;
            *((_QWORD *)a1 + 8) = 0LL;
            *((_QWORD *)a1 + 9) = 0LL;
            *((_OWORD *)a1 + 3) = 0LL;
            *v24 = v23;
            goto LABEL_27;
          }
        }
      }
      v12 = -1073741670;
    }
    if ( v7 )
      SSHSupportReleasePushLockExclusive((volatile signed __int64 *)(v7 + 16));
    v3 = v29;
  }
  else
  {
    v12 = -1073741811;
  }
  if ( v2 )
    CmpFreeTransientPoolWithTag(v2, v3);
  if ( v4 )
    CmpFreeTransientPoolWithTag(v4, v3);
  if ( v12 >= 0 )
LABEL_27:
    SleepstudyHelperDestroyBlockerBuilder(a1);
  return (unsigned int)v12;
}
