/*
 * XREFs of NtQueryDirectoryObject @ 0x140AC1EB0
 * Callers:
 *     <none>
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x140289BD0 (KiLeaveCriticalRegionUnsafe.c)
 *     ExfReleasePushLock @ 0x14028E870 (ExfReleasePushLock.c)
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x14028EF60 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     ObfDereferenceObject @ 0x1402CE210 (ObfDereferenceObject.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x14031F9EC (ExfAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     RtlInitUnicodeString @ 0x140418050 (RtlInitUnicodeString.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     ObReferenceObjectByHandle @ 0x140847200 (ObReferenceObjectByHandle.c)
 *     ProbeForWrite @ 0x1408BDF50 (ProbeForWrite.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

NTSTATUS __cdecl NtQueryDirectoryObject(
        HANDLE DirectoryHandle,
        PVOID Buffer,
        ULONG Length,
        BOOLEAN ReturnSingleEntry,
        BOOLEAN RestartScan,
        PULONG Context,
        PULONG ReturnLength)
{
  __int64 v7; // rbx
  KPROCESSOR_MODE PreviousMode; // di
  __int64 v10; // rdx
  __int64 v11; // rcx
  void *Pool2; // r14
  int v14; // ebx
  ULONG v15; // r13d
  ULONG v16; // r14d
  NTSTATUS v17; // r12d
  struct _KTHREAD *CurrentThread; // rax
  signed __int64 *v19; // rbx
  char *v20; // rdi
  unsigned int v21; // ecx
  _QWORD *v22; // rax
  ULONG v23; // esi
  _QWORD *v24; // rdi
  ULONG v25; // r11d
  ULONG v26; // eax
  __int64 v27; // rbx
  __int64 v28; // rax
  __int64 v29; // r10
  __int64 v30; // r9
  unsigned __int16 v31; // r8
  ULONG v32; // edx
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
  ULONG v45; // eax
  ULONG v46; // [rsp+30h] [rbp-A8h]
  ULONG v47; // [rsp+34h] [rbp-A4h]
  int v48; // [rsp+3Ch] [rbp-9Ch]
  int v49; // [rsp+40h] [rbp-98h]
  PVOID Object; // [rsp+48h] [rbp-90h] BYREF
  unsigned int v51; // [rsp+50h] [rbp-88h]
  void *Src; // [rsp+58h] [rbp-80h]
  ULONG v53; // [rsp+60h] [rbp-78h]
  unsigned __int16 *v54; // [rsp+68h] [rbp-70h]
  _QWORD *v55; // [rsp+70h] [rbp-68h]
  UNICODE_STRING DestinationString; // [rsp+78h] [rbp-60h] BYREF
  __int128 v57; // [rsp+88h] [rbp-50h]
  __int64 v58; // [rsp+98h] [rbp-40h]

  v7 = Length;
  DestinationString = 0LL;
  v57 = 0LL;
  v58 = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    ProbeForWrite(Buffer, Length, 2u);
    v10 = 0x7FFFFFFF0000LL;
    v11 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)Context < 0x7FFFFFFF0000LL )
      v11 = (__int64)Context;
    *(_DWORD *)v11 = *(_DWORD *)v11;
    if ( ReturnLength )
    {
      if ( (unsigned __int64)ReturnLength < 0x7FFFFFFF0000LL )
        v10 = (__int64)ReturnLength;
      *(_DWORD *)v10 = *(_DWORD *)v10;
    }
    if ( RestartScan )
      v46 = 0;
    else
      v46 = *Context;
  }
  else if ( RestartScan )
  {
    v46 = 0;
  }
  else
  {
    v46 = *Context;
  }
  if ( (unsigned int)v7 >= (int)v7 + 32 )
    return -1073741811;
  Pool2 = (void *)ExAllocatePool2(0x101uLL, v7 + 32, 0x6D4E624Fu);
  Src = Pool2;
  if ( !Pool2 )
    return -1073741670;
  Object = 0LL;
  v14 = ObReferenceObjectByHandle(DirectoryHandle, 1u, ObpDirectoryObjectType, PreviousMode, &Object, 0LL);
  if ( v14 < 0 )
  {
    ExFreePoolWithTag(Pool2, 0);
    return v14;
  }
  v54 = (unsigned __int16 *)Pool2;
  v15 = 32;
  v49 = 32;
  v16 = 0;
  v47 = 0;
  v48 = 0;
  v17 = -2147483622;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v19 = (signed __int64 *)((char *)Object + 296);
  v20 = (char *)KeAbPreAcquire((__int64)Object + 296, 0LL);
  if ( _InterlockedCompareExchange64(v19, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(v19, 0, v20, (__int64)v19);
  if ( v20 )
    v20[10] = 1;
  v21 = 0;
  v51 = 0;
  v22 = Object;
  v55 = Object;
  v23 = v46;
  while ( 1 )
  {
    v24 = (_QWORD *)*v22;
    if ( *v22 )
      break;
LABEL_39:
    v51 = ++v21;
    v55 = ++v22;
    if ( v21 >= 0x25 )
      goto LABEL_47;
  }
  while ( 1 )
  {
    v25 = v16;
    v53 = v16;
    v26 = v16++;
    v47 = v16;
    if ( v23 == v26 )
      break;
LABEL_37:
    v24 = (_QWORD *)*v24;
    if ( !v24 )
    {
      v22 = v55;
      v21 = v51;
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
    v25 = v53;
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
    v47 = v25;
    goto LABEL_47;
  }
  if ( v32 <= Length )
  {
    v33 = v54;
    *v54 = DestinationString.Length;
    v33[1] = v31 + 2;
    *((_QWORD *)v33 + 1) = DestinationString.Buffer;
    v33[8] = *(_WORD *)(ObTypeIndexTable[v29 ^ v30 ^ *(unsigned __int8 *)(v27 - 24)] + 16);
    v33[9] = *(_WORD *)(ObTypeIndexTable[v29 ^ v30 ^ *(unsigned __int8 *)(v27 - 24)] + 16) + 2;
    *((_QWORD *)v33 + 3) = *(_QWORD *)(ObTypeIndexTable[v29 ^ v30 ^ *(unsigned __int8 *)(v27 - 24)] + 24);
    v17 = 0;
    v15 = v32;
    v49 = v32;
    v54 = v33 + 16;
    ++v48;
    if ( ReturnSingleEntry )
      goto LABEL_47;
    ++v23;
    goto LABEL_37;
  }
  if ( ReturnSingleEntry )
    v15 += DestinationString.Length
         + 36
         + *(unsigned __int16 *)(ObTypeIndexTable[*(unsigned __int8 *)(v27 - 24) ^ v29 ^ (unsigned __int8)ObHeaderCookie]
                               + 16);
  v49 = v15;
  v47 = --v16;
  v17 = -1073741789;
  if ( !ReturnSingleEntry )
    v17 = 261;
LABEL_47:
  if ( v17 >= 0 )
  {
    v34 = v54;
    *(_OWORD *)v54 = 0LL;
    *((_OWORD *)v34 + 1) = 0LL;
    v35 = (char *)(v34 + 16);
    v36 = v48;
    if ( v48 )
    {
      v37 = (const void **)((char *)Src + 24);
      v38 = Src;
      do
      {
        memmove(v35, *(v37 - 2), *((unsigned __int16 *)v37 - 12));
        *(v37 - 2) = (char *)Buffer + v35 - v38;
        v39 = &v35[*((unsigned __int16 *)v37 - 12)];
        *(_WORD *)v39 = 0;
        v39 += 2;
        memmove(v39, *v37, *((unsigned __int16 *)v37 - 4));
        *v37 = (char *)Buffer + v39 - v38;
        v40 = &v39[*((unsigned __int16 *)v37 - 4)];
        *(_WORD *)v40 = 0;
        v35 = v40 + 2;
        v37 += 4;
        --v36;
      }
      while ( v36 );
      v16 = v47;
      v15 = v49;
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
  if ( BYTE6(v58) )
    ObDereferenceObjectDeferDeleteWithTag(Object, 0x554C624Fu);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  v45 = Length;
  if ( v15 <= Length )
    v45 = v15;
  memmove(Buffer, Src, v45);
  if ( ReturnLength )
    *ReturnLength = v15;
  if ( v17 >= 0 )
    *Context = v16;
  ObfDereferenceObject(Object);
  ExFreePoolWithTag(Src, 0);
  return v17;
}
