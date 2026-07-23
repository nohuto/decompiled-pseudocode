/*
 * XREFs of SeDefaultObjectMethod @ 0x1408A1150
 * Callers:
 *     NtQuerySecurityObject @ 0x14086F0A0 (NtQuerySecurityObject.c)
 *     ObSetSecurityObjectByPointer @ 0x14089F830 (ObSetSecurityObjectByPointer.c)
 *     ObInsertObjectEx @ 0x1408A05E0 (ObInsertObjectEx.c)
 *     ObpAssignSecurity @ 0x1408A0F50 (ObpAssignSecurity.c)
 *     SepAppendAceToTokenObjectAcl @ 0x1408A43D0 (SepAppendAceToTokenObjectAcl.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     ExfReleasePushLockShared @ 0x14029B450 (ExfReleasePushLockShared.c)
 *     ExfAcquirePushLockSharedEx @ 0x14029B5A0 (ExfAcquirePushLockSharedEx.c)
 *     KeLeaveCriticalRegionThread @ 0x14029B9C0 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1403D62D0 (ExfTryToWakePushLock.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 *     memmove @ 0x1406B4940 (memmove.c)
 *     memcmp @ 0x1406B4C10 (memcmp.c)
 *     ObDereferenceSecurityDescriptor @ 0x14086EF20 (ObDereferenceSecurityDescriptor.c)
 *     SeQuerySecurityDescriptorInfo @ 0x140870750 (SeQuerySecurityDescriptorInfo.c)
 *     ObpReferenceSecurityDescriptor @ 0x1408A4FB0 (ObpReferenceSecurityDescriptor.c)
 *     ObSetSecurityDescriptorInfo @ 0x140919920 (ObSetSecurityDescriptorInfo.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SeDefaultObjectMethod(
        __int64 a1,
        int a2,
        DWORD *a3,
        unsigned __int64 a4,
        ULONG *Length,
        __int64 *a6,
        int a7,
        __int64 a8)
{
  __int64 v10; // rbx
  char v11; // di
  unsigned int v12; // edi
  _QWORD *v13; // rbx
  signed __int64 v14; // rax
  signed __int64 v15; // rtt
  int v17; // edx
  __int16 v18; // cx
  unsigned int *v19; // rdx
  unsigned int v20; // ebp
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  unsigned __int64 v29; // rbx
  unsigned __int64 v30; // rcx
  _QWORD *v31; // rax
  __int64 v32; // rbx
  signed __int64 *v33; // r15
  volatile signed __int64 *v34; // r12
  __int64 *v35; // rdi
  signed __int64 *v36; // rcx
  signed __int64 v37; // rdi
  __int64 Pool2; // rax
  __int64 *v39; // rdi
  char *v40; // r13
  unsigned int v41; // ebx
  unsigned int v42; // r14d
  struct _KTHREAD *CurrentThread; // r15
  unsigned __int64 *v44; // rsi
  _QWORD **v45; // r14
  __int64 *v46; // rax
  __int64 *v47; // rbp
  signed __int64 v48; // rcx
  _QWORD *i; // rcx
  __int64 v50; // rdi
  __int64 v51; // rbp
  unsigned int v52; // ebx
  signed __int64 v53; // rax
  signed __int64 v54; // rtt
  _QWORD *P; // [rsp+30h] [rbp-48h]
  struct _KTHREAD *v56; // [rsp+38h] [rbp-40h]
  PSECURITY_DESCRIPTOR ObjectsSecurityDescriptor; // [rsp+40h] [rbp-38h] BYREF

  if ( a2 == 2 )
  {
    v10 = *a6;
    v11 = *a6;
    *a6 = 0LL;
    v12 = (v11 & 0xF) + 1;
    v13 = (_QWORD *)((v10 & 0xFFFFFFFFFFFFFFF0uLL) - 32);
    _m_prefetchw(v13 + 1);
    v14 = v13[1];
    while ( v14 - v12 > 0 )
    {
      v15 = v14;
      v14 = _InterlockedCompareExchange64(v13 + 1, v14 - v12, v14);
      if ( v15 == v14 )
        return 0LL;
    }
    if ( v14 != v12 )
      __fastfail(0xEu);
    CurrentThread = KeGetCurrentThread();
    v44 = (unsigned __int64 *)((char *)&ObsSecurityDescriptorCache + 16 * (unsigned __int8)*((_DWORD *)v13 + 4));
    --CurrentThread->KernelApcDisable;
    v45 = (_QWORD **)(v44 + 1);
    v46 = KeAbPreAcquire((__int64)v44, 0LL);
    v47 = v46;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v44, 0LL) )
      ExfAcquirePushLockExclusiveEx(v44, v46, (__int64)v44);
    if ( v47 )
      *((_BYTE *)v47 + 10) = 1;
    v48 = _InterlockedExchangeAdd64(v13 + 1, -v12) - v12;
    if ( v48 > 0 )
    {
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v44, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)v44);
      KeAbPostRelease((ULONG_PTR)v44);
      KeLeaveCriticalRegionThread((__int64)CurrentThread);
    }
    else
    {
      if ( v48 )
        __fastfail(0xEu);
      for ( i = *v45; i != v13; i = (_QWORD *)*i )
        v45 = (_QWORD **)i;
      *v45 = (_QWORD *)*v13;
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v44, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)v44);
      KeAbPostRelease((ULONG_PTR)v44);
      KeLeaveCriticalRegionThread((__int64)CurrentThread);
      ExFreePoolWithTag(v13, 0x6353624Fu);
    }
    return 0LL;
  }
  if ( !a2 )
    return ObSetSecurityDescriptorInfo(a1, (_DWORD)a3, a4, (_DWORD)a6, a7, a8);
  v17 = a2 - 1;
  if ( !v17 )
  {
    v50 = a1 - 48;
    ObjectsSecurityDescriptor = (PSECURITY_DESCRIPTOR)ObpReferenceSecurityDescriptor(a1 - 48);
    v51 = (__int64)ObjectsSecurityDescriptor;
    v52 = SeQuerySecurityDescriptorInfo(a3, (PSECURITY_DESCRIPTOR)a4, Length, &ObjectsSecurityDescriptor);
    if ( v51 )
    {
      _m_prefetchw((const void *)(v50 + 40));
      v53 = *(_QWORD *)(v50 + 40);
      while ( (v53 ^ (unsigned __int64)v51) < 0xF )
      {
        v54 = v53;
        v53 = _InterlockedCompareExchange64((volatile signed __int64 *)(v50 + 40), v53 + 1, v53);
        if ( v54 == v53 )
          return v52;
      }
      ObDereferenceSecurityDescriptor(v51, 1u);
    }
    return v52;
  }
  if ( v17 != 2 )
    KeBugCheckEx(0x29u, 0LL, 0xFFFFFFFFC000000DuLL, 0LL, 0LL);
  if ( !a4 )
  {
    v42 = 0;
    *(_QWORD *)(a1 - 8) = 0LL;
    return v42;
  }
  v18 = *(_WORD *)(a4 + 2);
  v19 = (unsigned int *)(a4 + 8);
  v20 = ((v18 >> 31) & 0xFFFFFFEC) + 40;
  if ( v18 >= 0 )
  {
    v22 = *(_QWORD *)v19;
  }
  else
  {
    v21 = *(unsigned int *)(a4 + 4);
    if ( !(_DWORD)v21 )
      goto LABEL_16;
    v22 = a4 + v21;
  }
  if ( v22 )
    v20 += (4 * *(unsigned __int8 *)(v22 + 1) + 11) & 0xFFFFFFFC;
  if ( v18 >= 0 )
  {
    v24 = *(_QWORD *)(a4 + 16);
    goto LABEL_18;
  }
LABEL_16:
  v23 = *v19;
  if ( !(_DWORD)v23 )
    goto LABEL_20;
  v24 = a4 + v23;
LABEL_18:
  if ( v24 )
    v20 += (4 * *(unsigned __int8 *)(v24 + 1) + 11) & 0xFFFFFFFC;
LABEL_20:
  if ( (v18 & 4) == 0 )
    goto LABEL_26;
  if ( v18 >= 0 )
  {
    v26 = *(_QWORD *)(a4 + 32);
  }
  else
  {
    v25 = *(unsigned int *)(a4 + 16);
    if ( !(_DWORD)v25 )
      goto LABEL_26;
    v26 = a4 + v25;
  }
  if ( v26 )
    v20 += (*(unsigned __int16 *)(v26 + 2) + 3) & 0xFFFFFFFC;
LABEL_26:
  if ( (v18 & 0x10) == 0 )
    goto LABEL_32;
  if ( v18 >= 0 )
  {
    v28 = *(_QWORD *)(a4 + 24);
  }
  else
  {
    v27 = *(unsigned int *)(a4 + 12);
    if ( !(_DWORD)v27 )
      goto LABEL_32;
    v28 = a4 + v27;
  }
  if ( v28 )
    v20 += (*(unsigned __int16 *)(v28 + 2) + 3) & 0xFFFFFFFC;
LABEL_32:
  v29 = 0LL;
  v30 = a4 + (v20 & 0xFFFFFFF8);
  v31 = (_QWORD *)a4;
  if ( a4 < v30 )
  {
    do
    {
      v32 = *v31 ^ v29;
      v31 += 2;
      v29 = __ROL8__(v32, 3);
    }
    while ( (unsigned __int64)v31 < v30 );
  }
  v56 = KeGetCurrentThread();
  --v56->KernelApcDisable;
  v33 = (signed __int64 *)((char *)&ObsSecurityDescriptorCache + 16 * (unsigned __int8)v29);
  P = 0LL;
  v34 = v33 + 1;
  v35 = KeAbPreAcquire((__int64)v33, 0LL);
  if ( _InterlockedCompareExchange64(v33, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(v33, 0, v35, (unsigned __int64)v33);
  if ( v35 )
    *((_BYTE *)v35 + 10) = 1;
  v36 = 0LL;
  while ( 1 )
  {
    v37 = *v34;
    if ( *v34 )
      break;
LABEL_43:
    if ( v36 )
    {
      *v36 = v37;
      v34 = (volatile signed __int64 *)_InterlockedCompareExchange64(v34, (signed __int64)v36, v37);
      if ( (volatile signed __int64 *)v37 == v34 )
      {
        if ( _InterlockedCompareExchange64(v33, 0LL, 17LL) != 17 )
          ExfReleasePushLockShared(v33);
        KeAbPostRelease((ULONG_PTR)v33);
        KeLeaveCriticalRegionThread((__int64)v56);
        v40 = (char *)(P + 4);
        goto LABEL_61;
      }
    }
    else
    {
      if ( _InterlockedCompareExchange64(v33, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared(v33);
      KeAbPostRelease((ULONG_PTR)v33);
      KeLeaveCriticalRegionThread((__int64)v56);
      if ( v20 + 40 < v20 )
        return (unsigned int)-1073741670;
      Pool2 = ExAllocatePool2(0x108uLL);
      P = (_QWORD *)Pool2;
      if ( !Pool2 )
        return (unsigned int)-1073741670;
      *(_QWORD *)(Pool2 + 8) = 16LL;
      *(_QWORD *)(Pool2 + 16) = v29;
      *(_DWORD *)(Pool2 + 24) = v20;
      memmove((void *)(Pool2 + 32), (const void *)a4, v20);
      --v56->KernelApcDisable;
      v34 = v33 + 1;
      v39 = KeAbPreAcquire((__int64)v33, 0LL);
      if ( _InterlockedCompareExchange64(v33, 17LL, 0LL) )
        ExfAcquirePushLockSharedEx(v33, 0, v39, (unsigned __int64)v33);
      v36 = P;
      if ( v39 )
        *((_BYTE *)v39 + 10) = 1;
    }
  }
  while ( 1 )
  {
    if ( *(_QWORD *)(v37 + 16) != v29 )
    {
      if ( *(_QWORD *)(v37 + 16) > v29 )
        goto LABEL_42;
      goto LABEL_53;
    }
    if ( *(_DWORD *)(v37 + 24) == v20 )
    {
      v40 = (char *)(v37 + 32);
      if ( !memcmp((const void *)a4, (const void *)(v37 + 32), v20) )
        break;
    }
LABEL_53:
    v34 = (volatile signed __int64 *)v37;
    v37 = *(_QWORD *)v37;
    if ( !v37 )
    {
LABEL_42:
      v36 = P;
      goto LABEL_43;
    }
  }
  if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v37 + 8), 0x10uLL) <= 0 )
    __fastfail(0xEu);
  if ( _InterlockedCompareExchange64(v33, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v33);
  KeAbPostRelease((ULONG_PTR)v33);
  KeLeaveCriticalRegionThread((__int64)v56);
  if ( P )
    ExFreePoolWithTag(P, 0x6353624Fu);
LABEL_61:
  v41 = 0;
  ExFreePoolWithTag((PVOID)a4, 0);
  if ( v40 )
    *(_QWORD *)(a1 - 8) = v40 + 15;
  else
    *(_QWORD *)(a1 - 8) = 0LL;
  return v41;
}
