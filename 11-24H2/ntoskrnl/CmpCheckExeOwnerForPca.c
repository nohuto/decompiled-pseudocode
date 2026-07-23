/*
 * XREFs of CmpCheckExeOwnerForPca @ 0x1408AE8F4
 * Callers:
 *     CmpDoParseKey @ 0x140872AE0 (CmpDoParseKey.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402CE210 (ObfDereferenceObject.c)
 *     RtlEqualSid @ 0x1403EB6C0 (RtlEqualSid.c)
 *     PsGetCurrentThreadProcess @ 0x14046B080 (PsGetCurrentThreadProcess.c)
 *     ObQuerySecurityObject @ 0x1408AEA1C (ObQuerySecurityObject.c)
 *     PsReferenceProcessFilePointer @ 0x140922040 (PsReferenceProcessFilePointer.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

char CmpCheckExeOwnerForPca()
{
  _KPROCESS *CurrentThreadProcess; // rax
  __int64 Pool2; // rax
  PVOID v2; // rcx
  _BYTE *v3; // rdi
  int SecurityObject; // ebx
  __int64 v5; // rax
  _BYTE *v6; // rdx
  unsigned int v8; // [rsp+40h] [rbp+8h] BYREF
  PVOID Object; // [rsp+48h] [rbp+10h] BYREF

  Object = 0LL;
  v8 = 0;
  if ( !CmpTrustedInstallerSid )
    return 0;
  CurrentThreadProcess = PsGetCurrentThreadProcess();
  if ( (int)PsReferenceProcessFilePointer(CurrentThreadProcess, &Object) < 0 )
    return 0;
  if ( (unsigned int)ObQuerySecurityObject((_DWORD)Object, 1, 0, 0, (__int64)&v8) != -1073741789 )
  {
    v2 = Object;
    goto LABEL_16;
  }
  Pool2 = ExAllocatePool2(0x100uLL, v8, 0x20204D43u);
  v2 = Object;
  v3 = (_BYTE *)Pool2;
  if ( !Pool2 )
  {
LABEL_16:
    ObfDereferenceObject(v2);
    return 0;
  }
  SecurityObject = ObQuerySecurityObject((_DWORD)Object, 1, Pool2, v8, (__int64)&v8);
  ObfDereferenceObject(Object);
  if ( SecurityObject >= 0 && *v3 == 1 )
  {
    if ( *((__int16 *)v3 + 1) >= 0 )
    {
      v6 = (_BYTE *)*((_QWORD *)v3 + 1);
    }
    else
    {
      v5 = *((unsigned int *)v3 + 1);
      if ( !(_DWORD)v5 )
      {
LABEL_12:
        ExFreePoolWithTag(v3, 0);
        return 1;
      }
      v6 = &v3[v5];
    }
    if ( !v6 || !RtlEqualSid(CmpTrustedInstallerSid, v6) )
      goto LABEL_12;
  }
  ExFreePoolWithTag(v3, 0);
  return 0;
}
