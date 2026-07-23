/*
 * XREFs of AlpcpCancelMessagesByRequestor @ 0x14088F9F0
 * Callers:
 *     AlpcpDisconnectPort @ 0x14088F628 (AlpcpDisconnectPort.c)
 * Callees:
 *     KeAbPostReleaseEx @ 0x14028D2F0 (KeAbPostReleaseEx.c)
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 *     ObfDereferenceObject @ 0x1402CE210 (ObfDereferenceObject.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     KeReleaseSemaphoreEx @ 0x1403AB4BC (KeReleaseSemaphoreEx.c)
 *     PsTransferProcessQuotaToSharedQuota @ 0x1404B406C (PsTransferProcessQuotaToSharedQuota.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     Feature_Servicing_Alpc_LockOrdering__private_IsEnabledDeviceUsageNoInline @ 0x1405C9A5C (Feature_Servicing_Alpc_LockOrdering__private_IsEnabledDeviceUsageNoInline.c)
 *     PspChargeProcessWakeCounter @ 0x1408999A0 (PspChargeProcessWakeCounter.c)
 *     AlpcpUnlockMessage @ 0x1408A1410 (AlpcpUnlockMessage.c)
 *     AlpcpReleaseMessageAttributesOnCancel @ 0x140A15680 (AlpcpReleaseMessageAttributesOnCancel.c)
 */

