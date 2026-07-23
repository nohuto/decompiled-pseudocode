/*
 * XREFs of EtwpProviderArrivalCallback @ 0x1800470F0
 * Callers:
 *     EtwpGetUmProcessImageInfo @ 0x1800922DC (EtwpGetUmProcessImageInfo.c)
 * Callees:
 *     RtlImageNtHeaderEx @ 0x180014D30 (RtlImageNtHeaderEx.c)
 *     RtlAddressInSectionTable @ 0x1800206B0 (RtlAddressInSectionTable.c)
 *     RtlNtStatusToDosError @ 0x180046BD0 (RtlNtStatusToDosError.c)
 *     EtwpTrackBinaryForSession @ 0x180046D70 (EtwpTrackBinaryForSession.c)
 *     LdrpDereferenceModule @ 0x180048C70 (LdrpDereferenceModule.c)
 *     RtlAcquireSRWLockShared @ 0x18004F0C0 (RtlAcquireSRWLockShared.c)
 *     RtlReleaseSRWLockShared @ 0x18004F120 (RtlReleaseSRWLockShared.c)
 *     RtlpxLookupFunctionTable @ 0x1800787D0 (RtlpxLookupFunctionTable.c)
 *     EtwpTrackDebugIdForSession @ 0x18011B540 (EtwpTrackDebugIdForSession.c)
 *     __security_check_cookie @ 0x180166F50 (__security_check_cookie.c)
 *     memmove @ 0x180168980 (memmove.c)
 */

