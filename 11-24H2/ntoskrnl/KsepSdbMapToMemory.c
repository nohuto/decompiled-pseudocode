/*
 * XREFs of KsepSdbMapToMemory @ 0x14094498C
 * Callers:
 *     KseShimDatabaseOpen @ 0x140943EEC (KseShimDatabaseOpen.c)
 * Callees:
 *     MiRemoveFromSystemSpace @ 0x140290E7C (MiRemoveFromSystemSpace.c)
 *     ObfDereferenceObject @ 0x1402CE210 (ObfDereferenceObject.c)
 *     MiSectionControlArea @ 0x140355A80 (MiSectionControlArea.c)
 *     MiInsertInSystemSpace @ 0x140393BFC (MiInsertInSystemSpace.c)
 *     MiCheckPurgeAndUpMapCount @ 0x1404071F0 (MiCheckPurgeAndUpMapCount.c)
 *     RtlInitUnicodeString @ 0x140418050 (RtlInitUnicodeString.c)
 *     MiDereferenceControlArea @ 0x14042777C (MiDereferenceControlArea.c)
 *     KsepLogError @ 0x140488B28 (KsepLogError.c)
 *     KsepDebugPrint @ 0x1404CC7D8 (KsepDebugPrint.c)
 *     ZwClose @ 0x1406A7590 (ZwClose.c)
 *     ZwOpenFile @ 0x1406A7A10 (ZwOpenFile.c)
 *     ZwCreateSection @ 0x1406A7CF0 (ZwCreateSection.c)
 *     ObReferenceObjectByHandle @ 0x140847200 (ObReferenceObjectByHandle.c)
 *     SdbGetDatabaseEdition @ 0x140944D54 (SdbGetDatabaseEdition.c)
 *     SdbInitDatabaseInMemory @ 0x140944DCC (SdbInitDatabaseInMemory.c)
 */

__int64 __fastcall KsepSdbMapToMemory(PCWSTR SourceString, __int64 a2)
{
  NTSTATUS v3; // eax
  int v4; // ebx
  NTSTATUS v5; // eax
  _QWORD *v6; // rsi
  unsigned __int64 v7; // r14
  __int64 v8; // r15
  unsigned __int64 v9; // r15
  ULONG_PTR v10; // r14
  __int64 inited; // rcx
  __int64 v13; // rcx
  char v14; // al
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  HANDLE FileHandle; // [rsp+40h] [rbp-39h] BYREF
  PVOID Object; // [rsp+48h] [rbp-31h] BYREF
  ULONG_PTR BugCheckParameter1; // [rsp+50h] [rbp-29h] BYREF
  UNICODE_STRING DestinationString; // [rsp+58h] [rbp-21h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+68h] [rbp-11h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+78h] [rbp-1h] BYREF
  unsigned __int64 v25; // [rsp+F0h] [rbp+77h] BYREF
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
    v13 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryErrorsIndex, 1u) + 1) & 0x3F;
    KsepHistoryErrors[2 * v13 + 1] = v3;
    v14 = KsepDebugFlag;
    KsepHistoryErrors[2 * v13] = 590506;
    if ( (v14 & 2) != 0 )
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
      v16 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryErrorsIndex, 1u) + 1) & 0x3F;
      KsepHistoryErrors[2 * v16 + 1] = v4;
      KsepHistoryErrors[2 * v16] = 590528;
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
        v15 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryErrorsIndex, 1u) + 1) & 0x3F;
        KsepHistoryErrors[2 * v15 + 1] = v4;
        KsepHistoryErrors[2 * v15] = 590542;
        if ( (KsepDebugFlag & 2) != 0 )
          KsepDebugPrint(0LL, (int)"KSE: ObRefByHandle(section) failed!\n");
        KsepLogError(0LL, (__int64)"KSE: ObRefByHandle(section) failed!\n");
      }
      else
      {
        v25 = 0LL;
        BugCheckParameter1 = 0LL;
        v7 = MiSectionControlArea((__int64)Object);
        MiCheckPurgeAndUpMapCount(v7);
        v8 = v6[6];
        LODWORD(v25) = v25 & 0xFFFF0000;
        v9 = v8 - v25;
        v4 = MiInsertInSystemSpace(v9, (__int64)v6, &v25, 0, 0LL, &BugCheckParameter1);
        if ( v4 < 0 )
        {
          MiDereferenceControlArea(v7);
          v18 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryErrorsIndex, 1u) + 1) & 0x3F;
          KsepHistoryErrors[2 * v18 + 1] = v4;
          KsepHistoryErrors[2 * v18] = 590555;
          if ( (KsepDebugFlag & 2) != 0 )
            KsepDebugPrint(0LL, (int)"KSE: Unable to map view of section!\n");
          KsepLogError(0LL, (__int64)"KSE: Unable to map view of section!\n");
        }
        else
        {
          v10 = BugCheckParameter1;
          inited = SdbInitDatabaseInMemory(BugCheckParameter1, (unsigned int)v9);
          if ( inited )
          {
            v4 = 0;
            *(_QWORD *)(a2 + 16) = FileHandle;
            *(_QWORD *)(a2 + 24) = SectionHandle;
            *(_QWORD *)(a2 + 32) = v6;
            *(_QWORD *)(a2 + 8) = v10;
            *(_QWORD *)a2 = inited;
            *(_DWORD *)(a2 + 48) = SdbGetDatabaseEdition(*(_QWORD *)(inited + 8));
            return (unsigned int)v4;
          }
          v4 = -1073741823;
          v17 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryErrorsIndex, 1u) + 1) & 0x3F;
          KsepHistoryErrors[2 * v17 + 1] = -1073741823;
          KsepHistoryErrors[2 * v17] = 590564;
          if ( (KsepDebugFlag & 2) != 0 )
            KsepDebugPrint(0LL, (int)"KSE: SdbInitDatabaseInMemory Failed!\n");
          KsepLogError(0LL, (__int64)"KSE: SdbInitDatabaseInMemory Failed!\n");
          if ( v10 )
            MiRemoveFromSystemSpace(v10, 1);
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
