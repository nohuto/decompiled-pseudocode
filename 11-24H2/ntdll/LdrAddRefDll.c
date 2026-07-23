/*
 * XREFs of LdrAddRefDll @ 0x18008BAB0
 * Callers:
 *     TppIopExecuteCallback @ 0x18004B970 (TppIopExecuteCallback.c)
 *     TppExecuteWaitCallback @ 0x18004BE80 (TppExecuteWaitCallback.c)
 *     TppWorkCallbackPrologRelease @ 0x18004ECC0 (TppWorkCallbackPrologRelease.c)
 *     TppJobpExecuteCallback @ 0x180084A50 (TppJobpExecuteCallback.c)
 *     RtlQueueWorkItem @ 0x18008A2C0 (RtlQueueWorkItem.c)
 * Callees:
 *     RtlAcquireSRWLockShared @ 0x18003CC20 (RtlAcquireSRWLockShared.c)
 *     RtlReleaseSRWLockShared @ 0x18003CC80 (RtlReleaseSRWLockShared.c)
 *     LdrpIncrementModuleLoadCount @ 0x180046500 (LdrpIncrementModuleLoadCount.c)
 *     LdrpDereferenceModule @ 0x180047D50 (LdrpDereferenceModule.c)
 *     LdrpPinModule @ 0x180089BC8 (LdrpPinModule.c)
 */

NTSTATUS __cdecl LdrAddRefDll(ULONG Flags, PVOID DllHandle)
{
  char v3; // si
  __int64 v4; // rdi
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
    v4 = LdrpNtDllDataTableEntry;
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
    v4 = Root - 200;
    v7 = *(_QWORD *)(Root - 48);
    if ( *(_DWORD *)(v7 + 24) != -1 && (*(_BYTE *)(*(_QWORD *)v7 - 56LL) & 0x20) == 0 )
      _InterlockedIncrement((volatile signed __int32 *)(v4 + 276));
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
  LdrpDereferenceModule((char *)v4);
  return v9;
}
