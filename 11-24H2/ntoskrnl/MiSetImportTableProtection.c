/*
 * XREFs of MiSetImportTableProtection @ 0x140AAB19C
 * Callers:
 *     MiResolveImageImports @ 0x1407E7750 (MiResolveImageImports.c)
 * Callees:
 *     RtlImageDirectoryEntryToData @ 0x14042CAF0 (RtlImageDirectoryEntryToData.c)
 *     MiSetImageProtection @ 0x140435EEC (MiSetImageProtection.c)
 *     MiLogStrongCodeDriverLoadFailure @ 0x140AAB2DC (MiLogStrongCodeDriverLoadFailure.c)
 */

__int64 __fastcall MiSetImportTableProtection(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // r14
  unsigned __int64 v5; // rax
  int v6; // edi
  unsigned int *v8; // rsi
  __int64 v9; // rax
  _QWORD *v10; // rax
  unsigned __int64 v11; // rdx
  int i; // edi
  int v13; // [rsp+40h] [rbp+8h] BYREF
  int v14; // [rsp+48h] [rbp+10h] BYREF

  v13 = 0;
  v14 = 0;
  v2 = *(_QWORD *)(a1 + 48);
  *(_OWORD *)a2 = 0LL;
  *(_QWORD *)(a2 + 16) = 0LL;
  v5 = RtlImageDirectoryEntryToData(v2, 1, 0xCu, &v13);
  *(_QWORD *)a2 = v5;
  if ( !v5 || (v6 = v13) == 0 )
  {
    *(_QWORD *)a2 = 0LL;
    v6 = 0;
    v8 = (unsigned int *)RtlImageDirectoryEntryToData(v2, 1, 1u, &v14);
    *(_QWORD *)(a2 + 8) = v8;
    while ( v8 )
    {
      v9 = *v8;
      if ( !(_DWORD)v9 )
        break;
      v10 = (_QWORD *)(v2 + v9);
      v11 = v2 + v8[4];
      for ( i = 0; *v10; ++i )
        ++v10;
      v6 = 8 * i;
      v13 = v6;
      if ( !(unsigned int)MiSetImageProtection(a1, v11, v6) )
      {
        MiLogStrongCodeDriverLoadFailure("UnwritableImportDirectory");
        dword_140E2D6F8 = 193;
        return 3221225595LL;
      }
      ++*(_DWORD *)(a2 + 16);
      v8 += 5;
    }
    goto LABEL_7;
  }
  if ( (unsigned int)MiSetImageProtection(a1, v5, v13) )
  {
    *(_DWORD *)(a2 + 16) = 1;
LABEL_7:
    *(_DWORD *)(a2 + 20) = v6;
    return 0LL;
  }
  MiLogStrongCodeDriverLoadFailure("UnwritableIAT");
  dword_140E2D6F8 = 192;
  return 3221225595LL;
}
