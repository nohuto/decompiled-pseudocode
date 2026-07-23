/*
 * XREFs of BiTranslateSymbolicLinkFile @ 0x140814AA8
 * Callers:
 *     BiGetPartitionVhdFilePathFromUnicodeString @ 0x140A816E8 (BiGetPartitionVhdFilePathFromUnicodeString.c)
 * Callees:
 *     wcsrchr @ 0x1404FDA40 (wcsrchr.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     BiTranslateSymbolicLink @ 0x140A7EA6C (BiTranslateSymbolicLink.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall BiTranslateSymbolicLinkFile(wchar_t *P, wchar_t **a2)
{
  wchar_t *v4; // rbp
  wchar_t *v5; // rsi
  char v6; // r15
  wchar_t *v7; // rax
  wchar_t *v8; // rbx
  __int64 v9; // rax
  __int64 v10; // rsi
  size_t v11; // rsi
  wchar_t *Pool2; // rax
  wchar_t *v13; // r13
  unsigned int Size; // [rsp+60h] [rbp+8h]

  if ( P && a2 )
  {
    *a2 = 0LL;
    v4 = P;
    v5 = 0LL;
    v6 = 0;
    while ( 1 )
    {
      v7 = wcsrchr(v4, 0x5Cu);
      v8 = v7;
      if ( v5 )
        *v5 = 92;
      if ( !v7 )
        break;
      *v7 = 0;
      if ( (int)BiTranslateSymbolicLink(v4) >= 0 )
      {
        v9 = -1LL;
        *v8 = 92;
        v10 = -1LL;
        v6 = 1;
        do
          ++v10;
        while ( *(_WORD *)(2 * v10) );
        v11 = (unsigned int)(2 * v10);
        do
          ++v9;
        while ( v8[v9] );
        Size = 2 * v9 + 2;
        Pool2 = (wchar_t *)ExAllocatePool2(0x102uLL, (unsigned int)v11 + Size, 0x4B444342u);
        *a2 = Pool2;
        v13 = Pool2;
        if ( !Pool2 )
          return (unsigned int)-1073741801;
        memmove(Pool2, 0LL, v11);
        memmove((char *)v13 + v11, v8, Size);
        if ( v4 != P )
          ExFreePoolWithTag(v4, 0x4B444342u);
        v4 = *a2;
        v8 = (wchar_t *)((char *)*a2 + v11);
        *v8 = 0;
      }
      v5 = v8;
    }
    return v6 == 0 ? 0xC0000001 : 0;
  }
  else
  {
    return (unsigned int)-1073741811;
  }
}
