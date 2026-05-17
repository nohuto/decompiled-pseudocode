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
  int v2; // edi
  unsigned __int64 v5; // rbp
  __int64 FileSizeFromLoadAsDataTable; // rbx
  __int16 v8; // cx
  __int128 v9; // [rsp+30h] [rbp-48h] BYREF
  __int128 v10; // [rsp+40h] [rbp-38h]
  __int128 v11; // [rsp+50h] [rbp-28h]
  __int64 v12; // [rsp+80h] [rbp+8h] BYREF

  v2 = 0;
  v12 = 0LL;
  v5 = a1 & 0xFFFFFFFFFFFFFFFCuLL;
  FileSizeFromLoadAsDataTable = 0LL;
  RtlImageNtHeaderEx(1, a1 & 0xFFFFFFFFFFFFFFFCuLL, 0LL, &v12);
  if ( !v12 )
    goto LABEL_10;
  if ( (a1 & 1) == 0 )
  {
    v8 = *(_WORD *)(v12 + 24);
    if ( v8 == 267 || v8 == 523 )
    {
      FileSizeFromLoadAsDataTable = *(unsigned int *)(v12 + 80);
      goto LABEL_6;
    }
LABEL_10:
    v2 = -1073741701;
    goto LABEL_6;
  }
  FileSizeFromLoadAsDataTable = LdrpGetFileSizeFromLoadAsDataTable(a1);
  if ( !FileSizeFromLoadAsDataTable )
  {
    v9 = 0LL;
    v10 = 0LL;
    v11 = 0LL;
    v2 = ZwQueryVirtualMemory(-1LL, v5, 3LL, &v9, 48LL, 0LL);
    if ( v2 < 0 )
      v2 = -1073741793;
    else
      FileSizeFromLoadAsDataTable = v10;
  }
LABEL_6:
  *a2 = FileSizeFromLoadAsDataTable;
  return (unsigned int)v2;
}
