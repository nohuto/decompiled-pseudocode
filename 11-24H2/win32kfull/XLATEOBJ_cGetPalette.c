/*
 * XREFs of XLATEOBJ_cGetPalette @ 0x1400DD500
 * Callers:
 *     NtGdiXLATEOBJ_cGetPalette @ 0x1400DD400 (NtGdiXLATEOBJ_cGetPalette.c)
 * Callees:
 *     ?ulGetEntries@XEPALOBJ@@QEAAKKKPEAUtagPALETTEENTRY@@H@Z @ 0x1401D4D18 (-ulGetEntries@XEPALOBJ@@QEAAKKKPEAUtagPALETTEENTRY@@H@Z.c)
 */

ULONG __stdcall XLATEOBJ_cGetPalette(XLATEOBJ *pxlo, ULONG iPal, ULONG cPal, ULONG *pPal)
{
  ULONG v4; // r10d
  ULONG *pulXlate; // rdx
  ULONG *v7; // rax
  ULONG *v8; // [rsp+40h] [rbp+8h] BYREF

  v4 = 0;
  if ( !pxlo )
    return v4;
  switch ( iPal )
  {
    case 4u:
      pulXlate = pxlo[1].pulXlate;
LABEL_4:
      if ( pulXlate && !pulXlate[7] && cPal == 3 )
      {
        v4 = 3;
        *pPal = **((_DWORD **)pulXlate + 14);
        pPal[1] = *(_DWORD *)(*((_QWORD *)pulXlate + 14) + 4LL);
        pPal[2] = *(_DWORD *)(*((_QWORD *)pulXlate + 14) + 8LL);
      }
      return v4;
    case 5u:
      pulXlate = *(ULONG **)&pxlo[2].iUniq;
      goto LABEL_4;
    case 1u:
      v7 = pxlo[1].pulXlate;
      break;
    default:
      v7 = *(ULONG **)&pxlo[2].iUniq;
      break;
  }
  v8 = v7;
  if ( v7 )
    return XEPALOBJ::ulGetEntries((XEPALOBJ *)&v8, 0, cPal, (struct tagPALETTEENTRY *)pPal, 1);
  return v4;
}
