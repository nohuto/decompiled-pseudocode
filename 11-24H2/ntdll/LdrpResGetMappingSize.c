/*
 * XREFs of LdrpResGetMappingSize @ 0x180095500
 * Callers:
 *     LdrResSearchResource @ 0x18002D200 (LdrResSearchResource.c)
 *     LdrpSearchResourceSection_U @ 0x180077BD0 (LdrpSearchResourceSection_U.c)
 *     LdrResGetRCConfig @ 0x1800959F0 (LdrResGetRCConfig.c)
 *     LdrpResSearchResourceMappedFile @ 0x180096010 (LdrpResSearchResourceMappedFile.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x18006B600 (RtlGetCurrentServiceSessionId.c)
 *     RtlImageNtHeaderEx @ 0x18006ECD0 (RtlImageNtHeaderEx.c)
 *     LdrpGetFileSizeFromLoadAsDataTable @ 0x180079B70 (LdrpGetFileSizeFromLoadAsDataTable.c)
 *     LdrpTraceLoadMUIDll @ 0x18009540C (LdrpTraceLoadMUIDll.c)
 *     ZwQueryVirtualMemory @ 0x1801604B0 (ZwQueryVirtualMemory.c)
 */

__int64 __fastcall LdrpResGetMappingSize(__int64 a1, unsigned __int64 *a2, int a3, char a4)
{
  __int64 v7; // r14
  __int64 v8; // rcx
  __int64 v9; // rsi
  unsigned __int64 v10; // r12
  unsigned __int64 FileSizeFromLoadAsDataTable; // rdi
  NTSTATUS v12; // ecx
  NTSTATUS v13; // ebx
  __int64 v15; // rcx
  int v16; // [rsp+30h] [rbp-98h]
  unsigned __int64 SizeOfImage; // [rsp+38h] [rbp-90h]
  PIMAGE_NT_HEADERS OutHeaders; // [rsp+40h] [rbp-88h] BYREF
  _QWORD v19[2]; // [rsp+48h] [rbp-80h] BYREF
  _QWORD v20[2]; // [rsp+58h] [rbp-70h] BYREF
  __int128 MemoryInformation; // [rsp+68h] [rbp-60h] BYREF
  __int128 v22; // [rsp+78h] [rbp-50h]
  __int128 v23; // [rsp+88h] [rbp-40h]

  OutHeaders = 0LL;
  MemoryInformation = 0LL;
  v22 = 0LL;
  v23 = 0LL;
  v19[0] = 3670070LL;
  v19[1] = L"LdrpResGetMappingSize Enter";
  v20[0] = 3538996LL;
  v20[1] = L"LdrpResGetMappingSize Exit";
  v7 = 2147353477LL;
  if ( RtlGetCurrentServiceSessionId() )
    v8 = (__int64)NtCurrentPeb()->SharedData + 555;
  else
    v8 = 2147353477LL;
  if ( (*(_BYTE *)v8 & 1) != 0 )
  {
    v9 = 2147353476LL;
    if ( RtlGetCurrentServiceSessionId() )
      v15 = (__int64)NtCurrentPeb()->SharedData + 554;
    else
      v15 = 2147353476LL;
    LdrpTraceLoadMUIDll((unsigned __int16 *)v19, *(unsigned __int8 *)v15);
  }
  else
  {
    v9 = 2147353476LL;
  }
  if ( !a1 || !a2 )
    return 3221225485LL;
  v10 = 0LL;
  if ( (a3 & 0x80000) != 0 )
  {
    FileSizeFromLoadAsDataTable = *a2;
  }
  else
  {
    if ( (a3 & 0x20000) != 0 )
      v10 = *a2;
    *a2 = 0LL;
    FileSizeFromLoadAsDataTable = 0LL;
    SizeOfImage = 0LL;
    v12 = RtlImageNtHeaderEx(1u, (PVOID)(a1 & 0xFFFFFFFFFFFFFFFCuLL), 0LL, &OutHeaders);
    if ( v12 >= 0 )
    {
      if ( OutHeaders->OptionalHeader.Magic == 267 || OutHeaders->OptionalHeader.Magic == 523 )
      {
        SizeOfImage = OutHeaders->OptionalHeader.SizeOfImage;
      }
      else
      {
        SizeOfImage = 0LL;
        v12 = -1073741701;
      }
    }
    if ( v12 < 0 )
      return (unsigned int)v12;
    if ( NtCurrentPeb()->ImageBaseAddress != (void *)a1 || (a3 & 0x100) == 0 || (a1 & 1) != 0 || !SizeOfImage )
    {
      if ( !a4 )
        FileSizeFromLoadAsDataTable = LdrpGetFileSizeFromLoadAsDataTable(a1);
      if ( FileSizeFromLoadAsDataTable )
      {
        v13 = 0;
        v16 = 0;
      }
      else
      {
        v13 = ZwQueryVirtualMemory(
                (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                (PVOID)(a1 & 0xFFFFFFFFFFFFFFFCuLL),
                MemoryRegionInformation,
                &MemoryInformation,
                0x30uLL,
                0LL);
        v16 = v13;
        if ( v13 >= 0 )
          FileSizeFromLoadAsDataTable = v22;
      }
      if ( !FileSizeFromLoadAsDataTable && SizeOfImage )
      {
        FileSizeFromLoadAsDataTable = SizeOfImage;
        v13 = 0;
        v16 = 0;
      }
      if ( v13 < 0 )
        goto LABEL_26;
      goto LABEL_24;
    }
    FileSizeFromLoadAsDataTable = SizeOfImage;
  }
  v13 = 0;
  v16 = 0;
LABEL_24:
  if ( v10 && v10 < FileSizeFromLoadAsDataTable )
  {
    v13 = -1073741793;
    v16 = -1073741793;
  }
  else
  {
    *a2 = FileSizeFromLoadAsDataTable;
  }
LABEL_26:
  if ( RtlGetCurrentServiceSessionId() )
  {
    v7 = (__int64)NtCurrentPeb()->SharedData + 555;
    v13 = v16;
  }
  if ( (*(_BYTE *)v7 & 1) != 0 )
  {
    if ( RtlGetCurrentServiceSessionId() )
    {
      v9 = (__int64)NtCurrentPeb()->SharedData + 554;
      v13 = v16;
    }
    LdrpTraceLoadMUIDll((unsigned __int16 *)v20, *(unsigned __int8 *)v9);
  }
  return (unsigned int)v13;
}
