/*
 * XREFs of NtSetInformationIoRing @ 0x1407179B0
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x140325680 (ObfDereferenceObject.c)
 *     IopExceptionFilter @ 0x1405962D8 (IopExceptionFilter.c)
 *     IopIoRingUpdateCompletionUserEvent @ 0x14059782C (IopIoRingUpdateCompletionUserEvent.c)
 *     ObReferenceObjectByHandle @ 0x14084AF40 (ObReferenceObjectByHandle.c)
 */

__int64 __fastcall NtSetInformationIoRing(HANDLE Handle, int a2, unsigned int a3, void **a4)
{
  KPROCESSOR_MODE PreviousMode; // r15
  PVOID v8; // rdi
  unsigned int v9; // ecx
  NTSTATUS v10; // ebx
  NTSTATUS updated; // eax
  PVOID Object; // [rsp+38h] [rbp-20h] BYREF
  void *v14; // [rsp+40h] [rbp-18h] BYREF

  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v8 = 0LL;
  Object = 0LL;
  if ( a2 < 0 )
    goto LABEL_11;
  if ( (unsigned __int64)a2 >= 2 )
    goto LABEL_11;
  v9 = *((_DWORD *)&IopIoRingSetOperationLength + a2);
  if ( !v9 )
    goto LABEL_11;
  if ( a3 < v9 )
  {
    v10 = -1073741820;
    goto LABEL_12;
  }
  Object = 0LL;
  v10 = ObReferenceObjectByHandle(Handle, 0, IoRingObjectType, PreviousMode, &Object, 0LL);
  v8 = Object;
  if ( v10 >= 0 )
  {
    if ( a2 == 1 )
    {
      v14 = *a4;
      updated = IopIoRingUpdateCompletionUserEvent((__int64)Object, &v14, PreviousMode);
      v10 = updated;
      if ( updated == -1073741816 || updated == -1073741788 )
        v10 = -1073741582;
      goto LABEL_12;
    }
LABEL_11:
    v10 = -1073741821;
  }
LABEL_12:
  if ( v8 )
    ObfDereferenceObject(v8);
  return (unsigned int)v10;
}
