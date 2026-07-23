/*
 * XREFs of LdrGetDllFullName @ 0x180046EC0
 * Callers:
 *     GetModuleFullPathNameUnicode @ 0x18007C370 (GetModuleFullPathNameUnicode.c)
 * Callees:
 *     RtlAcquireSRWLockShared @ 0x18003CC20 (RtlAcquireSRWLockShared.c)
 *     RtlReleaseSRWLockShared @ 0x18003CC80 (RtlReleaseSRWLockShared.c)
 *     LdrpDereferenceModule @ 0x180047D50 (LdrpDereferenceModule.c)
 *     memmove @ 0x1801657C0 (memmove.c)
 */

NTSTATUS __cdecl LdrGetDllFullName(PVOID DllHandle, PUNICODE_STRING FullDllName)
{
  NTSTATUS v4; // edi
  volatile signed __int32 *v5; // rbp
  unsigned __int64 Root; // rcx
  unsigned __int64 v7; // rax
  __int64 v8; // rax
  unsigned __int16 *v9; // rbx
  unsigned int MaximumLength; // eax
  const void *v11; // rdx
  wchar_t *Buffer; // r14
  unsigned __int64 v13; // rsi
  _QWORD *SubSystemTib; // rax
  unsigned __int16 *v16; // rax

  v4 = 0;
  if ( !DllHandle )
  {
    v5 = (volatile signed __int32 *)LdrpImageEntry;
    SubSystemTib = NtCurrentTeb()->NtTib.SubSystemTib;
    v9 = (unsigned __int16 *)(LdrpImageEntry + 72);
    if ( SubSystemTib )
    {
      v16 = (unsigned __int16 *)SubSystemTib[1];
      if ( v16 )
        v9 = v16;
    }
    goto LABEL_21;
  }
  v5 = 0LL;
  if ( DllHandle == LdrpSystemDllBase )
  {
    v5 = (volatile signed __int32 *)LdrpNtDllDataTableEntry;
    goto LABEL_18;
  }
  RtlAcquireSRWLockShared(&LdrpModuleDatatableLock);
  Root = (unsigned __int64)LdrpModuleBaseAddressIndex.Root;
  if ( (*(_BYTE *)&LdrpModuleBaseAddressIndex.0 & 1) != 0 )
  {
    if ( !LdrpModuleBaseAddressIndex.Root )
      goto LABEL_17;
    Root = (unsigned __int64)&LdrpModuleBaseAddressIndex ^ (unsigned __int64)LdrpModuleBaseAddressIndex.Root;
  }
  if ( !Root )
    goto LABEL_17;
  do
  {
    if ( (unsigned __int64)DllHandle >= *(_QWORD *)(Root - 152) )
    {
      if ( (unsigned __int64)DllHandle <= *(_QWORD *)(Root - 152) )
        break;
      v7 = *(_QWORD *)(Root + 8);
      if ( (*(_BYTE *)&LdrpModuleBaseAddressIndex.0 & 1) != 0 && v7 )
      {
        Root ^= v7;
        continue;
      }
LABEL_11:
      Root = v7;
      continue;
    }
    v7 = *(_QWORD *)Root;
    if ( (*(_BYTE *)&LdrpModuleBaseAddressIndex.0 & 1) == 0 || !v7 )
      goto LABEL_11;
    Root ^= v7;
  }
  while ( Root );
  if ( Root )
  {
    v8 = *(_QWORD *)(Root - 48);
    v5 = (volatile signed __int32 *)(Root - 200);
    if ( *(_DWORD *)(v8 + 24) != -1 && (*(_BYTE *)(*(_QWORD *)v8 - 56LL) & 0x20) == 0 )
      _InterlockedIncrement(v5 + 69);
  }
LABEL_17:
  RtlReleaseSRWLockShared(&LdrpModuleDatatableLock);
LABEL_18:
  v9 = (unsigned __int16 *)(v5 + 18);
  v4 = -1073741515;
  if ( v5 )
    v4 = 0;
  else
    v9 = 0LL;
LABEL_21:
  if ( v5 )
  {
    if ( v9 )
    {
      MaximumLength = FullDllName->MaximumLength;
      v11 = (const void *)*((_QWORD *)v9 + 1);
      if ( *v9 <= (unsigned __int16)MaximumLength )
        MaximumLength = *v9;
      Buffer = FullDllName->Buffer;
      v13 = MaximumLength;
      FullDllName->Length = MaximumLength;
      memmove(Buffer, v11, MaximumLength);
      if ( (unsigned __int64)FullDllName->Length + 2 <= FullDllName->MaximumLength )
        Buffer[v13 >> 1] = 0;
    }
    else
    {
      FullDllName->Length = 0;
    }
    if ( *v9 > FullDllName->MaximumLength )
      v4 = -1073741789;
    if ( v5 != (volatile signed __int32 *)LdrpImageEntry )
      LdrpDereferenceModule((PVOID)v5);
  }
  return v4;
}
