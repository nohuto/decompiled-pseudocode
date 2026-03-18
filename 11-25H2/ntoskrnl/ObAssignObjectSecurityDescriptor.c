/*
 * XREFs of ObAssignObjectSecurityDescriptor @ 0x1409A52A0
 * Callers:
 *     WmipSecurityMethod @ 0x1409A5180 (WmipSecurityMethod.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     ExfReleasePushLockShared @ 0x14029B450 (ExfReleasePushLockShared.c)
 *     ExfAcquirePushLockSharedEx @ 0x14029B5A0 (ExfAcquirePushLockSharedEx.c)
 *     KeLeaveCriticalRegionThread @ 0x14029B9C0 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     memmove @ 0x1406B4940 (memmove.c)
 *     memcmp @ 0x1406B4C10 (memcmp.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ObAssignObjectSecurityDescriptor(__int64 a1, unsigned __int64 a2)
{
  int v3; // ecx
  unsigned int v4; // esi
  __int64 v5; // rax
  __int64 v6; // rax
  unsigned int *v7; // rdx
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  unsigned __int64 v14; // rbx
  unsigned __int64 v15; // rcx
  _QWORD *v16; // rax
  __int64 v17; // rbx
  signed __int64 *v18; // r14
  volatile signed __int64 *v19; // r15
  __int64 *v20; // rdi
  signed __int64 v21; // rdi
  __int64 Pool2; // rax
  __int64 *v23; // rdi
  _QWORD *v24; // r15
  unsigned int v25; // ebx
  _QWORD *P; // [rsp+78h] [rbp+10h]
  struct _KTHREAD *CurrentThread; // [rsp+88h] [rbp+20h]

  if ( !a2 )
  {
    *(_QWORD *)(a1 - 8) = 0LL;
    return 0LL;
  }
  v3 = *(__int16 *)(a2 + 2);
  v4 = ((v3 >> 31) & 0xFFFFFFEC) + 40;
  if ( (v3 & 0x8000u) == 0 )
  {
    v6 = *(_QWORD *)(a2 + 8);
    v7 = (unsigned int *)(a2 + 8);
  }
  else
  {
    v5 = *(unsigned int *)(a2 + 4);
    if ( !(_DWORD)v5 )
    {
      v7 = (unsigned int *)(a2 + 8);
      goto LABEL_8;
    }
    v6 = a2 + v5;
    v7 = (unsigned int *)(a2 + 8);
  }
  if ( v6 )
    v4 += (4 * *(unsigned __int8 *)(v6 + 1) + 11) & 0xFFFFFFFC;
  if ( (v3 & 0x8000u) == 0 )
  {
    v9 = *(_QWORD *)(a2 + 16);
    goto LABEL_10;
  }
LABEL_8:
  v8 = *v7;
  if ( !(_DWORD)v8 )
    goto LABEL_12;
  v9 = a2 + v8;
LABEL_10:
  if ( v9 )
    v4 += (4 * *(unsigned __int8 *)(v9 + 1) + 11) & 0xFFFFFFFC;
LABEL_12:
  if ( (v3 & 4) == 0 )
    goto LABEL_18;
  if ( (v3 & 0x8000u) == 0 )
  {
    v11 = *(_QWORD *)(a2 + 32);
  }
  else
  {
    v10 = *(unsigned int *)(a2 + 16);
    if ( !(_DWORD)v10 )
      goto LABEL_18;
    v11 = a2 + v10;
  }
  if ( v11 )
    v4 += (*(unsigned __int16 *)(v11 + 2) + 3) & 0xFFFFFFFC;
LABEL_18:
  if ( (v3 & 0x10) == 0 )
    goto LABEL_24;
  if ( (v3 & 0x8000u) == 0 )
  {
    v13 = *(_QWORD *)(a2 + 24);
  }
  else
  {
    v12 = *(unsigned int *)(a2 + 12);
    if ( !(_DWORD)v12 )
      goto LABEL_24;
    v13 = a2 + v12;
  }
  if ( v13 )
    v4 += (*(unsigned __int16 *)(v13 + 2) + 3) & 0xFFFFFFFC;
LABEL_24:
  v14 = 0LL;
  v15 = a2 + (v4 & 0xFFFFFFF8);
  v16 = (_QWORD *)a2;
  if ( a2 < v15 )
  {
    do
    {
      v17 = *v16 ^ v14;
      v16 += 2;
      v14 = __ROL8__(v17, 3);
    }
    while ( (unsigned __int64)v16 < v15 );
  }
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v18 = (signed __int64 *)((char *)&ObsSecurityDescriptorCache + 16 * (unsigned __int8)v14);
  P = 0LL;
  v19 = v18 + 1;
  v20 = KeAbPreAcquire((__int64)v18, 0LL);
  if ( _InterlockedCompareExchange64(v18, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(v18, 0, v20, (unsigned __int64)v18);
  if ( v20 )
    *((_BYTE *)v20 + 10) = 1;
  while ( 1 )
  {
    v21 = *v19;
    if ( *v19 )
      break;
LABEL_33:
    if ( P )
    {
      *P = v21;
      v19 = (volatile signed __int64 *)_InterlockedCompareExchange64(v19, (signed __int64)P, v21);
      if ( (volatile signed __int64 *)v21 == v19 )
      {
        if ( _InterlockedCompareExchange64(v18, 0LL, 17LL) != 17 )
          ExfReleasePushLockShared(v18);
        KeAbPostRelease((ULONG_PTR)v18);
        KeLeaveCriticalRegionThread((__int64)CurrentThread);
        v24 = P + 4;
        goto LABEL_51;
      }
    }
    else
    {
      if ( _InterlockedCompareExchange64(v18, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared(v18);
      KeAbPostRelease((ULONG_PTR)v18);
      KeLeaveCriticalRegionThread((__int64)CurrentThread);
      if ( v4 + 40 < v4 )
        return (unsigned int)-1073741670;
      Pool2 = ExAllocatePool2(0x108uLL);
      P = (_QWORD *)Pool2;
      if ( !Pool2 )
        return (unsigned int)-1073741670;
      *(_QWORD *)(Pool2 + 8) = 16LL;
      *(_QWORD *)(Pool2 + 16) = v14;
      *(_DWORD *)(Pool2 + 24) = v4;
      memmove((void *)(Pool2 + 32), (const void *)a2, v4);
      --CurrentThread->KernelApcDisable;
      v19 = v18 + 1;
      v23 = KeAbPreAcquire((__int64)v18, 0LL);
      if ( _InterlockedCompareExchange64(v18, 17LL, 0LL) )
        ExfAcquirePushLockSharedEx(v18, 0, v23, (unsigned __int64)v18);
      if ( v23 )
        *((_BYTE *)v23 + 10) = 1;
    }
  }
  while ( 1 )
  {
    if ( *(_QWORD *)(v21 + 16) != v14 )
    {
      if ( *(_QWORD *)(v21 + 16) > v14 )
        goto LABEL_33;
      goto LABEL_43;
    }
    if ( *(_DWORD *)(v21 + 24) == v4 )
    {
      v24 = (_QWORD *)(v21 + 32);
      if ( !memcmp((const void *)a2, (const void *)(v21 + 32), v4) )
        break;
    }
LABEL_43:
    v19 = (volatile signed __int64 *)v21;
    v21 = *(_QWORD *)v21;
    if ( !v21 )
      goto LABEL_33;
  }
  if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v21 + 8), 0x10uLL) <= 0 )
    __fastfail(0xEu);
  if ( _InterlockedCompareExchange64(v18, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v18);
  KeAbPostRelease((ULONG_PTR)v18);
  KeLeaveCriticalRegionThread((__int64)CurrentThread);
  if ( P )
    ExFreePoolWithTag(P, 0x6353624Fu);
LABEL_51:
  v25 = 0;
  ExFreePoolWithTag((PVOID)a2, 0);
  if ( v24 )
    *(_QWORD *)(a1 - 8) = (char *)v24 + 15;
  else
    *(_QWORD *)(a1 - 8) = 0LL;
  return v25;
}
