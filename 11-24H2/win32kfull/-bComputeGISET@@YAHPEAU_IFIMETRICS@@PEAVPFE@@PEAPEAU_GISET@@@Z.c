/*
 * XREFs of ?bComputeGISET@@YAHPEAU_IFIMETRICS@@PEAVPFE@@PEAPEAU_GISET@@@Z @ 0x1400FF5D0
 * Callers:
 *     ?bInit@PFEMEMOBJ@@QEAAHPEAVPFF@@KPEAU_FD_GLYPHSET@@_KPEAU_IFIMETRICS@@2HPEAU_UNIVERSAL_FONT_ID@@H@Z @ 0x1400FF0B8 (-bInit@PFEMEMOBJ@@QEAAHPEAVPFF@@KPEAU_FD_GLYPHSET@@_KPEAU_IFIMETRICS@@2HPEAU_UNIVERSAL_FONT_ID@@.c)
 * Callees:
 *     ??1UmfdClientSideFileViewMapper@@QEAA@XZ @ 0x1400B270C (--1UmfdClientSideFileViewMapper@@QEAA@XZ.c)
 *     ?UmfdIsUmfdTrueTypePff@@YA_NPEBVPFF@@@Z @ 0x1400FF884 (-UmfdIsUmfdTrueTypePff@@YA_NPEBVPFF@@@Z.c)
 *     ?vFreepfdg@PFEOBJ@@QEAAXXZ @ 0x1400FF8C8 (-vFreepfdg@PFEOBJ@@QEAAXXZ.c)
 *     ?pfdg@PFEOBJ@@QEAAPEAU_FD_GLYPHSET@@XZ @ 0x1400FFA30 (-pfdg@PFEOBJ@@QEAAPEAU_FD_GLYPHSET@@XZ.c)
 *     ?cComputeGISET@@YAKPEBGKPEAU_GISET@@K@Z @ 0x14019565C (-cComputeGISET@@YAKPEBGKPEAU_GISET@@K@Z.c)
 *     ??0UmfdClientSideFileViewMapper@@QEAA@AEAVPFFOBJ@@@Z @ 0x1401E470C (--0UmfdClientSideFileViewMapper@@QEAA@AEAVPFFOBJ@@@Z.c)
 */

