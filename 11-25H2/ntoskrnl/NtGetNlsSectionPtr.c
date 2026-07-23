/*
 * XREFs of NtGetNlsSectionPtr @ 0x1408FB050
 * Callers:
 *     RtlpInitCodePageTables @ 0x14076F814 (RtlpInitCodePageTables.c)
 *     RtlpInitUppercaseTables @ 0x14076F9BC (RtlpInitUppercaseTables.c)
 * Callees:
 *     MiInsertInSystemSpace @ 0x1402A4B54 (MiInsertInSystemSpace.c)
 *     ObfDereferenceObject @ 0x140309490 (ObfDereferenceObject.c)
 *     MiCheckPurgeAndUpMapCount @ 0x1403A4900 (MiCheckPurgeAndUpMapCount.c)
 *     MiSectionControlArea @ 0x1403B4FE0 (MiSectionControlArea.c)
 *     MiDereferenceControlArea @ 0x14046FD68 (MiDereferenceControlArea.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     ZwClose @ 0x14069B320 (ZwClose.c)
 *     ZwOpenFile @ 0x14069B7A0 (ZwOpenFile.c)
 *     ZwOpenSection @ 0x14069B820 (ZwOpenSection.c)
 *     ZwCreateSection @ 0x14069BA80 (ZwCreateSection.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     ObReferenceObjectByHandle @ 0x14084F190 (ObReferenceObjectByHandle.c)
 *     RtlpInitNlsFileName @ 0x1408F95F4 (RtlpInitNlsFileName.c)
 *     RtlpInitNlsSectionName @ 0x1408FB570 (RtlpInitNlsSectionName.c)
 *     MiMapViewOfSection @ 0x1408FC9F0 (MiMapViewOfSection.c)
 */

