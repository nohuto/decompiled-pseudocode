/*
 * XREFs of VfDeadlockReleaseResource @ 0x140BA95AC
 * Callers:
 *     ViDeadlockExReleaseFastMutexUnsafe_Entry @ 0x140B9B4D0 (ViDeadlockExReleaseFastMutexUnsafe_Entry.c)
 *     ViDeadlockExReleaseFastMutex_Entry @ 0x140B9B500 (ViDeadlockExReleaseFastMutex_Entry.c)
 *     ViDeadlockKeReleaseInStackQueuedSpinLockForDpc_Entry @ 0x140B9B780 (ViDeadlockKeReleaseInStackQueuedSpinLockForDpc_Entry.c)
 *     ViDeadlockKeReleaseMutant_Entry @ 0x140B9B7C0 (ViDeadlockKeReleaseMutant_Entry.c)
 *     ViDeadlockKeReleaseMutex_Entry @ 0x140B9B7F0 (ViDeadlockKeReleaseMutex_Entry.c)
 *     ViDeadlockKeReleaseSpinLockFromDpcLevel_Entry @ 0x140B9B820 (ViDeadlockKeReleaseSpinLockFromDpcLevel_Entry.c)
 *     ViDeadlockKeReleaseSpinLock_Entry @ 0x140BA9580 (ViDeadlockKeReleaseSpinLock_Entry.c)
 * Callees:
 *     RtlCaptureStackBackTrace @ 0x140231C20 (RtlCaptureStackBackTrace.c)
 *     DbgPrintEx @ 0x140275B40 (DbgPrintEx.c)
 *     VfReportIssueWithOptions @ 0x1406109F4 (VfReportIssueWithOptions.c)
 *     ViLowerIrql @ 0x140612828 (ViLowerIrql.c)
 *     ViRaiseIrqlToDpcLevel @ 0x140612860 (ViRaiseIrqlToDpcLevel.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     ViDeadlockDetectionLock @ 0x140B9B1D4 (ViDeadlockDetectionLock.c)
 *     ViDeadlockDetectionUnlock @ 0x140B9B20C (ViDeadlockDetectionUnlock.c)
 *     ViDeadlockFree @ 0x140B9B680 (ViDeadlockFree.c)
 *     ViDeadlockPreprocessOptions @ 0x140B9BBC4 (ViDeadlockPreprocessOptions.c)
 *     ViDeadlockRemoveThread @ 0x140B9BF9C (ViDeadlockRemoveThread.c)
 *     ViDeadlockSearchResource @ 0x140B9C0E0 (ViDeadlockSearchResource.c)
 *     ViDeadlockSearchThread @ 0x140B9C1BC (ViDeadlockSearchThread.c)
 *     ViIsThreadInsidePagingCodePaths @ 0x140B9C2E4 (ViIsThreadInsidePagingCodePaths.c)
 *     ViDeadlockCanProceed @ 0x140BA9B94 (ViDeadlockCanProceed.c)
 */

