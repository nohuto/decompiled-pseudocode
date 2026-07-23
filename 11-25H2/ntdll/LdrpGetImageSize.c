/*
 * XREFs of LdrpGetImageSize @ 0x18001F3C0
 * Callers:
 *     LdrpAccessResourceData @ 0x18001D9D0 (LdrpAccessResourceData.c)
 * Callees:
 *     RtlImageNtHeaderEx @ 0x180014D30 (RtlImageNtHeaderEx.c)
 *     LdrpGetFileSizeFromLoadAsDataTable @ 0x18001FBF0 (LdrpGetFileSizeFromLoadAsDataTable.c)
 *     ZwQueryVirtualMemory @ 0x180163680 (ZwQueryVirtualMemory.c)
 */

__int64 __fastcall LdrpGetImageSize(__int64 a1, __int64 *a2)
{
  NTSTATUS v2; // edi
  void *v5; // rbp
  __int64 SizeOfImage; // rbx
  unsigned __int16 Magic; // cx
  __int128 MemoryInformation; // [rsp+30h] [rbp-48h] BYREF
  __int128 v10; // [rsp+40h] [rbp-38h]
  __int128 v11; // [rsp+50h] [rbp-28h]
  PIMAGE_NT_HEADERS v12; // [rsp+80h] [rbp+8h] BYREF

  v2 = 0;
  v12 = 0LL;
  v5 = (void *)(a1 & 0xFFFFFFFFFFFFFFFCuLL);
  SizeOfImage = 0LL;
  RtlImageNtHeaderEx(1u, (PVOID)(a1 & 0xFFFFFFFFFFFFFFFCuLL), 0LL, &v12);
  if ( !v12 )
    goto LABEL_10;
  if ( (a1 & 1) == 0 )
  {
    Magic = v12->OptionalHeader.Magic;
    if ( Magic == 267 || Magic == 523 )
    {
      SizeOfImage = v12->OptionalHeader.SizeOfImage;
      goto LABEL_6;
    }
LABEL_10:
    v2 = -1073741701;
    goto LABEL_6;
  }
  SizeOfImage = LdrpGetFileSizeFromLoadAsDataTable(a1);
  if ( !SizeOfImage )
  {
    MemoryInformation = 0LL;
    v10 = 0LL;
    v11 = 0LL;
    v2 = ZwQueryVirtualMemory(
           (HANDLE)0xFFFFFFFFFFFFFFFFLL,
           v5,
           MemoryRegionInformation,
           &MemoryInformation,
           0x30uLL,
           0LL);
    if ( v2 < 0 )
      v2 = -1073741793;
    else
      SizeOfImage = v10;
  }
LABEL_6:
  *a2 = SizeOfImage;
  return (unsigned int)v2;
}
