/*
 * XREFs of NtQueryMutant @ 0x140A31B10
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x140309490 (ObfDereferenceObject.c)
 *     KeQueryOwnerMutant @ 0x14048FB8C (KeQueryOwnerMutant.c)
 *     ObReferenceObjectByHandle @ 0x14084F190 (ObReferenceObjectByHandle.c)
 *     ProbeForWrite @ 0x140934CF0 (ProbeForWrite.c)
 */

NTSTATUS __cdecl NtQueryMutant(
        HANDLE MutantHandle,
        MUTANT_INFORMATION_CLASS MutantInformationClass,
        PVOID MutantInformation,
        ULONG MutantInformationLength,
        PULONG ReturnLength)
{
  KPROCESSOR_MODE PreviousMode; // r14
  PULONG v9; // rbx
  __int64 v10; // rcx
  int v11; // esi
  int v12; // r8d
  char v13; // al
  bool v14; // cl
  PVOID Object; // [rsp+30h] [rbp-38h] BYREF
  CLIENT_ID ClientId; // [rsp+38h] [rbp-30h] BYREF

  ClientId = 0LL;
  if ( MutantInformationClass == MutantBasicInformation )
  {
    if ( MutantInformationLength == 8 )
      goto LABEL_3;
    return -1073741820;
  }
  if ( MutantInformationClass != MutantOwnerInformation )
    return -1073741821;
  if ( MutantInformationLength != 16 )
    return -1073741820;
LABEL_3:
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    ProbeForWrite(MutantInformation, MutantInformationLength, 4u);
    v9 = ReturnLength;
    if ( ReturnLength )
    {
      v10 = 0x7FFFFFFF0000LL;
      if ( (unsigned __int64)ReturnLength < 0x7FFFFFFF0000LL )
        v10 = (__int64)ReturnLength;
      *(_DWORD *)v10 = *(_DWORD *)v10;
    }
  }
  else
  {
    v9 = ReturnLength;
  }
  Object = 0LL;
  v11 = ObReferenceObjectByHandle(MutantHandle, 1u, ExMutantObjectType, PreviousMode, &Object, 0LL);
  if ( v11 >= 0 )
  {
    if ( MutantInformationClass )
    {
      KeQueryOwnerMutant((PKMUTANT)Object, &ClientId);
      if ( PreviousMode )
      {
        *(CLIENT_ID *)MutantInformation = ClientId;
        if ( v9 )
          *v9 = 16;
      }
      else
      {
        *(CLIENT_ID *)MutantInformation = ClientId;
        if ( v9 )
          *v9 = 16;
      }
    }
    else
    {
      v12 = *((_DWORD *)Object + 1);
      v13 = *((_BYTE *)Object + 48) & 1;
      v14 = *((_QWORD *)Object + 5) == (_QWORD)KeGetCurrentThread();
      if ( PreviousMode )
      {
        *(_DWORD *)MutantInformation = v12;
        *((_BYTE *)MutantInformation + 4) = v14;
        *((_BYTE *)MutantInformation + 5) = v13;
        if ( v9 )
          *v9 = 8;
      }
      else
      {
        *(_DWORD *)MutantInformation = v12;
        *((_BYTE *)MutantInformation + 4) = v14;
        *((_BYTE *)MutantInformation + 5) = v13;
        if ( v9 )
          *v9 = 8;
      }
    }
    ObfDereferenceObject(Object);
  }
  return v11;
}
