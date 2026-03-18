/*
 * XREFs of NtQueryDirectoryObject @ 0x140AC1020
 * Callers:
 *     <none>
 * Callees:
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x14029B5A0 (ExfAcquirePushLockSharedEx.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x14029B9E0 (KiLeaveCriticalRegionUnsafe.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x1402BC860 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     ExfReleasePushLock @ 0x1402BCA80 (ExfReleasePushLock.c)
 *     ObfDereferenceObject @ 0x140309490 (ObfDereferenceObject.c)
 *     RtlInitUnicodeString @ 0x14043FFA0 (RtlInitUnicodeString.c)
 *     Feature_679005496__private_IsEnabledDeviceUsageNoInline @ 0x1405C7CC8 (Feature_679005496__private_IsEnabledDeviceUsageNoInline.c)
 *     memmove @ 0x1406B4940 (memmove.c)
 *     ObReferenceObjectByHandle @ 0x14084F190 (ObReferenceObjectByHandle.c)
 *     ProbeForWrite @ 0x140934CF0 (ProbeForWrite.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall NtQueryDirectoryObject(
        HANDLE Handle,
        char *Address,
        SIZE_T Length,
        char a4,
        char a5,
        int *a6,
        unsigned int *a7)
{
  unsigned int v7; // ebx
  KPROCESSOR_MODE PreviousMode; // di
  __int64 v10; // rdx
  __int64 v11; // rcx
  void *Pool2; // rsi
  NTSTATUS v14; // ebx
  unsigned int v15; // r14d
  int v16; // r12d
  int v17; // r13d
  struct _KTHREAD *CurrentThread; // rax
  signed __int64 *v19; // rbx
  __int64 *v20; // rdi
  unsigned int v21; // ecx
  _QWORD *v22; // rax
  int v23; // esi
  _QWORD *v24; // rdi
  int v25; // eax
  __int64 v26; // rbx
  __int64 v27; // rax
  unsigned __int16 v28; // r13
  int v29; // r15d
  unsigned int v30; // r8d
  unsigned int v31; // r15d
  unsigned __int16 *v32; // r10
  unsigned __int64 v33; // rdx
  unsigned __int16 *v34; // rbx
  char *v35; // rbx
  const void **v36; // rdi
  int v37; // r15d
  _BYTE *v38; // r14
  char *v39; // rbx
  char *v40; // rbx
  int v41; // eax
  signed __int64 *v42; // rbx
  signed __int64 v43; // rax
  signed __int64 v44; // rdx
  signed __int64 v45; // rtt
  __int64 v46; // rdx
  __int64 v47; // r8
  __int64 v48; // r9
  int v49; // [rsp+30h] [rbp-A8h]
  int v50; // [rsp+34h] [rbp-A4h]
  int v51; // [rsp+38h] [rbp-A0h]
  int Size; // [rsp+3Ch] [rbp-9Ch]
  unsigned __int8 Size_4; // [rsp+40h] [rbp-98h]
  PVOID Object; // [rsp+48h] [rbp-90h] BYREF
  unsigned int v55; // [rsp+50h] [rbp-88h]
  void *Src; // [rsp+58h] [rbp-80h]
  unsigned __int16 *v57; // [rsp+60h] [rbp-78h]
  _QWORD *v58; // [rsp+68h] [rbp-70h]
  UNICODE_STRING DestinationString; // [rsp+70h] [rbp-68h] BYREF
  __int128 v60; // [rsp+80h] [rbp-58h]
  __int64 v61; // [rsp+90h] [rbp-48h]
  unsigned int v63; // [rsp+F0h] [rbp+18h]

  v63 = Length;
  v7 = Length;
  DestinationString = 0LL;
  v60 = 0LL;
  v61 = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    ProbeForWrite(Address, (unsigned int)Length, 2u);
    v10 = 0x7FFFFFFF0000LL;
    v11 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)a6 < 0x7FFFFFFF0000LL )
      v11 = (__int64)a6;
    *(_DWORD *)v11 = *(_DWORD *)v11;
    if ( a7 )
    {
      if ( (unsigned __int64)a7 < 0x7FFFFFFF0000LL )
        v10 = (__int64)a7;
      *(_DWORD *)v10 = *(_DWORD *)v10;
    }
    if ( a5 )
      v49 = 0;
    else
      v49 = *a6;
  }
  else if ( a5 )
  {
    v49 = 0;
  }
  else
  {
    v49 = *a6;
  }
  if ( v7 >= v7 + 32 )
    return 3221225485LL;
  Pool2 = (void *)ExAllocatePool2(0x101uLL);
  Src = Pool2;
  if ( !Pool2 )
    return 3221225626LL;
  Object = 0LL;
  v14 = ObReferenceObjectByHandle(Handle, 1u, ObpDirectoryObjectType, PreviousMode, &Object, 0LL);
  if ( v14 < 0 )
  {
    ExFreePoolWithTag(Pool2, 0);
    return (unsigned int)v14;
  }
  v57 = (unsigned __int16 *)Pool2;
  v15 = 32;
  Size = 32;
  v16 = 0;
  v51 = 0;
  v50 = 0;
  v17 = -2147483622;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v19 = (signed __int64 *)((char *)Object + 296);
  v20 = KeAbPreAcquire((__int64)Object + 296, 0LL);
  if ( _InterlockedCompareExchange64(v19, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(v19, 0, v20, (unsigned __int64)v19);
  if ( v20 )
    *((_BYTE *)v20 + 10) = 1;
  v21 = 0;
  v55 = 0;
  v22 = Object;
  v58 = Object;
  v23 = v49;
  while ( 1 )
  {
    v24 = (_QWORD *)*v22;
    if ( *v22 )
      break;
LABEL_41:
    v55 = ++v21;
    v58 = ++v22;
    if ( v21 >= 0x25 )
    {
LABEL_42:
      v31 = v63;
      goto LABEL_43;
    }
  }
  while ( 1 )
  {
    v25 = v16++;
    v51 = v16;
    if ( v23 == v25 )
      break;
LABEL_39:
    v24 = (_QWORD *)*v24;
    if ( !v24 )
    {
      v22 = v58;
      v21 = v55;
      goto LABEL_41;
    }
  }
  v26 = v24[1];
  if ( (*(_BYTE *)(v26 - 22) & 2) != 0 )
    v27 = v26 - 48 - ObpInfoMaskToOffset[*(_BYTE *)(v26 - 22) & 3];
  else
    v27 = 0LL;
  if ( v27 )
    DestinationString = *(UNICODE_STRING *)(v27 + 8);
  else
    RtlInitUnicodeString(&DestinationString, 0LL);
  Size_4 = (unsigned __int16)(v26 - 48) >> 8;
  v28 = DestinationString.Length;
  v29 = *(unsigned __int16 *)(ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(v26 - 24) ^ (unsigned __int64)Size_4]
                            + 16)
      + DestinationString.Length
      + 36;
  if ( (unsigned int)Feature_679005496__private_IsEnabledDeviceUsageNoInline() && v15 > v29 + v15 )
  {
    v17 = 261;
    v51 = --v16;
    goto LABEL_42;
  }
  v30 = v29 + v15;
  v31 = v63;
  if ( v30 <= v63 )
  {
    v32 = v57;
    *v57 = v28;
    v32[1] = v28 + 2;
    *((_QWORD *)v32 + 1) = DestinationString.Buffer;
    v33 = (unsigned __int8)ObHeaderCookie;
    v32[8] = *(_WORD *)(ObTypeIndexTable[*(unsigned __int8 *)(v26 - 24) ^ Size_4 ^ (unsigned __int64)(unsigned __int8)ObHeaderCookie]
                      + 16);
    v32[9] = *(_WORD *)(ObTypeIndexTable[*(unsigned __int8 *)(v26 - 24) ^ Size_4 ^ (unsigned __int64)(unsigned int)v33]
                      + 16)
           + 2;
    *((_QWORD *)v32 + 3) = *(_QWORD *)(ObTypeIndexTable[*(unsigned __int8 *)(v26 - 24) ^ Size_4 ^ v33] + 24);
    v17 = 0;
    v15 = v30;
    Size = v30;
    v57 = v32 + 16;
    ++v50;
    if ( a4 )
      goto LABEL_42;
    ++v23;
    goto LABEL_39;
  }
  if ( a4 )
    v15 = v30;
  Size = v15;
  v51 = --v16;
  v41 = -1073741789;
  if ( !a4 )
    v41 = 261;
  v17 = v41;
LABEL_43:
  if ( v17 >= 0 )
  {
    v34 = v57;
    *(_OWORD *)v57 = 0LL;
    *((_OWORD *)v34 + 1) = 0LL;
    v35 = (char *)(v34 + 16);
    if ( v50 )
    {
      v36 = (const void **)((char *)Src + 24);
      v37 = v50;
      v38 = Src;
      do
      {
        memmove(v35, *(v36 - 2), *((unsigned __int16 *)v36 - 12));
        *(v36 - 2) = &Address[v35 - v38];
        v39 = &v35[*((unsigned __int16 *)v36 - 12)];
        *(_WORD *)v39 = 0;
        v39 += 2;
        memmove(v39, *v36, *((unsigned __int16 *)v36 - 4));
        *v36 = &Address[v39 - v38];
        v40 = &v39[*((unsigned __int16 *)v36 - 4)];
        *(_WORD *)v40 = 0;
        v35 = v40 + 2;
        v36 += 4;
        --v37;
      }
      while ( v37 );
      v15 = Size;
      v16 = v51;
      v31 = v63;
    }
  }
  v42 = (signed __int64 *)((char *)Object + 296);
  _m_prefetchw((char *)Object + 296);
  v43 = *v42;
  v44 = *v42 - 16;
  if ( (*v42 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
    v44 = 0LL;
  if ( (v43 & 2) != 0 || (v45 = *v42, v45 != _InterlockedCompareExchange64(v42, v44, v43)) )
    ExfReleasePushLock(v42);
  KeAbPostRelease((ULONG_PTR)v42);
  if ( BYTE6(v61) )
    ObDereferenceObjectDeferDeleteWithTag(Object, 0x554C624Fu);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v46, v47, v48);
  if ( v15 <= v31 )
    v31 = v15;
  memmove(Address, Src, v31);
  if ( a7 )
    *a7 = v15;
  if ( v17 >= 0 )
    *a6 = v16;
  ObfDereferenceObject(Object);
  ExFreePoolWithTag(Src, 0);
  return (unsigned int)v17;
}
