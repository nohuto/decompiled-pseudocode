/*
 * XREFs of LdrpResMapFile @ 0x1801110E4
 * Callers:
 *     LdrResSearchResource @ 0x180003A20 (LdrResSearchResource.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180011660 (RtlGetCurrentServiceSessionId.c)
 *     LdrRemoveLoadAsDataTable @ 0x180020030 (LdrRemoveLoadAsDataTable.c)
 *     RtlFreeHeap @ 0x180080DD0 (RtlFreeHeap.c)
 *     RtlReleaseRelativeName @ 0x1800A2FC0 (RtlReleaseRelativeName.c)
 *     LdrpResFileSize @ 0x1800A3598 (LdrpResFileSize.c)
 *     LdrpTraceLoadMUIDll @ 0x1800A3730 (LdrpTraceLoadMUIDll.c)
 *     RtlDosPathNameToRelativeNtPathName_U @ 0x1800DF400 (RtlDosPathNameToRelativeNtPathName_U.c)
 *     NtClose @ 0x180163400 (NtClose.c)
 *     ZwMapViewOfSection @ 0x180163720 (ZwMapViewOfSection.c)
 *     NtCreateSection @ 0x180163B60 (NtCreateSection.c)
 *     ZwCreateFile @ 0x180163CC0 (ZwCreateFile.c)
 */

__int64 __fastcall LdrpResMapFile(wchar_t *String2, wchar_t **a2, _QWORD *a3, unsigned int a4)
{
  __int64 v8; // r14
  __int64 v9; // rcx
  __int64 v10; // rdi
  __int64 v11; // r9
  int v12; // ebx
  __int64 result; // rax
  __int64 v14; // rcx
  __int64 v15; // r15
  __int64 v16; // rdx
  __int64 v17; // r9
  HANDLE v18; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v19; // [rsp+70h] [rbp-98h] BYREF
  __int64 v20; // [rsp+78h] [rbp-90h] BYREF
  __int64 v21; // [rsp+80h] [rbp-88h] BYREF
  _QWORD v22[2]; // [rsp+88h] [rbp-80h] BYREF
  __int128 v23; // [rsp+98h] [rbp-70h] BYREF
  _QWORD v24[2]; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v25; // [rsp+B8h] [rbp-50h] BYREF
  __int128 v26; // [rsp+C0h] [rbp-48h] BYREF
  __int128 v27; // [rsp+D0h] [rbp-38h]
  __int128 v28; // [rsp+E0h] [rbp-28h] BYREF
  __int128 v29; // [rsp+F0h] [rbp-18h]
  __int128 v30; // [rsp+100h] [rbp-8h]
  __int128 v31; // [rsp+110h] [rbp+8h] BYREF
  HANDLE Handle; // [rsp+158h] [rbp+50h] BYREF

  v22[0] = 2752552LL;
  v24[0] = 2621478LL;
  Handle = 0LL;
  *(_QWORD *)&v30 = 0LL;
  DWORD2(v30) = 0;
  v18 = 0LL;
  v22[1] = L"LdrpResMapFile Enter";
  v21 = 0LL;
  v24[1] = L"LdrpResMapFile Exit";
  v23 = 0LL;
  v25 = 0LL;
  v28 = 0LL;
  v20 = 0LL;
  v29 = 0LL;
  v19 = 0LL;
  v26 = 0LL;
  v27 = 0LL;
  v31 = 0LL;
  v8 = 2147353477LL;
  if ( (unsigned int)RtlGetCurrentServiceSessionId() )
    v9 = (__int64)NtCurrentPeb()->SharedData + 555;
  else
    v9 = 2147353477LL;
  v10 = 2147353476LL;
  if ( (*(_BYTE *)v9 & 1) != 0 )
  {
    if ( (unsigned int)RtlGetCurrentServiceSessionId() )
      v14 = (__int64)NtCurrentPeb()->SharedData + 554;
    else
      v14 = 2147353476LL;
    LdrpTraceLoadMUIDll((unsigned __int16 *)v22, *(unsigned __int8 *)v14);
  }
  if ( !String2 || !a2 || !a3 )
    goto LABEL_30;
  v11 = a4;
  *a2 = 0LL;
  LODWORD(v11) = a4 | 0x200000;
  if ( (int)LdrRemoveLoadAsDataTable(String2, a2, a3, v11) >= 0 )
  {
    v12 = -1073741302;
    goto LABEL_17;
  }
  if ( (a4 & 0x400) != 0 )
  {
    if ( !RtlDosPathNameToRelativeNtPathName_U(String2, (unsigned __int16 *)&v23, 0LL, (__int64)&v26) )
    {
      v12 = -1073020927;
      goto LABEL_17;
    }
    v15 = *((_QWORD *)&v23 + 1);
    if ( (_WORD)v26 )
    {
      v16 = v27;
      v23 = v26;
    }
    else
    {
      v16 = 0LL;
      *(_QWORD *)&v27 = 0LL;
    }
    *((_QWORD *)&v28 + 1) = v16 & -(__int64)(v15 != 0);
    LODWORD(v28) = 48;
    DWORD2(v29) = 64;
    *(_QWORD *)&v29 = &v23;
    v30 = 0LL;
    v12 = ZwCreateFile(&Handle, 2148532352LL, &v28, &v31, 0LL, 0, 5, 1, 0, 0LL, 0);
    if ( v15 )
    {
      RtlReleaseRelativeName((__int64)&v26);
      RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v15, v17);
    }
    if ( v12 < 0 )
      goto LABEL_17;
    String2 = (wchar_t *)Handle;
    goto LABEL_11;
  }
  if ( (a4 & 0x800) == 0 )
  {
LABEL_30:
    v12 = -1073741811;
    goto LABEL_17;
  }
  Handle = String2;
LABEL_11:
  if ( (a4 & 0x20000) == 0 )
    goto LABEL_12;
  result = LdrpResFileSize((__int64)String2, &v19);
  if ( (int)result < 0 )
    return result;
  if ( (unsigned __int64)(unsigned int)v19 > *a3 )
  {
    v12 = -1073741793;
  }
  else
  {
LABEL_12:
    v12 = NtCreateSection(&v18, 983045LL, 0LL);
    if ( (~(_WORD)a4 & 0x800) != 0 )
      NtClose(Handle);
    if ( v12 >= 0 )
    {
      v12 = ZwMapViewOfSection(v18, -1LL, &v20, 0LL, 0LL, &v25, &v21, 1, 0, 2);
      NtClose(v18);
      if ( v12 >= 0 )
      {
        *a2 = (wchar_t *)(v20 | 1);
        *a3 = v21;
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
    LdrpTraceLoadMUIDll((unsigned __int16 *)v24, *(unsigned __int8 *)v10);
  }
  return (unsigned int)v12;
}
