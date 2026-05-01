/*
 * XREFs of AslpFileGetVersionBlockImageOnly @ 0x1800A224C
 * Callers:
 *     AslpFileGetVersionAttributes @ 0x1800A18AC (AslpFileGetVersionAttributes.c)
 * Callees:
 *     AslLogCallPrintf @ 0x1800717F0 (AslLogCallPrintf.c)
 *     AslFree @ 0x18009D6FC (AslFree.c)
 *     AslFileMappingEnsure @ 0x18009EE00 (AslFileMappingEnsure.c)
 *     AslpFileGetImageResourceDirectoryRoot @ 0x1800A1484 (AslpFileGetImageResourceDirectoryRoot.c)
 *     AslpFileGetVersionBlockFromResourceRoot @ 0x1800A1FE0 (AslpFileGetVersionBlockFromResourceRoot.c)
 *     AslpMemoryCheckBounds @ 0x1800A3724 (AslpMemoryCheckBounds.c)
 *     memmove_0 @ 0x1800A780E (memmove_0.c)
 */

__int64 __fastcall AslpFileGetVersionBlockImageOnly(_QWORD *a1, unsigned __int16 **a2, __int64 a3, __int64 a4)
{
  __int64 v7; // r8
  unsigned __int16 *v8; // rcx
  unsigned int v9; // ebx
  int ImageResourceDirectoryRoot; // eax
  int VersionBlockFromResourceRoot; // eax
  SIZE_T v12; // rbx
  unsigned __int16 *Heap; // rax
  unsigned __int16 *v14; // rsi
  unsigned __int16 *v15; // rax
  __int64 v17; // [rsp+40h] [rbp-48h] BYREF
  PVOID ProcessHeap; // [rsp+48h] [rbp-40h]
  SIZE_T Size; // [rsp+A0h] [rbp+18h] BYREF
  void *Src; // [rsp+A8h] [rbp+20h] BYREF

  v17 = 0LL;
  Src = 0LL;
  Size = 0LL;
  v7 = *(_QWORD *)(a4 + 64);
  if ( v7 )
  {
    v8 = 0LL;
    if ( *(_WORD *)(v7 + 2) >= 0x34u )
      v8 = (unsigned __int16 *)(v7 + 40);
    *a2 = v8;
    *a1 = *(_QWORD *)(a4 + 64);
    return 0;
  }
  v9 = AslFileMappingEnsure(a4);
  if ( (v9 & 0x80000000) != 0 )
  {
    AslLogCallPrintf(1LL);
    return v9;
  }
  if ( *(_DWORD *)(a4 + 56) != 6 )
    return (unsigned int)-1073741687;
  ImageResourceDirectoryRoot = AslpFileGetImageResourceDirectoryRoot(&v17, 0LL, a4);
  v9 = ImageResourceDirectoryRoot;
  if ( ImageResourceDirectoryRoot < 0 )
  {
    if ( (unsigned int)(ImageResourceDirectoryRoot + 1073741687) <= 2 )
      return v9;
LABEL_11:
    AslLogCallPrintf(1LL);
    return v9;
  }
  VersionBlockFromResourceRoot = AslpFileGetVersionBlockFromResourceRoot(&Src, &Size, v17, a4);
  v9 = VersionBlockFromResourceRoot;
  if ( VersionBlockFromResourceRoot < 0 )
  {
    if ( (unsigned int)(VersionBlockFromResourceRoot + 1073741687) <= 2 )
      return v9;
    goto LABEL_11;
  }
  if ( !Size )
    return (unsigned int)-1073741687;
  if ( !Src
    || Size > 0x7FFF
    || !(unsigned __int8)AslpMemoryCheckBounds(Src, Size, *(_QWORD *)(a4 + 32), *(_QWORD *)(a4 + 40)) )
  {
    AslLogCallPrintf(1LL);
    return (unsigned int)-1073741687;
  }
  ProcessHeap = NtCurrentPeb()->ProcessHeap;
  v12 = Size;
  Heap = (unsigned __int16 *)RtlAllocateHeap(ProcessHeap, 8u, Size);
  v14 = Heap;
  if ( Heap )
  {
    memmove_0(Heap, Src, v12);
    if ( v12 < *v14 )
      *v14 = v12;
    v15 = v14 + 20;
    if ( v14[1] < 0x34u )
      v15 = 0LL;
    *a2 = v15;
    *a1 = v14;
    *(_QWORD *)(a4 + 64) = v14;
    return 0;
  }
  else
  {
    return (unsigned int)-1073741801;
  }
}
