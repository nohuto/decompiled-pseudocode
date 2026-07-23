/*
 * XREFs of LdrAddRefDll @ 0x18003D580
 * Callers:
 *     RtlQueueWorkItem @ 0x18003BEE0 (RtlQueueWorkItem.c)
 *     TppIopExecuteCallback @ 0x180040230 (TppIopExecuteCallback.c)
 *     TppExecuteWaitCallback @ 0x180040740 (TppExecuteWaitCallback.c)
 *     TppWorkCallbackPrologRelease @ 0x180043350 (TppWorkCallbackPrologRelease.c)
 *     TppJobpExecuteCallback @ 0x1800D5D60 (TppJobpExecuteCallback.c)
 * Callees:
 *     LdrpPinModule @ 0x18003E278 (LdrpPinModule.c)
 *     LdrpIncrementModuleLoadCount @ 0x180047B20 (LdrpIncrementModuleLoadCount.c)
 *     LdrpDereferenceModule @ 0x180048C70 (LdrpDereferenceModule.c)
 *     RtlAcquireSRWLockShared @ 0x18004F0C0 (RtlAcquireSRWLockShared.c)
 *     RtlReleaseSRWLockShared @ 0x18004F120 (RtlReleaseSRWLockShared.c)
 */

NTSTATUS __cdecl LdrAddRefDll(ULONG Flags, PVOID DllHandle)
{
  char v3; // si
  volatile signed __int32 *v4; // rdi
  unsigned __int64 Root; // rax
  unsigned __int64 v6; // rcx
  __int64 v7; // rax
  NTSTATUS Count; // eax
  NTSTATUS v9; // ebx

  v3 = Flags;
  if ( (Flags & 0xFFFFFFFE) != 0 )
    return -1073741811;
  v4 = 0LL;
  if ( !DllHandle )
    return -1073741515;
  if ( DllHandle == LdrpSystemDllBase )
  {
    v4 = (volatile signed __int32 *)LdrpNtDllDataTableEntry;
    goto LABEL_19;
  }
  RtlAcquireSRWLockShared(&LdrpModuleDatatableLock);
  Root = (unsigned __int64)LdrpModuleBaseAddressIndex.Root;
  if ( (*(_BYTE *)&LdrpModuleBaseAddressIndex.0 & 1) != 0 )
  {
    if ( !LdrpModuleBaseAddressIndex.Root )
      goto LABEL_18;
    Root = (unsigned __int64)&LdrpModuleBaseAddressIndex ^ (unsigned __int64)LdrpModuleBaseAddressIndex.Root;
  }
  if ( !Root )
    goto LABEL_18;
  do
  {
    if ( (unsigned __int64)DllHandle >= *(_QWORD *)(Root - 152) )
    {
      if ( (unsigned __int64)DllHandle <= *(_QWORD *)(Root - 152) )
        break;
      v6 = *(_QWORD *)(Root + 8);
      if ( (*(_BYTE *)&LdrpModuleBaseAddressIndex.0 & 1) != 0 && v6 )
      {
        Root ^= v6;
        continue;
      }
LABEL_12:
      Root = v6;
      continue;
    }
    v6 = *(_QWORD *)Root;
    if ( (*(_BYTE *)&LdrpModuleBaseAddressIndex.0 & 1) == 0 || !v6 )
      goto LABEL_12;
    Root ^= v6;
  }
  while ( Root );
  if ( Root )
  {
    v4 = (volatile signed __int32 *)(Root - 200);
    v7 = *(_QWORD *)(Root - 48);
    if ( *(_DWORD *)(v7 + 24) != -1 && (*(_BYTE *)(*(_QWORD *)v7 - 56LL) & 0x20) == 0 )
      _InterlockedIncrement(v4 + 69);
  }
LABEL_18:
  RtlReleaseSRWLockShared(&LdrpModuleDatatableLock);
LABEL_19:
  if ( !v4 )
    return -1073741515;
  if ( (v3 & 1) != 0 )
    Count = LdrpPinModule(v4);
  else
    Count = LdrpIncrementModuleLoadCount(v4);
  v9 = Count;
  LdrpDereferenceModule((PVOID)v4);
  return v9;
}
