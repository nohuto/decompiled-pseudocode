/*
 * XREFs of ObSetSecurityDescriptorInfo @ 0x140854B90
 * Callers:
 *     SeDefaultObjectMethod @ 0x140854470 (SeDefaultObjectMethod.c)
 *     WmipSecurityMethod @ 0x140989620 (WmipSecurityMethod.c)
 * Callees:
 *     PspChargeQuota @ 0x14027BB30 (PspChargeQuota.c)
 *     KeLeaveCriticalRegionThread @ 0x140289BB0 (KeLeaveCriticalRegionThread.c)
 *     ExfReleasePushLockShared @ 0x14028E410 (ExfReleasePushLockShared.c)
 *     ExfReleasePushLock @ 0x14028E870 (ExfReleasePushLock.c)
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x14031F9EC (ExfAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     memcmp @ 0x1406C0E10 (memcmp.c)
 *     RtlpSetSecurityObject @ 0x140855250 (RtlpSetSecurityObject.c)
 *     RtlLengthSecurityDescriptor @ 0x1408565C0 (RtlLengthSecurityDescriptor.c)
 *     PsReturnSharedPoolQuota @ 0x140856970 (PsReturnSharedPoolQuota.c)
 *     ObDereferenceSecurityDescriptor @ 0x14087E040 (ObDereferenceSecurityDescriptor.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ObSetSecurityDescriptorInfo(__int64 a1, _DWORD *a2, int a3, __int64 a4, int a5, __int64 a6)
{
  unsigned int v7; // edi
  signed __int64 v8; // rbx
  struct _KTHREAD *CurrentThread; // rax
  char *v12; // rax
  char *v13; // rbp
  char *v14; // r13
  unsigned __int64 v15; // rsi
  int v16; // ebp
  char *v17; // rbp
  char *v18; // rdx
  char *v19; // rcx
  __int64 v20; // rsi
  signed __int64 *v21; // r13
  volatile signed __int64 *v22; // r15
  char *v23; // rbp
  signed __int64 v24; // r14
  char *v25; // rbp
  struct _KTHREAD *v26; // rbp
  __int64 Pool2; // rax
  void *v28; // rdx
  unsigned int v29; // ebp
  __int16 v30; // dx
  __int64 v31; // rcx
  char *v32; // rcx
  __int64 v33; // rdx
  char *v34; // rdx
  __int64 v35; // rsi
  __int64 v36; // rsi
  _KPROCESS *Process; // rcx
  _KSCHEDULING_GROUP *SchedulingGroup; // r14
  __int64 v39; // r15
  void *v40; // rcx
  __int64 v41; // rbx
  char v42; // di
  signed __int64 v43; // rax
  signed __int64 v44; // rdx
  __int64 v45; // rtt
  volatile signed __int64 *v46; // rbx
  signed __int64 v47; // rax
  signed __int64 v48; // rtt
  struct _KTHREAD *v50; // r12
  unsigned __int64 *v51; // r14
  volatile signed __int64 *v52; // rsi
  char *v53; // rax
  char *v54; // r15
  signed __int64 v55; // rcx
  volatile signed __int64 *i; // rax
  PSECURITY_DESCRIPTOR SecurityDescriptor; // [rsp+40h] [rbp-68h] BYREF
  char *v58; // [rsp+48h] [rbp-60h]
  PVOID P; // [rsp+50h] [rbp-58h]
  struct _KTHREAD *v60; // [rsp+58h] [rbp-50h]
  void *Src; // [rsp+60h] [rbp-48h]
  size_t v62; // [rsp+68h] [rbp-40h]
  ULONG Size; // [rsp+B0h] [rbp+8h]

  v7 = 0;
  v8 = 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v12 = (char *)KeAbPreAcquire(a1 - 32, 0LL);
  v13 = v12;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(a1 - 32), 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(a1 - 32), v12, a1 - 32);
  if ( v13 )
    v13[10] = 1;
  v14 = (char *)(*(_QWORD *)(a1 - 8) & 0xFFFFFFFFFFFFFFF0uLL);
  v58 = v14;
  SecurityDescriptor = v14;
  if ( !v14 )
  {
    v16 = -1073741609;
    goto LABEL_58;
  }
  v15 = 0LL;
  v16 = RtlpSetSecurityObject(a1, *a2, a3, (unsigned int)&SecurityDescriptor, 0, a5, a6, 0LL);
  if ( v16 < 0 )
  {
LABEL_58:
    SecurityDescriptor = 0LL;
    goto LABEL_62;
  }
  v17 = (char *)SecurityDescriptor;
  Src = SecurityDescriptor;
  Size = RtlLengthSecurityDescriptor(SecurityDescriptor);
  v62 = Size;
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
  v21 = (signed __int64 *)((char *)&ObsSecurityDescriptorCache + 16 * (unsigned __int8)v15);
  v60 = KeGetCurrentThread();
  --v60->KernelApcDisable;
LABEL_11:
  v22 = v21 + 1;
  v23 = (char *)KeAbPreAcquire((__int64)v21, 0LL);
  if ( _InterlockedCompareExchange64(v21, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(v21, 0, v23, (__int64)v21);
  if ( v23 )
    v23[10] = 1;
  while ( 1 )
  {
    v24 = *v22;
    if ( *v22 )
      break;
LABEL_18:
    v25 = (char *)P;
    if ( !P )
    {
      if ( _InterlockedCompareExchange64(v21, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared(v21);
      KeAbPostRelease((ULONG_PTR)v21);
      v26 = v60;
      KeLeaveCriticalRegionThread();
      if ( Size + 40 < Size || (Pool2 = ExAllocatePool2(0x108uLL, Size + 40, 0x6353624Fu), (P = (PVOID)Pool2) == 0LL) )
      {
        v16 = -1073741670;
        goto LABEL_61;
      }
      v28 = Src;
      *(_QWORD *)(Pool2 + 8) = 16LL;
      *(_QWORD *)(Pool2 + 16) = v15;
      *(_DWORD *)(Pool2 + 24) = Size;
      memmove((void *)(Pool2 + 32), v28, Size);
      --v26->KernelApcDisable;
      goto LABEL_11;
    }
    *(_QWORD *)P = v24;
    v22 = (volatile signed __int64 *)_InterlockedCompareExchange64(v22, (signed __int64)v25, v24);
    if ( (volatile signed __int64 *)v24 == v22 )
    {
      if ( _InterlockedCompareExchange64(v21, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared(v21);
      KeAbPostRelease((ULONG_PTR)v21);
      KeLeaveCriticalRegionThread();
      v8 = (signed __int64)(v25 + 32);
      goto LABEL_33;
    }
  }
  while ( *(_QWORD *)(v24 + 16) != v15 )
  {
    if ( *(_QWORD *)(v24 + 16) > v15 )
      goto LABEL_18;
LABEL_25:
    v22 = (volatile signed __int64 *)v24;
    v24 = *(_QWORD *)v24;
    if ( !v24 )
      goto LABEL_18;
  }
  if ( *(_DWORD *)(v24 + 24) != Size || memcmp(Src, (const void *)(v24 + 32), v62) )
    goto LABEL_25;
  if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v24 + 8), 0x10uLL) <= 0 )
    __fastfail(0xEu);
  if ( _InterlockedCompareExchange64(v21, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v21);
  KeAbPostRelease((ULONG_PTR)v21);
  KeLeaveCriticalRegionThread();
  v8 = v24 + 32;
  if ( P )
    ExFreePoolWithTag(P, 0x6353624Fu);
LABEL_33:
  v29 = 0;
  if ( *(_BYTE *)SecurityDescriptor == 1 )
  {
    v30 = *((_WORD *)SecurityDescriptor + 1);
    if ( v30 >= 0 )
    {
      v32 = (char *)*((_QWORD *)SecurityDescriptor + 2);
    }
    else
    {
      v31 = *((unsigned int *)SecurityDescriptor + 2);
      if ( (_DWORD)v31 )
        v32 = (char *)SecurityDescriptor + v31;
      else
        v32 = 0LL;
    }
    if ( (v30 & 4) != 0 )
    {
      if ( v30 >= 0 )
      {
        v34 = (char *)*((_QWORD *)SecurityDescriptor + 4);
      }
      else
      {
        v33 = *((unsigned int *)SecurityDescriptor + 4);
        if ( (_DWORD)v33 )
          v34 = (char *)SecurityDescriptor + v33;
        else
          v34 = 0LL;
      }
    }
    else
    {
      v34 = 0LL;
    }
    if ( v32 )
      v29 = (4 * (unsigned __int8)v32[1] + 11) & 0xFFFFFFFC;
    if ( v34 )
      v29 += (*((unsigned __int16 *)v34 + 1) + 3) & 0xFFFFFFFC;
    v35 = a1 - 48;
    if ( *(_QWORD *)(a1 - 16) == 1LL )
    {
LABEL_55:
      v16 = 0;
      if ( v8 )
        v41 = v8 | 0xF;
      else
        v41 = 0LL;
      v42 = _InterlockedExchange64((volatile __int64 *)(a1 - 8), v41);
      v8 = 0LL;
      v7 = (v42 & 0xF) + 1;
    }
    else
    {
      if ( (*(_BYTE *)(v35 + 26) & 8) != 0 )
        v36 = v35 - ObpInfoMaskToOffset[*(_BYTE *)(v35 + 26) & 0xF];
      else
        v36 = 0LL;
      Process = KeGetCurrentThread()->ApcState.Process;
      if ( Process == PsInitialSystemProcess )
      {
        v39 = 1LL;
        goto LABEL_52;
      }
      SchedulingGroup = Process[1].SchedulingGroup;
      if ( !v29 || (int)PspChargeQuota((__int64)Process[1].SchedulingGroup, 0LL, 1, v29) >= 0 )
      {
        _InterlockedIncrement((volatile signed __int32 *)&SchedulingGroup->PerProcessor[0].ReadyListHead[15]);
        v39 = (__int64)SchedulingGroup;
        if ( SchedulingGroup )
        {
LABEL_52:
          v40 = *(void **)(v36 + 16);
          if ( v40 )
            PsReturnSharedPoolQuota(v40);
          *(_DWORD *)(v36 + 8) = v29;
          *(_QWORD *)(v36 + 16) = v39;
          goto LABEL_55;
        }
      }
      v16 = -1073741756;
    }
  }
  else
  {
    v16 = -1073741736;
  }
LABEL_61:
  v14 = v58;
LABEL_62:
  _m_prefetchw((const void *)(a1 - 32));
  v43 = *(_QWORD *)(a1 - 32);
  v44 = v43 - 16;
  if ( (v43 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
    v44 = 0LL;
  if ( (v43 & 2) != 0
    || (v45 = *(_QWORD *)(a1 - 32), v45 != _InterlockedCompareExchange64((volatile signed __int64 *)(a1 - 32), v44, v43)) )
  {
    ExfReleasePushLock((_QWORD *)(a1 - 32));
  }
  KeAbPostRelease(a1 - 32);
  KeLeaveCriticalRegionThread();
  if ( v8 )
    ObDereferenceSecurityDescriptor(v8, 16LL);
  if ( v14 && v7 )
  {
    v46 = (volatile signed __int64 *)(v14 - 32);
    _m_prefetchw(v14 - 24);
    v47 = *((_QWORD *)v14 - 3);
    while ( v47 - v7 > 0 )
    {
      v48 = v47;
      v47 = _InterlockedCompareExchange64(v46 + 1, v47 - v7, v47);
      if ( v48 == v47 )
        goto LABEL_73;
    }
    if ( v47 != v7 )
      __fastfail(0xEu);
    v50 = KeGetCurrentThread();
    v51 = (unsigned __int64 *)((char *)&ObsSecurityDescriptorCache + 16 * (unsigned __int8)*((_DWORD *)v46 + 4));
    --v50->KernelApcDisable;
    v52 = (volatile signed __int64 *)(v51 + 1);
    v53 = (char *)KeAbPreAcquire((__int64)v51, 0LL);
    v54 = v53;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v51, 0LL) )
      ExfAcquirePushLockExclusiveEx(v51, v53, (__int64)v51);
    if ( v54 )
      v54[10] = 1;
    v55 = _InterlockedExchangeAdd64(v46 + 1, -v7) - v7;
    if ( v55 > 0 )
    {
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v51, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)v51);
      KeAbPostRelease((ULONG_PTR)v51);
      KeLeaveCriticalRegionThread();
    }
    else
    {
      if ( v55 )
        __fastfail(0xEu);
      for ( i = (volatile signed __int64 *)*v52; i != v46; i = (volatile signed __int64 *)*i )
        v52 = i;
      *v52 = *v46;
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v51, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)v51);
      KeAbPostRelease((ULONG_PTR)v51);
      KeLeaveCriticalRegionThread();
      ExFreePoolWithTag(v14 - 32, 0x6353624Fu);
    }
  }
LABEL_73:
  if ( SecurityDescriptor )
    ExFreePoolWithTag(SecurityDescriptor, 0);
  return (unsigned int)v16;
}
