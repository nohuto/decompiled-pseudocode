/*
 * XREFs of NtGetNlsSectionPtr @ 0x140A08EB0
 * Callers:
 *     RtlpInitCodePageTables @ 0x14077EA64 (RtlpInitCodePageTables.c)
 *     RtlpInitUppercaseTables @ 0x14077EC0C (RtlpInitUppercaseTables.c)
 * Callees:
 *     MiSectionControlArea @ 0x1402D4800 (MiSectionControlArea.c)
 *     ObfDereferenceObject @ 0x140325680 (ObfDereferenceObject.c)
 *     MiDereferenceControlArea @ 0x14036F494 (MiDereferenceControlArea.c)
 *     MiCheckPurgeAndUpMapCount @ 0x14040EFF0 (MiCheckPurgeAndUpMapCount.c)
 *     MiInsertInSystemSpace @ 0x140415F30 (MiInsertInSystemSpace.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     ZwClose @ 0x1406A65F0 (ZwClose.c)
 *     ZwOpenFile @ 0x1406A6A70 (ZwOpenFile.c)
 *     ZwOpenSection @ 0x1406A6AF0 (ZwOpenSection.c)
 *     ZwCreateSection @ 0x1406A6D50 (ZwCreateSection.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     ObReferenceObjectByHandle @ 0x14084AF40 (ObReferenceObjectByHandle.c)
 *     MiMapViewOfSection @ 0x14089A1A0 (MiMapViewOfSection.c)
 *     RtlpInitNlsSectionName @ 0x140A093D0 (RtlpInitNlsSectionName.c)
 *     RtlpInitNlsFileName @ 0x140A0949C (RtlpInitNlsFileName.c)
 */

