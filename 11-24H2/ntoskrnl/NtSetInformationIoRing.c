/*
 * XREFs of NtSetInformationIoRing @ 0x140715540
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x1402CE210 (ObfDereferenceObject.c)
 *     IopExceptionFilter @ 0x140593308 (IopExceptionFilter.c)
 *     IopIoRingUpdateCompletionUserEvent @ 0x1405947AC (IopIoRingUpdateCompletionUserEvent.c)
 *     ObReferenceObjectByHandle @ 0x140847200 (ObReferenceObjectByHandle.c)
 */

NTSTATUS __cdecl NtSetInformationIoRing(
        HANDLE IoRingHandle,
        ULONG IoRingInformationClass,
        ULONG IoRingInformationLength,
        PVOID IoRingInformation)
{
  KPROCESSOR_MODE PreviousMode; // r15
  PVOID v8; // rdi
  ULONG v9; // ecx
  int v10; // ebx
  NTSTATUS updated; // eax
  PVOID Object; // [rsp+38h] [rbp-20h] BYREF
  void *v14; // [rsp+40h] [rbp-18h] BYREF

  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v8 = 0LL;
  Object = 0LL;
  if ( (IoRingInformationClass & 0x80000000) != 0 )
    goto LABEL_11;
  if ( (unsigned __int64)(int)IoRingInformationClass >= 2 )
    goto LABEL_11;
  v9 = *((_DWORD *)&IopIoRingSetOperationLength + (int)IoRingInformationClass);
  if ( !v9 )
    goto LABEL_11;
  if ( IoRingInformationLength < v9 )
  {
    v10 = -1073741820;
    goto LABEL_12;
  }
  Object = 0LL;
  v10 = ObReferenceObjectByHandle(IoRingHandle, 0, IoRingObjectType, PreviousMode, &Object, 0LL);
  v8 = Object;
  if ( v10 >= 0 )
  {
    if ( IoRingInformationClass == 1 )
    {
      v14 = *(void **)IoRingInformation;
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
  return v10;
}
