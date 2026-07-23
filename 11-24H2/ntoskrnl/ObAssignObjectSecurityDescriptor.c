/*
 * XREFs of ObAssignObjectSecurityDescriptor @ 0x140989740
 * Callers:
 *     WmipSecurityMethod @ 0x140989620 (WmipSecurityMethod.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x140289BB0 (KeLeaveCriticalRegionThread.c)
 *     ExfReleasePushLockShared @ 0x14028E410 (ExfReleasePushLockShared.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x14031F9EC (ExfAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     memcmp @ 0x1406C0E10 (memcmp.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
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
  _QWORD *v18; // r13
  signed __int64 *v19; // r15
  volatile signed __int64 *v20; // r14
  char *v21; // rdi
  signed __int64 v22; // rdi
  __int64 Pool2; // rax
  char *v24; // rdi
  _QWORD *v25; // r14
  unsigned int v26; // ebx
  struct _KTHREAD *CurrentThread; // [rsp+68h] [rbp+10h]

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
  v18 = 0LL;
  --CurrentThread->KernelApcDisable;
  v19 = (signed __int64 *)((char *)&ObsSecurityDescriptorCache + 16 * (unsigned __int8)v14);
  v20 = v19 + 1;
  v21 = (char *)KeAbPreAcquire((__int64)v19, 0LL);
  if ( _InterlockedCompareExchange64(v19, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(v19, 0, v21, (__int64)v19);
  if ( v21 )
    v21[10] = 1;
  while ( 1 )
  {
    v22 = *v20;
    if ( *v20 )
      break;
LABEL_33:
    if ( v18 )
    {
      *v18 = v22;
      v20 = (volatile signed __int64 *)_InterlockedCompareExchange64(v20, (signed __int64)v18, v22);
      if ( (volatile signed __int64 *)v22 == v20 )
      {
        if ( _InterlockedCompareExchange64(v19, 0LL, 17LL) != 17 )
          ExfReleasePushLockShared(v19);
        KeAbPostRelease((ULONG_PTR)v19);
        KeLeaveCriticalRegionThread();
        v25 = v18 + 4;
        goto LABEL_51;
      }
    }
    else
    {
      if ( _InterlockedCompareExchange64(v19, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared(v19);
      KeAbPostRelease((ULONG_PTR)v19);
      KeLeaveCriticalRegionThread();
      if ( v4 + 40 < v4 )
        return (unsigned int)-1073741670;
      Pool2 = ExAllocatePool2(0x108uLL, v4 + 40, 0x6353624Fu);
      v18 = (_QWORD *)Pool2;
      if ( !Pool2 )
        return (unsigned int)-1073741670;
      *(_QWORD *)(Pool2 + 8) = 16LL;
      *(_QWORD *)(Pool2 + 16) = v14;
      *(_DWORD *)(Pool2 + 24) = v4;
      memmove((void *)(Pool2 + 32), (const void *)a2, v4);
      --CurrentThread->KernelApcDisable;
      v20 = v19 + 1;
      v24 = (char *)KeAbPreAcquire((__int64)v19, 0LL);
      if ( _InterlockedCompareExchange64(v19, 17LL, 0LL) )
        ExfAcquirePushLockSharedEx(v19, 0, v24, (__int64)v19);
      if ( v24 )
        v24[10] = 1;
    }
  }
  while ( 1 )
  {
    if ( *(_QWORD *)(v22 + 16) != v14 )
    {
      if ( *(_QWORD *)(v22 + 16) > v14 )
        goto LABEL_33;
      goto LABEL_43;
    }
    if ( *(_DWORD *)(v22 + 24) == v4 )
    {
      v25 = (_QWORD *)(v22 + 32);
      if ( !memcmp((const void *)a2, (const void *)(v22 + 32), v4) )
        break;
    }
LABEL_43:
    v20 = (volatile signed __int64 *)v22;
    v22 = *(_QWORD *)v22;
    if ( !v22 )
      goto LABEL_33;
  }
  if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v22 + 8), 0x10uLL) <= 0 )
    __fastfail(0xEu);
  if ( _InterlockedCompareExchange64(v19, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v19);
  KeAbPostRelease((ULONG_PTR)v19);
  KeLeaveCriticalRegionThread();
  if ( v18 )
    ExFreePoolWithTag(v18, 0x6353624Fu);
LABEL_51:
  v26 = 0;
  ExFreePoolWithTag((PVOID)a2, 0);
  if ( v25 )
    *(_QWORD *)(a1 - 8) = (char *)v25 + 15;
  else
    *(_QWORD *)(a1 - 8) = 0LL;
  return v26;
}
