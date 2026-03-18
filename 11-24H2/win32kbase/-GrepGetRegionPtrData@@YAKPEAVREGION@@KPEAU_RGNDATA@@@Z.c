/*
 * XREFs of ?GrepGetRegionPtrData@@YAKPEAVREGION@@KPEAU_RGNDATA@@@Z @ 0x14007BA4C
 * Callers:
 *     EtwTraceDWMGetDirtyRegion @ 0x14007A500 (EtwTraceDWMGetDirtyRegion.c)
 *     EtwTraceMoveRegion @ 0x1401CD880 (EtwTraceMoveRegion.c)
 * Callees:
 *     ?sizeSave@RGNOBJ@@QEAAKXZ @ 0x14007BD80 (-sizeSave@RGNOBJ@@QEAAKXZ.c)
 *     ?vDownload@RGNOBJ@@QEAA_KPEAU_RECTL@@_K@Z @ 0x14007BF10 (-vDownload@RGNOBJ@@QEAA_KPEAU_RECTL@@_K@Z.c)
 */

__int64 __fastcall GrepGetRegionPtrData(struct REGION *a1, unsigned int a2, struct _RGNDATA *a3)
{
  unsigned int v6; // eax
  DWORD v7; // ecx
  unsigned int v8; // edi
  DWORD v9; // eax
  struct REGION *v11; // [rsp+30h] [rbp+8h] BYREF

  v11 = a1;
  if ( !a1 )
    return 0;
  v6 = RGNOBJ::sizeSave((RGNOBJ *)&v11);
  v7 = v6;
  v8 = v6 + 32;
  if ( !a3 )
    return v8;
  if ( v8 > a2 )
    return 0;
  v9 = v6 >> 4;
  a3->rdh.dwSize = 32;
  a3->rdh.iType = 1;
  a3->rdh.nCount = v9;
  a3->rdh.nRgnSize = v7;
  if ( v9 )
  {
    a3->rdh.rcBound = *(RECT *)((char *)a1 + 52);
  }
  else
  {
    a3->rdh.rcBound.left = 0;
    a3->rdh.rcBound.top = 0;
    a3->rdh.rcBound.right = 0;
    a3->rdh.rcBound.bottom = 0;
  }
  RGNOBJ::vDownload((RGNOBJ *)&v11, (struct _RECTL *)a3->Buffer, v9);
  return v8;
}
