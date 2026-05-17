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

__int64 __fastcall LdrAddRefDll(int a1, unsigned __int64 a2)
{
  char v3; // si
  __int64 v4; // rdi
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rcx
  __int64 v7; // rax
  unsigned int Count; // eax
  unsigned int v9; // ebx

  v3 = a1;
  if ( (a1 & 0xFFFFFFFE) != 0 )
    return 3221225485LL;
  v4 = 0LL;
  if ( !a2 )
    return 3221225781LL;
  if ( a2 == LdrpSystemDllBase )
  {
    v4 = LdrpNtDllDataTableEntry;
    goto LABEL_19;
  }
  RtlAcquireSRWLockShared(&LdrpModuleDatatableLock);
  v5 = LdrpModuleBaseAddressIndex;
  if ( (qword_1801D44B0 & 1) != 0 )
  {
    if ( !LdrpModuleBaseAddressIndex )
      goto LABEL_18;
    v5 = (unsigned __int64)&LdrpModuleBaseAddressIndex ^ LdrpModuleBaseAddressIndex;
  }
  if ( !v5 )
    goto LABEL_18;
  do
  {
    if ( a2 >= *(_QWORD *)(v5 - 152) )
    {
      if ( a2 <= *(_QWORD *)(v5 - 152) )
        break;
      v6 = *(_QWORD *)(v5 + 8);
      if ( (qword_1801D44B0 & 1) != 0 && v6 )
      {
        v5 ^= v6;
        continue;
      }
LABEL_12:
      v5 = v6;
      continue;
    }
    v6 = *(_QWORD *)v5;
    if ( (qword_1801D44B0 & 1) == 0 || !v6 )
      goto LABEL_12;
    v5 ^= v6;
  }
  while ( v5 );
  if ( v5 )
  {
    v4 = v5 - 200;
    v7 = *(_QWORD *)(v5 - 48);
    if ( *(_DWORD *)(v7 + 24) != -1 && (*(_BYTE *)(*(_QWORD *)v7 - 56LL) & 0x20) == 0 )
      _InterlockedIncrement((volatile signed __int32 *)(v4 + 276));
  }
LABEL_18:
  RtlReleaseSRWLockShared(&LdrpModuleDatatableLock);
LABEL_19:
  if ( !v4 )
    return 3221225781LL;
  if ( (v3 & 1) != 0 )
    Count = LdrpPinModule(v4);
  else
    Count = LdrpIncrementModuleLoadCount(v4);
  v9 = Count;
  LdrpDereferenceModule(v4);
  return v9;
}
