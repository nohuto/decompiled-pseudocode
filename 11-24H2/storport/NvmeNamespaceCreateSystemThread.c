/*
 * XREFs of NvmeNamespaceCreateSystemThread @ 0x1400FD6E4
 * Callers:
 *     NvmeNamespaceStartDeviceIrp @ 0x1401A97E8 (NvmeNamespaceStartDeviceIrp.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall NvmeNamespaceCreateSystemThread(void **StartContext)
{
  void **v1; // rdi
  KSTART_ROUTINE *StartRoutine; // rax
  void **v3; // rcx
  NTSTATUS v4; // ebx
  void *v5; // rcx
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-30h] BYREF
  PVOID Object; // [rsp+80h] [rbp+10h] BYREF

  StartContext[14] = (void *)((unsigned __int64)StartContext[14] & 0xFFFFFFFFFFFFFFDFuLL);
  v1 = StartContext + 59;
  memset(&ObjectAttributes.Attributes + 1, 0, 20);
  ObjectAttributes.RootDirectory = 0LL;
  StartRoutine = NvmeNamespaceSystemThread2;
  ObjectAttributes.ObjectName = 0LL;
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  v3 = StartContext + 59;
  ObjectAttributes.Attributes = 512;
  if ( !FeatureFixFUAForReadIoPerf )
    StartRoutine = (KSTART_ROUTINE *)NvmeNamespaceSystemThread;
  v4 = PsCreateSystemThread(v3, 0x1FFFFFu, &ObjectAttributes, 0LL, 0LL, StartRoutine, StartContext);
  if ( v4 >= 0 )
  {
    v5 = *v1;
    Object = 0LL;
    if ( ObReferenceObjectByHandle(v5, 0x1FFFFFu, 0LL, 0, &Object, 0LL) >= 0 )
    {
      KeSetPriorityThread((PKTHREAD)Object, 16);
      ObfDereferenceObject(Object);
    }
  }
  return (unsigned int)v4;
}