void __fastcall VfDeadlockReleaseResource(const void *a1, int a2, unsigned __int64 a3, void *a4)
{
  ULONG_PTR v4; // rdi
  int v8; // r12d
  __int64 *v9; // rbp
  __int64 *v10; // r14
  USHORT v11; // ax
  unsigned int v12; // ecx
  __int64 v13; // rax
  unsigned __int8 v14; // si
  __int64 v15; // rbx
  int *v16; // rax
  int *v17; // rsi
  __int64 v18; // rax
  __int16 v19; // cx
  _QWORD *v20; // rax
  _QWORD *v21; // rax
  __int64 v22; // r12
  __int64 *v23; // rdi
  __int16 v24; // cx
  _DWORD *v25; // rax
  unsigned int v26; // eax
  __int64 v27; // rcx
  __int64 **v28; // rcx
  __int64 *v29; // rax
  _QWORD *v30; // rcx
  _QWORD *v31; // rbx
  unsigned __int8 v32; // [rsp+40h] [rbp-98h]
  PVOID Entry; // [rsp+48h] [rbp-90h] BYREF
  PVOID BackTrace[2]; // [rsp+50h] [rbp-88h] BYREF
  __int128 v35; // [rsp+60h] [rbp-78h]
  __int128 v36; // [rsp+70h] [rbp-68h]
  __int128 v37; // [rsp+80h] [rbp-58h]

  v4 = a2;
  Entry = 0LL;
  memset_0(BackTrace, 0, 0x40uLL);
  v8 = 0;
  if ( !(unsigned int)ViDeadlockCanProceed(a1)
    || ViIsThreadInsidePagingCodePaths()
    || *((_DWORD *)ViDeadlockGlobals + 8196)
    || *((int *)ViDeadlockGlobals + 8282) > 1024 )
  {
    return;
  }
  v9 = 0LL;
  v10 = 0LL;
  v11 = RtlCaptureStackBackTrace(2u, 8u, BackTrace, 0LL);
  v12 = v11;
  if ( !v11 )
    BackTrace[0] = a4;
  v13 = (unsigned int)v11 + 1;
  if ( (_WORD)v12 )
    v13 = v12;
  if ( (unsigned int)v13 < 8 )
    BackTrace[v13] = 0LL;
  v32 = ViRaiseIrqlToDpcLevel();
  v14 = v32;
  ViDeadlockDetectionLock(1);
  v15 = MEMORY[0xFFFFF78000000320];
  if ( ViDeadlockDetectionEnabled )
  {
    v16 = (int *)ViDeadlockSearchResource((unsigned __int64)a1, &Entry);
    v17 = v16;
    if ( !v16 )
    {
LABEL_59:
      v14 = v32;
      goto LABEL_60;
    }
    v18 = *v16;
    if ( (_DWORD)v18 == (_DWORD)v4 )
      goto LABEL_17;
    if ( (_DWORD)v18 == 7 )
    {
      if ( (unsigned int)(v4 - 5) <= 1 )
      {
        *v17 = v4;
        LODWORD(v18) = v4;
        goto LABEL_17;
      }
    }
    else if ( (_DWORD)v18 == 1 && (_DWORD)v4 == 2 )
    {
      if ( *((_WORD *)v17 + 3) > 1u )
        *((_WORD *)v17 + 3) = 1;
LABEL_17:
      v19 = *((_WORD *)v17 + 3);
      if ( v19 )
      {
        v10 = (__int64 *)*((_QWORD *)v17 + 2);
        v22 = *v10;
        if ( (unsigned int)(v18 - 5) <= 1 )
          v23 = (__int64 *)v10[1];
        else
          v23 = (__int64 *)v10[2];
        v24 = v19 - 1;
        *((_WORD *)v17 + 3) = v24;
        if ( v24 )
        {
          v8 = 0;
        }
        else
        {
          v25 = ViDeadlockGlobals;
          *((_QWORD *)v17 + 2) = 0LL;
          ++v25[8210];
          if ( (int *)v23[7] == v17 )
          {
            *((_DWORD *)v23 + 18) &= ~1u;
            v9 = v23;
          }
          else
          {
            ++v25[8208];
            if ( (ViDeadlockResourceTypeInfo[*(int *)v23[7]] & 4) == 0 && (ViDeadlockResourceTypeInfo[*v17] & 4) == 0 )
            {
              DbgPrintEx(0x5Du, 0, "Deadlock detection: Must release resources in reverse-order\n");
              DbgPrintEx(
                0x5Du,
                0,
                "Resource %p acquired before resource %p -- \nCurrent thread (%p) is trying to release %p first\n",
                a1,
                *(const void **)(v23[7] + 8),
                v10,
                a1);
              ViDeadlockPreprocessOptions(
                byte_140E0EA88,
                "Releasing two locks in reverse order of their acquire.",
                4099LL,
                (__int64)a1,
                *(_QWORD *)(v23[7] + 8),
                (__int64)v10);
              VfReportIssueWithOptions(
                0xC4u,
                0x1003uLL,
                (ULONG_PTR)a1,
                *(_QWORD *)(v23[7] + 8),
                (ULONG_PTR)v10,
                byte_140E0EA88);
            }
            while ( v23 )
            {
              if ( (int *)v23[7] == v17 )
              {
                v9 = v23;
                v26 = v23[9] & 0xFFFFFFFE;
                *((_DWORD *)v23 + 18) = v26;
                if ( (v26 & 4) == 0 )
                  ++*((_DWORD *)ViDeadlockGlobals + 8209);
                *((_DWORD *)v23 + 18) |= 4u;
                break;
              }
              v23 = (__int64 *)*v23;
            }
          }
          if ( (unsigned int)(*v17 - 5) <= 1 )
          {
            v28 = (__int64 **)v10[1];
            if ( v28 )
            {
              do
              {
                if ( ((_DWORD)v28[9] & 1) != 0 && v28[8] == v10 )
                  break;
                v29 = *v28;
                v10[1] = (__int64)*v28;
                v28 = (__int64 **)v29;
              }
              while ( v29 );
            }
          }
          else
          {
            while ( 1 )
            {
              v27 = v10[2];
              if ( !v27 || (*(_DWORD *)(v27 + 72) & 1) != 0 && *(__int64 **)(v27 + 64) == v10 )
                break;
              v10[2] = *(_QWORD *)v27;
            }
          }
          if ( !v9 )
            goto LABEL_57;
          v9[8] = 0LL;
          --*((_DWORD *)v10 + 10);
          if ( v22 != a3 )
            *((_DWORD *)v9 + 18) |= 4u;
          if ( *((_DWORD *)v10 + 10) )
          {
LABEL_57:
            v8 = 0;
          }
          else
          {
            v8 = 1;
            ViDeadlockRemoveThread((ULONG_PTR)v10, 0);
          }
        }
      }
      else if ( !*((_DWORD *)ViDeadlockGlobals + 8196) && *((int *)ViDeadlockGlobals + 8282) <= 1024 )
      {
        v20 = ViDeadlockSearchThread(a3);
        ViDeadlockPreprocessOptions(
          &dword_140E0EA94,
          "Releasing lock 0x%p that is not owned by the current thread.",
          4103LL,
          (__int64)a1,
          (__int64)v17,
          (__int64)v20);
        v21 = ViDeadlockSearchThread(a3);
        VfReportIssueWithOptions(0xC4u, 0x1007uLL, (ULONG_PTR)a1, (ULONG_PTR)v17, (ULONG_PTR)v21, &dword_140E0EA94);
      }
      goto LABEL_58;
    }
    ViDeadlockPreprocessOptions(
      byte_140E0EA90,
      "Releasing lock 0x%p using mismatched API for this lock type.",
      4105LL,
      (__int64)a1,
      v18,
      v4);
    VfReportIssueWithOptions(0xC4u, 0x1009uLL, (ULONG_PTR)a1, *v17, v4, byte_140E0EA90);
LABEL_58:
    *(_OWORD *)(v17 + 46) = *(_OWORD *)BackTrace;
    *(_OWORD *)(v17 + 50) = v35;
    *(_OWORD *)(v17 + 54) = v36;
    *(_OWORD *)(v17 + 58) = v37;
    goto LABEL_59;
  }
LABEL_60:
  if ( MEMORY[0xFFFFF78000000320] - v15 > *((_QWORD *)ViDeadlockGlobals + 1) )
    *((_QWORD *)ViDeadlockGlobals + 1) = MEMORY[0xFFFFF78000000320] - v15;
  ViDeadlockDetectionUnlock(1);
  ViLowerIrql(v14);
  v30 = Entry;
  if ( Entry )
  {
    do
    {
      v31 = (_QWORD *)*v30;
      ViDeadlockFree(v30, 2);
      v30 = v31;
    }
    while ( v31 );
  }
  if ( v8 )
    ViDeadlockFree(v10, 3);
}
