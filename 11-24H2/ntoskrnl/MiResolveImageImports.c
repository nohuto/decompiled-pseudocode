/*
 * XREFs of MiResolveImageImports @ 0x1407E7D20
 * Callers:
 *     MmLoadSystemImageEx @ 0x1409B7B70 (MmLoadSystemImageEx.c)
 * Callees:
 *     MiRestoreImportTableProtection @ 0x1407E7DD8 (MiRestoreImportTableProtection.c)
 *     MiResolveImageReferences @ 0x140A10E04 (MiResolveImageReferences.c)
 *     MiSetImportTableProtection @ 0x140AA63CC (MiSetImportTableProtection.c)
 */

__int64 __fastcall MiResolveImageImports(__int64 a1, int a2, int a3, int a4, int a5, _BYTE *a6)
{
  __int64 result; // rax
  int v11; // esi
  __int128 v12; // [rsp+30h] [rbp-28h] BYREF
  __int64 v13; // [rsp+40h] [rbp-18h]

  v12 = 0LL;
  v13 = 0LL;
  *a6 = 0;
  result = MiSetImportTableProtection(a1, &v12);
  if ( (int)result >= 0 )
  {
    if ( (_DWORD)v13 )
    {
      *(_DWORD *)(a1 + 104) |= 0x1000u;
      v11 = MiResolveImageReferences(a1, a4, a3, a2, a5);
      MiRestoreImportTableProtection(a1, &v12);
      *(_DWORD *)(a1 + 104) &= ~0x1000u;
      if ( v11 < 0 )
        *a6 = 1;
      return (unsigned int)v11;
    }
    else
    {
      return 0LL;
    }
  }
  return result;
}
