/*
 * XREFs of NtReleaseSemaphore @ 0x1409CC520
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseSemaphoreEx @ 0x1402838B8 (KeReleaseSemaphoreEx.c)
 *     ObfDereferenceObject @ 0x140309490 (ObfDereferenceObject.c)
 *     ObReferenceObjectByHandle @ 0x14084F190 (ObReferenceObjectByHandle.c)
 */

NTSTATUS __cdecl NtReleaseSemaphore(HANDLE SemaphoreHandle, LONG ReleaseCount, PLONG PreviousCount)
{
  KPROCESSOR_MODE PreviousMode; // r14
  NTSTATUS v7; // ebx
  __int64 v8; // r9
  LONG v9; // r8d
  PVOID v10; // rdi
  __int64 v12; // rcx
  __int64 v13; // [rsp+60h] [rbp+18h] BYREF
  PVOID SystemArgument1; // [rsp+68h] [rbp+20h] BYREF

  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousCount && PreviousMode )
  {
    v12 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)PreviousCount < 0x7FFFFFFF0000LL )
      v12 = (__int64)PreviousCount;
    *(_DWORD *)v12 = *(_DWORD *)v12;
  }
  if ( ReleaseCount <= 0 )
    return -1073741811;
  SystemArgument1 = 0LL;
  v7 = ObReferenceObjectByHandle(
         SemaphoreHandle,
         2u,
         (POBJECT_TYPE)ExSemaphoreObjectType,
         PreviousMode,
         &SystemArgument1,
         0LL);
  if ( v7 >= 0 )
  {
    LODWORD(v13) = 0;
    v9 = ReleaseCount;
    v10 = SystemArgument1;
    v7 = KeReleaseSemaphoreEx((volatile signed __int32 *)SystemArgument1, 1, v9, v8, 0, &v13);
    LODWORD(SystemArgument1) = v7;
    ObfDereferenceObject(v10);
    if ( v7 >= 0 )
    {
      if ( PreviousCount )
        *PreviousCount = v13;
    }
  }
  return v7;
}
