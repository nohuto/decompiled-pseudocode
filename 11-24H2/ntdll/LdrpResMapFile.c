/*
 * XREFs of LdrpResMapFile @ 0x18010E614
 * Callers:
 *     LdrResSearchResource @ 0x1800983B0 (LdrResSearchResource.c)
 * Callees:
 *     RtlFreeHeap @ 0x1800269F0 (RtlFreeHeap.c)
 *     RtlGetCurrentServiceSessionId @ 0x180055A20 (RtlGetCurrentServiceSessionId.c)
 *     LdrRemoveLoadAsDataTable @ 0x1800643D0 (LdrRemoveLoadAsDataTable.c)
 *     RtlReleaseRelativeName @ 0x180077830 (RtlReleaseRelativeName.c)
 *     LdrpResFileSize @ 0x180078EC0 (LdrpResFileSize.c)
 *     LdrpTraceLoadMUIDll @ 0x1800790FC (LdrpTraceLoadMUIDll.c)
 *     RtlDosPathNameToRelativeNtPathName_U @ 0x1800E26E0 (RtlDosPathNameToRelativeNtPathName_U.c)
 *     NtClose @ 0x180161E70 (NtClose.c)
 *     ZwMapViewOfSection @ 0x180162190 (ZwMapViewOfSection.c)
 *     NtCreateSection @ 0x1801625D0 (NtCreateSection.c)
 *     ZwCreateFile @ 0x180162730 (ZwCreateFile.c)
 */

__int64 __fastcall LdrpResMapFile(wchar_t *String2, wchar_t **a2, _QWORD *a3, int a4)
{
  __int64 v8; // r14
  __int64 v9; // rcx
  __int64 v10; // rdi
  int v11; // ebx
  __int64 result; // rax
  __int64 v13; // rcx
  unsigned __int64 v14; // r15
  __int64 v15; // rdx
  HANDLE v16; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v17; // [rsp+70h] [rbp-98h] BYREF
  __int64 v18; // [rsp+78h] [rbp-90h] BYREF
  __int64 v19; // [rsp+80h] [rbp-88h] BYREF
  _QWORD v20[2]; // [rsp+88h] [rbp-80h] BYREF
  __int128 v21; // [rsp+98h] [rbp-70h] BYREF
  _QWORD v22[2]; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v23; // [rsp+B8h] [rbp-50h] BYREF
  __int128 v24; // [rsp+C0h] [rbp-48h] BYREF
  __int128 v25; // [rsp+D0h] [rbp-38h]
  __int128 v26; // [rsp+E0h] [rbp-28h] BYREF
  __int128 v27; // [rsp+F0h] [rbp-18h]
  __int128 v28; // [rsp+100h] [rbp-8h]
  __int128 v29; // [rsp+110h] [rbp+8h] BYREF
  HANDLE Handle; // [rsp+158h] [rbp+50h] BYREF

  v20[0] = 2752552LL;
  v22[0] = 2621478LL;
  Handle = 0LL;
  *(_QWORD *)&v28 = 0LL;
  DWORD2(v28) = 0;
  v16 = 0LL;
  v20[1] = L"LdrpResMapFile Enter";
  v19 = 0LL;
  v22[1] = L"LdrpResMapFile Exit";
  v21 = 0LL;
  v23 = 0LL;
  v26 = 0LL;
  v18 = 0LL;
  v27 = 0LL;
  v17 = 0LL;
  v24 = 0LL;
  v25 = 0LL;
  v29 = 0LL;
  v8 = 2147353477LL;
  if ( (unsigned int)RtlGetCurrentServiceSessionId() )
    v9 = (__int64)NtCurrentPeb()->SharedData + 555;
  else
    v9 = 2147353477LL;
  v10 = 2147353476LL;
  if ( (*(_BYTE *)v9 & 1) != 0 )
  {
    if ( (unsigned int)RtlGetCurrentServiceSessionId() )
      v13 = (__int64)NtCurrentPeb()->SharedData + 554;
    else
      v13 = 2147353476LL;
    LdrpTraceLoadMUIDll((unsigned __int16 *)v20, *(unsigned __int8 *)v13);
  }
  if ( !String2 || !a2 || !a3 )
    goto LABEL_30;
  *a2 = 0LL;
  if ( (int)LdrRemoveLoadAsDataTable(String2, a2, a3, a4 | 0x200000u) >= 0 )
  {
    v11 = -1073741302;
    goto LABEL_17;
  }
  if ( (a4 & 0x400) != 0 )
  {
    if ( !RtlDosPathNameToRelativeNtPathName_U(String2, (unsigned __int16 *)&v21, 0LL, (__int64)&v24) )
    {
      v11 = -1073020927;
      goto LABEL_17;
    }
    v14 = *((_QWORD *)&v21 + 1);
    if ( (_WORD)v24 )
    {
      v15 = v25;
      v21 = v24;
    }
    else
    {
      v15 = 0LL;
      *(_QWORD *)&v25 = 0LL;
    }
    *((_QWORD *)&v26 + 1) = v15 & -(__int64)(v14 != 0);
    LODWORD(v26) = 48;
    DWORD2(v27) = 64;
    *(_QWORD *)&v27 = &v21;
    v28 = 0LL;
    v11 = ZwCreateFile(&Handle, 2148532352LL, &v26, &v29, 0LL, 0, 5, 1, 0, 0LL);
    if ( v14 )
    {
      RtlReleaseRelativeName((__int64)&v24);
      RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v14);
    }
    if ( v11 < 0 )
      goto LABEL_17;
    String2 = (wchar_t *)Handle;
    goto LABEL_11;
  }
  if ( (a4 & 0x800) == 0 )
  {
LABEL_30:
    v11 = -1073741811;
    goto LABEL_17;
  }
  Handle = String2;
LABEL_11:
  if ( (a4 & 0x20000) == 0 )
    goto LABEL_12;
  result = LdrpResFileSize((__int64)String2, &v17);
  if ( (int)result < 0 )
    return result;
  if ( (unsigned __int64)(unsigned int)v17 > *a3 )
  {
    v11 = -1073741793;
  }
  else
  {
LABEL_12:
    v11 = NtCreateSection(&v16, 983045LL, 0LL, 0LL);
    if ( (~(_WORD)a4 & 0x800) != 0 )
      NtClose(Handle);
    if ( v11 >= 0 )
    {
      v11 = ZwMapViewOfSection(v16, -1LL, &v18, 0LL, 0LL, &v23, &v19, 1, 0, 2);
      NtClose(v16);
      if ( v11 >= 0 )
      {
        *a2 = (wchar_t *)(v18 | 1);
        *a3 = v19;
      }
    }
  }
LABEL_17:
  if ( (unsigned int)RtlGetCurrentServiceSessionId() )
    v8 = (__int64)NtCurrentPeb()->SharedData + 555;
  if ( (*(_BYTE *)v8 & 1) != 0 )
  {
    if ( (unsigned int)RtlGetCurrentServiceSessionId() )
      v10 = (__int64)NtCurrentPeb()->SharedData + 554;
    LdrpTraceLoadMUIDll((unsigned __int16 *)v22, *(unsigned __int8 *)v10);
  }
  return (unsigned int)v11;
}
