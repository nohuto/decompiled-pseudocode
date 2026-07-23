/*
 * XREFs of PsCheckProcessFileSigningLevel @ 0x1407763D0
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x14020DE50 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x14022E830 (ExAcquireRundownProtection_0.c)
 *     ObfDereferenceObject @ 0x1402CE210 (ObfDereferenceObject.c)
 *     PsReferenceSiloContext @ 0x14031EF70 (PsReferenceSiloContext.c)
 *     ZwOpenFile @ 0x1406A7A10 (ZwOpenFile.c)
 *     ZwCreateSectionEx @ 0x1406A8C70 (ZwCreateSectionEx.c)
 *     ObReferenceObjectByHandle @ 0x140847200 (ObReferenceObjectByHandle.c)
 *     ObCloseHandle @ 0x1408AB1B0 (ObCloseHandle.c)
 *     PsReferenceProcessFilePointer @ 0x140922040 (PsReferenceProcessFilePointer.c)
 *     SeCompareSigningLevels @ 0x1409FA8D0 (SeCompareSigningLevels.c)
 *     PsQuerySectionSignatureInformation @ 0x140A19CA0 (PsQuerySectionSignatureInformation.c)
 */

__int64 __fastcall PsCheckProcessFileSigningLevel(struct _EX_RUNDOWN_REF *a1, unsigned __int8 a2)
{
  unsigned int v2; // r15d
  PVOID v4; // r14
  __int64 v5; // rdx
  __int64 v6; // rcx
  NTSTATUS v7; // ebx
  int v8; // eax
  _QWORD *Count; // rdi
  UNICODE_STRING *v10; // rax
  NTSTATUS v11; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx
  PVOID Object; // [rsp+50h] [rbp-29h] BYREF
  HANDLE SectionHandle; // [rsp+58h] [rbp-21h] BYREF
  MEM_EXTENDED_PARAMETER ExtendedParameters; // [rsp+60h] [rbp-19h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+70h] [rbp-9h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+80h] [rbp+7h] BYREF
  char v20; // [rsp+F0h] [rbp+77h] BYREF
  HANDLE FileHandle; // [rsp+F8h] [rbp+7Fh] BYREF

  FileHandle = (HANDLE)-1LL;
  v2 = a2;
  SectionHandle = 0LL;
  Object = 0LL;
  IoStatusBlock = 0LL;
  v4 = 0LL;
  memset(&ObjectAttributes, 0, 44);
  v20 = 0;
  ExtendedParameters = 0LL;
  if ( (int)PsQuerySectionSignatureInformation(a1, &v20) < 0 )
    goto LABEL_2;
  LOBYTE(v6) = v20;
  LOBYTE(v5) = v2;
  if ( (unsigned int)SeCompareSigningLevels(v6, v5) )
  {
    v7 = 0;
    goto LABEL_21;
  }
  if ( a1[102].Count )
  {
    if ( !ExAcquireRundownProtection_0(a1 + 61) )
    {
LABEL_2:
      v7 = -1073741558;
      goto LABEL_21;
    }
    Count = (_QWORD *)a1[102].Count;
    PsReferenceSiloContext(Count);
    ExReleaseRundownProtection_0(a1 + 61);
  }
  else
  {
    v8 = PsReferenceProcessFilePointer(a1, &Object);
    Count = Object;
    if ( v8 < 0 )
      goto LABEL_7;
  }
  v10 = (UNICODE_STRING *)a1[106].Count;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = v10;
  ObjectAttributes.Length = 48;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  ObjectAttributes.Attributes = 576;
  v7 = ZwOpenFile(&FileHandle, 0x80100000, &ObjectAttributes, &IoStatusBlock, 5u, 0x60u);
  if ( v7 < 0 )
    goto LABEL_17;
  Object = 0LL;
  v11 = ObReferenceObjectByHandle(FileHandle, 0, (POBJECT_TYPE)IoFileObjectType, 0, &Object, 0LL);
  v4 = Object;
  v7 = v11;
  if ( v11 < 0 )
    goto LABEL_17;
  if ( Count[3] != *((_QWORD *)Object + 3) )
  {
    v7 = -1073741275;
    goto LABEL_17;
  }
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = 0LL;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  ExtendedParameters.0 = (MEM_EXTENDED_PARAMETER::$373F0C482CA2C07D4A7B2B94C5EA8081)3LL;
  ExtendedParameters.ULong64 = v2;
  v7 = ZwCreateSectionEx(
         &SectionHandle,
         0xF001Fu,
         &ObjectAttributes,
         0LL,
         0x20u,
         0x1000000u,
         FileHandle,
         &ExtendedParameters,
         1u);
  if ( v7 < 0 )
    goto LABEL_17;
  if ( (int)PsQuerySectionSignatureInformation(a1, &v20) >= 0 )
  {
    LOBYTE(v13) = v20;
    LOBYTE(v12) = v2;
    v7 = (unsigned int)SeCompareSigningLevels(v13, v12) == 0 ? 0xC0000428 : 0;
    goto LABEL_17;
  }
LABEL_7:
  v7 = -1073741558;
LABEL_17:
  if ( Count )
    ObfDereferenceObject(Count);
  if ( v4 )
    ObfDereferenceObject(v4);
LABEL_21:
  if ( (char *)FileHandle - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
    ObCloseHandle(FileHandle, 0);
  if ( SectionHandle )
    ObCloseHandle(SectionHandle, 0);
  return (unsigned int)v7;
}
