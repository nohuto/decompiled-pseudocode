/*
 * XREFs of CmpCallbackFillObjectContext @ 0x140844AB0
 * Callers:
 *     CmpCallCallBacksEx @ 0x140843FD0 (CmpCallCallBacksEx.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x140289BB0 (KeLeaveCriticalRegionThread.c)
 *     ExfReleasePushLock @ 0x14028E870 (ExfReleasePushLock.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x14031F9EC (ExfAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     CmpGetCallbackObjectContext @ 0x140940B60 (CmpGetCallbackObjectContext.c)
 *     CmpUnlockContextList @ 0x1409758B0 (CmpUnlockContextList.c)
 *     CmpLockContextListShared @ 0x1409834D0 (CmpLockContextListShared.c)
 */

void __fastcall CmpCallbackFillObjectContext(int a1, _QWORD *a2, _QWORD *a3)
{
  _DWORD *v5; // rax
  __int64 v6; // rbp
  _DWORD *v7; // rax
  __int64 v8; // rbp
  _QWORD *v9; // r14
  struct _KTHREAD *CurrentThread; // rax
  char *v11; // r15
  _QWORD *i; // rax
  __int64 v13; // rcx
  _DWORD *v14; // rax
  __int64 v15; // rbp
  _DWORD *v16; // rax
  __int64 v17; // rbp
  _DWORD *v18; // rax
  __int64 v19; // rbp
  signed __int64 v20; // rdx
  ULONG_PTR v21; // rtt
  _QWORD *v22; // r14
  struct _KTHREAD *v23; // rax
  char *v24; // r15
  _QWORD *j; // rax
  __int64 v26; // rcx
  _QWORD *v27; // r14
  struct _KTHREAD *v28; // rax
  char *v29; // r15
  _QWORD *k; // rax
  __int64 v31; // rcx
  _QWORD *v32; // r14
  struct _KTHREAD *v33; // rax
  char *v34; // r15
  _QWORD *m; // rax
  __int64 v36; // rcx
  _DWORD *v37; // rax
  __int64 v38; // rbp
  _QWORD *v39; // r14
  struct _KTHREAD *v40; // rax
  char *v41; // r15
  _QWORD *v42; // rax
  __int64 v43; // rcx
  signed __int64 v44; // rdx
  ULONG_PTR v45; // rtt
  signed __int64 v46; // rdx
  ULONG_PTR v47; // rtt
  signed __int64 v48; // rdx
  ULONG_PTR v49; // rtt
  signed __int64 v50; // rdx
  ULONG_PTR v51; // rtt
  _DWORD *v52; // rax
  _QWORD *v53; // r14
  struct _KTHREAD *v54; // rax
  char *v55; // r15
  __int64 v56; // rcx
  _DWORD *v57; // rax
  _QWORD *v58; // r14
  struct _KTHREAD *v59; // rax
  char *v60; // r15
  _QWORD *v61; // rax
  __int64 v62; // rcx
  _DWORD *v63; // rax
  __int64 v64; // rdi
  _DWORD *v65; // rax
  _QWORD *v66; // r14
  _QWORD *v67; // rax
  __int64 v68; // rcx
  _QWORD *v69; // r14
  struct _KTHREAD *v70; // rax
  char *v71; // r15
  _QWORD *v72; // rax
  __int64 v73; // rcx
  signed __int64 v74; // rdx
  ULONG_PTR v75; // rtt
  signed __int64 v76; // rdx
  ULONG_PTR v77; // rtt
  _QWORD *v78; // r14
  __int64 v79; // rcx

  switch ( a1 )
  {
    case 50:
LABEL_9:
      v7 = (_DWORD *)*a2;
      v8 = 0LL;
      if ( *a2 )
      {
        if ( *v7 == 1803104306 )
        {
          v9 = v7 + 18;
          if ( (_QWORD *)*v9 != v9 )
          {
            CurrentThread = KeGetCurrentThread();
            --CurrentThread->KernelApcDisable;
            v11 = (char *)KeAbPreAcquire((__int64)&CmpContextListLock, 0LL);
            if ( _InterlockedCompareExchange64((volatile signed __int64 *)&CmpContextListLock, 17LL, 0LL) )
              ExfAcquirePushLockSharedEx((signed __int64 *)&CmpContextListLock, 0, v11, (__int64)&CmpContextListLock);
            if ( v11 )
              v11[10] = 1;
            for ( i = (_QWORD *)*v9; i != v9; i = (_QWORD *)*i )
            {
              v13 = i[4];
              if ( v13 == *a3 )
              {
                v8 = i[7];
                break;
              }
              if ( v13 < *a3 )
                break;
            }
            _m_prefetchw(&CmpContextListLock);
            v20 = CmpContextListLock - 16;
            if ( (CmpContextListLock & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
              v20 = 0LL;
            if ( (CmpContextListLock & 2) != 0
              || (v21 = CmpContextListLock,
                  v21 != _InterlockedCompareExchange64(
                           (volatile signed __int64 *)&CmpContextListLock,
                           v20,
                           CmpContextListLock)) )
            {
              ExfReleasePushLock(&CmpContextListLock);
            }
            KeAbPostRelease((ULONG_PTR)&CmpContextListLock);
            KeLeaveCriticalRegionThread();
          }
        }
      }
      a2[5] = v8;
      break;
    case 28:
LABEL_22:
      v14 = (_DWORD *)a2[1];
      v15 = 0LL;
      if ( v14 )
      {
        if ( *v14 == 1803104306 )
        {
          v22 = v14 + 18;
          if ( (_QWORD *)*v22 != v22 )
          {
            v23 = KeGetCurrentThread();
            --v23->KernelApcDisable;
            v24 = (char *)KeAbPreAcquire((__int64)&CmpContextListLock, 0LL);
            if ( _InterlockedCompareExchange64((volatile signed __int64 *)&CmpContextListLock, 17LL, 0LL) )
              ExfAcquirePushLockSharedEx((signed __int64 *)&CmpContextListLock, 0, v24, (__int64)&CmpContextListLock);
            if ( v24 )
              v24[10] = 1;
            for ( j = (_QWORD *)*v22; j != v22; j = (_QWORD *)*j )
            {
              v26 = j[4];
              if ( v26 == *a3 )
              {
                v15 = j[7];
                break;
              }
              if ( v26 < *a3 )
                break;
            }
            _m_prefetchw(&CmpContextListLock);
            v44 = CmpContextListLock - 16;
            if ( (CmpContextListLock & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
              v44 = 0LL;
            if ( (CmpContextListLock & 2) != 0
              || (v45 = CmpContextListLock,
                  v45 != _InterlockedCompareExchange64(
                           (volatile signed __int64 *)&CmpContextListLock,
                           v44,
                           CmpContextListLock)) )
            {
              ExfReleasePushLock(&CmpContextListLock);
            }
            KeAbPostRelease((ULONG_PTR)&CmpContextListLock);
            KeLeaveCriticalRegionThread();
          }
        }
      }
      a2[11] = v15;
      break;
    case 8:
      v16 = (_DWORD *)*a2;
      v17 = 0LL;
      if ( *a2 )
      {
        if ( *v16 == 1803104306 )
        {
          v27 = v16 + 18;
          if ( (_QWORD *)*v27 != v27 )
          {
            v28 = KeGetCurrentThread();
            --v28->KernelApcDisable;
            v29 = (char *)KeAbPreAcquire((__int64)&CmpContextListLock, 0LL);
            if ( _InterlockedCompareExchange64((volatile signed __int64 *)&CmpContextListLock, 17LL, 0LL) )
              ExfAcquirePushLockSharedEx((signed __int64 *)&CmpContextListLock, 0, v29, (__int64)&CmpContextListLock);
            if ( v29 )
              v29[10] = 1;
            for ( k = (_QWORD *)*v27; k != v27; k = (_QWORD *)*k )
            {
              v31 = k[4];
              if ( v31 == *a3 )
              {
                v17 = k[7];
                break;
              }
              if ( v31 < *a3 )
                break;
            }
            _m_prefetchw(&CmpContextListLock);
            v46 = CmpContextListLock - 16;
            if ( (CmpContextListLock & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
              v46 = 0LL;
            if ( (CmpContextListLock & 2) != 0
              || (v47 = CmpContextListLock,
                  v47 != _InterlockedCompareExchange64(
                           (volatile signed __int64 *)&CmpContextListLock,
                           v46,
                           CmpContextListLock)) )
            {
              ExfReleasePushLock(&CmpContextListLock);
            }
            KeAbPostRelease((ULONG_PTR)&CmpContextListLock);
            KeLeaveCriticalRegionThread();
          }
        }
      }
      a2[7] = v17;
      break;
    case 7:
      v18 = (_DWORD *)*a2;
      v19 = 0LL;
      if ( *a2 )
      {
        if ( *v18 == 1803104306 )
        {
          v32 = v18 + 18;
          if ( (_QWORD *)*v32 != v32 )
          {
            v33 = KeGetCurrentThread();
            --v33->KernelApcDisable;
            v34 = (char *)KeAbPreAcquire((__int64)&CmpContextListLock, 0LL);
            if ( _InterlockedCompareExchange64((volatile signed __int64 *)&CmpContextListLock, 17LL, 0LL) )
              ExfAcquirePushLockSharedEx((signed __int64 *)&CmpContextListLock, 0, v34, (__int64)&CmpContextListLock);
            if ( v34 )
              v34[10] = 1;
            for ( m = (_QWORD *)*v32; m != v32; m = (_QWORD *)*m )
            {
              v36 = m[4];
              if ( v36 == *a3 )
              {
LABEL_93:
                v19 = m[7];
                break;
              }
              if ( v36 < *a3 )
                break;
            }
LABEL_94:
            _m_prefetchw(&CmpContextListLock);
            v48 = CmpContextListLock - 16;
            if ( (CmpContextListLock & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
              v48 = 0LL;
            if ( (CmpContextListLock & 2) != 0
              || (v49 = CmpContextListLock,
                  v49 != _InterlockedCompareExchange64(
                           (volatile signed __int64 *)&CmpContextListLock,
                           v48,
                           CmpContextListLock)) )
            {
LABEL_161:
              ExfReleasePushLock(&CmpContextListLock);
            }
LABEL_98:
            KeAbPostRelease((ULONG_PTR)&CmpContextListLock);
            KeLeaveCriticalRegionThread();
          }
        }
      }
LABEL_27:
      a2[6] = v19;
      break;
    case 29:
LABEL_28:
      a2[5] = 0LL;
      break;
    default:
      switch ( a1 )
      {
        case 0:
        case 30:
          a2[2] = CmpGetCallbackObjectContext(*a2, a3);
          return;
        case 1:
          v57 = (_DWORD *)*a2;
          v19 = 0LL;
          if ( !*a2 )
            goto LABEL_27;
          if ( *v57 != 1803104306 )
            goto LABEL_27;
          v58 = v57 + 18;
          if ( (_QWORD *)*v58 == v58 )
            goto LABEL_27;
          v59 = KeGetCurrentThread();
          --v59->KernelApcDisable;
          v60 = (char *)KeAbPreAcquire((__int64)&CmpContextListLock, 0LL);
          if ( _InterlockedCompareExchange64((volatile signed __int64 *)&CmpContextListLock, 17LL, 0LL) )
            ExfAcquirePushLockSharedEx((signed __int64 *)&CmpContextListLock, 0, v60, (__int64)&CmpContextListLock);
          if ( v60 )
            v60[10] = 1;
          v61 = (_QWORD *)*v58;
          while ( 2 )
          {
            if ( v61 != v58 )
            {
              v62 = v61[4];
              if ( v62 == *a3 )
              {
                v19 = v61[7];
              }
              else if ( v62 >= *a3 )
              {
                v61 = (_QWORD *)*v61;
                continue;
              }
            }
            break;
          }
          _m_prefetchw(&CmpContextListLock);
          v76 = CmpContextListLock - 16;
          if ( (CmpContextListLock & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
            v76 = 0LL;
          if ( (CmpContextListLock & 2) != 0 )
            goto LABEL_161;
          v77 = CmpContextListLock;
          if ( v77 != _InterlockedCompareExchange64(
                        (volatile signed __int64 *)&CmpContextListLock,
                        v76,
                        CmpContextListLock) )
            goto LABEL_161;
          goto LABEL_98;
        case 2:
        case 4:
          a2[3] = CmpGetCallbackObjectContext(*a2, a3);
          return;
        case 3:
          v63 = (_DWORD *)*a2;
          v64 = 0LL;
          if ( !*a2 )
            goto LABEL_130;
          if ( *v63 != 1803104306 )
            goto LABEL_130;
          v78 = v63 + 18;
          if ( (_QWORD *)*v78 == v78 )
            goto LABEL_130;
          CmpLockContextListShared();
          v67 = (_QWORD *)*v78;
          while ( 2 )
          {
            if ( v67 == v78 )
              goto LABEL_170;
            v79 = v67[4];
            if ( v79 == *a3 )
              goto LABEL_169;
            if ( v79 >= *a3 )
            {
              v67 = (_QWORD *)*v67;
              continue;
            }
            goto LABEL_170;
          }
        case 5:
          v52 = (_DWORD *)*a2;
          v19 = 0LL;
          if ( !*a2 )
            goto LABEL_27;
          if ( *v52 != 1803104306 )
            goto LABEL_27;
          v53 = v52 + 18;
          if ( (_QWORD *)*v53 == v53 )
            goto LABEL_27;
          v54 = KeGetCurrentThread();
          --v54->KernelApcDisable;
          v55 = (char *)KeAbPreAcquire((__int64)&CmpContextListLock, 0LL);
          if ( _InterlockedCompareExchange64((volatile signed __int64 *)&CmpContextListLock, 17LL, 0LL) )
            ExfAcquirePushLockSharedEx((signed __int64 *)&CmpContextListLock, 0, v55, (__int64)&CmpContextListLock);
          if ( v55 )
            v55[10] = 1;
          m = (_QWORD *)*v53;
          while ( 2 )
          {
            if ( m == v53 )
              goto LABEL_94;
            v56 = m[4];
            if ( v56 == *a3 )
              goto LABEL_93;
            if ( v56 >= *a3 )
            {
              m = (_QWORD *)*m;
              continue;
            }
            goto LABEL_94;
          }
        case 6:
          a2[6] = CmpGetCallbackObjectContext(*a2, a3);
          return;
        case 9:
          a2[7] = CmpGetCallbackObjectContext(*a2, a3);
          return;
        case 14:
          v5 = (_DWORD *)*a2;
          v6 = 0LL;
          if ( !*a2 )
            goto LABEL_8;
          if ( *v5 != 1803104306 )
            goto LABEL_8;
          v39 = v5 + 18;
          if ( (_QWORD *)*v39 == v39 )
            goto LABEL_8;
          v40 = KeGetCurrentThread();
          --v40->KernelApcDisable;
          v41 = (char *)KeAbPreAcquire((__int64)&CmpContextListLock, 0LL);
          if ( _InterlockedCompareExchange64((volatile signed __int64 *)&CmpContextListLock, 17LL, 0LL) )
            ExfAcquirePushLockSharedEx((signed __int64 *)&CmpContextListLock, 0, v41, (__int64)&CmpContextListLock);
          if ( v41 )
            v41[10] = 1;
          v42 = (_QWORD *)*v39;
          while ( 2 )
          {
            if ( v42 != v39 )
            {
              v43 = v42[4];
              if ( v43 == *a3 )
              {
                v6 = v42[7];
              }
              else if ( v43 >= *a3 )
              {
                v42 = (_QWORD *)*v42;
                continue;
              }
            }
            break;
          }
          _m_prefetchw(&CmpContextListLock);
          v50 = CmpContextListLock - 16;
          if ( (CmpContextListLock & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
            v50 = 0LL;
          if ( (CmpContextListLock & 2) != 0
            || (v51 = CmpContextListLock,
                v51 != _InterlockedCompareExchange64(
                         (volatile signed __int64 *)&CmpContextListLock,
                         v50,
                         CmpContextListLock)) )
          {
            ExfReleasePushLock(&CmpContextListLock);
          }
          KeAbPostRelease((ULONG_PTR)&CmpContextListLock);
          KeLeaveCriticalRegionThread();
LABEL_8:
          a2[2] = v6;
          return;
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
          goto LABEL_9;
        case 25:
        case 27:
          goto LABEL_28;
        case 26:
          goto LABEL_22;
        case 32:
          a2[9] = CmpGetCallbackObjectContext(*a2, a3);
          return;
        case 34:
          v37 = (_DWORD *)*a2;
          v38 = 0LL;
          if ( !*a2 )
            goto LABEL_69;
          if ( *v37 != 1803104306 )
            goto LABEL_69;
          v69 = v37 + 18;
          if ( (_QWORD *)*v69 == v69 )
            goto LABEL_69;
          v70 = KeGetCurrentThread();
          --v70->KernelApcDisable;
          v71 = (char *)KeAbPreAcquire((__int64)&CmpContextListLock, 0LL);
          if ( _InterlockedCompareExchange64((volatile signed __int64 *)&CmpContextListLock, 17LL, 0LL) )
            ExfAcquirePushLockSharedEx((signed __int64 *)&CmpContextListLock, 0, v71, (__int64)&CmpContextListLock);
          if ( v71 )
            v71[10] = 1;
          v72 = (_QWORD *)*v69;
          while ( 2 )
          {
            if ( v72 != v69 )
            {
              v73 = v72[4];
              if ( v73 == *a3 )
              {
                v38 = v72[7];
              }
              else if ( v73 >= *a3 )
              {
                v72 = (_QWORD *)*v72;
                continue;
              }
            }
            break;
          }
          _m_prefetchw(&CmpContextListLock);
          v74 = CmpContextListLock - 16;
          if ( (CmpContextListLock & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
            v74 = 0LL;
          if ( (CmpContextListLock & 2) != 0
            || (v75 = CmpContextListLock,
                v75 != _InterlockedCompareExchange64(
                         (volatile signed __int64 *)&CmpContextListLock,
                         v74,
                         CmpContextListLock)) )
          {
            ExfReleasePushLock(&CmpContextListLock);
          }
          KeAbPostRelease((ULONG_PTR)&CmpContextListLock);
          KeLeaveCriticalRegionThread();
LABEL_69:
          a2[3] = v38;
          return;
        case 36:
          v65 = (_DWORD *)*a2;
          v64 = 0LL;
          if ( !*a2 )
            goto LABEL_130;
          if ( *v65 != 1803104306 )
            goto LABEL_130;
          v66 = v65 + 18;
          if ( (_QWORD *)*v66 == v66 )
            goto LABEL_130;
          CmpLockContextListShared();
          v67 = (_QWORD *)*v66;
          break;
        case 38:
        case 41:
        case 43:
        case 45:
          a2[4] = CmpGetCallbackObjectContext(*a2, a3);
          return;
        case 47:
        case 49:
          a2[5] = CmpGetCallbackObjectContext(*a2, a3);
          return;
        default:
          return;
      }
      while ( v67 != v66 )
      {
        v68 = v67[4];
        if ( v68 == *a3 )
        {
LABEL_169:
          v64 = v67[7];
          break;
        }
        if ( v68 < *a3 )
          break;
        v67 = (_QWORD *)*v67;
      }
LABEL_170:
      CmpUnlockContextList();
LABEL_130:
      a2[5] = v64;
      break;
  }
}
