/*
 * XREFs of CMFSystemThreadRoutine @ 0x1407C3A10
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x140227B30 (KeSetEvent.c)
 *     ObfDereferenceObject @ 0x1402CE210 (ObfDereferenceObject.c)
 *     RtlInitUnicodeString @ 0x140418050 (RtlInitUnicodeString.c)
 *     RtlStringCchPrintfW @ 0x140472F38 (RtlStringCchPrintfW.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     ZwWaitForSingleObject @ 0x1406A7430 (ZwWaitForSingleObject.c)
 *     ZwReadFile @ 0x1406A7470 (ZwReadFile.c)
 *     ZwClose @ 0x1406A7590 (ZwClose.c)
 *     ZwMapViewOfSection @ 0x1406A78B0 (ZwMapViewOfSection.c)
 *     ZwUnmapViewOfSection @ 0x1406A78F0 (ZwUnmapViewOfSection.c)
 *     ZwOpenFile @ 0x1406A7A10 (ZwOpenFile.c)
 *     ZwCreateEvent @ 0x1406A7CB0 (ZwCreateEvent.c)
 *     ZwCreateSection @ 0x1406A7CF0 (ZwCreateSection.c)
 *     CMFCreateSecurityDescriptor @ 0x1407C2AB0 (CMFCreateSecurityDescriptor.c)
 *     CMFGetFileSizeEx @ 0x1407C33F0 (CMFGetFileSizeEx.c)
 *     CMFGetLargePageSectionSize @ 0x1407C3468 (CMFGetLargePageSectionSize.c)
 *     CMFReadCompressedSegment @ 0x1407C3520 (CMFReadCompressedSegment.c)
 *     ObReferenceObjectByHandle @ 0x140847200 (ObReferenceObjectByHandle.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

void __fastcall CMFSystemThreadRoutine(__int64 a1)
{
  __int64 *Pool2; // r15
  HANDLE v3; // r13
  PVOID v4; // rsi
  int v5; // eax
  char *v6; // rax
  const wchar_t *v7; // r8
  ULONG Length; // r14d
  int v9; // ebx
  __int64 *Buffer; // r12
  NTSTATUS v11; // eax
  bool v12; // sf
  int v13; // ebx
  ULONG_PTR LowPart; // r14
  LARGE_INTEGER *p_SectionOffset; // r12
  ULONG v16; // eax
  ULONG v17; // eax
  NTSTATUS v18; // eax
  _QWORD *v19; // rax
  struct _KEVENT *v20; // rcx
  char v21; // [rsp+58h] [rbp-B0h]
  LARGE_INTEGER SectionOffset; // [rsp+60h] [rbp-A8h] BYREF
  PVOID v23; // [rsp+68h] [rbp-A0h] BYREF
  HANDLE Object; // [rsp+70h] [rbp-98h] BYREF
  PVOID BaseAddress; // [rsp+78h] [rbp-90h] BYREF
  HANDLE FileHandle; // [rsp+80h] [rbp-88h] BYREF
  HANDLE EventHandle; // [rsp+88h] [rbp-80h] BYREF
  HANDLE SectionHandle; // [rsp+90h] [rbp-78h] BYREF
  ULONG_PTR ViewSize; // [rsp+98h] [rbp-70h] BYREF
  __int64 v30; // [rsp+A0h] [rbp-68h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+A8h] [rbp-60h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+D8h] [rbp-30h] BYREF
  UNICODE_STRING DestinationString; // [rsp+E8h] [rbp-20h] BYREF
  __int64 v34; // [rsp+F8h] [rbp-10h] BYREF
  wchar_t pszDest[264]; // [rsp+108h] [rbp+0h] BYREF

  v30 = 0LL;
  Pool2 = 0LL;
  SectionOffset.QuadPart = 0LL;
  v3 = 0LL;
  ViewSize = 0LL;
  v4 = 0LL;
  v34 = 0LL;
  v21 = 0;
  EventHandle = 0LL;
  FileHandle = 0LL;
  v23 = 0LL;
  SectionHandle = 0LL;
  BaseAddress = 0LL;
  IoStatusBlock = 0LL;
  memset(&ObjectAttributes, 0, 44);
  DestinationString = 0LL;
  if ( !a1 )
    return;
  v5 = *(_DWORD *)(a1 + 48);
  if ( v5 == 16 )
  {
    v6 = "RESCDIR";
    v7 = L"%s\\rc%04u\\rescache.dir";
LABEL_10:
    Object = v6;
    Buffer = &v34;
    Length = 8;
    v11 = RtlStringCchPrintfW(pszDest, 0x104uLL, v7, L"\\SystemRoot\\Rescache", *(_DWORD *)(a1 + 4));
LABEL_11:
    v9 = v11;
    if ( (v11 & 0xC0000000) == 0xC0000000 )
    {
LABEL_14:
      v4 = v23;
      goto LABEL_58;
    }
    RtlInitUnicodeString(&DestinationString, pszDest);
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v9 = ZwOpenFile(&FileHandle, 0xC0000000, &ObjectAttributes, &IoStatusBlock, 7u, 0);
    if ( (v9 & 0xC0000000) == 0xC0000000 )
    {
      FileHandle = 0LL;
      goto LABEL_14;
    }
    ObjectAttributes.Length = 48;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 512;
    ObjectAttributes.ObjectName = 0LL;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v9 = ZwCreateEvent(&EventHandle, 0x1F0003u, &ObjectAttributes, SynchronizationEvent, 0);
    if ( (v9 & 0xC0000000) == 0xC0000000 )
      goto LABEL_14;
    v9 = ZwReadFile(FileHandle, EventHandle, 0LL, 0LL, &IoStatusBlock, Buffer, Length, &SectionOffset, 0LL);
    if ( v9 < 0 )
      goto LABEL_14;
    v9 = ZwWaitForSingleObject(EventHandle, 0, 0LL);
    v12 = v9 < 0;
    if ( v9 )
    {
LABEL_18:
      if ( !v12 )
        v9 = -1073741823;
      goto LABEL_14;
    }
    if ( *Buffer != *(_QWORD *)Object )
    {
      v9 = -1073700864;
      goto LABEL_14;
    }
    v13 = *(_DWORD *)(a1 + 48);
    if ( v13 == 32 && *((_DWORD *)Pool2 + 19) )
    {
      *(_DWORD *)(a1 + 24) |= 4u;
      v21 = 1;
      *(_BYTE *)(a1 + 12) = 1;
    }
    LowPart = 0LL;
    p_SectionOffset = 0LL;
    Object = FileHandle;
    if ( *(_BYTE *)(a1 + 12) )
    {
      Object = 0LL;
      SectionOffset.QuadPart = 0LL;
      if ( v13 == 16 || v13 == 256 )
      {
        v9 = CMFGetFileSizeEx(FileHandle, &SectionOffset);
        if ( (v9 & 0xC0000000) == 0xC0000000 )
          goto LABEL_14;
        LowPart = SectionOffset.LowPart;
        v13 = *(_DWORD *)(a1 + 48);
      }
      else
      {
        LowPart = *((unsigned int *)Pool2 + 8);
        SectionOffset.LowPart = *((_DWORD *)Pool2 + 8);
      }
      if ( (int)CMFGetLargePageSectionSize((__int64 *)&SectionOffset, (__int64)&v30) < 0 || *(int *)a1 >= 0 )
      {
        *(_DWORD *)a1 &= ~0x80000000;
        p_SectionOffset = &SectionOffset;
        ViewSize = LowPart;
      }
      else
      {
        p_SectionOffset = (LARGE_INTEGER *)&v30;
        ViewSize = (unsigned int)v30;
      }
    }
    if ( v13 != 256 )
    {
      v9 = CMFCreateSecurityDescriptor(&v23, 0LL);
      if ( (v9 & 0xC0000000) == 0xC0000000 )
        goto LABEL_14;
    }
    while ( 1 )
    {
      ObjectAttributes.SecurityDescriptor = v23;
      v16 = *(_DWORD *)a1;
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.ObjectName = 0LL;
      ObjectAttributes.SecurityQualityOfService = 0LL;
      ObjectAttributes.Length = 48;
      ObjectAttributes.Attributes = 576;
      v9 = ZwCreateSection(&SectionHandle, 6u, &ObjectAttributes, p_SectionOffset, 4u, v16, Object);
      if ( v9 >= 0 )
        break;
      if ( !*(_BYTE *)(a1 + 12) || (v17 = *(_DWORD *)a1, *(int *)a1 >= 0) )
      {
        SectionHandle = 0LL;
        goto LABEL_14;
      }
      ViewSize = LowPart;
      *(_DWORD *)a1 = v17 & 0x7FFFFFFF;
      p_SectionOffset = &SectionOffset;
    }
    Object = 0LL;
    v18 = ObReferenceObjectByHandle(SectionHandle, 0xF001Fu, MmSectionObjectType, 0, &Object, 0LL);
    v3 = Object;
    v9 = v18;
    if ( (v18 & 0xC0000000) == 0xC0000000 )
    {
      v3 = 0LL;
      goto LABEL_14;
    }
    if ( *(_BYTE *)(a1 + 12) )
    {
      SectionOffset.QuadPart = 0LL;
      v9 = ZwMapViewOfSection(
             SectionHandle,
             (HANDLE)0xFFFFFFFFFFFFFFFFLL,
             &BaseAddress,
             0LL,
             0LL,
             &SectionOffset,
             &ViewSize,
             ViewUnmap,
             0x400000u,
             4u);
      if ( (v9 & 0xC0000000) == 0xC0000000 )
      {
        BaseAddress = 0LL;
        goto LABEL_14;
      }
      if ( v21 )
      {
        *((_DWORD *)Pool2 + 19) = 0;
        v9 = CMFReadCompressedSegment(FileHandle, (char *)BaseAddress, LowPart, Pool2);
        if ( v9 < 0 )
          goto LABEL_14;
      }
      else
      {
        SectionOffset.QuadPart = 0LL;
        v9 = ZwReadFile(FileHandle, EventHandle, 0LL, 0LL, &IoStatusBlock, BaseAddress, LowPart, &SectionOffset, 0LL);
        if ( v9 < 0 )
          goto LABEL_14;
        v9 = ZwWaitForSingleObject(EventHandle, 0, 0LL);
        v12 = v9 < 0;
        if ( v9 )
          goto LABEL_18;
      }
      ZwUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, BaseAddress);
      BaseAddress = 0LL;
    }
    v19 = *(_QWORD **)(a1 + 40);
    if ( v19 )
    {
      *v19 = v3;
      v3 = 0LL;
      if ( *(_DWORD *)(a1 + 48) == 16 && CMFCacheIndex == 10000 )
      {
        CMFFlagsCache |= *(_DWORD *)(a1 + 24) & 0xF;
        CMFCacheIndex = *(_DWORD *)(a1 + 4);
      }
    }
    goto LABEL_14;
  }
  if ( v5 != 32 )
  {
    if ( v5 != 256 )
    {
      v9 = -1073741811;
      goto LABEL_58;
    }
    v6 = "RESCHIT";
    v7 = L"%s\\rc%04u\\rescache.hit";
    goto LABEL_10;
  }
  Length = 4192;
  Pool2 = (__int64 *)ExAllocatePool2(0x100uLL, 0x1060uLL, 0x636D6650u);
  if ( Pool2 )
  {
    Object = "RESCSEG";
    Buffer = Pool2;
    v11 = RtlStringCchPrintfW(
            pszDest,
            0x104uLL,
            L"%s\\rc%04u\\segment%u.cmf",
            L"\\SystemRoot\\Rescache",
            *(_DWORD *)(a1 + 4),
            *(_DWORD *)(a1 + 28));
    goto LABEL_11;
  }
  v9 = -1073741801;
LABEL_58:
  if ( EventHandle )
    ZwClose(EventHandle);
  if ( BaseAddress )
    ZwUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, BaseAddress);
  if ( SectionHandle )
    ZwClose(SectionHandle);
  if ( FileHandle )
    ZwClose(FileHandle);
  if ( v4 )
    ExFreePoolWithTag(v4, 0);
  if ( v3 )
    ObfDereferenceObject(v3);
  if ( Pool2 )
    ExFreePoolWithTag(Pool2, 0);
  v20 = *(struct _KEVENT **)(a1 + 16);
  *(_DWORD *)(a1 + 36) = v9;
  if ( v20 )
    KeSetEvent(v20, 1, 0);
}