NTSTATUS __cdecl NtGetNlsSectionPtr(
        ULONG SectionType,
        ULONG SectionData,
        PVOID ContextData,
        PVOID *SectionPointer,
        PULONG SectionSize)
{
  char PreviousMode; // r12
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rcx
  NTSTATUS result; // eax
  NTSTATUS v14; // ebx
  __int64 v15; // r9
  _KPROCESS *Process; // rbx
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // r12
  _QWORD *v19; // rbx
  unsigned __int64 v20; // rsi
  PVOID Object; // [rsp+48h] [rbp-2A0h] BYREF
  void *v22; // [rsp+50h] [rbp-298h] BYREF
  ULONG_PTR v23; // [rsp+58h] [rbp-290h] BYREF
  HANDLE SectionHandle; // [rsp+60h] [rbp-288h] BYREF
  __int64 v25; // [rsp+68h] [rbp-280h] BYREF
  HANDLE FileHandle; // [rsp+70h] [rbp-278h] BYREF
  __int64 v27; // [rsp+78h] [rbp-270h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+88h] [rbp-260h] BYREF
  __int128 v29; // [rsp+B8h] [rbp-230h] BYREF
  UNICODE_STRING v30; // [rsp+C8h] [rbp-220h] BYREF
  OBJECT_ATTRIBUTES v31; // [rsp+D8h] [rbp-210h] BYREF
  _BYTE v32[8]; // [rsp+110h] [rbp-1D8h] BYREF
  unsigned __int64 v33; // [rsp+118h] [rbp-1D0h]
  __int64 v34; // [rsp+120h] [rbp-1C8h]
  unsigned __int64 v35; // [rsp+128h] [rbp-1C0h]
  int v36; // [rsp+138h] [rbp-1B0h]
  int v37; // [rsp+13Ch] [rbp-1ACh]
  int v38; // [rsp+144h] [rbp-1A4h]
  char v39; // [rsp+149h] [rbp-19Fh]
  int v40; // [rsp+14Ch] [rbp-19Ch]
  int v41; // [rsp+150h] [rbp-198h]
  _KPROCESS *v42; // [rsp+168h] [rbp-180h]
  _KPROCESS *v43; // [rsp+170h] [rbp-178h]
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+190h] [rbp-158h] BYREF
  _BYTE v45[128]; // [rsp+1A0h] [rbp-148h] BYREF
  wchar_t v46[64]; // [rsp+220h] [rbp-C8h] BYREF

  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  v29 = 0LL;
  FileHandle = 0LL;
  SectionHandle = 0LL;
  IoStatusBlock = 0LL;
  v22 = 0LL;
  v23 = 0LL;
  if ( !SectionPointer && !ContextData )
    return -1073741811;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    v10 = 0x7FFFFFFF0000LL;
    if ( SectionPointer )
    {
      v11 = 0x7FFFFFFF0000LL;
      if ( (unsigned __int64)SectionPointer < 0x7FFFFFFF0000LL )
        v11 = (__int64)SectionPointer;
      *(_QWORD *)v11 = *(_QWORD *)v11;
    }
    if ( SectionSize )
    {
      v12 = 0x7FFFFFFF0000LL;
      if ( (unsigned __int64)SectionSize < 0x7FFFFFFF0000LL )
        v12 = (__int64)SectionSize;
      *(_QWORD *)v12 = *(_QWORD *)v12;
    }
    if ( ContextData )
    {
      if ( (unsigned __int64)ContextData < 0x7FFFFFFF0000LL )
        v10 = (__int64)ContextData;
      *(_QWORD *)v10 = *(_QWORD *)v10;
    }
    if ( ContextData )
      return -1073741583;
  }
  result = RtlpInitNlsSectionName(SectionType, SectionData, v45);
  if ( result >= 0 )
  {
    ObjectAttributes.Length = 48;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 720;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)&v29;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    if ( ((SectionType - 11) & 0xFFFFFFFC) != 0 || SectionType == 13 )
    {
      v14 = -1073741823;
      goto LABEL_20;
    }
    v14 = ZwOpenSection(&SectionHandle, 4u, &ObjectAttributes);
    if ( v14 >= 0 )
    {
LABEL_20:
      if ( v14 < 0 )
        return v14;
      Object = 0LL;
      v14 = ObReferenceObjectByHandle(SectionHandle, 0xF001Fu, MmSectionObjectType, 0, &Object, 0LL);
      ZwClose(SectionHandle);
      if ( v14 < 0 )
        return v14;
      if ( SectionPointer )
      {
        v27 = 0LL;
        if ( !PreviousMode )
        {
          v25 = 0LL;
          v23 = 0LL;
          v19 = Object;
          v20 = MiSectionControlArea((__int64)Object);
          MiCheckPurgeAndUpMapCount(v20);
          LODWORD(v25) = v25 & 0xFFFF0000;
          v18 = v19[6] - v25;
          v14 = MiInsertInSystemSpace(v18, (__int64)v19, &v25, 0, 0LL, &v23);
          if ( v14 < 0 )
          {
            MiDereferenceControlArea(v20);
          }
          else
          {
            v22 = (void *)v23;
            v14 = 0;
          }
          goto LABEL_30;
        }
        Process = KeGetCurrentThread()->ApcState.Process;
        MiSectionControlArea((__int64)Object);
        memset_0(v32, 0, 0x80uLL);
        v43 = KeGetCurrentThread()->ApcState.Process;
        v42 = Process;
        v39 = KeGetCurrentThread()->PreviousMode;
        v38 = 0;
        v36 = 0x400000;
        v37 = 2;
        v41 = 0;
        if ( v22 )
          v40 |= 1u;
        v35 = 0LL;
        v17 = *(_QWORD *)&Process[1].PrimaryGroup - 1LL;
        if ( v17 >= 0x7FFFFFFEFFFFLL )
          v17 = 0x7FFFFFFEFFFFLL;
        v33 = v17;
        v34 = 0x10000LL;
        v14 = MiMapViewOfSection((_DWORD)Object, (unsigned int)v32, (unsigned int)&v22, 0, (__int64)&v27, 1, 1);
        if ( v14 >= 0 )
        {
          v18 = v35;
LABEL_30:
          if ( !ContextData )
            ObfDereferenceObject(Object);
          if ( v14 >= 0 )
          {
            if ( SectionPointer )
              *SectionPointer = v22;
            if ( SectionSize )
              *(_QWORD *)SectionSize = v18;
            if ( ContextData )
              *(_QWORD *)ContextData = Object;
          }
          return v14;
        }
        if ( v22 )
          ++dword_140E2FF64;
        else
          ++dword_140E2FF60;
      }
      v18 = v23;
      goto LABEL_30;
    }
    *(&v31.Length + 1) = 0;
    *(&v31.Attributes + 1) = 0;
    v30 = 0LL;
    result = RtlpInitNlsFileName(SectionType, SectionData, v46, v15, &v30);
    if ( result >= 0 )
    {
      v31.Length = 48;
      v31.RootDirectory = 0LL;
      v31.Attributes = 576;
      v31.ObjectName = &v30;
      *(_OWORD *)&v31.SecurityDescriptor = 0LL;
      result = ZwOpenFile(&FileHandle, 0x100000u, &v31, &IoStatusBlock, 1u, 0);
      if ( result >= 0 )
      {
        v14 = ZwCreateSection(&SectionHandle, 4u, &ObjectAttributes, 0LL, 2u, 0x8000000u, FileHandle);
        ZwClose(FileHandle);
        goto LABEL_20;
      }
    }
  }
  return result;
}
