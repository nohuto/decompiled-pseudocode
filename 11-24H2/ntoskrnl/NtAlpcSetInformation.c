/*
 * XREFs of NtAlpcSetInformation @ 0x140A0A340
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140257E40 (KeLeaveCriticalRegion.c)
 *     ExfReleasePushLockShared @ 0x14025DE00 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x14025F9A0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     ObfDereferenceObject @ 0x140325680 (ObfDereferenceObject.c)
 *     PsReferenceSiloContext @ 0x14033FA90 (PsReferenceSiloContext.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x14034050C (ExfAcquirePushLockSharedEx.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     memmove @ 0x1406BFC40 (memmove.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     ObReferenceObjectByHandle @ 0x14084AF40 (ObReferenceObjectByHandle.c)
 *     AlpcpAssociateIoCompletionPort @ 0x140A0A810 (AlpcpAssociateIoCompletionPort.c)
 *     AlpcpAdjustCompletionListConcurrencyCount @ 0x140A0ABB0 (AlpcpAdjustCompletionListConcurrencyCount.c)
 *     AlpcpInitializeCompletionList @ 0x140A0AC54 (AlpcpInitializeCompletionList.c)
 *     AlpcpFreeCompletionList @ 0x140A0B28C (AlpcpFreeCompletionList.c)
 */

__int64 __fastcall NtAlpcSetInformation(void *a1, int a2, __int64 *a3, unsigned int a4)
{
  size_t v4; // r15
  struct _KTHREAD *CurrentThread; // rax
  int v8; // esi
  KPROCESSOR_MODE PreviousMode; // di
  __int64 v10; // r13
  __int64 *v11; // r12
  NTSTATUS v12; // edi
  int v13; // r14d
  int v14; // r14d
  NTSTATUS v15; // eax
  int v17; // r14d
  int v18; // r14d
  int v19; // r14d
  int v20; // r14d
  signed __int64 *v21; // rbx
  _QWORD *v22; // rdi
  __int64 v23; // rdx
  int v24; // r14d
  unsigned __int64 *v25; // r14
  _QWORD *v26; // rax
  _QWORD *v27; // rdi
  ULONG_PTR v28; // rcx
  unsigned __int64 *v29; // rdi
  _QWORD *v30; // rax
  _QWORD *v31; // r14
  _QWORD *v32; // rax
  _QWORD *v33; // r14
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

  v4 = a4;
  Handle = a1;
  v39 = a3;
  memset_0(&v42, 0, 0x48uLL);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v8 = 0;
  if ( !a1 || !v39 && a2 != 7 && a2 != 10 )
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
    v13 = a2 - 1;
    if ( !v13 )
    {
      if ( (_DWORD)v4 != 72 )
        goto LABEL_63;
      if ( (*(_DWORD *)v11 & 0xFC00FFFF) == 0 )
      {
        *((_DWORD *)Object + 64) ^= (*(_DWORD *)v11 ^ *((_DWORD *)Object + 64)) & 0x20000;
        goto LABEL_15;
      }
      goto LABEL_39;
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
LABEL_63:
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
              ExfAcquirePushLockSharedEx(v21, 0, v22, (__int64)v21);
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
            v28 = (ULONG_PTR)v21;
LABEL_52:
            KeAbPostRelease(v28);
            goto LABEL_15;
          }
          goto LABEL_39;
        }
        v24 = v20 - 1;
        if ( v24 )
        {
          if ( v24 == 1 && !(_DWORD)v4 )
          {
            v25 = (unsigned __int64 *)((char *)Object + 352);
            v26 = KeAbPreAcquire((__int64)Object + 352, 0LL);
            v27 = v26;
            if ( _interlockedbittestandset64((volatile signed __int32 *)v25, 0LL) )
              ExfAcquirePushLockExclusiveEx(v25, (__int64)v26, (__int64)v25);
            if ( v27 )
              *((_BYTE *)v27 + 10) = 1;
            if ( *((_QWORD *)Object + 45) )
            {
              *((_DWORD *)Object + 104) &= ~0x10000u;
              v12 = 0;
            }
            else
            {
              v12 = -1073741811;
            }
            if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v25, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
              ExfTryToWakePushLock((volatile signed __int64 *)v25);
            v28 = (ULONG_PTR)v25;
            goto LABEL_52;
          }
          goto LABEL_39;
        }
        if ( v37 )
          goto LABEL_39;
        PsReferenceSiloContext(*(void **)v10);
        v29 = (unsigned __int64 *)((char *)Object + 352);
        v32 = KeAbPreAcquire((__int64)Object + 352, 0LL);
        v33 = v32;
        if ( _interlockedbittestandset64((volatile signed __int32 *)v29, 0LL) )
          ExfAcquirePushLockExclusiveEx(v29, (__int64)v32, (__int64)v29);
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
          goto LABEL_39;
        v29 = (unsigned __int64 *)((char *)Object + 352);
        v30 = KeAbPreAcquire((__int64)Object + 352, 0LL);
        v31 = v30;
        if ( _interlockedbittestandset64((volatile signed __int32 *)v29, 0LL) )
          ExfAcquirePushLockExclusiveEx(v29, (__int64)v30, (__int64)v29);
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
        v23 = *v11;
      }
      else
      {
        if ( (_DWORD)v4 != 16 )
          goto LABEL_39;
        v34 = *(__m128i *)v11;
        v11 = &v42;
        v23 = v34.m128i_u32[0];
        v42 = v34.m128i_u32[0];
        v43 = v34.m128i_i32[1];
        v44 = _mm_srli_si128(v34, 8).m128i_u64[0];
        v8 = 1;
      }
      v15 = AlpcpInitializeCompletionList(
              Object,
              v23,
              *((unsigned int *)v11 + 2),
              *((unsigned int *)v11 + 3),
              *((_DWORD *)v11 + 4),
              v8);
      goto LABEL_14;
    }
LABEL_39:
    v12 = -1073741811;
    goto LABEL_15;
  }
LABEL_16:
  KeLeaveCriticalRegion();
  return (unsigned int)v12;
}