ULONG __fastcall EtwpProviderArrivalCallback(__int64 a1, __int64 a2)
{
  void *v3; // rcx
  unsigned int v4; // r15d
  char *v6; // rbx
  __int16 v7; // cx
  __int64 v8; // rbp
  unsigned __int64 Root; // rcx
  unsigned __int64 v10; // rax
  __int64 v11; // rax
  NTSTATUS v12; // ebx
  _WORD *v13; // rdi
  unsigned int v14; // eax
  const void *v15; // rdx
  unsigned __int64 v16; // rsi
  unsigned int Size; // r14d
  bool v19; // si
  char *v20; // rdi
  char *v21; // rbp
  unsigned __int16 Magic; // ax
  __int64 VirtualAddress; // rax
  int v24; // edx
  char *v25; // rcx
  char *v26; // rax
  int v27; // ecx
  int v28; // eax
  PIMAGE_NT_HEADERS OutHeaders[3]; // [rsp+20h] [rbp-288h] BYREF
  PVOID BaseOfImage[2]; // [rsp+38h] [rbp-270h]
  __int64 v31; // [rsp+48h] [rbp-260h]
  _WORD v32[264]; // [rsp+50h] [rbp-258h] BYREF

  v31 = 0LL;
  v3 = *(void **)(a2 + 48);
  v4 = 0;
  *(_OWORD *)BaseOfImage = 0LL;
  if ( (unsigned __int64)v3 < *((_QWORD *)&xmmword_1801E9430 + 1)
    || (unsigned __int64)v3 >= *((_QWORD *)&xmmword_1801E9430 + 1) + (unsigned __int64)(unsigned int)qword_1801E9440 )
  {
    RtlpxLookupFunctionTable(v3);
  }
  else
  {
    *(_OWORD *)BaseOfImage = xmmword_1801E9430;
    v31 = qword_1801E9440;
  }
  v6 = (char *)BaseOfImage[1];
  if ( !BaseOfImage[1] )
    return 87;
  v7 = *(_WORD *)(a2 + 86);
  if ( (v7 & 0x3FFF) == 2 )
  {
    OutHeaders[0] = 0LL;
    Size = 0;
    v19 = 1;
    v20 = (char *)BaseOfImage[1];
    v21 = 0LL;
    if ( ((__int64)BaseOfImage[1] & 3) != 0 )
    {
      v20 = (char *)((unsigned __int64)BaseOfImage[1] & 0xFFFFFFFFFFFFFFFCuLL);
      v19 = ((__int64)BaseOfImage[1] & 1) == 0;
    }
    RtlImageNtHeaderEx(1u, v20, 0LL, OutHeaders);
    if ( !OutHeaders[0] )
      return 87;
    Magic = OutHeaders[0]->OptionalHeader.Magic;
    if ( Magic == 267 )
    {
      if ( HIDWORD(OutHeaders[0]->OptionalHeader.SizeOfHeapReserve) > 6 )
      {
        VirtualAddress = OutHeaders[0]->OptionalHeader.DataDirectory[4].VirtualAddress;
        if ( !(_DWORD)VirtualAddress )
        {
          v24 = -1073741822;
          goto LABEL_45;
        }
        Size = OutHeaders[0]->OptionalHeader.DataDirectory[4].Size;
        if ( !v19 && (unsigned int)VirtualAddress >= OutHeaders[0]->OptionalHeader.SizeOfHeaders )
        {
          v26 = (char *)RtlAddressInSectionTable(OutHeaders[0], v20, VirtualAddress);
          v27 = 0;
          v21 = v26;
          if ( !v26 )
            v27 = -1073741811;
          v24 = v27;
          goto LABEL_45;
        }
LABEL_44:
        v21 = &v20[VirtualAddress];
        v24 = 0;
LABEL_45:
        v25 = 0LL;
        if ( v24 >= 0 )
          v25 = v21;
        if ( v25 && Size >= 0x1C )
        {
          while ( 1 )
          {
            if ( v4 >= Size / 0x1C )
              return 232;
            if ( *((_DWORD *)v25 + 3) == 2 && *(_DWORD *)&v6[*((unsigned int *)v25 + 5)] == 1396986706 )
              break;
            v25 += 28;
            ++v4;
          }
          if ( *((_DWORD *)v25 + 4) >= 0x1Cu )
            return EtwpTrackDebugIdForSession(a1);
        }
        return 87;
      }
    }
    else if ( Magic == 523 && OutHeaders[0]->OptionalHeader.NumberOfRvaAndSizes > 6 )
    {
      VirtualAddress = OutHeaders[0]->OptionalHeader.DataDirectory[6].VirtualAddress;
      if ( !(_DWORD)VirtualAddress )
      {
        v24 = -1073741822;
        goto LABEL_45;
      }
      Size = OutHeaders[0]->OptionalHeader.DataDirectory[6].Size;
      if ( !v19 && (unsigned int)VirtualAddress >= OutHeaders[0]->OptionalHeader.SizeOfHeaders )
      {
        v21 = (char *)RtlAddressInSectionTable(OutHeaders[0], v20, VirtualAddress);
        v28 = 0;
        if ( !v21 )
          v28 = -1073741811;
        v24 = v28;
        goto LABEL_45;
      }
      goto LABEL_44;
    }
    v24 = -1073741811;
    goto LABEL_45;
  }
  if ( v7 >= 0 )
    return 0;
  OutHeaders[0] = (PIMAGE_NT_HEADERS)17039360;
  OutHeaders[1] = (PIMAGE_NT_HEADERS)v32;
  v8 = 0LL;
  if ( BaseOfImage[1] == LdrpSystemDllBase )
  {
    v8 = LdrpNtDllDataTableEntry;
    goto LABEL_22;
  }
  RtlAcquireSRWLockShared(&LdrpModuleDatatableLock);
  Root = (unsigned __int64)LdrpModuleBaseAddressIndex.Root;
  if ( (*(_BYTE *)&LdrpModuleBaseAddressIndex.0 & 1) != 0 )
  {
    if ( !LdrpModuleBaseAddressIndex.Root )
      goto LABEL_21;
    Root = (unsigned __int64)&LdrpModuleBaseAddressIndex ^ (unsigned __int64)LdrpModuleBaseAddressIndex.Root;
  }
  if ( !Root )
    goto LABEL_21;
  do
  {
    if ( BaseOfImage[1] >= (PVOID)*(_QWORD *)(Root - 152) )
    {
      if ( BaseOfImage[1] <= (PVOID)*(_QWORD *)(Root - 152) )
        break;
      v10 = *(_QWORD *)(Root + 8);
      if ( (*(_BYTE *)&LdrpModuleBaseAddressIndex.0 & 1) != 0 && v10 )
      {
        Root ^= v10;
        continue;
      }
LABEL_15:
      Root = v10;
      continue;
    }
    v10 = *(_QWORD *)Root;
    if ( (*(_BYTE *)&LdrpModuleBaseAddressIndex.0 & 1) == 0 || !v10 )
      goto LABEL_15;
    Root ^= v10;
  }
  while ( Root );
  if ( Root )
  {
    v11 = *(_QWORD *)(Root - 48);
    v8 = Root - 200;
    if ( *(_DWORD *)(v11 + 24) != -1 && (*(_BYTE *)(*(_QWORD *)v11 - 56LL) & 0x20) == 0 )
      _InterlockedIncrement((volatile signed __int32 *)(v8 + 276));
  }
LABEL_21:
  RtlReleaseSRWLockShared(&LdrpModuleDatatableLock);
LABEL_22:
  v12 = -1073741515;
  if ( v8 )
  {
    v12 = 0;
    v13 = (_WORD *)(v8 + 72);
    if ( v8 == -72 )
    {
      LOWORD(OutHeaders[0]) = 0;
    }
    else
    {
      v14 = (unsigned __int16)*v13;
      v15 = *(const void **)(v8 + 80);
      if ( (unsigned __int16)v14 > 0x104u )
        v14 = 260;
      LOWORD(OutHeaders[0]) = v14;
      v16 = v14;
      memmove(v32, v15, v14);
      if ( v16 + 2 <= 0x104 )
        v32[v16 >> 1] = 0;
    }
    if ( *v13 > 0x104u )
      v12 = -1073741789;
    if ( v8 != LdrpImageEntry )
      LdrpDereferenceModule((PVOID)v8);
  }
  if ( v12 < 0 )
    return RtlNtStatusToDosError(v12);
  else
    return EtwpTrackBinaryForSession(a1, (const void **)OutHeaders, (_QWORD *)(a2 + 32));
}
