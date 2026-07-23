/*
 * XREFs of NtSetInformationDebugObject @ 0x140704C70
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseGuardedMutex @ 0x1402C7000 (KeReleaseGuardedMutex.c)
 *     ObfDereferenceObject @ 0x1402CE210 (ObfDereferenceObject.c)
 *     ExAcquireFastMutex @ 0x14031DD30 (ExAcquireFastMutex.c)
 *     ObReferenceObjectByHandle @ 0x140847200 (ObReferenceObjectByHandle.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408A3890 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __cdecl NtSetInformationDebugObject(
        HANDLE DebugObjectHandle,
        DEBUGOBJECTINFOCLASS DebugObjectInformationClass,
        PVOID DebugInformation,
        ULONG DebugInformationLength,
        PULONG ReturnLength)
{
  KPROCESSOR_MODE PreviousMode; // r11
  __int64 v8; // rdx
  PULONG v9; // rcx
  NTSTATUS result; // eax
  int v11; // esi
  char *v12; // rdi
  unsigned int v13; // edx
  PVOID Object; // [rsp+38h] [rbp-20h] BYREF

  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( !PreviousMode )
  {
    v9 = ReturnLength;
LABEL_12:
    if ( v9 )
      *v9 = 0;
    goto LABEL_14;
  }
  if ( DebugInformationLength )
  {
    if ( ((unsigned __int8)DebugInformation & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v8 = 0x7FFFFFFF0000LL;
  }
  else
  {
    v8 = 0x7FFFFFFF0000LL;
  }
  v9 = ReturnLength;
  if ( ReturnLength )
  {
    if ( (unsigned __int64)ReturnLength < 0x7FFFFFFF0000LL )
      v8 = (__int64)ReturnLength;
    *(_DWORD *)v8 = *(_DWORD *)v8;
    goto LABEL_12;
  }
LABEL_14:
  if ( DebugObjectInformationClass != DebugObjectKillProcessOnExitInformation )
    return -1073741811;
  if ( DebugInformationLength == 4 )
  {
    v11 = *(_DWORD *)DebugInformation;
    if ( (*(_DWORD *)DebugInformation & 0xFFFFFFFE) != 0 )
    {
      return -1073741811;
    }
    else
    {
      Object = 0LL;
      result = ObReferenceObjectByHandle(DebugObjectHandle, 4u, DbgkDebugObjectType, PreviousMode, &Object, 0LL);
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