NTSTATUS __fastcall NtGetNlsSectionPtr(
        unsigned int a1,
        unsigned int a2,
        PVOID *a3,
        ULONG_PTR *a4,
        unsigned __int64 *a5)
{
  char PreviousMode; // r12
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rcx
  NTSTATUS result; // eax
  int v14; // ebx
  _KPROCESS *Process; // rbx
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // r12
  _QWORD *v18; // rbx
  unsigned __int64 v19; // rsi
  __int64 v20; // rdx
  __int64 v21; // r8
  PVOID Object; // [rsp+48h] [rbp-2A0h] BYREF
  ULONG_PTR v23; // [rsp+50h] [rbp-298h] BYREF
  ULONG_PTR v24; // [rsp+58h] [rbp-290h] BYREF
  HANDLE SectionHandle; // [rsp+60h] [rbp-288h] BYREF
  unsigned __int64 v26; // [rsp+68h] [rbp-280h] BYREF
  HANDLE FileHandle; // [rsp+70h] [rbp-278h] BYREF
  __int64 v28; // [rsp+78h] [rbp-270h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+88h] [rbp-260h] BYREF
  __int128 v30; // [rsp+B8h] [rbp-230h] BYREF
  __int128 v31; // [rsp+C8h] [rbp-220h] BYREF
  OBJECT_ATTRIBUTES v32; // [rsp+D8h] [rbp-210h] BYREF
  _BYTE v33[8]; // [rsp+110h] [rbp-1D8h] BYREF
  unsigned __int64 v34; // [rsp+118h] [rbp-1D0h]
  __int64 v35; // [rsp+120h] [rbp-1C8h]
  unsigned __int64 v36; // [rsp+128h] [rbp-1C0h]
  int v37; // [rsp+138h] [rbp-1B0h]
  int v38; // [rsp+13Ch] [rbp-1ACh]
  int v39; // [rsp+144h] [rbp-1A4h]
  char v40; // [rsp+149h] [rbp-19Fh]
  int v41; // [rsp+14Ch] [rbp-19Ch]
  int v42; // [rsp+150h] [rbp-198h]
  _KPROCESS *v43; // [rsp+168h] [rbp-180h]
  _KPROCESS *v44; // [rsp+170h] [rbp-178h]
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+190h] [rbp-158h] BYREF
  _BYTE v46[128]; // [rsp+1A0h] [rbp-148h] BYREF
  _BYTE v47[128]; // [rsp+220h] [rbp-C8h] BYREF

  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  v30 = 0LL;
  FileHandle = 0LL;
  SectionHandle = 0LL;
  IoStatusBlock = 0LL;
  v23 = 0LL;
  v24 = 0LL;
  if ( !a4 && !a3 )
    return -1073741811;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    v10 = 0x7FFFFFFF0000LL;
    if ( a4 )
    {
      v11 = 0x7FFFFFFF0000LL;
      if ( (unsigned __int64)a4 < 0x7FFFFFFF0000LL )
        v11 = (__int64)a4;
      *(_QWORD *)v11 = *(_QWORD *)v11;
    }
    if ( a5 )
    {
      v12 = 0x7FFFFFFF0000LL;
      if ( (unsigned __int64)a5 < 0x7FFFFFFF0000LL )
        v12 = (__int64)a5;
      *(_QWORD *)v12 = *(_QWORD *)v12;
    }
    if ( a3 )
    {
      if ( (unsigned __int64)a3 < 0x7FFFFFFF0000LL )
        v10 = (__int64)a3;
      *(_QWORD *)v10 = *(_QWORD *)v10;
    }
    if ( a3 )
      return -1073741583;
  }
  result = RtlpInitNlsSectionName(a1, a2, v46);
  if ( result >= 0 )
  {
    ObjectAttributes.Length = 48;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 720;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)&v30;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    if ( ((a1 - 11) & 0xFFFFFFFC) != 0 || a1 == 13 )
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
      if ( a4 )
      {
        v28 = 0LL;
        if ( !PreviousMode )
        {
          v26 = 0LL;
          v24 = 0LL;
          v18 = Object;
          v19 = MiSectionControlArea((__int64)Object);
          MiCheckPurgeAndUpMapCount(v19, v20, v21);
          LODWORD(v26) = v26 & 0xFFFF0000;
          v17 = v18[6] - v26;
          v14 = MiInsertInSystemSpace(v17, (__int64)v18, &v26, 0, 0LL, &v24);
          if ( v14 < 0 )
          {
            MiDereferenceControlArea(v19);
          }
          else
          {
            v23 = v24;
            v14 = 0;
          }
          goto LABEL_30;
        }
        Process = KeGetCurrentThread()->ApcState.Process;
        MiSectionControlArea((__int64)Object);
        memset_0(v33, 0, 0x80uLL);
        v44 = KeGetCurrentThread()->ApcState.Process;
        v43 = Process;
        v40 = KeGetCurrentThread()->PreviousMode;
        v39 = 0;
        v37 = 0x400000;
        v38 = 2;
        v42 = 0;
        if ( v23 )
          v41 |= 1u;
        v36 = 0LL;
        v16 = *(_QWORD *)&Process[1].PrimaryGroup - 1LL;
        if ( v16 >= 0x7FFFFFFEFFFFLL )
          v16 = 0x7FFFFFFEFFFFLL;
        v34 = v16;
        v35 = 0x10000LL;
        v14 = MiMapViewOfSection((__int64)Object, (__int64)v33, &v23, 0LL, &v28, 1, 1);
        if ( v14 >= 0 )
        {
          v17 = v36;
LABEL_30:
          if ( !a3 )
            ObfDereferenceObject(Object);
          if ( v14 >= 0 )
          {
            if ( a4 )
              *a4 = v23;
            if ( a5 )
              *a5 = v17;
            if ( a3 )
              *a3 = Object;
          }
          return v14;
        }
        if ( v23 )
          ++dword_140E301AC;
        else
          ++dword_140E301A8;
      }
      v17 = v24;
      goto LABEL_30;
    }
    *(&v32.Length + 1) = 0;
    *(&v32.Attributes + 1) = 0;
    v31 = 0LL;
    result = RtlpInitNlsFileName(a1, a2, v47);
    if ( result >= 0 )
    {
      v32.Length = 48;
      v32.RootDirectory = 0LL;
      v32.Attributes = 576;
      v32.ObjectName = (PUNICODE_STRING)&v31;
      *(_OWORD *)&v32.SecurityDescriptor = 0LL;
      result = ZwOpenFile(&FileHandle, 0x100000u, &v32, &IoStatusBlock, 1u, 0);
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
