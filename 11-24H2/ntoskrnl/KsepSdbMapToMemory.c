/*
 * XREFs of KsepSdbMapToMemory @ 0x14095CECC
 * Callers:
 *     KseShimDatabaseOpen @ 0x14095C42C (KseShimDatabaseOpen.c)
 * Callees:
 *     MiRemoveFromSystemSpace @ 0x14026086C (MiRemoveFromSystemSpace.c)
 *     KsepDebugPrint @ 0x1402CA2D8 (KsepDebugPrint.c)
 *     MiSectionControlArea @ 0x1402D4800 (MiSectionControlArea.c)
 *     ObfDereferenceObject @ 0x140325680 (ObfDereferenceObject.c)
 *     MiDereferenceControlArea @ 0x14036F494 (MiDereferenceControlArea.c)
 *     MiCheckPurgeAndUpMapCount @ 0x14040EFF0 (MiCheckPurgeAndUpMapCount.c)
 *     MiInsertInSystemSpace @ 0x140415F30 (MiInsertInSystemSpace.c)
 *     RtlInitUnicodeString @ 0x1404241A0 (RtlInitUnicodeString.c)
 *     KsepLogError @ 0x14048E6F8 (KsepLogError.c)
 *     ZwClose @ 0x1406A65F0 (ZwClose.c)
 *     ZwOpenFile @ 0x1406A6A70 (ZwOpenFile.c)
 *     ZwCreateSection @ 0x1406A6D50 (ZwCreateSection.c)
 *     ObReferenceObjectByHandle @ 0x14084AF40 (ObReferenceObjectByHandle.c)
 *     SdbGetDatabaseEdition @ 0x14095D294 (SdbGetDatabaseEdition.c)
 *     SdbInitDatabaseInMemory @ 0x14095D30C (SdbInitDatabaseInMemory.c)
 */

