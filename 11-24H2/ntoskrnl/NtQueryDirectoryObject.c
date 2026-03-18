/*
 * XREFs of NtQueryDirectoryObject @ 0x140AC44D0
 * Callers:
 *     <none>
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x1402595C0 (KiLeaveCriticalRegionUnsafe.c)
 *     ExfReleasePushLock @ 0x14025E260 (ExfReleasePushLock.c)
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x14025E950 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     ObfDereferenceObject @ 0x140325680 (ObfDereferenceObject.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x14034050C (ExfAcquirePushLockSharedEx.c)
 *     RtlInitUnicodeString @ 0x1404241A0 (RtlInitUnicodeString.c)
 *     memmove @ 0x1406BFC40 (memmove.c)
 *     ObReferenceObjectByHandle @ 0x14084AF40 (ObReferenceObjectByHandle.c)
 *     ProbeForWrite @ 0x1408C0590 (ProbeForWrite.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
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
  void *Pool2; // r14
  NTSTATUS v14; // ebx
  unsigned int v15; // r13d
  int v16; // r14d
  int v17; // r12d
  struct _KTHREAD *CurrentThread; // rax
  signed __int64 *v19; // rbx
  _QWORD *v20; // rdi
  unsigned int v21; // ecx
  _QWORD *v22; // rax
  int v23; // esi
  _QWORD *v24; // rdi
  int v25; // r11d
  int v26; // eax
  __int64 v27; // rbx
  __int64 v28; // rax
  __int64 v29; // r10
  __int64 v30; // r9
  unsigned __int16 v31; // r8
  unsigned int v32; // edx
  unsigned __int16 *v33; // r11
  unsigned __int16 *v34; // rbx
  char *v35; // rbx
  int v36; // esi
  const void **v37; // rdi
  _BYTE *v38; // r13
  char *v39; // rbx
  char *v40; // rbx
  signed __int64 *v41; // rbx
  signed __int64 v42; // rax
  signed __int64 v43; // rdx
  signed __int64 v44; // rtt
  __int64 v45; // rdx
  __int64 v46; // r8
  __int64 v47; // r9
  unsigned int v48; // eax
  int v49; // [rsp+30h] [rbp-A8h]
  int v50; // [rsp+34h] [rbp-A4h]
  int v51; // [rsp+3Ch] [rbp-9Ch]
  int v52; // [rsp+40h] [rbp-98h]
  PVOID Object; // [rsp+48h] [rbp-90h] BYREF
  unsigned int v54; // [rsp+50h] [rbp-88h]
  void *Src; // [rsp+58h] [rbp-80h]
  int v56; // [rsp+60h] [rbp-78h]
  unsigned __int16 *v57; // [rsp+68h] [rbp-70h]
  _QWORD *v58; // [rsp+70h] [rbp-68h]
  UNICODE_STRING DestinationString; // [rsp+78h] [rbp-60h] BYREF
  __int128 v60; // [rsp+88h] [rbp-50h]
  __int64 v61; // [rsp+98h] [rbp-40h]
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
  v52 = 32;
  v16 = 0;
  v50 = 0;
  v51 = 0;
  v17 = -2147483622;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v19 = (signed __int64 *)((char *)Object + 296);
  v20 = KeAbPreAcquire((__int64)Object + 296, 0LL);
  if ( _InterlockedCompareExchange64(v19, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(v19, 0, v20, (__int64)v19);
  if ( v20 )
    *((_BYTE *)v20 + 10) = 1;
  v21 = 0;
  v54 = 0;
  v22 = Object;
  v58 = Object;
  v23 = v49;
  while ( 1 )
  {
    v24 = (_QWORD *)*v22;
    if ( *v22 )
      break;
LABEL_39:
    v54 = ++v21;
    v58 = ++v22;
    if ( v21 >= 0x25 )
      goto LABEL_47;
  }
  while ( 1 )
  {
    v25 = v16;
    v56 = v16;
    v26 = v16++;
    v50 = v16;
    if ( v23 == v26 )
      break;
LABEL_37:
    v24 = (_QWORD *)*v24;
    if ( !v24 )
    {
      v22 = v58;
      v21 = v54;
      goto LABEL_39;
    }
  }
  v27 = v24[1];
  if ( (*(_BYTE *)(v27 - 22) & 2) != 0 )
    v28 = v27 - 48 - ObpInfoMaskToOffset[*(_BYTE *)(v27 - 22) & 3];
  else
    v28 = 0LL;
  if ( v28 )
  {
    DestinationString = *(UNICODE_STRING *)(v28 + 8);
  }
  else
  {
    RtlInitUnicodeString(&DestinationString, 0LL);
    v25 = v56;
  }
  v29 = (unsigned __int8)((unsigned __int16)(v27 - 48) >> 8);
  v30 = (unsigned __int8)ObHeaderCookie;
  v31 = DestinationString.Length;
  v32 = DestinationString.Length
      + 36
      + v15
      + *(unsigned __int16 *)(ObTypeIndexTable[*(unsigned __int8 *)(v27 - 24) ^ v29 ^ (unsigned __int8)ObHeaderCookie]
                            + 16);
  if ( v15 > v32 )
  {
    v17 = 261;
    v16 = v25;
    v50 = v25;
    goto LABEL_47;
  }
  if ( v32 <= v63 )
  {
    v33 = v57;
    *v57 = DestinationString.Length;
    v33[1] = v31 + 2;
    *((_QWORD *)v33 + 1) = DestinationString.Buffer;
    v33[8] = *(_WORD *)(ObTypeIndexTable[v29 ^ v30 ^ *(unsigned __int8 *)(v27 - 24)] + 16);
    v33[9] = *(_WORD *)(ObTypeIndexTable[v29 ^ v30 ^ *(unsigned __int8 *)(v27 - 24)] + 16) + 2;
    *((_QWORD *)v33 + 3) = *(_QWORD *)(ObTypeIndexTable[v29 ^ v30 ^ *(unsigned __int8 *)(v27 - 24)] + 24);
    v17 = 0;
    v15 = v32;
    v52 = v32;
    v57 = v33 + 16;
    ++v51;
    if ( a4 )
      goto LABEL_47;
    ++v23;
    goto LABEL_37;
  }
  if ( a4 )
    v15 += DestinationString.Length
         + 36
         + *(unsigned __int16 *)(ObTypeIndexTable[*(unsigned __int8 *)(v27 - 24) ^ v29 ^ (unsigned __int8)ObHeaderCookie]
                               + 16);
  v52 = v15;
  v50 = --v16;
  v17 = -1073741789;
  if ( !a4 )
    v17 = 261;
LABEL_47:
  if ( v17 >= 0 )
  {
    v34 = v57;
    *(_OWORD *)v57 = 0LL;
    *((_OWORD *)v34 + 1) = 0LL;
    v35 = (char *)(v34 + 16);
    v36 = v51;
    if ( v51 )
    {
      v37 = (const void **)((char *)Src + 24);
      v38 = Src;
      do
      {
        memmove(v35, *(v37 - 2), *((unsigned __int16 *)v37 - 12));
        *(v37 - 2) = &Address[v35 - v38];
        v39 = &v35[*((unsigned __int16 *)v37 - 12)];
        *(_WORD *)v39 = 0;
        v39 += 2;
        memmove(v39, *v37, *((unsigned __int16 *)v37 - 4));
        *v37 = &Address[v39 - v38];
        v40 = &v39[*((unsigned __int16 *)v37 - 4)];
        *(_WORD *)v40 = 0;
        v35 = v40 + 2;
        v37 += 4;
        --v36;
      }
      while ( v36 );
      v16 = v50;
      v15 = v52;
    }
  }
  v41 = (signed __int64 *)((char *)Object + 296);
  _m_prefetchw((char *)Object + 296);
  v42 = *v41;
  v43 = *v41 - 16;
  if ( (*v41 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
    v43 = 0LL;
  if ( (v42 & 2) != 0 || (v44 = *v41, v44 != _InterlockedCompareExchange64(v41, v43, v42)) )
    ExfReleasePushLock(v41);
  KeAbPostRelease((ULONG_PTR)v41);
  if ( BYTE6(v61) )
    ObDereferenceObjectDeferDeleteWithTag(Object, 0x554C624Fu);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v45, v46, v47);
  v48 = v63;
  if ( v15 <= v63 )
    v48 = v15;
  memmove(Address, Src, v48);
  if ( a7 )
    *a7 = v15;
  if ( v17 >= 0 )
    *a6 = v16;
  ObfDereferenceObject(Object);
  ExFreePoolWithTag(Src, 0);
  return (unsigned int)v17;
}
