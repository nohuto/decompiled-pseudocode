/*
 * XREFs of CmpCallbackFillObjectContext @ 0x14084CB10
 * Callers:
 *     CmpCallCallBacksEx @ 0x14084C050 (CmpCallCallBacksEx.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x14029B5A0 (ExfAcquirePushLockSharedEx.c)
 *     KeLeaveCriticalRegionThread @ 0x14029B9C0 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     ExfReleasePushLock @ 0x1402BCA80 (ExfReleasePushLock.c)
 *     CmpUnlockContextList @ 0x140949BA0 (CmpUnlockContextList.c)
 *     CmpGetCallbackObjectContext @ 0x140978280 (CmpGetCallbackObjectContext.c)
 *     CmpLockContextListShared @ 0x14099BE90 (CmpLockContextListShared.c)
 */

__int64 __fastcall CmpCallbackFillObjectContext(int a1, __int64 *a2, _QWORD *a3)
{
  __int64 result; // rax
  __int64 v6; // rbp
  __int64 v7; // rbp
  __int64 v8; // rbp
  _QWORD *v9; // r14
  struct _KTHREAD *CurrentThread; // rax
  __int64 *v11; // r15
  _QWORD *i; // rax
  __int64 v13; // rcx
  __int64 v14; // rbp
  __int64 v15; // rbp
  signed __int64 v16; // rdx
  ULONG_PTR v17; // rtt
  _QWORD *v18; // r14
  struct _KTHREAD *v19; // rax
  __int64 *v20; // r15
  _QWORD *j; // rax
  __int64 v22; // rcx
  __int64 v23; // rbp
  _QWORD *v24; // r14
  struct _KTHREAD *v25; // rax
  __int64 *v26; // r15
  _QWORD *k; // rax
  __int64 v28; // rcx
  _QWORD *v29; // r14
  struct _KTHREAD *v30; // rax
  __int64 *v31; // r15
  _QWORD *m; // rax
  __int64 v33; // rcx
  signed __int64 v34; // rdx
  ULONG_PTR v35; // rtt
  _QWORD *v36; // r14
  struct _KTHREAD *v37; // rax
  __int64 *v38; // r15
  _QWORD *n; // rax
  __int64 v40; // rcx
  signed __int64 v41; // rdx
  ULONG_PTR v42; // rtt
  signed __int64 v43; // rdx
  ULONG_PTR v44; // rtt
  signed __int64 v45; // rdx
  ULONG_PTR v46; // rtt
  _QWORD *v47; // r14
  struct _KTHREAD *v48; // rax
  __int64 *v49; // r15
  _QWORD *v50; // rax
  __int64 v51; // rcx
  __int64 v52; // rdi
  _QWORD *v53; // r14
  _QWORD *v54; // rax
  __int64 v55; // rcx
  _QWORD *v56; // r14
  struct _KTHREAD *v57; // rax
  __int64 *v58; // r15
  _QWORD *v59; // rax
  __int64 v60; // rcx
  signed __int64 v61; // rdx
  ULONG_PTR v62; // rtt
  signed __int64 v63; // rdx
  ULONG_PTR v64; // rtt
  _QWORD *v65; // r14
  __int64 v66; // rcx

  switch ( a1 )
  {
    case 50:
LABEL_8:
      result = *a2;
      v6 = 0LL;
      if ( *a2 )
      {
        if ( *(_DWORD *)result == 1803104306 )
        {
          v9 = (_QWORD *)(result + 72);
          if ( (_QWORD *)*v9 != v9 )
          {
            CurrentThread = KeGetCurrentThread();
            --CurrentThread->KernelApcDisable;
            v11 = KeAbPreAcquire((__int64)&CmpContextListLock, 0LL);
            if ( _InterlockedCompareExchange64((volatile signed __int64 *)&CmpContextListLock, 17LL, 0LL) )
              ExfAcquirePushLockSharedEx(
                (signed __int64 *)&CmpContextListLock,
                0,
                v11,
                (unsigned __int64)&CmpContextListLock);
            if ( v11 )
              *((_BYTE *)v11 + 10) = 1;
            for ( i = (_QWORD *)*v9; i != v9; i = (_QWORD *)*i )
            {
              v13 = i[4];
              if ( v13 == *a3 )
              {
                v6 = i[7];
                break;
              }
              if ( v13 < *a3 )
                break;
            }
            _m_prefetchw(&CmpContextListLock);
            v16 = CmpContextListLock - 16;
            if ( (CmpContextListLock & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
              v16 = 0LL;
            if ( (CmpContextListLock & 2) != 0
              || (v17 = CmpContextListLock,
                  v17 != _InterlockedCompareExchange64(
                           (volatile signed __int64 *)&CmpContextListLock,
                           v16,
                           CmpContextListLock)) )
            {
              ExfReleasePushLock(&CmpContextListLock);
            }
            KeAbPostRelease((ULONG_PTR)&CmpContextListLock);
            result = KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
          }
        }
      }
      a2[5] = v6;
      break;
    case 28:
LABEL_11:
      result = a2[1];
      v7 = 0LL;
      if ( result )
      {
        if ( *(_DWORD *)result == 1803104306 )
        {
          v18 = (_QWORD *)(result + 72);
          if ( (_QWORD *)*v18 != v18 )
          {
            v19 = KeGetCurrentThread();
            --v19->KernelApcDisable;
            v20 = KeAbPreAcquire((__int64)&CmpContextListLock, 0LL);
            if ( _InterlockedCompareExchange64((volatile signed __int64 *)&CmpContextListLock, 17LL, 0LL) )
              ExfAcquirePushLockSharedEx(
                (signed __int64 *)&CmpContextListLock,
                0,
                v20,
                (unsigned __int64)&CmpContextListLock);
            if ( v20 )
              *((_BYTE *)v20 + 10) = 1;
            for ( j = (_QWORD *)*v18; j != v18; j = (_QWORD *)*j )
            {
              v22 = j[4];
              if ( v22 == *a3 )
              {
                v7 = j[7];
                break;
              }
              if ( v22 < *a3 )
                break;
            }
            _m_prefetchw(&CmpContextListLock);
            v34 = CmpContextListLock - 16;
            if ( (CmpContextListLock & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
              v34 = 0LL;
            if ( (CmpContextListLock & 2) != 0
              || (v35 = CmpContextListLock,
                  v35 != _InterlockedCompareExchange64(
                           (volatile signed __int64 *)&CmpContextListLock,
                           v34,
                           CmpContextListLock)) )
            {
              ExfReleasePushLock(&CmpContextListLock);
            }
            KeAbPostRelease((ULONG_PTR)&CmpContextListLock);
            result = KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
          }
        }
      }
      a2[11] = v7;
      break;
    case 8:
      result = *a2;
      v8 = 0LL;
      if ( *a2 )
      {
        if ( *(_DWORD *)result == 1803104306 )
        {
          v24 = (_QWORD *)(result + 72);
          if ( (_QWORD *)*v24 != v24 )
          {
            v25 = KeGetCurrentThread();
            --v25->KernelApcDisable;
            v26 = KeAbPreAcquire((__int64)&CmpContextListLock, 0LL);
            if ( _InterlockedCompareExchange64((volatile signed __int64 *)&CmpContextListLock, 17LL, 0LL) )
              ExfAcquirePushLockSharedEx(
                (signed __int64 *)&CmpContextListLock,
                0,
                v26,
                (unsigned __int64)&CmpContextListLock);
            if ( v26 )
              *((_BYTE *)v26 + 10) = 1;
            for ( k = (_QWORD *)*v24; k != v24; k = (_QWORD *)*k )
            {
              v28 = k[4];
              if ( v28 == *a3 )
              {
                v8 = k[7];
                break;
              }
              if ( v28 < *a3 )
                break;
            }
            _m_prefetchw(&CmpContextListLock);
            v41 = CmpContextListLock - 16;
            if ( (CmpContextListLock & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
              v41 = 0LL;
            if ( (CmpContextListLock & 2) != 0
              || (v42 = CmpContextListLock,
                  v42 != _InterlockedCompareExchange64(
                           (volatile signed __int64 *)&CmpContextListLock,
                           v41,
                           CmpContextListLock)) )
            {
              ExfReleasePushLock(&CmpContextListLock);
            }
            KeAbPostRelease((ULONG_PTR)&CmpContextListLock);
            result = KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
          }
        }
      }
      a2[7] = v8;
      break;
    case 7:
      result = *a2;
      v14 = 0LL;
      if ( *a2 )
      {
        if ( *(_DWORD *)result == 1803104306 )
        {
          v29 = (_QWORD *)(result + 72);
          if ( (_QWORD *)*v29 != v29 )
          {
            v30 = KeGetCurrentThread();
            --v30->KernelApcDisable;
            v31 = KeAbPreAcquire((__int64)&CmpContextListLock, 0LL);
            if ( _InterlockedCompareExchange64((volatile signed __int64 *)&CmpContextListLock, 17LL, 0LL) )
              ExfAcquirePushLockSharedEx(
                (signed __int64 *)&CmpContextListLock,
                0,
                v31,
                (unsigned __int64)&CmpContextListLock);
            if ( v31 )
              *((_BYTE *)v31 + 10) = 1;
            for ( m = (_QWORD *)*v29; m != v29; m = (_QWORD *)*m )
            {
              v33 = m[4];
              if ( v33 == *a3 )
              {
                v14 = m[7];
                break;
              }
              if ( v33 < *a3 )
                break;
            }
            _m_prefetchw(&CmpContextListLock);
            v43 = CmpContextListLock - 16;
            if ( (CmpContextListLock & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
              v43 = 0LL;
            if ( (CmpContextListLock & 2) != 0
              || (v44 = CmpContextListLock,
                  v44 != _InterlockedCompareExchange64(
                           (volatile signed __int64 *)&CmpContextListLock,
                           v43,
                           CmpContextListLock)) )
            {
LABEL_150:
              ExfReleasePushLock(&CmpContextListLock);
            }
LABEL_99:
            KeAbPostRelease((ULONG_PTR)&CmpContextListLock);
            result = KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
          }
        }
      }
LABEL_27:
      a2[6] = v14;
      break;
    case 14:
      result = *a2;
      v15 = 0LL;
      if ( *a2 )
      {
        if ( *(_DWORD *)result == 1803104306 )
        {
          v36 = (_QWORD *)(result + 72);
          if ( (_QWORD *)*v36 != v36 )
          {
            v37 = KeGetCurrentThread();
            --v37->KernelApcDisable;
            v38 = KeAbPreAcquire((__int64)&CmpContextListLock, 0LL);
            if ( _InterlockedCompareExchange64((volatile signed __int64 *)&CmpContextListLock, 17LL, 0LL) )
              ExfAcquirePushLockSharedEx(
                (signed __int64 *)&CmpContextListLock,
                0,
                v38,
                (unsigned __int64)&CmpContextListLock);
            if ( v38 )
              *((_BYTE *)v38 + 10) = 1;
            for ( n = (_QWORD *)*v36; n != v36; n = (_QWORD *)*n )
            {
              v40 = n[4];
              if ( v40 == *a3 )
              {
                v15 = n[7];
                break;
              }
              if ( v40 < *a3 )
                break;
            }
            _m_prefetchw(&CmpContextListLock);
            v45 = CmpContextListLock - 16;
            if ( (CmpContextListLock & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
              v45 = 0LL;
            if ( (CmpContextListLock & 2) != 0
              || (v46 = CmpContextListLock,
                  v46 != _InterlockedCompareExchange64(
                           (volatile signed __int64 *)&CmpContextListLock,
                           v45,
                           CmpContextListLock)) )
            {
              ExfReleasePushLock(&CmpContextListLock);
            }
            KeAbPostRelease((ULONG_PTR)&CmpContextListLock);
            result = KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
          }
        }
      }
      a2[2] = v15;
      break;
    default:
      result = a1;
      switch ( a1 )
      {
        case 0:
        case 30:
          result = CmpGetCallbackObjectContext(*a2, a3);
          a2[2] = result;
          return result;
        case 1:
        case 6:
          result = CmpGetCallbackObjectContext(*a2, a3);
          a2[6] = result;
          return result;
        case 2:
        case 4:
          result = CmpGetCallbackObjectContext(*a2, a3);
          a2[3] = result;
          return result;
        case 3:
          result = *a2;
          v52 = 0LL;
          if ( !*a2 )
            goto LABEL_119;
          if ( *(_DWORD *)result != 1803104306 )
            goto LABEL_119;
          v65 = (_QWORD *)(result + 72);
          if ( (_QWORD *)*v65 == v65 )
            goto LABEL_119;
          CmpLockContextListShared();
          v54 = (_QWORD *)*v65;
          while ( 2 )
          {
            if ( v54 == v65 )
              goto LABEL_159;
            v66 = v54[4];
            if ( v66 == *a3 )
              goto LABEL_158;
            if ( v66 >= *a3 )
            {
              v54 = (_QWORD *)*v54;
              continue;
            }
            goto LABEL_159;
          }
        case 5:
          result = *a2;
          v14 = 0LL;
          if ( !*a2 )
            goto LABEL_27;
          if ( *(_DWORD *)result != 1803104306 )
            goto LABEL_27;
          v47 = (_QWORD *)(result + 72);
          if ( (_QWORD *)*v47 == v47 )
            goto LABEL_27;
          v48 = KeGetCurrentThread();
          --v48->KernelApcDisable;
          v49 = KeAbPreAcquire((__int64)&CmpContextListLock, 0LL);
          if ( _InterlockedCompareExchange64((volatile signed __int64 *)&CmpContextListLock, 17LL, 0LL) )
            ExfAcquirePushLockSharedEx(
              (signed __int64 *)&CmpContextListLock,
              0,
              v49,
              (unsigned __int64)&CmpContextListLock);
          if ( v49 )
            *((_BYTE *)v49 + 10) = 1;
          v50 = (_QWORD *)*v47;
          while ( 2 )
          {
            if ( v50 != v47 )
            {
              v51 = v50[4];
              if ( v51 == *a3 )
              {
                v14 = v50[7];
              }
              else if ( v51 >= *a3 )
              {
                v50 = (_QWORD *)*v50;
                continue;
              }
            }
            break;
          }
          _m_prefetchw(&CmpContextListLock);
          v63 = CmpContextListLock - 16;
          if ( (CmpContextListLock & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
            v63 = 0LL;
          if ( (CmpContextListLock & 2) != 0 )
            goto LABEL_150;
          v64 = CmpContextListLock;
          if ( v64 != _InterlockedCompareExchange64(
                        (volatile signed __int64 *)&CmpContextListLock,
                        v63,
                        CmpContextListLock) )
            goto LABEL_150;
          goto LABEL_99;
        case 9:
          result = CmpGetCallbackObjectContext(*a2, a3);
          a2[7] = result;
          return result;
        case 15:
        case 16:
        case 17:
        case 18:
        case 19:
        case 20:
        case 21:
        case 22:
        case 23:
        case 24:
        case 31:
        case 33:
        case 35:
        case 37:
        case 39:
        case 42:
        case 44:
        case 46:
        case 48:
          goto LABEL_8;
        case 25:
        case 27:
        case 29:
          a2[5] = 0LL;
          return result;
        case 26:
          goto LABEL_11;
        case 32:
          result = CmpGetCallbackObjectContext(*a2, a3);
          a2[9] = result;
          return result;
        case 34:
          result = *a2;
          v23 = 0LL;
          if ( !*a2 )
            goto LABEL_48;
          if ( *(_DWORD *)result != 1803104306 )
            goto LABEL_48;
          v56 = (_QWORD *)(result + 72);
          if ( (_QWORD *)*v56 == v56 )
            goto LABEL_48;
          v57 = KeGetCurrentThread();
          --v57->KernelApcDisable;
          v58 = KeAbPreAcquire((__int64)&CmpContextListLock, 0LL);
          if ( _InterlockedCompareExchange64((volatile signed __int64 *)&CmpContextListLock, 17LL, 0LL) )
            ExfAcquirePushLockSharedEx(
              (signed __int64 *)&CmpContextListLock,
              0,
              v58,
              (unsigned __int64)&CmpContextListLock);
          if ( v58 )
            *((_BYTE *)v58 + 10) = 1;
          v59 = (_QWORD *)*v56;
          while ( 2 )
          {
            if ( v59 != v56 )
            {
              v60 = v59[4];
              if ( v60 == *a3 )
              {
                v23 = v59[7];
              }
              else if ( v60 >= *a3 )
              {
                v59 = (_QWORD *)*v59;
                continue;
              }
            }
            break;
          }
          _m_prefetchw(&CmpContextListLock);
          v61 = CmpContextListLock - 16;
          if ( (CmpContextListLock & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
            v61 = 0LL;
          if ( (CmpContextListLock & 2) != 0
            || (v62 = CmpContextListLock,
                v62 != _InterlockedCompareExchange64(
                         (volatile signed __int64 *)&CmpContextListLock,
                         v61,
                         CmpContextListLock)) )
          {
            ExfReleasePushLock(&CmpContextListLock);
          }
          KeAbPostRelease((ULONG_PTR)&CmpContextListLock);
          result = KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
LABEL_48:
          a2[3] = v23;
          return result;
        case 36:
          result = *a2;
          v52 = 0LL;
          if ( !*a2 )
            goto LABEL_119;
          if ( *(_DWORD *)result != 1803104306 )
            goto LABEL_119;
          v53 = (_QWORD *)(result + 72);
          if ( (_QWORD *)*v53 == v53 )
            goto LABEL_119;
          CmpLockContextListShared();
          v54 = (_QWORD *)*v53;
          break;
        case 38:
        case 41:
        case 43:
        case 45:
          result = CmpGetCallbackObjectContext(*a2, a3);
          a2[4] = result;
          return result;
        case 47:
        case 49:
          result = CmpGetCallbackObjectContext(*a2, a3);
          a2[5] = result;
          return result;
        default:
          return result;
      }
      while ( v54 != v53 )
      {
        v55 = v54[4];
        if ( v55 == *a3 )
        {
LABEL_158:
          v52 = v54[7];
          break;
        }
        if ( v55 < *a3 )
          break;
        v54 = (_QWORD *)*v54;
      }
LABEL_159:
      result = CmpUnlockContextList();
LABEL_119:
      a2[5] = v52;
      break;
  }
  return result;
}
