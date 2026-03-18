/*
 * XREFs of ObLogSecurityDescriptor @ 0x140899A00
 * Callers:
 *     ObpInitObjectTypeSD @ 0x1407384A8 (ObpInitObjectTypeSD.c)
 *     IopGetSetSecurityObject @ 0x14086F330 (IopGetSetSecurityObject.c)
 *     ExpWnfCreateNameInstance @ 0x140898930 (ExpWnfCreateNameInstance.c)
 *     EtwpAllocGuidEntry @ 0x1408998F8 (EtwpAllocGuidEntry.c)
 *     EtwpInitializeLoggerSecurityDescriptor @ 0x140A39194 (EtwpInitializeLoggerSecurityDescriptor.c)
 *     IopSetDeviceSecurityDescriptor @ 0x140A573D4 (IopSetDeviceSecurityDescriptor.c)
 *     EtwpUpdateLoggerSecurityDescriptor @ 0x140A8DE24 (EtwpUpdateLoggerSecurityDescriptor.c)
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

__int64 __fastcall ObLogSecurityDescriptor(char *Buf1, _QWORD *a2, unsigned int a3)
{
  __int16 v3; // r9
  unsigned int v5; // esi
  __int64 v6; // rax
  char *v7; // rax
  __int64 v8; // rax
  char *v9; // rax
  __int64 v10; // rax
  char *v11; // rax
  __int64 v12; // rax
  char *v13; // rax
  unsigned __int64 v14; // rbx
  char *v15; // rcx
  char *i; // rax
  __int64 v17; // rbx
  struct _KTHREAD *CurrentThread; // r13
  signed __int64 *Pool2; // r12
  signed __int64 *v20; // r14
  volatile signed __int64 *v21; // r15
  __int64 *v22; // rdi
  signed __int64 v23; // rdi

  v3 = *((_WORD *)Buf1 + 1);
  v5 = ((v3 >> 31) & 0xFFFFFFEC) + 40;
  if ( v3 >= 0 )
  {
    v7 = (char *)*((_QWORD *)Buf1 + 1);
  }
  else
  {
    v6 = *((unsigned int *)Buf1 + 1);
    if ( !(_DWORD)v6 )
      goto LABEL_7;
    v7 = &Buf1[v6];
  }
  if ( v7 )
    v5 += (4 * (unsigned __int8)v7[1] + 11) & 0xFFFFFFFC;
  if ( v3 >= 0 )
  {
    v9 = (char *)*((_QWORD *)Buf1 + 2);
    goto LABEL_9;
  }
LABEL_7:
  v8 = *((unsigned int *)Buf1 + 2);
  if ( !(_DWORD)v8 )
    goto LABEL_11;
  v9 = &Buf1[v8];
LABEL_9:
  if ( v9 )
    v5 += (4 * (unsigned __int8)v9[1] + 11) & 0xFFFFFFFC;
LABEL_11:
  if ( (v3 & 4) == 0 )
    goto LABEL_17;
  if ( v3 >= 0 )
  {
    v11 = (char *)*((_QWORD *)Buf1 + 4);
  }
  else
  {
    v10 = *((unsigned int *)Buf1 + 4);
    if ( !(_DWORD)v10 )
      goto LABEL_17;
    v11 = &Buf1[v10];
  }
  if ( v11 )
    v5 += (*((unsigned __int16 *)v11 + 1) + 3) & 0xFFFFFFFC;
LABEL_17:
  if ( (v3 & 0x10) != 0 )
  {
    if ( v3 >= 0 )
    {
      v13 = (char *)*((_QWORD *)Buf1 + 3);
LABEL_21:
      if ( v13 )
        v5 += (*((unsigned __int16 *)v13 + 1) + 3) & 0xFFFFFFFC;
      goto LABEL_23;
    }
    v12 = *((unsigned int *)Buf1 + 3);
    if ( (_DWORD)v12 )
    {
      v13 = &Buf1[v12];
      goto LABEL_21;
    }
  }
LABEL_23:
  v14 = 0LL;
  v15 = &Buf1[v5 & 0xFFFFFFF8];
  for ( i = Buf1; i < v15; v14 = __ROL8__(v17, 3) )
  {
    v17 = *(_QWORD *)i ^ v14;
    i += 16;
  }
  CurrentThread = KeGetCurrentThread();
  Pool2 = 0LL;
  v20 = (signed __int64 *)((char *)&ObsSecurityDescriptorCache + 16 * (unsigned __int8)v14);
  --CurrentThread->KernelApcDisable;
  v21 = v20 + 1;
  v22 = KeAbPreAcquire((__int64)v20, 0LL);
  if ( _InterlockedCompareExchange64(v20, 17LL, 0LL) )
LABEL_26:
    ExfAcquirePushLockSharedEx(v20, 0, v22, (unsigned __int64)v20);
LABEL_27:
  if ( v22 )
    *((_BYTE *)v22 + 10) = 1;
  while ( 1 )
  {
    v23 = *v21;
    if ( *v21 )
      break;
LABEL_32:
    if ( !Pool2 )
    {
      if ( _InterlockedCompareExchange64(v20, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared(v20);
      KeAbPostRelease((ULONG_PTR)v20);
      KeLeaveCriticalRegionThread((__int64)CurrentThread);
      if ( v5 + 40 < v5 )
        return 3221225626LL;
      Pool2 = (signed __int64 *)ExAllocatePool2(0x108uLL);
      if ( !Pool2 )
        return 3221225626LL;
      Pool2[1] = a3;
      Pool2[2] = v14;
      *((_DWORD *)Pool2 + 6) = v5;
      memmove(Pool2 + 4, Buf1, v5);
      --CurrentThread->KernelApcDisable;
      v21 = v20 + 1;
      v22 = KeAbPreAcquire((__int64)v20, 0LL);
      if ( _InterlockedCompareExchange64(v20, 17LL, 0LL) )
        goto LABEL_26;
      goto LABEL_27;
    }
    *Pool2 = v23;
    v21 = (volatile signed __int64 *)_InterlockedCompareExchange64(v21, (signed __int64)Pool2, v23);
    if ( (volatile signed __int64 *)v23 == v21 )
    {
      if ( _InterlockedCompareExchange64(v20, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared(v20);
      KeAbPostRelease((ULONG_PTR)v20);
      KeLeaveCriticalRegionThread((__int64)CurrentThread);
      *a2 = Pool2 + 4;
      return 0LL;
    }
  }
  while ( *(_QWORD *)(v23 + 16) != v14 )
  {
    if ( *(_QWORD *)(v23 + 16) > v14 )
      goto LABEL_32;
LABEL_40:
    v21 = (volatile signed __int64 *)v23;
    v23 = *(_QWORD *)v23;
    if ( !v23 )
      goto LABEL_32;
  }
  if ( *(_DWORD *)(v23 + 24) != v5 || memcmp(Buf1, (const void *)(v23 + 32), v5) )
    goto LABEL_40;
  if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v23 + 8), a3) <= 0 )
    __fastfail(0xEu);
  if ( _InterlockedCompareExchange64(v20, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v20);
  KeAbPostRelease((ULONG_PTR)v20);
  KeLeaveCriticalRegionThread((__int64)CurrentThread);
  *a2 = v23 + 32;
  if ( Pool2 )
    ExFreePoolWithTag(Pool2, 0x6353624Fu);
  return 0LL;
}
