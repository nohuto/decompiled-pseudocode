/*
 * XREFs of NtReleaseSemaphore @ 0x1409CC520
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseSemaphoreEx @ 0x1402838B8 (KeReleaseSemaphoreEx.c)
 *     ObfDereferenceObject @ 0x140309490 (ObfDereferenceObject.c)
 *     ObReferenceObjectByHandle @ 0x14084F190 (ObReferenceObjectByHandle.c)
 */

__int64 __fastcall NtReleaseSemaphore(HANDLE Handle, int a2, _DWORD *a3)
{
  KPROCESSOR_MODE PreviousMode; // r14
  int v7; // ebx
  __int64 v8; // r9
  int v9; // r8d
  PVOID v10; // rdi
  __int64 v12; // rcx
  __int64 v13; // [rsp+60h] [rbp+18h] BYREF
  PVOID SystemArgument1; // [rsp+68h] [rbp+20h] BYREF

  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( a3 && PreviousMode )
  {
    v12 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)a3 < 0x7FFFFFFF0000LL )
      v12 = (__int64)a3;
    *(_DWORD *)v12 = *(_DWORD *)v12;
  }
  if ( a2 <= 0 )
    return 3221225485LL;
  SystemArgument1 = 0LL;
  v7 = ObReferenceObjectByHandle(Handle, 2u, (POBJECT_TYPE)ExSemaphoreObjectType, PreviousMode, &SystemArgument1, 0LL);
  if ( v7 >= 0 )
  {
    LODWORD(v13) = 0;
    v9 = a2;
    v10 = SystemArgument1;
    v7 = KeReleaseSemaphoreEx((volatile signed __int32 *)SystemArgument1, 1, v9, v8, 0, &v13);
    LODWORD(SystemArgument1) = v7;
    ObfDereferenceObject(v10);
    if ( v7 >= 0 )
    {
      if ( a3 )
        *a3 = v13;
    }
  }
  return (unsigned int)v7;
}
