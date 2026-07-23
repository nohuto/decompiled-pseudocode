/*
 * XREFs of NtAlpcSetInformation @ 0x140A073C0
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140206F00 (KeLeaveCriticalRegion.c)
 *     PsReferenceSiloContext @ 0x14029A8F0 (PsReferenceSiloContext.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     ExfReleasePushLockShared @ 0x14029B450 (ExfReleasePushLockShared.c)
 *     ExfAcquirePushLockSharedEx @ 0x14029B5A0 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     ObfDereferenceObject @ 0x140309490 (ObfDereferenceObject.c)
 *     ExfTryToWakePushLock @ 0x1403D62D0 (ExfTryToWakePushLock.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     memmove @ 0x1406B4940 (memmove.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     ObReferenceObjectByHandle @ 0x14084F190 (ObReferenceObjectByHandle.c)
 *     AlpcpAssociateIoCompletionPort @ 0x140A07884 (AlpcpAssociateIoCompletionPort.c)
 *     AlpcpAdjustCompletionListConcurrencyCount @ 0x140A07C24 (AlpcpAdjustCompletionListConcurrencyCount.c)
 *     AlpcpInitializeCompletionList @ 0x140A07CC8 (AlpcpInitializeCompletionList.c)
 *     AlpcpFreeCompletionList @ 0x140A08300 (AlpcpFreeCompletionList.c)
 */

