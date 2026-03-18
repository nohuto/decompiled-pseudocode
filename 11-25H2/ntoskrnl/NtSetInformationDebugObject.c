/*
 * XREFs of NtSetInformationDebugObject @ 0x1406FB1D0
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140286F40 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14029C580 (ExAcquireFastMutex.c)
 *     ObfDereferenceObject @ 0x140309490 (ObfDereferenceObject.c)
 *     ObReferenceObjectByHandle @ 0x14084F190 (ObReferenceObjectByHandle.c)
 *     ExRaiseDatatypeMisalignment @ 0x14085AF60 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __fastcall NtSetInformationDebugObject(HANDLE Handle, int a2, int *a3, int a4, unsigned __int64 a5)
{
  KPROCESSOR_MODE PreviousMode; // r11
  __int64 v8; // rdx
  _DWORD *v9; // rcx
  NTSTATUS result; // eax
  int v11; // esi
  char *v12; // rdi
  unsigned int v13; // edx
  PVOID Object; // [rsp+38h] [rbp-20h] BYREF

  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( !PreviousMode )
  {
    v9 = (_DWORD *)a5;
LABEL_12:
    if ( v9 )
      *v9 = 0;
    goto LABEL_14;
  }
  if ( a4 )
  {
    if ( ((unsigned __int8)a3 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v8 = 0x7FFFFFFF0000LL;
  }
  else
  {
    v8 = 0x7FFFFFFF0000LL;
  }
  v9 = (_DWORD *)a5;
  if ( a5 )
  {
    if ( a5 < 0x7FFFFFFF0000LL )
      v8 = a5;
    *(_DWORD *)v8 = *(_DWORD *)v8;
    goto LABEL_12;
  }
LABEL_14:
  if ( a2 != 1 )
    return -1073741811;
  if ( a4 == 4 )
  {
    v11 = *a3;
    if ( (*a3 & 0xFFFFFFFE) != 0 )
    {
      return -1073741811;
    }
    else
    {
      Object = 0LL;
      result = ObReferenceObjectByHandle(Handle, 4u, DbgkDebugObjectType, PreviousMode, &Object, 0LL);
      if ( result >= 0 )
      {
        v12 = (char *)Object;
        ExAcquireFastMutex((PKGUARDED_MUTEX)((char *)Object + 24));
        v13 = *((_DWORD *)v12 + 24) | 2;
        if ( (v11 & 1) == 0 )
          v13 = *((_DWORD *)v12 + 24) & 0xFFFFFFFD;
        *((_DWORD *)v12 + 24) = v13;
        KeReleaseGuardedMutex((PKGUARDED_MUTEX)(v12 + 24));
        ObfDereferenceObject(v12);
        return 0;
      }
    }
  }
  else
  {
    if ( v9 )
      *v9 = 4;
    return -1073741820;
  }
  return result;
}
