/*
 * XREFs of NtReleaseMutant @ 0x14099C2F0
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseMutantEx @ 0x1402F09B0 (KeReleaseMutantEx.c)
 *     ObfDereferenceObject @ 0x140309490 (ObfDereferenceObject.c)
 *     ExpReleaseCrossVmMutant @ 0x1407B6080 (ExpReleaseCrossVmMutant.c)
 *     ObReferenceObjectByHandle @ 0x14084F190 (ObReferenceObjectByHandle.c)
 */

NTSTATUS __cdecl NtReleaseMutant(HANDLE MutantHandle, PLONG PreviousCount)
{
  KPROCESSOR_MODE PreviousMode; // r15
  NTSTATUS v5; // eax
  NTSTATUS v6; // ebx
  PVOID v7; // rdi
  __int64 v9; // rcx
  PVOID Object; // [rsp+68h] [rbp+10h] BYREF
  LONG v11; // [rsp+70h] [rbp+18h] BYREF
  PVOID v12; // [rsp+78h] [rbp+20h]

  v11 = 0;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousCount && PreviousMode )
  {
    v9 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)PreviousCount < 0x7FFFFFFF0000LL )
      v9 = (__int64)PreviousCount;
    *(_DWORD *)v9 = *(_DWORD *)v9;
  }
  Object = 0LL;
  v5 = ObReferenceObjectByHandle(MutantHandle, 0, ExMutantObjectType, PreviousMode, &Object, 0LL);
  v6 = v5;
  v7 = Object;
  v12 = Object;
  LODWORD(Object) = v5;
  if ( v5 < 0 )
  {
    if ( v5 == -1073741788 )
    {
      if ( ExCrossVmMutantObjectType )
      {
        Object = 0LL;
        v6 = ObReferenceObjectByHandle(MutantHandle, 0, ExCrossVmMutantObjectType, PreviousMode, &Object, 0LL);
        v7 = Object;
        v12 = Object;
        LODWORD(Object) = v6;
        if ( v6 >= 0 )
        {
          v6 = ExpReleaseCrossVmMutant((__int64)v7);
          LODWORD(Object) = v6;
        }
      }
    }
  }
  else
  {
    v6 = KeReleaseMutantEx((ULONG_PTR)v7, 1u, 0, &v11);
    LODWORD(Object) = v6;
    if ( v6 == 128 || v6 == -1073741754 )
    {
LABEL_4:
      ObfDereferenceObject(v7);
      return v6;
    }
  }
  if ( v6 >= 0 && PreviousCount )
    *PreviousCount = v11;
  if ( v7 )
    goto LABEL_4;
  return v6;
}
