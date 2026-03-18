/*
 * XREFs of NtAlpcOpenSenderProcess @ 0x1408AB690
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140257820 (ObfDereferenceObjectWithTag.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     ObfReferenceObjectWithTag @ 0x14029B2A0 (ObfReferenceObjectWithTag.c)
 *     ExfReleasePushLockShared @ 0x14029B450 (ExfReleasePushLockShared.c)
 *     ExfAcquirePushLockSharedEx @ 0x14029B5A0 (ExfAcquirePushLockSharedEx.c)
 *     KeLeaveCriticalRegionThread @ 0x14029B9C0 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     ObfDereferenceObject @ 0x140309490 (ObfDereferenceObject.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x1406AAA20 (RtlCopyVolatileMemory.c)
 *     ObReferenceObjectByHandle @ 0x14084F190 (ObReferenceObjectByHandle.c)
 *     PsOpenProcess @ 0x1408572E0 (PsOpenProcess.c)
 *     AlpcpUnlockMessage @ 0x1408AA9C0 (AlpcpUnlockMessage.c)
 *     AlpcpLookupMessage @ 0x1408AAFC0 (AlpcpLookupMessage.c)
 */

__int64 __fastcall NtAlpcOpenSenderProcess(_QWORD *a1, void *a2, unsigned __int64 a3, int a4, int a5, __int128 *Src)
{
  struct _KTHREAD *CurrentThread; // rax
  KPROCESSOR_MODE PreviousMode; // r12
  int v11; // ebx
  __int64 v12; // r9
  __int64 v13; // rbx
  __int64 v14; // rcx
  __int64 v15; // rdx
  PVOID v16; // rdi
  ULONG_PTR v17; // rbx
  _QWORD *v18; // rsi
  __int64 v19; // rax
  _QWORD *v20; // rsi
  __int64 v22; // rsi
  signed __int64 *v23; // rbx
  __int64 *v24; // rdi
  PVOID v25; // rcx
  PVOID Object; // [rsp+30h] [rbp-D8h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+38h] [rbp-D0h] BYREF
  __int128 v28; // [rsp+40h] [rbp-C8h] BYREF
  __int128 v29; // [rsp+50h] [rbp-B8h]
  __int64 v30; // [rsp+60h] [rbp-A8h]
  __int64 v31; // [rsp+70h] [rbp-98h] BYREF
  __int128 v32; // [rsp+78h] [rbp-90h] BYREF
  __int128 v33; // [rsp+88h] [rbp-80h]
  __int128 v34; // [rsp+98h] [rbp-70h]
  __int128 v35; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v36; // [rsp+B8h] [rbp-50h]

  v28 = 0LL;
  v29 = 0LL;
  v30 = 0LL;
  v32 = 0LL;
  v33 = 0LL;
  *(_QWORD *)&v34 = 0LL;
  DWORD2(v34) = 0;
  v31 = 0LL;
  BugCheckParameter2 = 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  Object = 0LL;
  v11 = ObReferenceObjectByHandle(a2, 0x20000u, AlpcPortObjectType, PreviousMode, &Object, 0LL);
  if ( v11 < 0 )
    goto LABEL_24;
  if ( PreviousMode )
  {
    v13 = 0x7FFFFFFF0000LL;
    v14 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)a1 < 0x7FFFFFFF0000LL )
      v14 = (__int64)a1;
    *(_QWORD *)v14 = *(_QWORD *)v14;
    v35 = 0LL;
    v36 = 0LL;
    v15 = 0x7FFFFFFF0000LL;
    if ( (a4 & 0xC0000000) == 0x80000000 )
    {
      if ( a3 < 0x7FFFFFFF0000LL )
        v15 = a3;
      RtlCopyVolatileMemory(&v35, (const void *)v15, 0x18uLL);
      LOWORD(v28) = v35;
      WORD1(v28) = v35 + 40;
      DWORD1(v28) = DWORD1(v35);
      *((_QWORD *)&v28 + 1) = DWORD2(v35);
      *(_QWORD *)&v29 = HIDWORD(v35);
      DWORD2(v29) = v36;
      v30 = HIDWORD(v36);
    }
    else
    {
      if ( a3 < 0x7FFFFFFF0000LL )
        v15 = a3;
      RtlCopyVolatileMemory(&v28, (const void *)v15, 0x28uLL);
    }
    if ( (unsigned __int64)Src < 0x7FFFFFFF0000LL )
      v13 = (__int64)Src;
    RtlCopyVolatileMemory(&v32, (const void *)v13, 0x30uLL);
  }
  else
  {
    v28 = *(_OWORD *)a3;
    v29 = *(_OWORD *)(a3 + 16);
    v30 = *(_QWORD *)(a3 + 32);
    v32 = *Src;
    v33 = Src[1];
    v34 = Src[2];
  }
  v16 = Object;
  v11 = AlpcpLookupMessage((__int64)Object, DWORD2(v29), v30, v12, &BugCheckParameter2);
  if ( v11 < 0 )
  {
    ObfDereferenceObject(v16);
    goto LABEL_24;
  }
  v17 = BugCheckParameter2;
  if ( (*(_DWORD *)(BugCheckParameter2 + 40) & 0x80u) != 0 )
  {
    AlpcpUnlockMessage(BugCheckParameter2);
    ObfDereferenceObject(v16);
    v11 = -1073740029;
    goto LABEL_24;
  }
  v18 = *(_QWORD **)(BugCheckParameter2 + 32);
  if ( v18 )
  {
    v19 = v18[161] - *((_QWORD *)&v28 + 1);
    if ( !v19 )
      v19 = v18[162] - v29;
    if ( v19 )
    {
      AlpcpUnlockMessage(BugCheckParameter2);
      ObfDereferenceObject(v16);
      v11 = -1073741813;
      goto LABEL_24;
    }
    v20 = (_QWORD *)v18[68];
    ObfReferenceObjectWithTag(v20, 0x63706C41u);
    goto LABEL_22;
  }
  v22 = *(_QWORD *)(BugCheckParameter2 + 24);
  if ( !v22 )
  {
    AlpcpUnlockMessage(BugCheckParameter2);
    v25 = v16;
    goto LABEL_41;
  }
  v23 = (signed __int64 *)(v22 + 352);
  v24 = KeAbPreAcquire(v22 + 352, 0LL);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v22 + 352), 17LL, 0LL) )
    ExfAcquirePushLockSharedEx((signed __int64 *)(v22 + 352), 0, v24, v22 + 352);
  if ( v24 )
    *((_BYTE *)v24 + 10) = 1;
  if ( (*(_DWORD *)(v22 + 416) & 0x40) == 0 )
  {
    v20 = *(_QWORD **)(v22 + 24);
    if ( v20[58] == *((_QWORD *)&v28 + 1) )
    {
      ObfReferenceObjectWithTag(v20, 0x63706C41u);
      if ( _InterlockedCompareExchange64(v23, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared(v23);
      KeAbPostRelease((ULONG_PTR)v23);
      v17 = BugCheckParameter2;
      v16 = Object;
LABEL_22:
      AlpcpUnlockMessage(v17);
      *(_QWORD *)&v29 = 0LL;
      v11 = PsOpenProcess((unsigned __int64)&v31, a5, (__int64)&v32, (__int128 *)((char *)&v28 + 8), 0, PreviousMode);
      ObfDereferenceObjectWithTag(v20, 0x63706C41u);
      ObfDereferenceObject(v16);
      if ( v11 >= 0 )
        *a1 = v31;
      goto LABEL_24;
    }
    if ( _InterlockedCompareExchange64(v23, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(v23);
    KeAbPostRelease((ULONG_PTR)v23);
    AlpcpUnlockMessage(BugCheckParameter2);
    v25 = Object;
LABEL_41:
    ObfDereferenceObject(v25);
    v11 = -1073741790;
    goto LABEL_24;
  }
  if ( _InterlockedCompareExchange64(v23, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)(v22 + 352));
  KeAbPostRelease(v22 + 352);
  AlpcpUnlockMessage(BugCheckParameter2);
  ObfDereferenceObject(Object);
  v11 = -1073741769;
LABEL_24:
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return (unsigned int)v11;
}
