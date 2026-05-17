/*
 * XREFs of LdrpMapResourceFile @ 0x1800A2100
 * Callers:
 *     LdrLoadAlternateResourceModuleEx @ 0x18001BB80 (LdrLoadAlternateResourceModuleEx.c)
 * Callees:
 *     RtlImageNtHeaderEx @ 0x180014D30 (RtlImageNtHeaderEx.c)
 *     RtlpDosPathNameToRelativeNtPathName @ 0x1800158A0 (RtlpDosPathNameToRelativeNtPathName.c)
 *     RtlFreeHeap @ 0x180080DD0 (RtlFreeHeap.c)
 *     RtlReleaseRelativeName @ 0x1800A2FC0 (RtlReleaseRelativeName.c)
 *     wcslen @ 0x1801292B0 (wcslen.c)
 *     NtClose @ 0x180163400 (NtClose.c)
 *     ZwMapViewOfSection @ 0x180163720 (ZwMapViewOfSection.c)
 *     NtUnmapViewOfSection @ 0x180163760 (NtUnmapViewOfSection.c)
 *     NtOpenFile @ 0x180163880 (NtOpenFile.c)
 *     NtCreateSection @ 0x180163B60 (NtCreateSection.c)
 */

__int64 __fastcall LdrpMapResourceFile(__int64 a1, __int128 *a2, char a3, HANDLE *a4, _QWORD *a5, _QWORD *a6)
{
  _QWORD *v9; // rsi
  int v10; // edi
  const wchar_t *v11; // rcx
  size_t v12; // rax
  int v13; // ebx
  __int64 v15; // r14
  void *v16; // rax
  __int64 v17; // r9
  _QWORD *v18; // rcx
  __int128 v19; // xmm0
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp-69h] BYREF
  HANDLE v21; // [rsp+60h] [rbp-59h] BYREF
  unsigned __int64 v22; // [rsp+68h] [rbp-51h] BYREF
  __int64 v23; // [rsp+70h] [rbp-49h] BYREF
  __int128 v24; // [rsp+78h] [rbp-41h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+88h] [rbp-31h] BYREF
  __int64 v26; // [rsp+B8h] [rbp-1h] BYREF
  __int128 v27; // [rsp+C0h] [rbp+7h] BYREF
  __int128 v28; // [rsp+D0h] [rbp+17h]
  HANDLE Handle; // [rsp+110h] [rbp+57h] BYREF

  v26 = 0LL;
  Handle = 0LL;
  v21 = 0LL;
  v22 = 0LL;
  v23 = 0LL;
  memset(&ObjectAttributes, 0, 44);
  v24 = 0LL;
  v27 = 0LL;
  v28 = 0LL;
  if ( a1 )
  {
    if ( a2 )
    {
      v9 = a5;
      if ( a5 )
      {
        IoStatusBlock.Pointer = 0LL;
        RtlImageNtHeaderEx(1, a1 & 0xFFFFFFFFFFFFFFFCuLL, 0LL, &IoStatusBlock);
        if ( !IoStatusBlock.Pointer )
        {
LABEL_40:
          v13 = -1073741701;
          goto LABEL_12;
        }
        v10 = 2;
        if ( *((_WORD *)IoStatusBlock.Pointer + 36) < 6u )
          v10 = 8;
        if ( a3 )
        {
          v19 = *a2;
          v15 = 0LL;
          ObjectAttributes.Length = 48;
          v24 = v19;
        }
        else
        {
          v11 = (const wchar_t *)*((_QWORD *)a2 + 1);
          IoStatusBlock.Pointer = 0LL;
          IoStatusBlock.Information = (unsigned __int64)v11;
          if ( v11 )
          {
            v12 = wcslen(v11);
            if ( v12 > 0x7FFE )
            {
              v13 = -1073741562;
              goto LABEL_12;
            }
            LOWORD(IoStatusBlock.Status) = 2 * v12;
            WORD1(IoStatusBlock.Pointer) = 2 * v12 + 2;
          }
          v13 = RtlpDosPathNameToRelativeNtPathName(
                  2,
                  (unsigned __int16 *)&IoStatusBlock,
                  0LL,
                  (unsigned __int16 *)&v24,
                  0LL,
                  0LL,
                  (__int64)&v27);
          if ( v13 < 0 )
          {
LABEL_12:
            if ( Handle )
            {
              NtClose(Handle);
              Handle = 0LL;
            }
            if ( v22 )
              NtUnmapViewOfSection(-1LL);
            return (unsigned int)v13;
          }
          v15 = *((_QWORD *)&v24 + 1);
          if ( (_WORD)v27 )
          {
            v16 = (void *)v28;
            v24 = v27;
          }
          else
          {
            v16 = 0LL;
            *(_QWORD *)&v28 = 0LL;
          }
          ObjectAttributes.Length = 48;
          if ( v15 )
          {
            ObjectAttributes.RootDirectory = v16;
LABEL_21:
            ObjectAttributes.Attributes = 64;
            ObjectAttributes.ObjectName = (PUNICODE_STRING)&v24;
            *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
            IoStatusBlock = 0LL;
            v13 = NtOpenFile(&Handle, 0x100001u, &ObjectAttributes, &IoStatusBlock, 5u, 0x60u);
            if ( v15 )
            {
              RtlReleaseRelativeName(&v27);
              RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v15, v17);
            }
            if ( v13 < 0 )
              goto LABEL_12;
            v13 = NtCreateSection(&v21, 983045LL, 0LL);
            if ( v13 < 0 )
              goto LABEL_12;
            v13 = ZwMapViewOfSection(v21, -1LL, &v22, 0LL, 0LL, &v26, &v23, 1, 0, v10);
            if ( v21 )
            {
              NtClose(v21);
              v21 = 0LL;
            }
            if ( v13 < 0 )
              goto LABEL_12;
            IoStatusBlock.Pointer = 0LL;
            RtlImageNtHeaderEx(1, v22, 0LL, &IoStatusBlock);
            if ( IoStatusBlock.Pointer )
            {
              v18 = a6;
              *v9 = v22;
              if ( v18 )
                *v18 = v23;
              if ( a4 )
              {
                *a4 = Handle;
              }
              else if ( Handle )
              {
                NtClose(Handle);
              }
              return (unsigned int)v13;
            }
            goto LABEL_40;
          }
        }
        ObjectAttributes.RootDirectory = 0LL;
        goto LABEL_21;
      }
    }
  }
  return 3221225485LL;
}
