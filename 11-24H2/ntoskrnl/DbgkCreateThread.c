/*
 * XREFs of DbgkCreateThread @ 0x140921604
 * Callers:
 *     PspNotifyThreadCreation @ 0x140921518 (PspNotifyThreadCreation.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402CE210 (ObfDereferenceObject.c)
 *     ObFastDereferenceObject @ 0x140324D60 (ObFastDereferenceObject.c)
 *     RtlImageNtHeader @ 0x140432E80 (RtlImageNtHeader.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     ObCloseHandle @ 0x1408AB1B0 (ObCloseHandle.c)
 *     PsWow64GetProcessNtdllType @ 0x1408DFF44 (PsWow64GetProcessNtdllType.c)
 *     DbgkSendSystemDllMessages @ 0x1408F541C (DbgkSendSystemDllMessages.c)
 *     PsQuerySystemDllInfo @ 0x14091D988 (PsQuerySystemDllInfo.c)
 *     PsReferenceProcessFilePointer @ 0x140922040 (PsReferenceProcessFilePointer.c)
 *     MmGetFileObjectForSection @ 0x1409220B0 (MmGetFileObjectForSection.c)
 *     PspReferenceSystemDll @ 0x1409222A8 (PspReferenceSystemDll.c)
 *     PsCallImageNotifyRoutines @ 0x140922440 (PsCallImageNotifyRoutines.c)
 *     PsIsImageNotifyEnabled @ 0x140A268F4 (PsIsImageNotifyEnabled.c)
 *     DbgkpPostModuleMessages @ 0x140A41618 (DbgkpPostModuleMessages.c)
 *     DbgkpSendApiMessage @ 0x140A5A2C0 (DbgkpSendApiMessage.c)
 *     DbgkpSectionToFileHandle @ 0x140A7DB28 (DbgkpSectionToFileHandle.c)
 */

