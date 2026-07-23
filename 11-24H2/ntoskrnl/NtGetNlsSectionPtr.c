/*
 * XREFs of NtGetNlsSectionPtr @ 0x140A053E0
 * Callers:
 *     RtlpInitCodePageTables @ 0x14077E994 (RtlpInitCodePageTables.c)
 *     RtlpInitUppercaseTables @ 0x14077EB3C (RtlpInitUppercaseTables.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402CE210 (ObfDereferenceObject.c)
 *     MiSectionControlArea @ 0x140355A80 (MiSectionControlArea.c)
 *     MiInsertInSystemSpace @ 0x140393BFC (MiInsertInSystemSpace.c)
 *     MiCheckPurgeAndUpMapCount @ 0x1404071F0 (MiCheckPurgeAndUpMapCount.c)
 *     MiDereferenceControlArea @ 0x14042777C (MiDereferenceControlArea.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     ZwClose @ 0x1406A7590 (ZwClose.c)
 *     ZwOpenFile @ 0x1406A7A10 (ZwOpenFile.c)
 *     ZwOpenSection @ 0x1406A7A90 (ZwOpenSection.c)
 *     ZwCreateSection @ 0x1406A7CF0 (ZwCreateSection.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     ObReferenceObjectByHandle @ 0x140847200 (ObReferenceObjectByHandle.c)
 *     MiMapViewOfSection @ 0x1408A2840 (MiMapViewOfSection.c)
 *     RtlpInitNlsSectionName @ 0x140A05900 (RtlpInitNlsSectionName.c)
 *     RtlpInitNlsFileName @ 0x140A059CC (RtlpInitNlsFileName.c)
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
  _KPROCESS *Process; // rbx
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // r12
  _QWORD *v18; // rbx
  unsigned __int64 v19; // rsi
  PVOID Object; // [rsp+48h] [rbp-2A0h] BYREF
  void *v21; // [rsp+50h] [rbp-298h] BYREF
  ULONG_PTR v22; // [rsp+58h] [rbp-290h] BYREF
  HANDLE SectionHandle; // [rsp+60h] [rbp-288h] BYREF
  unsigned __int64 v24; // [rsp+68h] [rbp-280h] BYREF
  HANDLE FileHandle; // [rsp+70h] [rbp-278h] BYREF
  __int64 v26; // [rsp+78h] [rbp-270h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+88h] [rbp-260h] BYREF
  __int128 v28; // [rsp+B8h] [rbp-230h] BYREF
  __int128 v29; // [rsp+C8h] [rbp-220h] BYREF
  OBJECT_ATTRIBUTES v30; // [rsp+D8h] [rbp-210h] BYREF
  _BYTE v31[8]; // [rsp+110h] [rbp-1D8h] BYREF
  unsigned __int64 v32; // [rsp+118h] [rbp-1D0h]
  __int64 v33; // [rsp+120h] [rbp-1C8h]
  unsigned __int64 v34; // [rsp+128h] [rbp-1C0h]
  int v35; // [rsp+138h] [rbp-1B0h]
  int v36; // [rsp+13Ch] [rbp-1ACh]
  int v37; // [rsp+144h] [rbp-1A4h]
  char v38; // [rsp+149h] [rbp-19Fh]
  int v39; // [rsp+14Ch] [rbp-19Ch]
  int v40; // [rsp+150h] [rbp-198h]
  _KPROCESS *v41; // [rsp+168h] [rbp-180h]
  _KPROCESS *v42; // [rsp+170h] [rbp-178h]
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+190h] [rbp-158h] BYREF
  _BYTE v44[128]; // [rsp+1A0h] [rbp-148h] BYREF
  _BYTE v45[128]; // [rsp+220h] [rbp-C8h] BYREF

  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  v28 = 0LL;
  FileHandle = 0LL;
  SectionHandle = 0LL;
  IoStatusBlock = 0LL;
  v21 = 0LL;
  v22 = 0LL;
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
  result = RtlpInitNlsSectionName(SectionType, SectionData, v44);
  if ( result >= 0 )
  {
    ObjectAttributes.Length = 48;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 720;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)&v28;
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
        v26 = 0LL;
        if ( !PreviousMode )
        {
          v24 = 0LL;
          v22 = 0LL;
          v18 = Object;
          v19 = MiSectionControlArea((__int64)Object);
          MiCheckPurgeAndUpMapCount(v19);
          LODWORD(v24) = v24 & 0xFFFF0000;
          v17 = v18[6] - v24;
          v14 = MiInsertInSystemSpace(v17, (__int64)v18, &v24, 0, 0LL, &v22);
          if ( v14 < 0 )
          {
            MiDereferenceControlArea(v19);
          }
          else
          {
            v21 = (void *)v22;
            v14 = 0;
          }
          goto LABEL_30;
        }
        Process = KeGetCurrentThread()->ApcState.Process;
        MiSectionControlArea((__int64)Object);
        memset_0(v31, 0, 0x80uLL);
        v42 = KeGetCurrentThread()->ApcState.Process;
        v41 = Process;
        v38 = KeGetCurrentThread()->PreviousMode;
        v37 = 0;
        v35 = 0x400000;
        v36 = 2;
        v40 = 0;
        if ( v21 )
          v39 |= 1u;
        v34 = 0LL;
        v16 = *(_QWORD *)&Process[1].PrimaryGroup - 1LL;
        if ( v16 >= 0x7FFFFFFEFFFFLL )
          v16 = 0x7FFFFFFEFFFFLL;
        v32 = v16;
        v33 = 0x10000LL;
        v14 = MiMapViewOfSection((__int64)Object, (__int64)v31, (unsigned __int64 *)&v21, 0LL, &v26, 1, 1);
        if ( v14 >= 0 )
        {
          v17 = v34;
LABEL_30:
          if ( !ContextData )
            ObfDereferenceObject(Object);
          if ( v14 >= 0 )
          {
            if ( SectionPointer )
              *SectionPointer = v21;
            if ( SectionSize )
              *(_QWORD *)SectionSize = v17;
            if ( ContextData )
              *(_QWORD *)ContextData = Object;
          }
          return v14;
        }
        if ( v21 )
          ++dword_140E302EC;
        else
          ++dword_140E302E8;
      }
      v17 = v22;
      goto LABEL_30;
    }
    *(&v30.Length + 1) = 0;
    *(&v30.Attributes + 1) = 0;
    v29 = 0LL;
    result = RtlpInitNlsFileName(SectionType, SectionData, v45);
    if ( result >= 0 )
    {
      v30.Length = 48;
      v30.RootDirectory = 0LL;
      v30.Attributes = 576;
      v30.ObjectName = (PUNICODE_STRING)&v29;
      *(_OWORD *)&v30.SecurityDescriptor = 0LL;
      result = ZwOpenFile(&FileHandle, 0x100000u, &v30, &IoStatusBlock, 1u, 0);
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
