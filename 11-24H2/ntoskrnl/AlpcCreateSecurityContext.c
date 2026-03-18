/*
 * XREFs of AlpcCreateSecurityContext @ 0x140A59730
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140257E40 (KeLeaveCriticalRegion.c)
 *     ObfDereferenceObject @ 0x140325680 (ObfDereferenceObject.c)
 *     ObReferenceObjectByHandle @ 0x14084AF40 (ObReferenceObjectByHandle.c)
 *     AlpcpDereferenceBlobEx @ 0x140890420 (AlpcpDereferenceBlobEx.c)
 *     AlpcpCreateSecurityContext @ 0x1408963D8 (AlpcpCreateSecurityContext.c)
 */

__int64 __fastcall AlpcCreateSecurityContext(void *a1, struct _KTHREAD *a2, int a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // rax
  int SecurityContext; // ebx
  PVOID v8; // rdi
  struct _SECURITY_QUALITY_OF_SERVICE *v9; // r9
  __int64 v10; // r9
  ULONG_PTR v11; // rcx
  __int64 v12; // r8
  PVOID Object; // [rsp+30h] [rbp-18h] BYREF
  ULONG_PTR BugCheckParameter2[2]; // [rsp+38h] [rbp-10h] BYREF

  CurrentThread = KeGetCurrentThread();
  BugCheckParameter2[0] = 0LL;
  --CurrentThread->KernelApcDisable;
  if ( a3 )
  {
    SecurityContext = -1073741811;
  }
  else
  {
    Object = 0LL;
    SecurityContext = ObReferenceObjectByHandle(a1, 1u, AlpcPortObjectType, 0, &Object, 0LL);
    if ( SecurityContext >= 0 )
    {
      v8 = Object;
      if ( !a4 || (v9 = *(struct _SECURITY_QUALITY_OF_SERVICE **)(a4 + 8)) == 0LL )
        v9 = (struct _SECURITY_QUALITY_OF_SERVICE *)((char *)Object + 260);
      SecurityContext = AlpcpCreateSecurityContext((__int64)Object, a2, 1, v9, BugCheckParameter2);
      if ( SecurityContext >= 0 )
      {
        v11 = BugCheckParameter2[0];
        v12 = *(_QWORD *)(BugCheckParameter2[0] + 8);
        *(_QWORD *)(a4 + 16) = v12;
        AlpcpDereferenceBlobEx(v11, 1, v12, v10);
      }
      ObfDereferenceObject(v8);
    }
  }
  KeLeaveCriticalRegion();
  return (unsigned int)SecurityContext;
}
