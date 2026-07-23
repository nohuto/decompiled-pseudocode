/*
 * XREFs of NtQueryEvent @ 0x1408BDD20
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x1402CE210 (ObfDereferenceObject.c)
 *     ObReferenceObjectByHandle @ 0x140847200 (ObReferenceObjectByHandle.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408A3890 (ExRaiseDatatypeMisalignment.c)
 *     ExRaiseAccessViolation @ 0x1408BEAA0 (ExRaiseAccessViolation.c)
 *     ExpQueryCrossVmEvent @ 0x140AB6DC0 (ExpQueryCrossVmEvent.c)
 */

NTSTATUS __cdecl NtQueryEvent(
        HANDLE EventHandle,
        EVENT_INFORMATION_CLASS EventInformationClass,
        PVOID EventInformation,
        ULONG EventInformationLength,
        PULONG ReturnLength)
{
  KPROCESSOR_MODE PreviousMode; // r15
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rdx
  __int64 v10; // r8
  unsigned __int64 v11; // rdx
  PULONG v12; // rdi
  NTSTATUS v13; // eax
  int v14; // r14d
  _DWORD *v15; // rsi
  int v16; // ecx
  int v17; // eax
  int v19; // [rsp+30h] [rbp-48h] BYREF
  PVOID Object; // [rsp+38h] [rbp-40h] BYREF
  PVOID v21; // [rsp+40h] [rbp-38h]
  int v22; // [rsp+88h] [rbp+10h] BYREF

  v19 = 0;
  v22 = 0;
  if ( EventInformationClass )
    return -1073741821;
  if ( EventInformationLength != 8 )
    return -1073741820;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    v8 = (unsigned __int64)EventInformation;
    if ( ((unsigned __int8)EventInformation & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v9 = (unsigned __int64)EventInformation + 7;
    if ( EventInformation > (char *)EventInformation + 7 || (v10 = 0x7FFFFFFF0000LL, v9 >= 0x7FFFFFFF0000LL) )
      ExRaiseAccessViolation();
    v11 = (v9 & 0xFFFFFFFFFFFFF000uLL) + 4096;
    do
    {
      *(_BYTE *)v8 = *(_BYTE *)v8;
      v8 = (v8 & 0xFFFFFFFFFFFFF000uLL) + 4096;
    }
    while ( v8 != v11 );
    v12 = ReturnLength;
    if ( ReturnLength )
    {
      if ( (unsigned __int64)ReturnLength < 0x7FFFFFFF0000LL )
        v10 = (__int64)ReturnLength;
      *(_DWORD *)v10 = *(_DWORD *)v10;
    }
  }
  else
  {
    v12 = ReturnLength;
  }
  Object = 0LL;
  v13 = ObReferenceObjectByHandle(EventHandle, 1u, (POBJECT_TYPE)ExEventObjectType, PreviousMode, &Object, 0LL);
  v14 = v13;
  v15 = Object;
  v21 = Object;
  LODWORD(Object) = v13;
  if ( v13 < 0 )
  {
    if ( v13 == -1073741788 )
    {
      if ( ExCrossVmEventObjectType )
      {
        Object = 0LL;
        v14 = ObReferenceObjectByHandle(EventHandle, 1u, ExCrossVmEventObjectType, PreviousMode, &Object, 0LL);
        v15 = Object;
        v21 = Object;
        LODWORD(Object) = v14;
        if ( v14 >= 0 )
        {
          v14 = ExpQueryCrossVmEvent(v15, &v19, &v22);
          LODWORD(Object) = v14;
        }
      }
    }
    v17 = v19;
    v16 = v22;
  }
  else
  {
    v16 = v15[1];
    v22 = v16;
    v17 = *(_BYTE *)v15 & 0x7F;
    v19 = v17;
  }
  if ( v14 >= 0 )
  {
    if ( PreviousMode )
    {
      *(_DWORD *)EventInformation = v17;
      *((_DWORD *)EventInformation + 1) = v16;
      if ( v12 )
        *v12 = 8;
    }
    else
    {
      *(_DWORD *)EventInformation = v17;
      *((_DWORD *)EventInformation + 1) = v16;
      if ( v12 )
        *v12 = 8;
    }
  }
  if ( v15 )
    ObfDereferenceObject(v15);
  return v14;
}