__int64 __fastcall AlpcpCancelMessagesByRequestor(
        __int64 a1,
        volatile signed __int32 *a2,
        ULONG_PTR *a3,
        int a4,
        __int64 a5)
{
  unsigned int v5; // ebp
  __int64 v9; // rsi
  char *v10; // rdi
  __int64 v11; // r8
  unsigned __int64 *v12; // rcx
  ULONG_PTR v13; // rdi
  ULONG_PTR v14; // r13
  __int64 v15; // rax
  bool v16; // zf
  __int64 v17; // rdx
  _QWORD *v18; // rax
  __int64 v19; // r9
  signed __int64 BugCheckParameter4; // rax
  int v21; // esi
  volatile signed __int64 *v22; // rsi
  char *v23; // rax
  char *v24; // rsi
  signed __int64 v25; // rax
  char *v26; // rbp
  __int64 v27; // r8
  unsigned __int64 *v28; // rcx
  ULONG_PTR *v29; // rax
  int v30; // eax
  __int64 v31; // rcx
  int v32; // eax
  int v33; // eax
  int v34; // eax
  void *v35; // rcx
  __int64 v36; // rcx
  __int64 v37; // rdx
  PVOID v38; // rcx
  __int64 v39; // rcx
  __int64 v40; // rcx
  char *v41; // rsi
  __int64 v42; // r8
  unsigned __int64 *v43; // rcx
  int v44; // r12d
  int v45; // r12d
  volatile signed __int64 *v46; // rdi
  int v49; // [rsp+98h] [rbp+20h]

  v5 = 0;
  v49 = 0;
  v9 = a1;
  if ( a4 == 1 || a4 == 2 )
  {
    v10 = (char *)KeAbPreAcquire((__int64)(a2 + 34), 0LL);
    if ( !_interlockedbittestandset64(a2 + 34, 0LL) )
      goto LABEL_11;
    v11 = (__int64)(a2 + 34);
    v12 = (unsigned __int64 *)(a2 + 34);
  }
  else if ( a4 == 3 )
  {
    v10 = (char *)KeAbPreAcquire((__int64)(a2 + 44), 0LL);
    if ( !_interlockedbittestandset64(a2 + 44, 0LL) )
      goto LABEL_11;
    v11 = (__int64)(a2 + 44);
    v12 = (unsigned __int64 *)(a2 + 44);
  }
  else
  {
    v10 = (char *)KeAbPreAcquire((__int64)(a2 + 50), 0LL);
    if ( !_interlockedbittestandset64(a2 + 50, 0LL) )
      goto LABEL_11;
    v11 = (__int64)(a2 + 50);
    v12 = (unsigned __int64 *)(a2 + 50);
  }
  ExfAcquirePushLockExclusiveEx(v12, v10, v11);
LABEL_11:
  if ( v10 )
    v10[10] = 1;
  v13 = *a3;
  if ( (ULONG_PTR *)*a3 != a3 )
  {
    while ( 1 )
    {
      v14 = v13;
      if ( *(_QWORD *)(v13 + 24) == v9 || (*(_DWORD *)(v13 + 40) & 0x10000) != 0 )
      {
        _m_prefetchw((const void *)(v13 - 24));
        v15 = *(_QWORD *)(v13 - 24);
        v16 = v15 == 0;
        if ( v15 <= 0 )
        {
LABEL_20:
          if ( !v16 )
            KeBugCheckEx(0x18u, 0LL, v13, 0x20uLL, v15);
        }
        else
        {
          while ( 1 )
          {
            v17 = v15;
            v15 = _InterlockedCompareExchange64((volatile signed __int64 *)(v13 - 24), v15 + 1, v15);
            if ( v15 == v17 )
              break;
            v16 = v15 == 0;
            if ( v15 <= 0 )
              goto LABEL_20;
          }
        }
        v18 = KeAbPreAcquire(v13 - 16, 0LL);
        if ( _interlockedbittestandset64((volatile signed __int32 *)(v13 - 16), 0LL) )
        {
          if ( v18 )
            KeAbPostReleaseEx(v13 - 16, (ULONG_PTR)v18);
          if ( a4 == 1 || a4 == 2 )
          {
            v22 = (volatile signed __int64 *)(a2 + 34);
          }
          else if ( a4 == 3 )
          {
            v22 = (volatile signed __int64 *)(a2 + 44);
          }
          else
          {
            v22 = (volatile signed __int64 *)(a2 + 50);
          }
          if ( (_InterlockedExchangeAdd64(v22, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock(v22);
          KeAbPostRelease((ULONG_PTR)v22);
          v49 = 1;
          v23 = (char *)KeAbPreAcquire(v13 - 16, 0LL);
          v24 = v23;
          if ( _interlockedbittestandset64((volatile signed __int32 *)(v13 - 16), 0LL) )
            ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v13 - 16), v23, v13 - 16);
          if ( v24 )
            v24[10] = 1;
          *(_BYTE *)(v13 - 32) |= 1u;
          v25 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v13 - 24), 0x10000uLL) + 0x10000;
          if ( v25 <= 0 )
            KeBugCheckEx(0x18u, 0LL, v13, 0x26uLL, v25);
          if ( a4 == 1 || a4 == 2 )
          {
            v26 = (char *)KeAbPreAcquire((__int64)(a2 + 34), 0LL);
            if ( !_interlockedbittestandset64(a2 + 34, 0LL) )
              goto LABEL_53;
            v27 = (__int64)(a2 + 34);
            v28 = (unsigned __int64 *)(a2 + 34);
          }
          else
          {
            if ( a4 != 3 )
            {
              v26 = (char *)KeAbPreAcquire((__int64)(a2 + 50), 0LL);
              if ( _interlockedbittestandset64(a2 + 50, 0LL) )
              {
                v27 = (__int64)(a2 + 50);
                v28 = (unsigned __int64 *)(a2 + 50);
                goto LABEL_52;
              }
LABEL_53:
              if ( v26 )
                v26[10] = 1;
              v9 = a1;
              if ( *(_QWORD *)(v13 + 24) == a1 )
              {
                v29 = (ULONG_PTR *)*a3;
                if ( (ULONG_PTR *)*a3 != a3 )
                {
                  while ( v29 != (ULONG_PTR *)v13 )
                  {
                    v29 = (ULONG_PTR *)*v29;
                    if ( v29 == a3 )
                      goto LABEL_59;
                  }
                  v21 = 1;
LABEL_62:
                  if ( !*(_QWORD *)(v13 + 64) )
                  {
                    v30 = *(_DWORD *)(v13 + 40);
                    if ( (v30 & 0x80u) == 0 )
                    {
                      v31 = *(_QWORD *)(v13 + 32);
                      v32 = v30 | 0x80;
                      *(_BYTE *)(v13 + 244) = 0;
                      *(_WORD *)(v13 + 244) |= 0xCu;
                      *(_DWORD *)(v13 + 40) = v32;
                      *(_DWORD *)(v13 + 240) = 2621440;
                      if ( v31 )
                      {
                        if ( _InterlockedExchange64((volatile __int64 *)(v31 + 1464), 0LL) == v13 )
                        {
                          KeReleaseSemaphoreEx(
                            (volatile signed __int32 *)(*(_QWORD *)(v13 + 32) + 1304LL),
                            1LL,
                            1,
                            v19,
                            0,
                            0LL);
                          *(_WORD *)(v13 - 30) -= 3;
                          *(_QWORD *)(v13 + 32) = 0LL;
                          goto LABEL_70;
                        }
                      }
                      else if ( (v32 & 0x200) == 0 )
                      {
                        *(_QWORD *)(v13 + 88) = *(_QWORD *)(a5 + 8);
                        *(_QWORD *)(v13 + 80) = a5;
                        **(_QWORD **)(a5 + 8) = v13 + 80;
                        *(_QWORD *)(a5 + 8) = v13 + 80;
                        goto LABEL_70;
                      }
                      --*(_WORD *)(v13 - 30);
                    }
                  }
LABEL_70:
                  AlpcpReleaseMessageAttributesOnCancel(v13);
                  v33 = *(_DWORD *)(v13 + 40);
                  *(_WORD *)(v13 + 244) &= ~0x2000u;
                  v34 = v33 | 0x200;
                  v35 = *(void **)(v13 + 24);
                  *(_DWORD *)(v13 + 40) = v34;
                  if ( v35 )
                  {
                    if ( (v34 & 0x1000) != 0 )
                      ObfDereferenceObject(v35);
                    *(_QWORD *)(v13 + 24) = 0LL;
                  }
                  v36 = *(_QWORD *)(v13 + 48);
                  if ( v36 && (*(_DWORD *)(v13 + 40) & 0x400) == 0 && !*(_QWORD *)(v13 + 96) )
                  {
                    v37 = 792LL;
                    if ( *(_QWORD *)(v13 + 224) )
                      v37 = *(_QWORD *)(v13 + 232) + 792LL;
                    *(_QWORD *)(v13 + 48) = PsTransferProcessQuotaToSharedQuota(v36, v37);
                    ObfDereferenceObjectWithTag(v38, 0x63706C41u);
                    *(_DWORD *)(v13 + 40) |= 0x400u;
                  }
                  v39 = *(_QWORD *)(v13 + 208);
                  if ( v39 )
                  {
                    PspChargeProcessWakeCounter((PVOID)(v39 & 0xFFFFFFFFFFFFFFF8uLL), -1, 1, 0LL);
                    *(_QWORD *)(v13 + 208) = 0LL;
                  }
                  v40 = *(_QWORD *)(v13 + 216);
                  if ( v40 )
                  {
                    PspChargeProcessWakeCounter((PVOID)(v40 & 0xFFFFFFFFFFFFFFF8uLL), -1, 1, 0LL);
                    *(_QWORD *)(v13 + 216) = 0LL;
                  }
                  if ( v21 )
                    v13 = *a3;
                  else
                    v13 = *(_QWORD *)v13;
                  AlpcpUnlockMessage(v14);
                  v9 = a1;
                  goto LABEL_110;
                }
              }
LABEL_59:
              --*(_WORD *)(v13 - 30);
              if ( !(unsigned int)Feature_Servicing_Alpc_LockOrdering__private_IsEnabledDeviceUsageNoInline() )
              {
                AlpcpUnlockMessage(v13);
LABEL_109:
                v13 = *a3;
                goto LABEL_110;
              }
              if ( a4 == 1 || a4 == 2 )
              {
                if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)a2 + 17, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
                  ExfTryToWakePushLock((volatile signed __int64 *)a2 + 17);
                KeAbPostRelease((ULONG_PTR)(a2 + 34));
                AlpcpUnlockMessage(v13);
                v41 = (char *)KeAbPreAcquire((__int64)(a2 + 34), 0LL);
                if ( _interlockedbittestandset64(a2 + 34, 0LL) )
                {
                  v42 = (__int64)(a2 + 34);
                  v43 = (unsigned __int64 *)(a2 + 34);
LABEL_105:
                  ExfAcquirePushLockExclusiveEx(v43, v41, v42);
                }
              }
              else if ( a4 == 3 )
              {
                if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)a2 + 22, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
                  ExfTryToWakePushLock((volatile signed __int64 *)a2 + 22);
                KeAbPostRelease((ULONG_PTR)(a2 + 44));
                AlpcpUnlockMessage(v13);
                v41 = (char *)KeAbPreAcquire((__int64)(a2 + 44), 0LL);
                if ( _interlockedbittestandset64(a2 + 44, 0LL) )
                {
                  v42 = (__int64)(a2 + 44);
                  v43 = (unsigned __int64 *)(a2 + 44);
                  goto LABEL_105;
                }
              }
              else
              {
                if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)a2 + 25, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
                  ExfTryToWakePushLock((volatile signed __int64 *)a2 + 25);
                KeAbPostRelease((ULONG_PTR)(a2 + 50));
                AlpcpUnlockMessage(v13);
                v41 = (char *)KeAbPreAcquire((__int64)(a2 + 50), 0LL);
                if ( _interlockedbittestandset64(a2 + 50, 0LL) )
                {
                  v42 = (__int64)(a2 + 50);
                  v43 = (unsigned __int64 *)(a2 + 50);
                  goto LABEL_105;
                }
              }
              if ( v41 )
                v41[10] = 1;
              v9 = a1;
              goto LABEL_109;
            }
            v26 = (char *)KeAbPreAcquire((__int64)(a2 + 44), 0LL);
            if ( !_interlockedbittestandset64(a2 + 44, 0LL) )
              goto LABEL_53;
            v27 = (__int64)(a2 + 44);
            v28 = (unsigned __int64 *)(a2 + 44);
          }
LABEL_52:
          ExfAcquirePushLockExclusiveEx(v28, v26, v27);
          goto LABEL_53;
        }
        if ( v18 )
          *((_BYTE *)v18 + 10) = 1;
        *(_BYTE *)(v13 - 32) |= 1u;
        BugCheckParameter4 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v13 - 24), 0x10000uLL) + 0x10000;
        if ( BugCheckParameter4 <= 0 )
          KeBugCheckEx(0x18u, 0LL, v13, 0x27uLL, BugCheckParameter4);
        if ( *(_QWORD *)(v13 + 24) == v9 )
        {
          v21 = 0;
          goto LABEL_62;
        }
        --*(_WORD *)(v13 - 30);
        AlpcpUnlockMessage(v13);
        v13 = *(_QWORD *)v13;
      }
      else
      {
        v13 = *(_QWORD *)v13;
      }
LABEL_110:
      if ( (ULONG_PTR *)v13 == a3 )
      {
        v5 = v49;
        break;
      }
    }
  }
  v44 = a4 - 1;
  if ( v44 && (v45 = v44 - 1) != 0 )
  {
    if ( v45 == 1 )
      v46 = (volatile signed __int64 *)(a2 + 44);
    else
      v46 = (volatile signed __int64 *)(a2 + 50);
  }
  else
  {
    v46 = (volatile signed __int64 *)(a2 + 34);
  }
  if ( (_InterlockedExchangeAdd64(v46, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v46);
  KeAbPostRelease((ULONG_PTR)v46);
  return v5;
}
