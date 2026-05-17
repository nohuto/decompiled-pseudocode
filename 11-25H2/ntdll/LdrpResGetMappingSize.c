/*
 * XREFs of LdrpResGetMappingSize @ 0x1800A3820
 * Callers:
 *     LdrResSearchResource @ 0x180003A20 (LdrResSearchResource.c)
 *     LdrpSearchResourceSection_U @ 0x18001DC50 (LdrpSearchResourceSection_U.c)
 *     LdrResGetRCConfig @ 0x1800A3B50 (LdrResGetRCConfig.c)
 *     LdrpResSearchResourceMappedFile @ 0x1800A4170 (LdrpResSearchResourceMappedFile.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180011660 (RtlGetCurrentServiceSessionId.c)
 *     RtlImageNtHeaderEx @ 0x180014D30 (RtlImageNtHeaderEx.c)
 *     LdrpGetFileSizeFromLoadAsDataTable @ 0x18001FBF0 (LdrpGetFileSizeFromLoadAsDataTable.c)
 *     LdrpTraceLoadMUIDll @ 0x1800A3730 (LdrpTraceLoadMUIDll.c)
 *     ZwQueryVirtualMemory @ 0x180163680 (ZwQueryVirtualMemory.c)
 */

__int64 __fastcall LdrpResGetMappingSize(__int64 a1, unsigned __int64 *a2, int a3, char a4)
{
  __int64 v7; // r14
  __int64 v8; // rcx
  __int64 v9; // rsi
  unsigned __int64 v10; // r12
  unsigned __int64 FileSizeFromLoadAsDataTable; // rdi
  int v12; // ecx
  int v13; // ebx
  __int64 v15; // rcx
  int v16; // [rsp+30h] [rbp-98h]
  unsigned __int64 v17; // [rsp+38h] [rbp-90h]
  __int64 v18; // [rsp+40h] [rbp-88h] BYREF
  _QWORD v19[2]; // [rsp+48h] [rbp-80h] BYREF
  _QWORD v20[2]; // [rsp+58h] [rbp-70h] BYREF
  __int128 v21; // [rsp+68h] [rbp-60h] BYREF
  __int128 v22; // [rsp+78h] [rbp-50h]
  __int128 v23; // [rsp+88h] [rbp-40h]

  v18 = 0LL;
  v21 = 0LL;
  v22 = 0LL;
  v23 = 0LL;
  v19[0] = 3670070LL;
  v19[1] = L"LdrpResGetMappingSize Enter";
  v20[0] = 3538996LL;
  v20[1] = L"LdrpResGetMappingSize Exit";
  v7 = 2147353477LL;
  if ( (unsigned int)RtlGetCurrentServiceSessionId() )
    v8 = (__int64)NtCurrentPeb()->SharedData + 555;
  else
    v8 = 2147353477LL;
  if ( (*(_BYTE *)v8 & 1) != 0 )
  {
    v9 = 2147353476LL;
    if ( (unsigned int)RtlGetCurrentServiceSessionId() )
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
    v17 = 0LL;
    v12 = RtlImageNtHeaderEx(1, a1 & 0xFFFFFFFFFFFFFFFCuLL, 0LL, &v18);
    if ( v12 >= 0 )
    {
      if ( *(_WORD *)(v18 + 24) == 267 || *(_WORD *)(v18 + 24) == 523 )
      {
        v17 = *(unsigned int *)(v18 + 80);
      }
      else
      {
        v17 = 0LL;
        v12 = -1073741701;
      }
    }
    if ( v12 < 0 )
      return (unsigned int)v12;
    if ( NtCurrentPeb()->ImageBaseAddress != (void *)a1 || (a3 & 0x100) == 0 || (a1 & 1) != 0 || !v17 )
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
        v13 = ZwQueryVirtualMemory(-1LL, a1 & 0xFFFFFFFFFFFFFFFCuLL, 3LL, &v21, 48LL, 0LL);
        v16 = v13;
        if ( v13 >= 0 )
          FileSizeFromLoadAsDataTable = v22;
      }
      if ( !FileSizeFromLoadAsDataTable && v17 )
      {
        FileSizeFromLoadAsDataTable = v17;
        v13 = 0;
        v16 = 0;
      }
      if ( v13 < 0 )
        goto LABEL_26;
      goto LABEL_24;
    }
    FileSizeFromLoadAsDataTable = v17;
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
  if ( (unsigned int)RtlGetCurrentServiceSessionId() )
  {
    v7 = (__int64)NtCurrentPeb()->SharedData + 555;
    v13 = v16;
  }
  if ( (*(_BYTE *)v7 & 1) != 0 )
  {
    if ( (unsigned int)RtlGetCurrentServiceSessionId() )
    {
      v9 = (__int64)NtCurrentPeb()->SharedData + 554;
      v13 = v16;
    }
    LdrpTraceLoadMUIDll((unsigned __int16 *)v20, *(unsigned __int8 *)v9);
  }
  return (unsigned int)v13;
}
