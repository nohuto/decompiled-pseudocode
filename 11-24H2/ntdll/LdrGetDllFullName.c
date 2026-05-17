/*
 * XREFs of LdrGetDllFullName @ 0x18001A4C0
 * Callers:
 *     GetModuleFullPathNameUnicode @ 0x1800AFAD0 (GetModuleFullPathNameUnicode.c)
 * Callees:
 *     RtlAcquireSRWLockShared @ 0x180010220 (RtlAcquireSRWLockShared.c)
 *     RtlReleaseSRWLockShared @ 0x180010280 (RtlReleaseSRWLockShared.c)
 *     LdrpDereferenceModule @ 0x18001B350 (LdrpDereferenceModule.c)
 *     memmove @ 0x180167400 (memmove.c)
 */

__int64 __fastcall LdrGetDllFullName(unsigned __int64 a1, unsigned __int16 *a2)
{
  unsigned int v4; // edi
  __int64 v5; // rbp
  unsigned __int64 v6; // rcx
  unsigned __int64 v7; // rax
  __int64 v8; // rax
  unsigned __int16 *v9; // rbx
  unsigned int v10; // eax
  const void *v11; // rdx
  void *v12; // r14
  unsigned __int64 v13; // rsi
  _QWORD *SubSystemTib; // rax
  unsigned __int16 *v16; // rax

  v4 = 0;
  if ( !a1 )
  {
    v5 = LdrpImageEntry;
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
  if ( a1 == LdrpSystemDllBase )
  {
    v5 = LdrpNtDllDataTableEntry;
    goto LABEL_18;
  }
  RtlAcquireSRWLockShared(&LdrpModuleDatatableLock);
  v6 = LdrpModuleBaseAddressIndex;
  if ( (qword_1801D2460 & 1) != 0 )
  {
    if ( !LdrpModuleBaseAddressIndex )
      goto LABEL_17;
    v6 = (unsigned __int64)&LdrpModuleBaseAddressIndex ^ LdrpModuleBaseAddressIndex;
  }
  if ( !v6 )
    goto LABEL_17;
  do
  {
    if ( a1 >= *(_QWORD *)(v6 - 152) )
    {
      if ( a1 <= *(_QWORD *)(v6 - 152) )
        break;
      v7 = *(_QWORD *)(v6 + 8);
      if ( (qword_1801D2460 & 1) != 0 && v7 )
      {
        v6 ^= v7;
        continue;
      }
LABEL_11:
      v6 = v7;
      continue;
    }
    v7 = *(_QWORD *)v6;
    if ( (qword_1801D2460 & 1) == 0 || !v7 )
      goto LABEL_11;
    v6 ^= v7;
  }
  while ( v6 );
  if ( v6 )
  {
    v8 = *(_QWORD *)(v6 - 48);
    v5 = v6 - 200;
    if ( *(_DWORD *)(v8 + 24) != -1 && (*(_BYTE *)(*(_QWORD *)v8 - 56LL) & 0x20) == 0 )
      _InterlockedIncrement((volatile signed __int32 *)(v5 + 276));
  }
LABEL_17:
  RtlReleaseSRWLockShared(&LdrpModuleDatatableLock);
LABEL_18:
  v9 = (unsigned __int16 *)(v5 + 72);
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
      v10 = a2[1];
      v11 = (const void *)*((_QWORD *)v9 + 1);
      if ( *v9 <= (unsigned __int16)v10 )
        v10 = *v9;
      v12 = (void *)*((_QWORD *)a2 + 1);
      v13 = v10;
      *a2 = v10;
      memmove(v12, v11, v10);
      if ( (unsigned __int64)*a2 + 2 <= a2[1] )
        *((_WORD *)v12 + (v13 >> 1)) = 0;
    }
    else
    {
      *a2 = 0;
    }
    if ( *v9 > a2[1] )
      v4 = -1073741789;
    if ( v5 != LdrpImageEntry )
      LdrpDereferenceModule(v5);
  }
  return v4;
}
