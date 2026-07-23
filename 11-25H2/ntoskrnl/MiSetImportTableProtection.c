/*
 * XREFs of MiSetImportTableProtection @ 0x140AA5BDC
 * Callers:
 *     MiResolveImageImports @ 0x1407D7898 (MiResolveImageImports.c)
 * Callees:
 *     MiSetImageProtection @ 0x1403F3430 (MiSetImageProtection.c)
 *     RtlImageDirectoryEntryToData @ 0x14040FE90 (RtlImageDirectoryEntryToData.c)
 *     MiLogStrongCodeDriverLoadFailure @ 0x140AA5D1C (MiLogStrongCodeDriverLoadFailure.c)
 */

__int64 __fastcall MiSetImportTableProtection(__int64 a1, __int64 a2)
{
  char *v2; // r14
  PVOID v5; // rax
  int v6; // edi
  unsigned int *v8; // rsi
  __int64 v9; // rax
  char *v10; // rax
  unsigned __int64 v11; // rdx
  int i; // edi
  ULONG Size; // [rsp+40h] [rbp+8h] BYREF
  ULONG v14; // [rsp+48h] [rbp+10h] BYREF

  Size = 0;
  v14 = 0;
  v2 = *(char **)(a1 + 48);
  *(_OWORD *)a2 = 0LL;
  *(_QWORD *)(a2 + 16) = 0LL;
  v5 = RtlImageDirectoryEntryToData(v2, 1u, 0xCu, &Size);
  *(_QWORD *)a2 = v5;
  if ( !v5 || (v6 = Size) == 0 )
  {
    *(_QWORD *)a2 = 0LL;
    v6 = 0;
    v8 = (unsigned int *)RtlImageDirectoryEntryToData(v2, 1u, 1u, &v14);
    *(_QWORD *)(a2 + 8) = v8;
    while ( v8 )
    {
      v9 = *v8;
      if ( !(_DWORD)v9 )
        break;
      v10 = &v2[v9];
      v11 = (unsigned __int64)&v2[v8[4]];
      for ( i = 0; *(_QWORD *)v10; ++i )
        v10 += 8;
      v6 = 8 * i;
      Size = v6;
      if ( !(unsigned int)MiSetImageProtection(a1, v11, v6) )
      {
        MiLogStrongCodeDriverLoadFailure("UnwritableImportDirectory");
        dword_140E2D4B8 = 193;
        return 3221225595LL;
      }
      ++*(_DWORD *)(a2 + 16);
      v8 += 5;
    }
    goto LABEL_7;
  }
  if ( (unsigned int)MiSetImageProtection(a1, (unsigned __int64)v5, Size) )
  {
    *(_DWORD *)(a2 + 16) = 1;
LABEL_7:
    *(_DWORD *)(a2 + 20) = v6;
    return 0LL;
  }
  MiLogStrongCodeDriverLoadFailure("UnwritableIAT");
  dword_140E2D4B8 = 192;
  return 3221225595LL;
}
