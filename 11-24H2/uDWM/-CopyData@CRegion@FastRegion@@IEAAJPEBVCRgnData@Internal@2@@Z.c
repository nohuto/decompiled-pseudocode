/*
 * XREFs of ?CopyData@CRegion@FastRegion@@IEAAJPEBVCRgnData@Internal@2@@Z @ 0x180064B90
 * Callers:
 *     ?ValidateVisual@CTopLevelWindow@@UEAAJXZ @ 0x180028130 (-ValidateVisual@CTopLevelWindow@@UEAAJXZ.c)
 * Callees:
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x180029338 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180095474 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall FastRegion::CRegion::CopyData(void **this, const struct FastRegion::Internal::CRgnData *a2)
{
  char *v2; // rbp
  FastRegion::CRegion *v3; // rbx
  int *v4; // r15
  int v7; // eax
  int v8; // esi
  int v9; // ecx
  int v10; // esi
  char *v11; // r9
  char *v12; // r8
  _DWORD *v13; // r11
  __int64 v14; // rax
  char *v15; // rcx
  unsigned __int64 v16; // rax
  __int64 v17; // rcx
  signed __int64 v18; // r9
  const struct std::nothrow_t *v20; // rdx

  v2 = (char *)a2 + 12;
  v3 = (FastRegion::CRegion *)*this;
  v4 = (int *)(this + 1);
  v7 = 60;
  v8 = *((_DWORD *)a2 + 2 * *(_DWORD *)a2 + 2)
     + 8 * *(_DWORD *)a2
     - 12
     - *((_DWORD *)a2 + 4)
     + 8 * (*(_DWORD *)a2 - 1)
     + 24;
  if ( this + 1 != *this )
    v7 = *v4;
  if ( v7 < v8 )
  {
    v3 = (FastRegion::CRegion *)operator new[](v8, a2);
    if ( !v3 )
      return 2147942414LL;
    FastRegion::CRegion::FreeMemory(this, v20);
    *this = v3;
    *v4 = v8;
  }
  v9 = *(_DWORD *)a2;
  v10 = 0;
  *(_DWORD *)v3 = *(_DWORD *)a2;
  *((_DWORD *)v3 + 1) = *((_DWORD *)a2 + 1);
  *((_DWORD *)v3 + 2) = *((_DWORD *)a2 + 2);
  v11 = &v2[*((int *)v2 + 1)];
  v12 = (char *)v3 + 8 * v9 + 12;
  if ( v9 > 0 )
  {
    v13 = (_DWORD *)((char *)v3 + 12);
    do
    {
      *v13 = *(_DWORD *)((char *)v13 + a2 - v3);
      v13 += 2;
      v14 = v10++;
      *((_DWORD *)v3 + 2 * v14 + 4) = (_DWORD)a2
                                    + 8 * v14
                                    + 4 * ((v12 - v11) >> 2)
                                    + *((_DWORD *)a2 + 2 * v14 + 4)
                                    - ((_DWORD)v3
                                     + 8 * v14);
    }
    while ( v10 < *(_DWORD *)v3 );
  }
  v15 = (char *)a2 + 8 * *(_DWORD *)a2 + 4;
  v16 = (unsigned __int64)((int)v15 + *((_DWORD *)v15 + 1) - *((_DWORD *)a2 + 4) - (int)v2) >> 2;
  v17 = (int)v16;
  if ( (int)v16 > 0 )
  {
    v18 = v11 - v12;
    do
    {
      *(_DWORD *)v12 = *(_DWORD *)&v12[v18];
      v12 += 4;
      --v17;
    }
    while ( v17 );
  }
  return 0LL;
}
