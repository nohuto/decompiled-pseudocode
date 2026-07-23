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

__int64 __fastcall LdrpMapResourceFile(__int64 a1, __int128 *a2, char a3, HANDLE *a4, PVOID *a5, ULONG_PTR *a6)
{
  PVOID *v9; // rsi
  ULONG Win32Protect; // edi
  _IMAGE_NT_HEADERS64 *v11; // rcx
  size_t v12; // rax
  int v13; // ebx
  PVOID v15; // r14
  HANDLE ContainingDirectory; // rax
  ULONG_PTR *v17; // rcx
  __int128 v18; // xmm0
  PIMAGE_NT_HEADERS OutHeaders[2]; // [rsp+50h] [rbp-69h] BYREF
  HANDLE SectionHandle; // [rsp+60h] [rbp-59h] BYREF
  PVOID BaseAddress; // [rsp+68h] [rbp-51h] BYREF
  ULONG_PTR ViewSize; // [rsp+70h] [rbp-49h] BYREF
  PVOID v23[2]; // [rsp+78h] [rbp-41h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+88h] [rbp-31h] BYREF
  LARGE_INTEGER SectionOffset; // [rsp+B8h] [rbp-1h] BYREF
  _RTL_RELATIVE_NAME_U RelativeName; // [rsp+C0h] [rbp+7h] BYREF
  HANDLE Handle; // [rsp+110h] [rbp+57h] BYREF

  SectionOffset.QuadPart = 0LL;
  Handle = 0LL;
  SectionHandle = 0LL;
  BaseAddress = 0LL;
  ViewSize = 0LL;
  memset(&ObjectAttributes, 0, 44);
  *(_OWORD *)v23 = 0LL;
  memset(&RelativeName, 0, sizeof(RelativeName));
  if ( a1 )
  {
    if ( a2 )
    {
      v9 = a5;
      if ( a5 )
      {
        OutHeaders[0] = 0LL;
        RtlImageNtHeaderEx(1u, (PVOID)(a1 & 0xFFFFFFFFFFFFFFFCuLL), 0LL, OutHeaders);
        if ( !OutHeaders[0] )
        {
LABEL_40:
          v13 = -1073741701;
          goto LABEL_12;
        }
        Win32Protect = 2;
        if ( OutHeaders[0]->OptionalHeader.MajorSubsystemVersion < 6u )
          Win32Protect = 8;
        if ( a3 )
        {
          v18 = *a2;
          v15 = 0LL;
          ObjectAttributes.Length = 48;
          *(_OWORD *)v23 = v18;
        }
        else
        {
          v11 = (_IMAGE_NT_HEADERS64 *)*((_QWORD *)a2 + 1);
          OutHeaders[0] = 0LL;
          OutHeaders[1] = v11;
          if ( v11 )
          {
            v12 = wcslen((const wchar_t *)v11);
            if ( v12 > 0x7FFE )
            {
              v13 = -1073741562;
              goto LABEL_12;
            }
            LOWORD(OutHeaders[0]) = 2 * v12;
            WORD1(OutHeaders[0]) = 2 * v12 + 2;
          }
          v13 = RtlpDosPathNameToRelativeNtPathName(
                  2,
                  (unsigned __int16 *)OutHeaders,
                  0LL,
                  (unsigned __int16 *)v23,
                  0LL,
                  0LL,
                  (__int64)&RelativeName);
          if ( v13 < 0 )
          {
LABEL_12:
            if ( Handle )
            {
              NtClose(Handle);
              Handle = 0LL;
            }
            if ( BaseAddress )
              NtUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, BaseAddress);
            return (unsigned int)v13;
          }
          v15 = v23[1];
          if ( RelativeName.RelativeName.Length )
          {
            ContainingDirectory = RelativeName.ContainingDirectory;
            *(UNICODE_STRING *)v23 = RelativeName.RelativeName;
          }
          else
          {
            ContainingDirectory = 0LL;
            RelativeName.ContainingDirectory = 0LL;
          }
          ObjectAttributes.Length = 48;
          if ( v15 )
          {
            ObjectAttributes.RootDirectory = ContainingDirectory;
LABEL_21:
            ObjectAttributes.Attributes = 64;
            ObjectAttributes.ObjectName = (PUNICODE_STRING)v23;
            *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
            *(_OWORD *)OutHeaders = 0LL;
            v13 = NtOpenFile(&Handle, 0x100001u, &ObjectAttributes, (PIO_STATUS_BLOCK)OutHeaders, 5u, 0x60u);
            if ( v15 )
            {
              RtlReleaseRelativeName(&RelativeName);
              RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v15);
            }
            if ( v13 < 0 )
              goto LABEL_12;
            v13 = NtCreateSection(&SectionHandle, 0xF0005u, 0LL, 0LL, Win32Protect, 0x8000000u, Handle);
            if ( v13 < 0 )
              goto LABEL_12;
            v13 = ZwMapViewOfSection(
                    SectionHandle,
                    (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                    &BaseAddress,
                    0LL,
                    0LL,
                    &SectionOffset,
                    &ViewSize,
                    ViewShare,
                    0,
                    Win32Protect);
            if ( SectionHandle )
            {
              NtClose(SectionHandle);
              SectionHandle = 0LL;
            }
            if ( v13 < 0 )
              goto LABEL_12;
            OutHeaders[0] = 0LL;
            RtlImageNtHeaderEx(1u, BaseAddress, 0LL, OutHeaders);
            if ( OutHeaders[0] )
            {
              v17 = a6;
              *v9 = BaseAddress;
              if ( v17 )
                *v17 = ViewSize;
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
