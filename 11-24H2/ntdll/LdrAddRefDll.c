/*
 * XREFs of LdrAddRefDll @ 0x18006F1D0
 * Callers:
 *     TppIopExecuteCallback @ 0x18001EF70 (TppIopExecuteCallback.c)
 *     TppExecuteWaitCallback @ 0x18001F480 (TppExecuteWaitCallback.c)
 *     TppWorkCallbackPrologRelease @ 0x1800222C0 (TppWorkCallbackPrologRelease.c)
 *     TppJobpExecuteCallback @ 0x180068EC0 (TppJobpExecuteCallback.c)
 *     RtlQueueWorkItem @ 0x18006D9E0 (RtlQueueWorkItem.c)
 * Callees:
 *     RtlAcquireSRWLockShared @ 0x180010220 (RtlAcquireSRWLockShared.c)
 *     RtlReleaseSRWLockShared @ 0x180010280 (RtlReleaseSRWLockShared.c)
 *     LdrpIncrementModuleLoadCount @ 0x180019B00 (LdrpIncrementModuleLoadCount.c)
 *     LdrpDereferenceModule @ 0x18001B350 (LdrpDereferenceModule.c)
 *     LdrpPinModule @ 0x18006D2E8 (LdrpPinModule.c)
 */

__int64 __fastcall LdrAddRefDll(int a1, volatile signed __int32 **a2, unsigned __int64 a3)
{
  char v4; // si
  __int64 v5; // rdi
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // rcx
  __int64 v8; // rax
  unsigned int Count; // eax
  unsigned int v10; // ebx

  v4 = a1;
  if ( (a1 & 0xFFFFFFFE) != 0 )
    return 3221225485LL;
  v5 = 0LL;
  if ( !a2 )
    return 3221225781LL;
  if ( a2 == (volatile signed __int32 **)LdrpSystemDllBase )
  {
    v5 = LdrpNtDllDataTableEntry;
    goto LABEL_19;
  }
  RtlAcquireSRWLockShared(&LdrpModuleDatatableLock);
  v6 = LdrpModuleBaseAddressIndex;
  if ( (qword_1801D2460 & 1) != 0 )
  {
    if ( !LdrpModuleBaseAddressIndex )
      goto LABEL_18;
    v6 = (unsigned __int64)&LdrpModuleBaseAddressIndex ^ LdrpModuleBaseAddressIndex;
  }
  if ( !v6 )
    goto LABEL_18;
  do
  {
    if ( (unsigned __int64)a2 >= *(_QWORD *)(v6 - 152) )
    {
      if ( (unsigned __int64)a2 <= *(_QWORD *)(v6 - 152) )
        break;
      v7 = *(_QWORD *)(v6 + 8);
      if ( (qword_1801D2460 & 1) != 0 && v7 )
      {
        v6 ^= v7;
        continue;
      }
LABEL_12:
      v6 = v7;
      continue;
    }
    v7 = *(_QWORD *)v6;
    if ( (qword_1801D2460 & 1) == 0 || !v7 )
      goto LABEL_12;
    v6 ^= v7;
  }
  while ( v6 );
  if ( v6 )
  {
    v5 = v6 - 200;
    v8 = *(_QWORD *)(v6 - 48);
    if ( *(_DWORD *)(v8 + 24) != -1 && (*(_BYTE *)(*(_QWORD *)v8 - 56LL) & 0x20) == 0 )
      _InterlockedIncrement((volatile signed __int32 *)(v5 + 276));
  }
LABEL_18:
  RtlReleaseSRWLockShared(&LdrpModuleDatatableLock);
LABEL_19:
  if ( !v5 )
    return 3221225781LL;
  if ( (v4 & 1) != 0 )
    Count = LdrpPinModule(v5, a2, a3);
  else
    Count = LdrpIncrementModuleLoadCount(v5);
  v10 = Count;
  LdrpDereferenceModule(v5);
  return v10;
}
