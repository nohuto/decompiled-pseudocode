/*
 * XREFs of ObSetSecurityDescriptorInfo @ 0x140919920
 * Callers:
 *     SeDefaultObjectMethod @ 0x1408A1150 (SeDefaultObjectMethod.c)
 *     WmipSecurityMethod @ 0x1409A5180 (WmipSecurityMethod.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     ExfReleasePushLockShared @ 0x14029B450 (ExfReleasePushLockShared.c)
 *     ExfAcquirePushLockSharedEx @ 0x14029B5A0 (ExfAcquirePushLockSharedEx.c)
 *     KeLeaveCriticalRegionThread @ 0x14029B9C0 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     ExfReleasePushLock @ 0x1402BCA80 (ExfReleasePushLock.c)
 *     PspChargeQuota @ 0x1403C65E0 (PspChargeQuota.c)
 *     ExfTryToWakePushLock @ 0x1403D62D0 (ExfTryToWakePushLock.c)
 *     memmove @ 0x1406B4940 (memmove.c)
 *     memcmp @ 0x1406B4C10 (memcmp.c)
 *     ObDereferenceSecurityDescriptor @ 0x14086EF20 (ObDereferenceSecurityDescriptor.c)
 *     RtlpSetSecurityObject @ 0x14091A030 (RtlpSetSecurityObject.c)
 *     RtlLengthSecurityDescriptor @ 0x14091B2A0 (RtlLengthSecurityDescriptor.c)
 *     PsReturnSharedPoolQuota @ 0x14091B660 (PsReturnSharedPoolQuota.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ObSetSecurityDescriptorInfo(__int64 a1, _DWORD *a2, int a3, __int64 a4, int a5, __int64 a6)
{
  unsigned int v7; // edi
  __int64 v8; // rbx
  struct _KTHREAD *CurrentThread; // rax
  __int64 *v12; // rax
  __int64 *v13; // rbp
  char *v14; // r12
  unsigned __int64 v15; // rsi
  int v16; // ebp
  char *v17; // rbp
  char *v18; // rdx
  char *v19; // rcx
  __int64 v20; // rsi
  signed __int64 *v21; // r15
  volatile signed __int64 *v22; // r12
  __int64 *v23; // rbp
  signed __int64 *v24; // rbp
  signed __int64 v25; // r14
  struct _KTHREAD *v26; // rbp
  __int64 Pool2; // rax
  void *v28; // rdx
  __int64 *v29; // rbp
  unsigned int v30; // esi
  __int16 v31; // dx
  __int64 v32; // rcx
  char *v33; // rcx
  __int64 v34; // rdx
  char *v35; // rdx
  __int64 v36; // rbp
  __int64 v37; // rbp
  _KPROCESS *Process; // rcx
  _KSCHEDULING_GROUP *SchedulingGroup; // r14
  __int64 v40; // r15
  void *v41; // rcx
  __int64 v42; // rbx
  char v43; // di
  signed __int64 v44; // rax
  signed __int64 v45; // rdx
  __int64 v46; // rtt
  volatile signed __int64 *v47; // rbx
  signed __int64 v48; // rax
  signed __int64 v49; // rtt
  struct _KTHREAD *v51; // r12
  unsigned __int64 *v52; // r14
  volatile signed __int64 *v53; // rsi
  __int64 *v54; // rax
  __int64 *v55; // r15
  signed __int64 v56; // rcx
  volatile signed __int64 *i; // rax
  signed __int64 *P; // [rsp+40h] [rbp-68h]
  PSECURITY_DESCRIPTOR SecurityDescriptor; // [rsp+48h] [rbp-60h] BYREF
  char *v60; // [rsp+50h] [rbp-58h]
  struct _KTHREAD *v61; // [rsp+58h] [rbp-50h]
  void *Src; // [rsp+60h] [rbp-48h]
  size_t v63; // [rsp+68h] [rbp-40h]
  ULONG Size; // [rsp+B0h] [rbp+8h]

  v7 = 0;
  v8 = 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v12 = KeAbPreAcquire(a1 - 32, 0LL);
  v13 = v12;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(a1 - 32), 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(a1 - 32), v12, a1 - 32);
  if ( v13 )
    *((_BYTE *)v13 + 10) = 1;
  v14 = (char *)(*(_QWORD *)(a1 - 8) & 0xFFFFFFFFFFFFFFF0uLL);
  v60 = v14;
  SecurityDescriptor = v14;
  if ( !v14 )
  {
    v16 = -1073741609;
    goto LABEL_83;
  }
  v15 = 0LL;
  v16 = RtlpSetSecurityObject(a1, *a2, a3, (unsigned int)&SecurityDescriptor, 0, a5, a6, 0LL);
  if ( v16 < 0 )
  {
LABEL_83:
    SecurityDescriptor = 0LL;
    goto LABEL_64;
  }
  v17 = (char *)SecurityDescriptor;
  Src = SecurityDescriptor;
  Size = RtlLengthSecurityDescriptor(SecurityDescriptor);
  v63 = Size;
  v18 = &v17[Size & 0xFFFFFFF8];
  if ( v17 < v18 )
  {
    v19 = v17;
    do
    {
      v20 = *(_QWORD *)v19 ^ v15;
      v19 += 16;
      v15 = __ROL8__(v20, 3);
    }
    while ( v19 < v18 );
  }
  P = 0LL;
  v61 = KeGetCurrentThread();
  --v61->KernelApcDisable;
  v21 = (signed __int64 *)((char *)&ObsSecurityDescriptorCache + 16 * (unsigned __int8)v15);
  v22 = v21 + 1;
  v23 = KeAbPreAcquire((__int64)v21, 0LL);
  if ( _InterlockedCompareExchange64(v21, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(v21, 0, v23, (unsigned __int64)v21);
  if ( v23 )
    *((_BYTE *)v23 + 10) = 1;
  v24 = 0LL;
  while ( 1 )
  {
    v25 = *v22;
    if ( *v22 )
      break;
LABEL_19:
    if ( v24 )
    {
      *v24 = v25;
      v22 = (volatile signed __int64 *)_InterlockedCompareExchange64(v22, (signed __int64)v24, v25);
      if ( (volatile signed __int64 *)v25 == v22 )
      {
        if ( _InterlockedCompareExchange64(v21, 0LL, 17LL) != 17 )
          ExfReleasePushLockShared(v21);
        KeAbPostRelease((ULONG_PTR)v21);
        KeLeaveCriticalRegionThread((__int64)v61);
        v8 = (__int64)(v24 + 4);
        goto LABEL_38;
      }
    }
    else
    {
      if ( _InterlockedCompareExchange64(v21, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared(v21);
      KeAbPostRelease((ULONG_PTR)v21);
      v26 = v61;
      KeLeaveCriticalRegionThread((__int64)v61);
      if ( Size + 40 < Size || (Pool2 = ExAllocatePool2(0x108uLL), (P = (signed __int64 *)Pool2) == 0LL) )
      {
        v16 = -1073741670;
        goto LABEL_63;
      }
      v28 = Src;
      *(_QWORD *)(Pool2 + 8) = 16LL;
      *(_QWORD *)(Pool2 + 16) = v15;
      *(_DWORD *)(Pool2 + 24) = Size;
      memmove((void *)(Pool2 + 32), v28, Size);
      --v26->KernelApcDisable;
      v22 = v21 + 1;
      v29 = KeAbPreAcquire((__int64)v21, 0LL);
      if ( _InterlockedCompareExchange64(v21, 17LL, 0LL) )
        ExfAcquirePushLockSharedEx(v21, 0, v29, (unsigned __int64)v21);
      if ( v29 )
        *((_BYTE *)v29 + 10) = 1;
      v24 = P;
    }
  }
  while ( 1 )
  {
    if ( *(_QWORD *)(v25 + 16) != v15 )
    {
      if ( *(_QWORD *)(v25 + 16) > v15 )
        goto LABEL_18;
      goto LABEL_30;
    }
    if ( *(_DWORD *)(v25 + 24) == Size && !memcmp(Src, (const void *)(v25 + 32), v63) )
      break;
LABEL_30:
    v22 = (volatile signed __int64 *)v25;
    v25 = *(_QWORD *)v25;
    if ( !v25 )
    {
LABEL_18:
      v24 = P;
      goto LABEL_19;
    }
  }
  if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v25 + 8), 0x10uLL) <= 0 )
    __fastfail(0xEu);
  if ( _InterlockedCompareExchange64(v21, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v21);
  KeAbPostRelease((ULONG_PTR)v21);
  KeLeaveCriticalRegionThread((__int64)v61);
  v8 = v25 + 32;
  if ( P )
    ExFreePoolWithTag(P, 0x6353624Fu);
LABEL_38:
  v30 = 0;
  if ( *(_BYTE *)SecurityDescriptor == 1 )
  {
    v31 = *((_WORD *)SecurityDescriptor + 1);
    if ( v31 >= 0 )
    {
      v33 = (char *)*((_QWORD *)SecurityDescriptor + 2);
    }
    else
    {
      v32 = *((unsigned int *)SecurityDescriptor + 2);
      if ( (_DWORD)v32 )
        v33 = (char *)SecurityDescriptor + v32;
      else
        v33 = 0LL;
    }
    if ( (v31 & 4) != 0 )
    {
      if ( v31 >= 0 )
      {
        v35 = (char *)*((_QWORD *)SecurityDescriptor + 4);
      }
      else
      {
        v34 = *((unsigned int *)SecurityDescriptor + 4);
        if ( (_DWORD)v34 )
          v35 = (char *)SecurityDescriptor + v34;
        else
          v35 = 0LL;
      }
    }
    else
    {
      v35 = 0LL;
    }
    if ( v33 )
      v30 = (4 * (unsigned __int8)v33[1] + 11) & 0xFFFFFFFC;
    if ( v35 )
      v30 += (*((unsigned __int16 *)v35 + 1) + 3) & 0xFFFFFFFC;
    v36 = a1 - 48;
    if ( *(_QWORD *)(a1 - 16) == 1LL )
    {
LABEL_60:
      v16 = 0;
      if ( v8 )
        v42 = v8 | 0xF;
      else
        v42 = 0LL;
      v43 = _InterlockedExchange64((volatile __int64 *)(a1 - 8), v42);
      v8 = 0LL;
      v7 = (v43 & 0xF) + 1;
    }
    else
    {
      if ( (*(_BYTE *)(v36 + 26) & 8) != 0 )
        v37 = v36 - ObpInfoMaskToOffset[*(_BYTE *)(v36 + 26) & 0xF];
      else
        v37 = 0LL;
      Process = KeGetCurrentThread()->ApcState.Process;
      if ( Process == PsInitialSystemProcess )
      {
        v40 = 1LL;
        goto LABEL_57;
      }
      SchedulingGroup = Process[1].SchedulingGroup;
      if ( !v30 || (int)PspChargeQuota((__int64)Process[1].SchedulingGroup, 0LL, 1, v30) >= 0 )
      {
        _InterlockedIncrement((volatile signed __int32 *)&SchedulingGroup->PerProcessor[0].ReadyListHead[15]);
        v40 = (__int64)SchedulingGroup;
        if ( SchedulingGroup )
        {
LABEL_57:
          v41 = *(void **)(v37 + 16);
          if ( v41 )
            PsReturnSharedPoolQuota(v41);
          *(_DWORD *)(v37 + 8) = v30;
          *(_QWORD *)(v37 + 16) = v40;
          goto LABEL_60;
        }
      }
      v16 = -1073741756;
    }
  }
  else
  {
    v16 = -1073741736;
  }
LABEL_63:
  v14 = v60;
LABEL_64:
  _m_prefetchw((const void *)(a1 - 32));
  v44 = *(_QWORD *)(a1 - 32);
  v45 = v44 - 16;
  if ( (v44 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
    v45 = 0LL;
  if ( (v44 & 2) != 0
    || (v46 = *(_QWORD *)(a1 - 32), v46 != _InterlockedCompareExchange64((volatile signed __int64 *)(a1 - 32), v45, v44)) )
  {
    ExfReleasePushLock((_QWORD *)(a1 - 32));
  }
  KeAbPostRelease(a1 - 32);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  if ( v8 )
    ObDereferenceSecurityDescriptor(v8, 0x10u);
  if ( v14 && v7 )
  {
    v47 = (volatile signed __int64 *)(v14 - 32);
    _m_prefetchw(v14 - 24);
    v48 = *((_QWORD *)v14 - 3);
    while ( v48 - v7 > 0 )
    {
      v49 = v48;
      v48 = _InterlockedCompareExchange64(v47 + 1, v48 - v7, v48);
      if ( v49 == v48 )
        goto LABEL_75;
    }
    if ( v48 != v7 )
      __fastfail(0xEu);
    v51 = KeGetCurrentThread();
    v52 = (unsigned __int64 *)((char *)&ObsSecurityDescriptorCache + 16 * (unsigned __int8)*((_DWORD *)v47 + 4));
    --v51->KernelApcDisable;
    v53 = (volatile signed __int64 *)(v52 + 1);
    v54 = KeAbPreAcquire((__int64)v52, 0LL);
    v55 = v54;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v52, 0LL) )
      ExfAcquirePushLockExclusiveEx(v52, v54, (__int64)v52);
    if ( v55 )
      *((_BYTE *)v55 + 10) = 1;
    v56 = _InterlockedExchangeAdd64(v47 + 1, -v7) - v7;
    if ( v56 > 0 )
    {
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v52, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)v52);
      KeAbPostRelease((ULONG_PTR)v52);
      KeLeaveCriticalRegionThread((__int64)v51);
    }
    else
    {
      if ( v56 )
        __fastfail(0xEu);
      for ( i = (volatile signed __int64 *)*v53; i != v47; i = (volatile signed __int64 *)*i )
        v53 = i;
      *v53 = *v47;
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v52, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)v52);
      KeAbPostRelease((ULONG_PTR)v52);
      KeLeaveCriticalRegionThread((__int64)v51);
      ExFreePoolWithTag((PVOID)v47, 0x6353624Fu);
    }
  }
LABEL_75:
  if ( SecurityDescriptor )
    ExFreePoolWithTag(SecurityDescriptor, 0);
  return (unsigned int)v16;
}