NTSTATUS __cdecl NtAlpcSetInformation(
        HANDLE PortHandle,
        ALPC_PORT_INFORMATION_CLASS PortInformationClass,
        PVOID PortInformation,
        ULONG Length)
{
  size_t v4; // r15
  struct _KTHREAD *CurrentThread; // rax
  int v8; // esi
  KPROCESSOR_MODE PreviousMode; // di
  __int64 v10; // r13
  __int64 *v11; // r12
  signed int v12; // edi
  __int32 v13; // r14d
  __int32 v14; // r14d
  signed int v15; // eax
  __int32 v17; // r14d
  __int32 v18; // r14d
  int v19; // r14d
  int v20; // r14d
  signed __int64 *v21; // rbx
  __int64 *v22; // rdi
  ULONG_PTR v23; // rcx
  __int64 v24; // rdx
  int v25; // r14d
  unsigned __int64 *v26; // r14
  __int64 *v27; // rax
  __int64 *v28; // rdi
  unsigned __int64 *v29; // rdi
  __int64 *v30; // rax
  __int64 *v31; // r14
  __int64 *v32; // rax
  __int64 *v33; // r14
  __m128i v34; // xmm0
  __int64 *v35; // rdx
  _QWORD *v36; // rcx
  KPROCESSOR_MODE v37; // [rsp+30h] [rbp-C8h]
  PVOID Object; // [rsp+38h] [rbp-C0h] BYREF
  __int64 *v39; // [rsp+40h] [rbp-B8h]
  HANDLE Handle; // [rsp+48h] [rbp-B0h]
  unsigned int *v41; // [rsp+50h] [rbp-A8h]
  __int64 v42; // [rsp+60h] [rbp-98h] BYREF
  __int32 v43; // [rsp+68h] [rbp-90h]
  unsigned __int64 v44; // [rsp+6Ch] [rbp-8Ch]

  v4 = Length;
  Handle = PortHandle;
  v39 = (__int64 *)PortInformation;
  memset_0(&v42, 0, 0x48uLL);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v8 = 0;
  if ( !PortHandle
    || !v39
    && PortInformationClass != AlpcUnregisterCompletionListInformation
    && PortInformationClass != AlpcCompletionListRundownInformation )
  {
    v12 = -1073741811;
    goto LABEL_16;
  }
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v37 = PreviousMode;
  v10 = (__int64)v39;
  v11 = v39;
  v41 = (unsigned int *)v39;
  if ( (_DWORD)v4 && PreviousMode )
  {
    if ( (unsigned int)v4 > 0x48 )
    {
      v12 = -1073741820;
      goto LABEL_16;
    }
    if ( (unsigned __int64)v39 >= 0x7FFFFFFF0000LL )
      v10 = 0x7FFFFFFF0000LL;
    v39 = (__int64 *)v10;
    memmove(&v42, (const void *)v10, v4);
    v11 = &v42;
    v41 = (unsigned int *)&v42;
  }
  Object = 0LL;
  v12 = ObReferenceObjectByHandle(Handle, 1u, AlpcPortObjectType, PreviousMode, &Object, 0LL);
  if ( v12 >= 0 )
  {
    v13 = PortInformationClass - 1;
    if ( !v13 )
    {
      if ( (_DWORD)v4 != 72 )
        goto LABEL_75;
      if ( (*(_DWORD *)v11 & 0xFC00FFFF) == 0 )
      {
        *((_DWORD *)Object + 64) ^= (*(_DWORD *)v11 ^ *((_DWORD *)Object + 64)) & 0x20000;
        goto LABEL_15;
      }
      goto LABEL_41;
    }
    v14 = v13 - 1;
    if ( !v14 )
    {
      if ( (_DWORD)v4 == 16 )
      {
        v15 = AlpcpAssociateIoCompletionPort(Object, v11[1], *v11);
LABEL_14:
        v12 = v15;
LABEL_15:
        ObfDereferenceObject(Object);
        goto LABEL_16;
      }
LABEL_75:
      v12 = -1073741820;
      goto LABEL_15;
    }
    v17 = v14 - 3;
    if ( !v17 )
    {
      v12 = (_DWORD)v4 != 16 ? 0xC000000D : 0;
      goto LABEL_15;
    }
    v18 = v17 - 1;
    if ( v18 )
    {
      v19 = v18 - 1;
      if ( v19 )
      {
        v20 = v19 - 1;
        if ( !v20 )
        {
          if ( (_DWORD)v4 == 4 && *(_DWORD *)v11 )
          {
            v21 = (signed __int64 *)((char *)Object + 352);
            v22 = KeAbPreAcquire((__int64)Object + 352, 0LL);
            if ( _InterlockedCompareExchange64(v21, 17LL, 0LL) )
              ExfAcquirePushLockSharedEx(v21, 0, v22, (unsigned __int64)v21);
            if ( v22 )
              *((_BYTE *)v22 + 10) = 1;
            if ( *((_QWORD *)Object + 45) )
            {
              AlpcpAdjustCompletionListConcurrencyCount(Object, *v41);
              v12 = 0;
            }
            else
            {
              v12 = -1073741811;
            }
            if ( _InterlockedCompareExchange64(v21, 0LL, 17LL) != 17 )
              ExfReleasePushLockShared(v21);
            v23 = (ULONG_PTR)v21;
LABEL_32:
            KeAbPostRelease(v23);
            goto LABEL_15;
          }
          goto LABEL_41;
        }
        v25 = v20 - 1;
        if ( v25 )
        {
          if ( v25 == 1 && !(_DWORD)v4 )
          {
            v26 = (unsigned __int64 *)((char *)Object + 352);
            v27 = KeAbPreAcquire((__int64)Object + 352, 0LL);
            v28 = v27;
            if ( _interlockedbittestandset64((volatile signed __int32 *)v26, 0LL) )
              ExfAcquirePushLockExclusiveEx(v26, v27, (__int64)v26);
            if ( v28 )
              *((_BYTE *)v28 + 10) = 1;
            if ( *((_QWORD *)Object + 45) )
            {
              *((_DWORD *)Object + 104) &= ~0x10000u;
              v12 = 0;
            }
            else
            {
              v12 = -1073741811;
            }
            if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v26, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
              ExfTryToWakePushLock((volatile signed __int64 *)v26);
            v23 = (ULONG_PTR)v26;
            goto LABEL_32;
          }
          goto LABEL_41;
        }
        if ( v37 )
          goto LABEL_41;
        PsReferenceSiloContext(*(void **)v10);
        v29 = (unsigned __int64 *)((char *)Object + 352);
        v32 = KeAbPreAcquire((__int64)Object + 352, 0LL);
        v33 = v32;
        if ( _interlockedbittestandset64((volatile signed __int32 *)v29, 0LL) )
          ExfAcquirePushLockExclusiveEx(v29, v32, (__int64)v29);
        if ( v33 )
          *((_BYTE *)v33 + 10) = 1;
        v35 = v39;
        v36 = Object;
        *((_QWORD *)Object + 46) = *v39;
        v36[47] = v35[1];
      }
      else
      {
        if ( (_DWORD)v4 )
          goto LABEL_41;
        v29 = (unsigned __int64 *)((char *)Object + 352);
        v30 = KeAbPreAcquire((__int64)Object + 352, 0LL);
        v31 = v30;
        if ( _interlockedbittestandset64((volatile signed __int32 *)v29, 0LL) )
          ExfAcquirePushLockExclusiveEx(v29, v30, (__int64)v29);
        if ( v31 )
          *((_BYTE *)v31 + 10) = 1;
        if ( *((_QWORD *)Object + 45) )
          AlpcpFreeCompletionList(Object);
      }
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v29, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)v29);
      KeAbPostRelease((ULONG_PTR)v29);
      v12 = 0;
      goto LABEL_15;
    }
    if ( (*((_DWORD *)Object + 104) & 6) == 2 )
    {
      if ( (_DWORD)v4 == 24 )
      {
        v24 = *v11;
      }
      else
      {
        if ( (_DWORD)v4 != 16 )
          goto LABEL_41;
        v34 = *(__m128i *)v11;
        v11 = &v42;
        v24 = v34.m128i_u32[0];
        v42 = v34.m128i_u32[0];
        v43 = v34.m128i_i32[1];
        v44 = _mm_srli_si128(v34, 8).m128i_u64[0];
        v8 = 1;
      }
      v15 = AlpcpInitializeCompletionList(
              Object,
              v24,
              *((unsigned int *)v11 + 2),
              *((unsigned int *)v11 + 3),
              *((_DWORD *)v11 + 4),
              v8);
      goto LABEL_14;
    }
LABEL_41:
    v12 = -1073741811;
    goto LABEL_15;
  }
LABEL_16:
  KeLeaveCriticalRegion();
  return v12;
}