LONG_PTR __fastcall DbgkCreateThread(__int64 a1)
{
  __int64 v2; // rdi
  LONG_PTR result; // rax
  char v4; // r12
  __int16 v5; // ax
  char v6; // al
  PIMAGE_NT_HEADERS v7; // rax
  int i; // esi
  LONG_PTR v9; // r15
  PIMAGE_NT_HEADERS v10; // rax
  ULONG_PTR v11; // r13
  PIMAGE_NT_HEADERS v12; // rax
  char v13; // [rsp+20h] [rbp-1A8h]
  PVOID Object; // [rsp+28h] [rbp-1A0h] BYREF
  int v15; // [rsp+30h] [rbp-198h]
  __int64 v16; // [rsp+38h] [rbp-190h]
  __int64 v17; // [rsp+40h] [rbp-188h]
  __int128 v18; // [rsp+48h] [rbp-180h]
  __int128 v19; // [rsp+58h] [rbp-170h]
  __int128 v20; // [rsp+68h] [rbp-160h]
  __int64 v21; // [rsp+78h] [rbp-150h]
  _QWORD *v22; // [rsp+80h] [rbp-148h]
  LONG_PTR v23; // [rsp+88h] [rbp-140h]
  int v24; // [rsp+90h] [rbp-138h] BYREF
  int v25; // [rsp+94h] [rbp-134h]
  int v26; // [rsp+B8h] [rbp-110h]
  HANDLE Handle; // [rsp+C8h] [rbp-100h]
  __int64 v28; // [rsp+D0h] [rbp-F8h]
  unsigned int PointerToSymbolTable; // [rsp+D8h] [rbp-F0h]
  unsigned int NumberOfSymbols; // [rsp+DCh] [rbp-ECh]
  unsigned __int64 v31; // [rsp+E8h] [rbp-E0h]

  v17 = a1;
  memset_0(&v24, 0, 0x110uLL);
  v2 = *(_QWORD *)(a1 + 184);
  v16 = v2;
  v22 = (_QWORD *)(v2 + 784);
  if ( !*(_QWORD *)(v2 + 784)
    || ((v5 = *(_WORD *)(v2 + 1772), v5 == 332) || v5 == 452 ? (v6 = 1) : (v6 = 0), v13 = 1, !v6) )
  {
    v13 = 0;
  }
  _m_prefetchw((const void *)(v2 + 500));
  result = (unsigned int)_InterlockedOr((volatile signed __int32 *)(v2 + 500), 0x400001u);
  v4 = result;
  v15 = result;
  if ( (result & 0x400000) == 0 )
  {
    result = PsIsImageNotifyEnabled();
    if ( (_BYTE)result )
    {
      v18 = 0LL;
      v19 = 0LL;
      v20 = 0LL;
      v21 = 0LL;
      Object = 0LL;
      BYTE8(v18) = 3;
      *(_QWORD *)&v19 = *(_QWORD *)(v2 + 688);
      *(_QWORD *)&v20 = 0LL;
      v7 = RtlImageNtHeader((PVOID)v19);
      if ( v7 )
        *(_QWORD *)&v20 = v7->OptionalHeader.SizeOfImage;
      DWORD2(v19) = 0;
      DWORD2(v20) = 0;
      PsReferenceProcessFilePointer(v2, &Object);
      PsCallImageNotifyRoutines(*(PUNICODE_STRING *)(v2 + 848));
      result = ObfDereferenceObject(Object);
      for ( i = 0; ; ++i )
      {
        LODWORD(Object) = i;
        if ( i >= 6 )
          break;
        result = PsQuerySystemDllInfo(i);
        v9 = result;
        v23 = result;
        if ( result )
        {
          if ( i <= 0
            || (*(_DWORD *)result & 8) != 0 && *v22 && (result = PsWow64GetProcessNtdllType(v2), i == (_DWORD)result) )
          {
            DWORD2(v18) = 3;
            *(_QWORD *)&v19 = *(_QWORD *)(v9 + 24);
            *(_QWORD *)&v20 = 0LL;
            v10 = RtlImageNtHeader(*(PVOID *)(v9 + 24));
            if ( v10 )
              *(_QWORD *)&v20 = v10->OptionalHeader.SizeOfImage;
            DWORD2(v19) = 0;
            DWORD2(v20) = 0;
            v11 = PspReferenceSystemDll(*(_QWORD *)(v9 - 8));
            Object = (PVOID)MmGetFileObjectForSection(v11);
            if ( v11 )
              ObFastDereferenceObject(*(__int64 **)(v9 - 8), v11, 0x64537350u);
            PsCallImageNotifyRoutines((PUNICODE_STRING)(v9 + 8));
            result = ObfDereferenceObject(Object);
          }
        }
      }
    }
  }
  if ( *(_QWORD *)(v2 + 776) )
  {
    if ( (v4 & 1) != 0 )
    {
      if ( (*(_DWORD *)(a1 + 1440) & 4) == 0 )
      {
        memset_0(&v24, 0, 0x40uLL);
        Handle = *(HANDLE *)(a1 + 1376);
        v24 = 4194328;
        v25 = 8;
        v26 = 1;
        DbgkpSendApiMessage((PVOID)v2);
      }
    }
    else
    {
      memset_0(&v24, 0, 0x60uLL);
      Handle = (HANDLE)DbgkpSectionToFileHandle(*(_QWORD *)(v2 + 680));
      v28 = *(_QWORD *)(v2 + 688);
      v31 = 0LL;
      PointerToSymbolTable = 0;
      NumberOfSymbols = 0;
      v12 = RtlImageNtHeader(*(PVOID *)(v2 + 688));
      if ( v12 )
      {
        if ( v13 )
          v31 = v12->OptionalHeader.AddressOfEntryPoint + HIDWORD(v12->OptionalHeader.ImageBase);
        else
          v31 = v12->OptionalHeader.ImageBase + v12->OptionalHeader.AddressOfEntryPoint;
        PointerToSymbolTable = v12->FileHeader.PointerToSymbolTable;
        NumberOfSymbols = v12->FileHeader.NumberOfSymbols;
      }
      v24 = 6291512;
      v25 = 8;
      v26 = 2;
      DbgkpSendApiMessage((PVOID)v2);
      if ( Handle )
        ObCloseHandle(Handle, 0);
      DbgkSendSystemDllMessages(0LL, 0LL, &v24);
    }
    result = *(unsigned int *)(a1 + 1444);
    if ( (result & 0x10) != 0 )
      return DbgkpPostModuleMessages(v2, a1, 0LL);
  }
  return result;
}
