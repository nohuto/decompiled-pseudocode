/*
 * XREFs of MiRestoreImportTableProtection @ 0x1407E7DD8
 * Callers:
 *     MiResolveImageImports @ 0x1407E7D20 (MiResolveImageImports.c)
 * Callees:
 *     MiSectionControlArea @ 0x140355A80 (MiSectionControlArea.c)
 *     MiSetImageProtection @ 0x14042896C (MiSetImageProtection.c)
 */

__int64 __fastcall MiRestoreImportTableProtection(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  unsigned int *v5; // rbx
  __int64 i; // rsi
  _QWORD *v7; // rax
  int j; // r8d

  result = MiSectionControlArea(*(_QWORD *)(a1 + 112));
  if ( *(_QWORD *)(result + 144) )
  {
    if ( *(_QWORD *)a2 )
    {
      return MiSetImageProtection(a1, *(_QWORD *)a2, *(_DWORD *)(a2 + 20));
    }
    else
    {
      v5 = *(unsigned int **)(a2 + 8);
      for ( i = *(_QWORD *)(a1 + 48); v5; v5 += 5 )
      {
        result = *v5;
        if ( !(_DWORD)result )
          break;
        v7 = (_QWORD *)(i + result);
        for ( j = 0; *v7; ++j )
          ++v7;
        result = MiSetImageProtection(a1, i + v5[4], 8 * j);
      }
    }
  }
  return result;
}
