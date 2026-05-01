/*
 * XREFs of AslpFileLargeMapCreate @ 0x1800A7360
 * Callers:
 *     AslpFileLargeEnsureLargeFileMapping @ 0x1800A6E20 (AslpFileLargeEnsureLargeFileMapping.c)
 * Callees:
 *     AslLogCallPrintf @ 0x1800717F0 (AslLogCallPrintf.c)
 *     AslpFileLargeMapDelete @ 0x1800A7588 (AslpFileLargeMapDelete.c)
 */

__int64 __fastcall AslpFileLargeMapCreate(_QWORD *a1, __int64 a2)
{
  char *Heap; // rax
  char *v4; // rbx
  NTSTATUS v5; // edi
  void **v6; // rcx
  void *FileHandle; // rax
  unsigned __int64 v8; // rsi
  NTSTATUS v9; // eax
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-30h] BYREF
  char *v13; // [rsp+D0h] [rbp+50h] BYREF

  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  Heap = (char *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 0x40uLL);
  v13 = Heap;
  v4 = Heap;
  if ( Heap )
  {
    memset(&ObjectAttributes.RootDirectory, 0, 20);
    v6 = (void **)(Heap + 8);
    FileHandle = *(void **)a2;
    ObjectAttributes.Length = 48;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v5 = ZwCreateSection(v6, 0xF0005u, &ObjectAttributes, 0LL, 2u, 0x8000000u, FileHandle);
    if ( v5 < 0 )
      goto LABEL_4;
    *((_QWORD *)v4 + 7) = *(_QWORD *)(a2 + 16) - 4096LL - (unsigned __int16)(*(_QWORD *)(a2 + 16) - 4096);
    v5 = ZwMapViewOfSection(
           *((HANDLE *)v4 + 1),
           (HANDLE)0xFFFFFFFFFFFFFFFFLL,
           (PVOID *)v4 + 5,
           0LL,
           0LL,
           (PLARGE_INTEGER)v4 + 7,
           (PSIZE_T)v4 + 6,
           ViewUnmap,
           0x500000u,
           2u);
    if ( v5 < 0 )
      goto LABEL_4;
    v8 = *(_QWORD *)(a2 + 16);
    if ( v8 > 0x20000000 )
      v8 = 0x20000000LL;
    do
    {
      *((_QWORD *)v4 + 3) = v8;
      *((_QWORD *)v4 + 4) = 0LL;
      v9 = ZwMapViewOfSection(
             *((HANDLE *)v4 + 1),
             (HANDLE)0xFFFFFFFFFFFFFFFFLL,
             (PVOID *)v4 + 2,
             0LL,
             0LL,
             (PLARGE_INTEGER)v4 + 4,
             (PSIZE_T)v4 + 3,
             ViewUnmap,
             0x500000u,
             2u);
      v8 >>= 1;
      v5 = v9;
    }
    while ( v9 == -1073741801 && v8 >= 0x100000 );
    if ( v9 < 0 )
    {
LABEL_4:
      AslLogCallPrintf(1LL);
    }
    else
    {
      *(_QWORD *)v4 = a2;
      *a1 = v4;
      v4 = 0LL;
      v13 = 0LL;
      v5 = 0;
    }
  }
  else
  {
    v5 = -1073741801;
  }
  if ( v4 )
    AslpFileLargeMapDelete(&v13);
  return (unsigned int)v5;
}
