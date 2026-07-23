/*
 * XREFs of CmpQueryNameString @ 0x14096C1C4
 * Callers:
 *     CmpTraceHiveRestoreStart @ 0x1407D6C44 (CmpTraceHiveRestoreStart.c)
 *     CmpAddRemoveRMLogContainer @ 0x1407E0920 (CmpAddRemoveRMLogContainer.c)
 *     CmpIsFileInSystemConfig @ 0x1407E2160 (CmpIsFileInSystemConfig.c)
 *     CmpTraceHiveMountBaseFileMounted @ 0x14096A720 (CmpTraceHiveMountBaseFileMounted.c)
 *     CmKtmNotification @ 0x140A00E10 (CmKtmNotification.c)
 *     CmpInitCmRM @ 0x140AE6674 (CmpInitCmRM.c)
 *     CmpStartRMLog @ 0x140AE7164 (CmpStartRMLog.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402CE210 (ObfDereferenceObject.c)
 *     RtlAppendUnicodeStringToString @ 0x140404080 (RtlAppendUnicodeStringToString.c)
 *     ObReferenceObjectByHandle @ 0x140847200 (ObReferenceObjectByHandle.c)
 *     ObQueryNameStringMode @ 0x1409524C0 (ObQueryNameStringMode.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

NTSTATUS __fastcall CmpQueryNameString(void *a1, UNICODE_STRING *a2)
{
  NTSTATUS result; // eax
  int v4; // ebx
  unsigned int i; // esi
  __int64 Pool2; // rax
  UNICODE_STRING *v7; // rdi
  int v8; // eax
  ULONG_PTR Length; // rdx
  __int64 v10; // rax
  NTSTATUS appended; // eax
  unsigned __int16 v12; // dx
  wchar_t *Buffer; // rcx
  unsigned int v14; // [rsp+60h] [rbp+18h] BYREF
  PVOID Object; // [rsp+68h] [rbp+20h] BYREF

  v14 = 0;
  Object = 0LL;
  result = ObReferenceObjectByHandle(a1, 1u, *(POBJECT_TYPE *)CmIoFileObjectType, 0, &Object, 0LL);
  v4 = result;
  if ( result >= 0 )
  {
    for ( i = 272; ; i = v14 )
    {
      Pool2 = ExAllocatePool2(0x100uLL, i, 0x62534D43u);
      v7 = (UNICODE_STRING *)Pool2;
      if ( !Pool2 )
        break;
      v8 = ObQueryNameStringMode((char *)Object, Pool2, i, &v14, 0);
      v4 = v8;
      if ( v8 >= 0 )
      {
        a2->Length = 0;
        Length = v7->Length;
        a2->MaximumLength = v7->Length;
        v10 = ExAllocatePool2(0x100uLL, Length, 0x67727453u);
        a2->Buffer = (wchar_t *)v10;
        if ( v10 )
        {
          appended = RtlAppendUnicodeStringToString(a2, v7);
          v12 = a2->Length;
          v4 = appended;
          if ( a2->Length )
          {
            Buffer = a2->Buffer;
            do
            {
              if ( Buffer[((unsigned __int64)v12 >> 1) - 1] )
                break;
              v12 -= 2;
              a2->Length = v12;
            }
            while ( v12 );
          }
        }
        else
        {
          v4 = -1073741801;
        }
LABEL_10:
        ExFreePoolWithTag(v7, 0);
        break;
      }
      if ( v14 <= i || v8 != -2147483643 )
        goto LABEL_10;
      ExFreePoolWithTag(v7, 0);
    }
    ObfDereferenceObject(Object);
    return v4;
  }
  return result;
}