__int64 __fastcall KsepSdbMapToMemory(PCWSTR SourceString, __int64 a2)
{
  NTSTATUS v3; // eax
  int v4; // ebx
  NTSTATUS v5; // eax
  _QWORD *v6; // rsi
  unsigned __int64 v7; // r14
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r15
  unsigned __int64 v11; // r15
  ULONG_PTR v12; // r14
  __int64 inited; // rcx
  __int64 v15; // rcx
  char v16; // al
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  HANDLE FileHandle; // [rsp+40h] [rbp-39h] BYREF
  PVOID Object; // [rsp+48h] [rbp-31h] BYREF
  ULONG_PTR BugCheckParameter1; // [rsp+50h] [rbp-29h] BYREF
  UNICODE_STRING DestinationString; // [rsp+58h] [rbp-21h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+68h] [rbp-11h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+78h] [rbp-1h] BYREF
  unsigned __int64 v27; // [rsp+F0h] [rbp+77h] BYREF
  HANDLE SectionHandle; // [rsp+F8h] [rbp+7Fh] BYREF

  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  FileHandle = 0LL;
  DestinationString = 0LL;
  SectionHandle = 0LL;
  IoStatusBlock = 0LL;
  RtlInitUnicodeString(&DestinationString, SourceString);
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v3 = ZwOpenFile(&FileHandle, 0x80000000, &ObjectAttributes, &IoStatusBlock, 5u, 0);
  v4 = v3;
  if ( v3 < 0 )
  {
    v15 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryErrorsIndex, 1u) + 1) & 0x3F;
    KsepHistoryErrors[2 * v15 + 1] = v3;
    v16 = KsepDebugFlag;
    KsepHistoryErrors[2 * v15] = 590506;
    if ( (v16 & 2) != 0 )
      KsepDebugPrint(0LL, (int)"KSE: ZwOpenFile failed opening DB file!\n");
    KsepLogError(0LL, (__int64)"KSE: ZwOpenFile failed opening DB file!\n");
  }
  else
  {
    ObjectAttributes.Length = 48;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 576;
    ObjectAttributes.ObjectName = 0LL;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v4 = ZwCreateSection(&SectionHandle, 4u, &ObjectAttributes, 0LL, 2u, 0x8000000u, FileHandle);
    if ( v4 < 0 )
    {
      v18 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryErrorsIndex, 1u) + 1) & 0x3F;
      KsepHistoryErrors[2 * v18 + 1] = v4;
      KsepHistoryErrors[2 * v18] = 590528;
      if ( (KsepDebugFlag & 2) != 0 )
        KsepDebugPrint(0LL, (int)"KSE: ZwCreateSection Failed!\n");
      KsepLogError(0LL, (__int64)"KSE: ZwCreateSection Failed!\n");
    }
    else
    {
      Object = 0LL;
      v5 = ObReferenceObjectByHandle(SectionHandle, 0xF001Fu, MmSectionObjectType, 0, &Object, 0LL);
      v6 = Object;
      v4 = v5;
      if ( v5 < 0 )
      {
        v17 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryErrorsIndex, 1u) + 1) & 0x3F;
        KsepHistoryErrors[2 * v17 + 1] = v4;
        KsepHistoryErrors[2 * v17] = 590542;
        if ( (KsepDebugFlag & 2) != 0 )
          KsepDebugPrint(0LL, (int)"KSE: ObRefByHandle(section) failed!\n");
        KsepLogError(0LL, (__int64)"KSE: ObRefByHandle(section) failed!\n");
      }
      else
      {
        v27 = 0LL;
        BugCheckParameter1 = 0LL;
        v7 = MiSectionControlArea((__int64)Object);
        MiCheckPurgeAndUpMapCount(v7, v8, v9);
        v10 = v6[6];
        LODWORD(v27) = v27 & 0xFFFF0000;
        v11 = v10 - v27;
        v4 = MiInsertInSystemSpace(v11, (__int64)v6, &v27, 0, 0LL, &BugCheckParameter1);
        if ( v4 < 0 )
        {
          MiDereferenceControlArea(v7);
          v20 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryErrorsIndex, 1u) + 1) & 0x3F;
          KsepHistoryErrors[2 * v20 + 1] = v4;
          KsepHistoryErrors[2 * v20] = 590555;
          if ( (KsepDebugFlag & 2) != 0 )
            KsepDebugPrint(0LL, (int)"KSE: Unable to map view of section!\n");
          KsepLogError(0LL, (__int64)"KSE: Unable to map view of section!\n");
        }
        else
        {
          v12 = BugCheckParameter1;
          inited = SdbInitDatabaseInMemory(BugCheckParameter1, (unsigned int)v11);
          if ( inited )
          {
            v4 = 0;
            *(_QWORD *)(a2 + 16) = FileHandle;
            *(_QWORD *)(a2 + 24) = SectionHandle;
            *(_QWORD *)(a2 + 32) = v6;
            *(_QWORD *)(a2 + 8) = v12;
            *(_QWORD *)a2 = inited;
            *(_DWORD *)(a2 + 48) = SdbGetDatabaseEdition(*(_QWORD *)(inited + 8));
            return (unsigned int)v4;
          }
          v4 = -1073741823;
          v19 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryErrorsIndex, 1u) + 1) & 0x3F;
          KsepHistoryErrors[2 * v19 + 1] = -1073741823;
          KsepHistoryErrors[2 * v19] = 590564;
          if ( (KsepDebugFlag & 2) != 0 )
            KsepDebugPrint(0LL, (int)"KSE: SdbInitDatabaseInMemory Failed!\n");
          KsepLogError(0LL, (__int64)"KSE: SdbInitDatabaseInMemory Failed!\n");
          if ( v12 )
            MiRemoveFromSystemSpace(v12, 1);
        }
      }
      if ( v6 )
        ObfDereferenceObject(v6);
    }
  }
  if ( SectionHandle )
    ZwClose(SectionHandle);
  if ( FileHandle )
    ZwClose(FileHandle);
  return (unsigned int)v4;
}
