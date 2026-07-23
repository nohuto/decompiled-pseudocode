/*
 * XREFs of AslpFileLargeMapCreate @ 0x140810B50
 * Callers:
 *     AslpFileLargeEnsureLargeFileMapping @ 0x140810600 (AslpFileLargeEnsureLargeFileMapping.c)
 * Callees:
 *     ZwMapViewOfSection @ 0x1406A78B0 (ZwMapViewOfSection.c)
 *     ZwCreateSection @ 0x1406A7CF0 (ZwCreateSection.c)
 *     AslpFileLargeMapDelete @ 0x140810DB8 (AslpFileLargeMapDelete.c)
 *     AslAlloc @ 0x140944EA4 (AslAlloc.c)
 *     AslLogCallPrintf @ 0x140947C9C (AslLogCallPrintf.c)
 *     MmSecureVirtualMemory @ 0x1409E5050 (MmSecureVirtualMemory.c)
 */

__int64 __fastcall AslpFileLargeMapCreate(__int64 *a1, __int64 a2)
{
  __int64 v3; // rax
  __int64 v4; // rbx
  NTSTATUS v5; // edi
  HANDLE *v6; // rcx
  void *FileHandle; // rax
  const char *v8; // r9
  int v9; // r8d
  HANDLE v10; // rax
  const char *v11; // r9
  int v12; // r8d
  unsigned __int64 v13; // rsi
  SIZE_T *v14; // r15
  NTSTATUS v15; // eax
  HANDLE v16; // rax
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-30h] BYREF
  __int64 v20; // [rsp+D0h] [rbp+50h] BYREF

  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  v3 = AslAlloc(a1, 80LL);
  v20 = v3;
  v4 = v3;
  if ( !v3 )
  {
    v5 = -1073741801;
    goto LABEL_20;
  }
  ObjectAttributes.RootDirectory = 0LL;
  v6 = (HANDLE *)(v3 + 8);
  FileHandle = *(void **)a2;
  ObjectAttributes.ObjectName = 0LL;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 512;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v5 = ZwCreateSection(v6, 0xF0005u, &ObjectAttributes, 0LL, 2u, 0x8000000u, FileHandle);
  if ( v5 < 0 )
  {
    v8 = "ZwCreateSection failed [%x]";
    v9 = 346;
LABEL_5:
    AslLogCallPrintf(1, (unsigned int)"AslpFileLargeMapCreate", v9, (_DWORD)v8);
    goto LABEL_20;
  }
  *(_QWORD *)(v4 + 64) = *(_QWORD *)(a2 + 16) - 4096LL - (unsigned __int16)(*(_QWORD *)(a2 + 16) - 4096);
  v5 = ZwMapViewOfSection(
         *(HANDLE *)(v4 + 8),
         (HANDLE)0xFFFFFFFFFFFFFFFFLL,
         (PVOID *)(v4 + 48),
         0LL,
         0LL,
         (PLARGE_INTEGER)(v4 + 64),
         (PSIZE_T)(v4 + 56),
         ViewUnmap,
         0x500000u,
         2u);
  if ( v5 < 0 )
  {
    v8 = "ZwMapViewOfSection failed to map the end of the file [%x]";
    v9 = 374;
    goto LABEL_5;
  }
  v10 = MmSecureVirtualMemory(*(PVOID *)(v4 + 48), *(_QWORD *)(v4 + 56), 2u);
  *(_QWORD *)(v4 + 72) = v10;
  if ( !v10 )
  {
    v11 = "MmSecureVirtualMemory failed to secure the end view";
    v12 = 381;
LABEL_10:
    AslLogCallPrintf(1, (unsigned int)"AslpFileLargeMapCreate", v12, (_DWORD)v11);
    v5 = -1073741823;
    goto LABEL_20;
  }
  v13 = *(_QWORD *)(a2 + 16);
  v14 = (SIZE_T *)(v4 + 24);
  if ( v13 > 0x20000000 )
    v13 = 0x20000000LL;
  do
  {
    *v14 = v13;
    *(_QWORD *)(v4 + 32) = 0LL;
    v15 = ZwMapViewOfSection(
            *(HANDLE *)(v4 + 8),
            (HANDLE)0xFFFFFFFFFFFFFFFFLL,
            (PVOID *)(v4 + 16),
            0LL,
            0LL,
            (PLARGE_INTEGER)(v4 + 32),
            (PSIZE_T)(v4 + 24),
            ViewUnmap,
            0x500000u,
            2u);
    v13 >>= 1;
    v5 = v15;
  }
  while ( v15 == -1073741801 && v13 >= 0x100000 );
  if ( v15 < 0 )
  {
    v8 = "ZwMapViewOfSection failed to map the start of the file [%x]";
    v9 = 416;
    goto LABEL_5;
  }
  v16 = MmSecureVirtualMemory(*(PVOID *)(v4 + 16), *v14, 2u);
  *(_QWORD *)(v4 + 40) = v16;
  if ( !v16 )
  {
    v11 = "MmSecureVirtualMemory failed to secure the start view";
    v12 = 423;
    goto LABEL_10;
  }
  *(_QWORD *)v4 = a2;
  *a1 = v4;
  v4 = 0LL;
  v20 = 0LL;
  v5 = 0;
LABEL_20:
  if ( v4 )
    AslpFileLargeMapDelete(&v20);
  return (unsigned int)v5;
}
