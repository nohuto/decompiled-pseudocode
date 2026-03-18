/*
 * XREFs of ?InitXform@DC@@QEAAPEAUMATRIX@@K@Z @ 0x140039BC0
 * Callers:
 *     GreDCSelectPen @ 0x14003ABF0 (GreDCSelectPen.c)
 * Callees:
 *     ?vUpdateCachedDPIScaleValue@DC@@QEAAXXZ @ 0x14000DABC (-vUpdateCachedDPIScaleValue@DC@@QEAAXXZ.c)
 *     ?vMarkTransformDirty@DC@@QEAAXXZ @ 0x14000EF64 (-vMarkTransformDirty@DC@@QEAAXXZ.c)
 *     ?vUpdateWtoDXform@DC@@QEAAXXZ @ 0x14003A050 (-vUpdateWtoDXform@DC@@QEAAXXZ.c)
 *     ?bInverse@EXFORMOBJ@@QEAA_NAEBUMATRIX@@@Z @ 0x14003A960 (-bInverse@EXFORMOBJ@@QEAA_NAEBUMATRIX@@@Z.c)
 *     ?bDpiScaleTransform@DC@@QEBAHXZ @ 0x14003AB60 (-bDpiScaleTransform@DC@@QEBAHXZ.c)
 *     ?vRealizeLineAttrs@DC@@QEAAXAEAVEXFORMOBJ@@@Z @ 0x14003B374 (-vRealizeLineAttrs@DC@@QEAAXAEAVEXFORMOBJ@@@Z.c)
 *     ?bXform@EXFORMOBJ@@QEBA_NPEBU_POINTL@@PEAU2@_K@Z @ 0x140106950 (-bXform@EXFORMOBJ@@QEBA_NPEBU_POINTL@@PEAU2@_K@Z.c)
 */

struct MATRIX *__fastcall DC::InitXform(DC *this, int a2)
{
  int v2; // edi
  int v4; // eax
  char v5; // si
  const struct _POINTL *v6; // rdx
  int v7; // edi
  int v8; // edi
  char *v9; // rdi
  __int64 v11; // rcx
  __int64 v12; // rax
  DC *v13; // rcx
  DC *v14; // rcx
  char *v15; // [rsp+30h] [rbp+8h] BYREF

  v2 = a2;
  if ( a2 >= 0 )
  {
    v5 = 0;
  }
  else
  {
    v4 = *((_DWORD *)this + 130);
    v5 = 1;
    v2 = a2 & 0x7FFFFFFF;
    if ( (v4 & 1) != 0 && (v4 & 2) == 0 )
    {
      *((_DWORD *)this + 130) = v4 | 2;
      DC::vMarkTransformDirty(this);
      DC::vUpdateCachedDPIScaleValue(v14);
    }
  }
  v6 = (const struct _POINTL *)*((_QWORD *)this + 122);
  if ( (v6[42].y & 0x1E000) != 0 )
  {
    if ( (v6[19].x & 0x100) != 0 )
    {
      v15 = (char *)this + 356;
      if ( this != (DC *)-356LL )
        EXFORMOBJ::bXform((EXFORMOBJ *)&v15, v6 + 1, (struct _POINTL *)&v6[27], 1uLL);
      *(_DWORD *)(*((_QWORD *)this + 122) + 152LL) &= ~0x100u;
    }
    DC::vUpdateWtoDXform(this);
    *(_DWORD *)(*((_QWORD *)this + 122) + 152LL) |= 0x200u;
    if ( (*(_DWORD *)(*((_QWORD *)this + 122) + 340LL) & 0x80u) != 0 )
    {
      v15 = (char *)this + 320;
      if ( this != (DC *)-320LL )
        DC::vRealizeLineAttrs(this, (struct EXFORMOBJ *)&v15);
      v12 = *((_QWORD *)this + 122);
      *((_DWORD *)this + 63) |= 1u;
      *(_DWORD *)(v12 + 340) &= ~0x80u;
    }
    *(_DWORD *)(*((_QWORD *)this + 122) + 340LL) |= 0x10u;
  }
  v7 = v2 - 515;
  if ( !v7 )
  {
    v9 = (char *)this + 392;
    goto LABEL_7;
  }
  v8 = v7 - 1;
  if ( v8 )
  {
    if ( v8 != 510 )
      goto LABEL_17;
    v9 = (char *)this + 356;
    if ( (*(_DWORD *)(*((_QWORD *)this + 122) + 340LL) & 0x10) == 0 )
      goto LABEL_7;
    v15 = (char *)this + 356;
    if ( !EXFORMOBJ::bInverse((EXFORMOBJ *)&v15, (DC *)((char *)this + 320)) )
    {
LABEL_17:
      v9 = 0LL;
      goto LABEL_7;
    }
    *(_DWORD *)(*((_QWORD *)this + 122) + 340LL) &= ~0x10u;
    if ( !(unsigned int)DC::bDpiScaleTransform(this) )
    {
      v11 = *((_QWORD *)this + 122);
      *(_OWORD *)(v11 + 68) = *(_OWORD *)v9;
      *(_OWORD *)(v11 + 84) = *(_OWORD *)((char *)this + 372);
      *(_DWORD *)(v11 + 100) = *((_DWORD *)this + 97);
    }
  }
  else
  {
    v9 = (char *)this + 320;
  }
LABEL_7:
  if ( v5 && (*((_BYTE *)this + 520) & 3) == 3 )
  {
    *((_DWORD *)this + 130) &= ~2u;
    DC::vMarkTransformDirty(this);
    DC::vUpdateCachedDPIScaleValue(v13);
  }
  return (struct MATRIX *)v9;
}
