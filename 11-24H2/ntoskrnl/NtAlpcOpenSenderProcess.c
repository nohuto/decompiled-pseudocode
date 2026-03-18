/*
 * XREFs of NtAlpcOpenSenderProcess @ 0x14093E390
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402595A0 (KeLeaveCriticalRegionThread.c)
 *     ExfReleasePushLockShared @ 0x14025DE00 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     ObfDereferenceObjectWithTag @ 0x1403254A0 (ObfDereferenceObjectWithTag.c)
 *     ObfDereferenceObject @ 0x140325680 (ObfDereferenceObject.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     ObfReferenceObjectWithTag @ 0x1403403E0 (ObfReferenceObjectWithTag.c)
 *     ExfAcquirePushLockSharedEx @ 0x14034050C (ExfAcquirePushLockSharedEx.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x1406B5CF0 (RtlCopyVolatileMemory.c)
 *     ObReferenceObjectByHandle @ 0x14084AF40 (ObReferenceObjectByHandle.c)
 *     PsOpenProcess @ 0x140854350 (PsOpenProcess.c)
 *     AlpcpUnlockMessage @ 0x140898D70 (AlpcpUnlockMessage.c)
 *     AlpcpLookupMessage @ 0x14093E7E0 (AlpcpLookupMessage.c)
 */

