/*
 * XREFs of ?bFillFunctionTable@@YAHPEAU_DRVFN@@KPEAP6A_JXZ@Z @ 0x140101820
 * Callers:
 *     ??0PDEVOBJ@@QEAA@PEAU_LDEV@@PEAU_devicemodeW@@PEBG22PEAXPEAU_GDIINFO@@PEAUtagDEVINFO@@HKK@Z @ 0x140087E70 (--0PDEVOBJ@@QEAA@PEAU_LDEV@@PEAU_devicemodeW@@PEBG22PEAXPEAU_GDIINFO@@PEAUtagDEVINFO@@HKK@Z.c)
 *     ?ldevFillTable@@YAHPEAU_LDEV@@PEAUtagDRVENABLEDATA@@@Z @ 0x140101744 (-ldevFillTable@@YAHPEAU_LDEV@@PEAUtagDRVENABLEDATA@@@Z.c)
 * Callees:
 *     memset @ 0x14023F500 (memset.c)
 */

__int64 __fastcall bFillFunctionTable(struct _DRVFN *a1, int a2, __int64 (**a3)(void))
{
  __int64 iFunc; // rcx
  __int64 (*pfn)(void); // rax

  memset(a3, 0, 0x340uLL);
  while ( 1 )
  {
    if ( !a2-- )
      return 1LL;
    if ( a1->iFunc >= 0x68 )
      break;
    iFunc = a1->iFunc;
    pfn = a1->pfn;
    ++a1;
    a3[iFunc] = pfn;
  }
  return 0LL;
}
