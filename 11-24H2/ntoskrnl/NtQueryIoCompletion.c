/*
 * XREFs of NtQueryIoCompletion @ 0x140A6A960
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x1402CE210 (ObfDereferenceObject.c)
 *     ObReferenceObjectByHandle @ 0x140847200 (ObReferenceObjectByHandle.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408A3890 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __cdecl NtQueryIoCompletion(
        HANDLE IoCompletionHandle,
        IO_COMPLETION_INFORMATION_CLASS IoCompletionInformationClass,
        PVOID IoCompletionInformation,
        ULONG IoCompletionInformationLength,
        PULONG ReturnLength)
{
  KPROCESSOR_MODE PreviousMode; // r15
  __int64 v8; // rdx
  __int64 v9; // rcx
  PULONG v10; // rbx
  int v11; // esi
  int v12; // r14d
  PVOID Object; // [rsp+38h] [rbp-30h] BYREF

  if ( IoCompletionInformationClass )
    return -1073741821;
  if ( IoCompletionInformationLength != 4 )
    return -1073741820;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    if ( ((unsigned __int8)IoCompletionInformation & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v8 = 0x7FFFFFFF0000LL;
    v9 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)IoCompletionInformation < 0x7FFFFFFF0000LL )
      v9 = (__int64)IoCompletionInformation;
    *(_BYTE *)v9 = *(_BYTE *)v9;
    *(_BYTE *)(v9 + 3) = *(_BYTE *)(v9 + 3);
    v10 = ReturnLength;
    if ( ReturnLength )
    {
      if ( (unsigned __int64)ReturnLength < 0x7FFFFFFF0000LL )
        v8 = (__int64)ReturnLength;
      *(_DWORD *)v8 = *(_DWORD *)v8;
    }
  }
  else
  {
    v10 = ReturnLength;
  }
  Object = 0LL;
  v11 = ObReferenceObjectByHandle(IoCompletionHandle, 1u, IoCompletionObjectType, PreviousMode, &Object, 0LL);
  if ( v11 >= 0 )
  {
    v12 = *((_DWORD *)Object + 1);
    ObfDereferenceObject(Object);
    if ( PreviousMode )
    {
      *(_DWORD *)IoCompletionInformation = v12;
      if ( v10 )
        *v10 = 4;
    }
    else
    {
      *(_DWORD *)IoCompletionInformation = v12;
      if ( v10 )
        *v10 = 4;
    }
  }
  return v11;
}
