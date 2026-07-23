/*
 * XREFs of IoConvertFileHandleToKernelHandle @ 0x140A676F0
 * Callers:
 *     SshpSessionManagerOpenControlTrace @ 0x140766E60 (SshpSessionManagerOpenControlTrace.c)
 *     ExpQueryElamCertInfo @ 0x1407B5054 (ExpQueryElamCertInfo.c)
 *     NtRestoreKey @ 0x1407D11D0 (NtRestoreKey.c)
 *     NtSaveMergedKeys @ 0x1407D1580 (NtSaveMergedKeys.c)
 *     CmpNameFromAttributes @ 0x14092F7A8 (CmpNameFromAttributes.c)
 *     IopOpenLinkOrRenameTarget @ 0x140955124 (IopOpenLinkOrRenameTarget.c)
 *     NtSaveKeyEx @ 0x140A67430 (NtSaveKeyEx.c)
 *     ExpQueryCodeIntegrityCertificateInfo @ 0x140A6759C (ExpQueryCodeIntegrityCertificateInfo.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402CE210 (ObfDereferenceObject.c)
 *     ObDuplicateObject @ 0x14083C270 (ObDuplicateObject.c)
 *     ObReferenceObjectByHandle @ 0x140847200 (ObReferenceObjectByHandle.c)
 *     ObCloseHandle @ 0x1408AB1B0 (ObCloseHandle.c)
 */

NTSTATUS __fastcall IoConvertFileHandleToKernelHandle(void *a1, KPROCESSOR_MODE a2, int a3, char a4, PVOID Object)
{
  _QWORD *v5; // r14
  NTSTATUS result; // eax
  int v10; // eax
  PVOID v11; // rsi
  NTSTATUS v12; // ebx
  HANDLE v13; // rdi
  HANDLE Handle[2]; // [rsp+40h] [rbp-10h] BYREF
  struct _OBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+70h] [rbp+20h] BYREF

  v5 = Object;
  Handle[0] = 0LL;
  HandleInformation = 0LL;
  *(_QWORD *)Object = 0LL;
  if ( !a1 )
    return 0;
  Object = 0LL;
  result = ObReferenceObjectByHandle(a1, 0, (POBJECT_TYPE)IoFileObjectType, a2, &Object, &HandleInformation);
  if ( result >= 0 )
  {
    if ( a4 || (a3 & HandleInformation.GrantedAccess) == a3 )
    {
      v10 = ObDuplicateObject(
              (__int64)KeGetCurrentThread()->ApcState.Process,
              a1,
              PsInitialSystemProcess,
              (__int64 *)Handle,
              a3,
              512,
              0,
              0);
      v11 = Object;
      v12 = v10;
      if ( v10 >= 0 )
      {
        v13 = Handle[0];
        Object = 0LL;
        v12 = ObReferenceObjectByHandle(Handle[0], 0, (POBJECT_TYPE)IoFileObjectType, 0, &Object, 0LL);
        if ( v12 < 0 )
        {
          ObCloseHandle(v13, 0);
        }
        else
        {
          if ( Object == v11 )
          {
            *v5 = v13;
          }
          else
          {
            v12 = -1073741788;
            ObCloseHandle(v13, 0);
          }
          ObfDereferenceObject(Object);
        }
      }
    }
    else
    {
      v11 = Object;
      v12 = -1073741790;
    }
    ObfDereferenceObject(v11);
    return v12;
  }
  return result;
}