__int64 __fastcall NtAlpcOpenSenderProcess(_QWORD *a1, void *a2, unsigned __int64 a3, int a4, int a5, __int128 *Src)
{
  struct _KTHREAD *CurrentThread; // rax
  KPROCESSOR_MODE PreviousMode; // r12
  int v11; // ebx
  int v12; // r9d
  __int64 v13; // rbx
  __int64 v14; // rcx
  __int64 v15; // rdx
  PVOID v16; // rdi
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  ULONG_PTR v20; // rbx
  _QWORD *v21; // rsi
  __int64 v22; // rax
  _QWORD *v23; // rsi
  __int64 v24; // rdx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v28; // rsi
  signed __int64 *v29; // rbx
  _QWORD *v30; // rdi
  PVOID v31; // rcx
  __int64 v32; // rdx
  __int64 v33; // r8
  __int64 v34; // r9
  __int64 v35; // rdx
  __int64 v36; // r8
  __int64 v37; // r9
  PVOID Object; // [rsp+30h] [rbp-D8h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+38h] [rbp-D0h] BYREF
  __int128 v40; // [rsp+40h] [rbp-C8h] BYREF
  __int128 v41; // [rsp+50h] [rbp-B8h]
  __int64 v42; // [rsp+60h] [rbp-A8h]
  __int64 v43; // [rsp+70h] [rbp-98h] BYREF
  __int128 v44; // [rsp+78h] [rbp-90h] BYREF
  __int128 v45; // [rsp+88h] [rbp-80h]
  __int128 v46; // [rsp+98h] [rbp-70h]
  __int128 v47; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v48; // [rsp+B8h] [rbp-50h]

  v40 = 0LL;
  v41 = 0LL;
  v42 = 0LL;
  v44 = 0LL;
  v45 = 0LL;
  *(_QWORD *)&v46 = 0LL;
  DWORD2(v46) = 0;
  v43 = 0LL;
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
    v47 = 0LL;
    v48 = 0LL;
    v15 = 0x7FFFFFFF0000LL;
    if ( (a4 & 0xC0000000) == 0x80000000 )
    {
      if ( a3 < 0x7FFFFFFF0000LL )
        v15 = a3;
      RtlCopyVolatileMemory(&v47, (const void *)v15, 0x18uLL);
      LOWORD(v40) = v47;
      WORD1(v40) = v47 + 40;
      DWORD1(v40) = DWORD1(v47);
      *((_QWORD *)&v40 + 1) = DWORD2(v47);
      *(_QWORD *)&v41 = HIDWORD(v47);
      DWORD2(v41) = v48;
      v42 = HIDWORD(v48);
    }
    else
    {
      if ( a3 < 0x7FFFFFFF0000LL )
        v15 = a3;
      RtlCopyVolatileMemory(&v40, (const void *)v15, 0x28uLL);
    }
    if ( (unsigned __int64)Src < 0x7FFFFFFF0000LL )
      v13 = (__int64)Src;
    RtlCopyVolatileMemory(&v44, (const void *)v13, 0x30uLL);
  }
  else
  {
    v40 = *(_OWORD *)a3;
    v41 = *(_OWORD *)(a3 + 16);
    v42 = *(_QWORD *)(a3 + 32);
    v44 = *Src;
    v45 = Src[1];
    v46 = Src[2];
  }
  v16 = Object;
  v11 = AlpcpLookupMessage((_DWORD)Object, DWORD2(v41), v42, v12, (__int64)&BugCheckParameter2);
  if ( v11 < 0 )
  {
    ObfDereferenceObject(v16);
    goto LABEL_24;
  }
  v20 = BugCheckParameter2;
  if ( (*(_DWORD *)(BugCheckParameter2 + 40) & 0x80u) != 0 )
  {
    AlpcpUnlockMessage(BugCheckParameter2, v17, v18, v19);
    ObfDereferenceObject(v16);
    v11 = -1073740029;
    goto LABEL_24;
  }
  v21 = *(_QWORD **)(BugCheckParameter2 + 32);
  if ( v21 )
  {
    v22 = v21[161] - *((_QWORD *)&v40 + 1);
    if ( !v22 )
      v22 = v21[162] - v41;
    if ( v22 )
    {
      AlpcpUnlockMessage(BugCheckParameter2, v17, v18, v19);
      ObfDereferenceObject(v16);
      v11 = -1073741813;
      goto LABEL_24;
    }
    v23 = (_QWORD *)v21[68];
    ObfReferenceObjectWithTag(v23, 0x63706C41u);
    goto LABEL_22;
  }
  v28 = *(_QWORD *)(BugCheckParameter2 + 24);
  if ( !v28 )
  {
    AlpcpUnlockMessage(BugCheckParameter2, v17, v18, v19);
    v31 = v16;
    goto LABEL_38;
  }
  v29 = (signed __int64 *)(v28 + 352);
  v30 = KeAbPreAcquire(v28 + 352, 0LL);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v28 + 352), 17LL, 0LL) )
    ExfAcquirePushLockSharedEx((signed __int64 *)(v28 + 352), 0, v30, v28 + 352);
  if ( v30 )
    *((_BYTE *)v30 + 10) = 1;
  if ( (*(_DWORD *)(v28 + 416) & 0x40) == 0 )
  {
    v23 = *(_QWORD **)(v28 + 24);
    if ( v23[58] == *((_QWORD *)&v40 + 1) )
    {
      ObfReferenceObjectWithTag(v23, 0x63706C41u);
      if ( _InterlockedCompareExchange64(v29, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared(v29);
      KeAbPostRelease((ULONG_PTR)v29);
      v20 = BugCheckParameter2;
      v16 = Object;
LABEL_22:
      AlpcpUnlockMessage(v20, v24, v25, v26);
      *(_QWORD *)&v41 = 0LL;
      v11 = PsOpenProcess((unsigned __int64)&v43, a5, (__int64)&v44, (__int128 *)((char *)&v40 + 8), 0, PreviousMode);
      ObfDereferenceObjectWithTag(v23, 0x63706C41u);
      ObfDereferenceObject(v16);
      if ( v11 >= 0 )
        *a1 = v43;
      goto LABEL_24;
    }
    if ( _InterlockedCompareExchange64(v29, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(v29);
    KeAbPostRelease((ULONG_PTR)v29);
    AlpcpUnlockMessage(BugCheckParameter2, v35, v36, v37);
    v31 = Object;
LABEL_38:
    ObfDereferenceObject(v31);
    v11 = -1073741790;
    goto LABEL_24;
  }
  if ( _InterlockedCompareExchange64(v29, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)(v28 + 352));
  KeAbPostRelease(v28 + 352);
  AlpcpUnlockMessage(BugCheckParameter2, v32, v33, v34);
  ObfDereferenceObject(Object);
  v11 = -1073741769;
LABEL_24:
  KeLeaveCriticalRegionThread();
  return (unsigned int)v11;
}
