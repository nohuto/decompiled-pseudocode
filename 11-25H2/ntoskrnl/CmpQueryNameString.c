/*
 * XREFs of CmpQueryNameString @ 0x1409FA3D4
 * Callers:
 *     CmpTraceHiveRestoreStart @ 0x1407C6F70 (CmpTraceHiveRestoreStart.c)
 *     CmpAddRemoveRMLogContainer @ 0x1407D0AF8 (CmpAddRemoveRMLogContainer.c)
 *     CmpIsFileInSystemConfig @ 0x1407D2330 (CmpIsFileInSystemConfig.c)
 *     CmKtmNotification @ 0x140865D90 (CmKtmNotification.c)
 *     CmpTraceHiveMountBaseFileMounted @ 0x1409F981C (CmpTraceHiveMountBaseFileMounted.c)
 *     CmpInitCmRM @ 0x140AD3ED8 (CmpInitCmRM.c)
 *     CmpStartRMLog @ 0x140AD49C8 (CmpStartRMLog.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140309490 (ObfDereferenceObject.c)
 *     RtlAppendUnicodeStringToString @ 0x140404430 (RtlAppendUnicodeStringToString.c)
 *     ObReferenceObjectByHandle @ 0x14084F190 (ObReferenceObjectByHandle.c)
 *     ObQueryNameStringMode @ 0x1408C0E20 (ObQueryNameStringMode.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

NTSTATUS __fastcall CmpQueryNameString(void *a1, UNICODE_STRING *a2)
{
  NTSTATUS result; // eax
  int v4; // ebx
  unsigned int i; // esi
  __int64 Pool2; // rax
  UNICODE_STRING *v7; // rdi
  int v8; // eax
  __int64 v9; // rax
  NTSTATUS appended; // eax
  unsigned __int16 Length; // dx
  wchar_t *Buffer; // rcx
  unsigned int v13; // [rsp+60h] [rbp+18h] BYREF
  PVOID Object; // [rsp+68h] [rbp+20h] BYREF

  v13 = 0;
  Object = 0LL;
  result = ObReferenceObjectByHandle(a1, 1u, *(POBJECT_TYPE *)CmIoFileObjectType, 0, &Object, 0LL);
  v4 = result;
  if ( result >= 0 )
  {
    for ( i = 272; ; i = v13 )
    {
      Pool2 = ExAllocatePool2(0x100uLL);
      v7 = (UNICODE_STRING *)Pool2;
      if ( !Pool2 )
        break;
      v8 = ObQueryNameStringMode((char *)Object, Pool2, i, &v13, 0);
      v4 = v8;
      if ( v8 >= 0 )
      {
        a2->Length = 0;
        a2->MaximumLength = v7->Length;
        v9 = ExAllocatePool2(0x100uLL);
        a2->Buffer = (wchar_t *)v9;
        if ( v9 )
        {
          appended = RtlAppendUnicodeStringToString(a2, v7);
          Length = a2->Length;
          v4 = appended;
          if ( a2->Length )
          {
            Buffer = a2->Buffer;
            do
            {
              if ( Buffer[((unsigned __int64)Length >> 1) - 1] )
                break;
              Length -= 2;
              a2->Length = Length;
            }
            while ( Length );
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
      if ( v13 <= i || v8 != -2147483643 )
        goto LABEL_10;
      ExFreePoolWithTag(v7, 0);
    }
    ObfDereferenceObject(Object);
    return v4;
  }
  return result;
}