__int64 __fastcall bComputeGISET(struct _IFIMETRICS *a1, const struct PFF **a2, struct _GISET **a3)
{
  unsigned int v5; // esi
  bool IsUmfdTrueTypePff; // r15
  struct _FD_GLYPHSET *v7; // rbx
  PTRDIFF dpwszFamilyName; // edi
  unsigned __int64 v9; // rax
  __int64 v10; // rax
  _WORD *v11; // rdx
  ULONG v12; // r8d
  char *v13; // r14
  unsigned int cGlyphsSupported; // r9d
  __int64 v15; // rdx
  unsigned int v16; // ebp
  char *v17; // r8
  struct _GISET *v18; // rax
  struct _GISET *v19; // rdi
  HGLYPH *phg; // rcx
  __int64 cGlyphs; // r9
  HGLYPH *v23; // r9
  __int64 v24; // rax
  WCHAR wcLow; // ax
  WCHAR v26; // cx
  const struct PFF *v27; // [rsp+20h] [rbp-58h] BYREF
  _QWORD v28[2]; // [rsp+30h] [rbp-48h] BYREF
  int v29; // [rsp+40h] [rbp-38h]
  const struct PFF **v30; // [rsp+88h] [rbp+10h] BYREF

  v30 = a2;
  *a3 = 0LL;
  v5 = 1;
  v27 = *a2;
  IsUmfdTrueTypePff = UmfdIsUmfdTrueTypePff(v27);
  if ( IsUmfdTrueTypePff )
  {
    v7 = 0LL;
  }
  else
  {
    v7 = PFEOBJ::pfdg((PFEOBJ *)&v30);
    if ( !v7 )
    {
      UmfdClientSideFileViewMapper::UmfdClientSideFileViewMapper(
        (UmfdClientSideFileViewMapper *)v28,
        (struct PFFOBJ *)&v27);
      if ( v29 == *(_DWORD *)(v28[0] + 36LL) )
        v7 = PFEOBJ::pfdg((PFEOBJ *)&v30);
      UmfdClientSideFileViewMapper::~UmfdClientSideFileViewMapper((UmfdClientSideFileViewMapper *)v28);
      if ( !v7 )
        return 0LL;
    }
    if ( (v7->flAccel & 6) == 0 )
      goto LABEL_24;
  }
  dpwszFamilyName = 0;
  if ( a1->cjIfiExtra > 8 )
    dpwszFamilyName = a1[1].dpwszFamilyName;
  if ( !IsUmfdTrueTypePff )
  {
    if ( !dpwszFamilyName )
    {
      v9 = 2LL * v7->cGlyphsSupported;
      if ( v9 <= 0xFFFFFFFF )
      {
        if ( (_DWORD)v9 )
        {
          v10 = Win32AllocPoolZInit((unsigned int)v9, 1936484167LL);
          v11 = (_WORD *)v10;
          if ( v10 )
          {
            v12 = 0;
            v13 = (char *)v10;
            while ( v12 < v7->cRuns )
            {
              phg = v7->awcrun[v12].phg;
              cGlyphs = v7->awcrun[v12].cGlyphs;
              if ( phg )
              {
                v23 = &phg[cGlyphs];
                while ( phg < v23 )
                  *v11++ = *(_WORD *)phg++;
              }
              else
              {
                if ( !(_WORD)cGlyphs )
                  goto LABEL_20;
                wcLow = v7->awcrun[v12].wcLow;
                v26 = cGlyphs + wcLow - 1;
                while ( wcLow <= v26 )
                  *v11 = wcLow++;
              }
              ++v12;
            }
            qsort(v13, v7->cGlyphsSupported, 2uLL, CompareRoutine);
            cGlyphsSupported = v7->cGlyphsSupported;
            LODWORD(v15) = 0;
            v16 = 0;
            if ( cGlyphsSupported )
            {
              do
              {
                v15 = (unsigned int)(v15 + 1);
                if ( (unsigned int)v15 < cGlyphsSupported )
                {
                  v17 = &v13[2 * v15];
                  do
                  {
                    if ( *(unsigned __int16 *)v17 - *(unsigned __int16 *)&v13[2 * (unsigned int)(v15 - 1)] > 1 )
                      break;
                    LODWORD(v15) = v15 + 1;
                    v17 += 2;
                  }
                  while ( (unsigned int)v15 < cGlyphsSupported );
                }
                ++v16;
              }
              while ( (unsigned int)v15 < cGlyphsSupported );
            }
            if ( 4 * v16 == -8
              || (v18 = (struct _GISET *)Win32AllocPoolZInit(4 * v16 + 8, 1936484167LL), (v19 = v18) == 0LL) )
            {
LABEL_20:
              v5 = 0;
              goto LABEL_21;
            }
            cComputeGISET((const unsigned __int16 *)v13, v7->cGlyphsSupported, v18, v16);
            *a3 = v19;
LABEL_21:
            Win32FreePool(v13);
LABEL_23:
            if ( IsUmfdTrueTypePff )
              return v5;
LABEL_24:
            PFEOBJ::vFreepfdg((PFEOBJ *)&v30);
            return v5;
          }
        }
      }
      goto LABEL_22;
    }
LABEL_32:
    v24 = Win32AllocPoolZInit(12LL, 1936484167LL);
    if ( v24 )
    {
      *(_DWORD *)v24 = dpwszFamilyName;
      *(_DWORD *)(v24 + 4) = 1;
      *(_WORD *)(v24 + 8) = 0;
      *(_WORD *)(v24 + 10) = dpwszFamilyName;
      *a3 = (struct _GISET *)v24;
      goto LABEL_23;
    }
LABEL_22:
    v5 = 0;
    goto LABEL_23;
  }
  if ( dpwszFamilyName )
    goto LABEL_32;
  return 0LL;
}
