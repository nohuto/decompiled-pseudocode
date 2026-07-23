/*
 * XREFs of BiGetFilePathFromEfiPath @ 0x140A72ACC
 * Callers:
 *     BiUpdateBcdObject @ 0x140815EFC (BiUpdateBcdObject.c)
 *     BiCreateMergedBootEntry @ 0x1409A7CDC (BiCreateMergedBootEntry.c)
 * Callees:
 *     RtlULongSub @ 0x140491DA8 (RtlULongSub.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 */

NTSTATUS __fastcall BiGetFilePathFromEfiPath(__int64 a1, __int64 *a2, unsigned int *a3)
{
  char v3; // al
  NTSTATUS result; // eax
  int v8; // esi
  __int64 i; // r10
  unsigned int v10; // esi
  __int64 Pool2; // rax
  __int64 v12; // rbp
  _WORD *v13; // r14
  __int64 j; // rdi
  unsigned int v15; // ebx
  ULONG pulResult; // [rsp+50h] [rbp+8h] BYREF

  v3 = *(_BYTE *)a1 & 0x7F;
  pulResult = 0;
  if ( v3 == 127 )
    return -1073741766;
  v8 = 0;
  for ( i = a1 + *(unsigned __int16 *)(a1 + 2); (*(_BYTE *)i & 0x7F) != 0x7F; i += *(unsigned __int16 *)(i + 2) )
  {
    if ( *(_BYTE *)i == 4 && *(_BYTE *)(i + 1) == 4 )
    {
      result = RtlULongSub(*(unsigned __int16 *)(i + 2), 4u, &pulResult);
      if ( result < 0 )
        return result;
      v8 += pulResult;
    }
  }
  if ( !v8 )
    return -1073741275;
  v10 = v8 + 2;
  Pool2 = ExAllocatePool2(0x102uLL, v10, 0x4B444342u);
  v12 = Pool2;
  if ( !Pool2 )
    return -1073741670;
  v13 = (_WORD *)Pool2;
  for ( j = a1 + *(unsigned __int16 *)(a1 + 2); (*(_BYTE *)j & 0x7F) != 0x7F; j += *(unsigned __int16 *)(j + 2) )
  {
    if ( *(_BYTE *)j == 4 && *(_BYTE *)(j + 1) == 4 )
    {
      v15 = *(unsigned __int16 *)(j + 2) - 4;
      memmove(v13, (const void *)(j + 4), v15);
      v13 = (_WORD *)((char *)v13 + v15);
    }
  }
  result = 0;
  *a2 = v12;
  *v13 = 0;
  *a3 = v10;
  return result;
}
