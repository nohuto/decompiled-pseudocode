/*
 * XREFs of ?bExpand@RGNCOREOBJ@@QEAA_NK@Z @ 0x140065A98
 * Callers:
 *     RGNCOREOBJ::bMerge__RGNCOREOBJ::bMerge_::_2_::_lambda_1___ @ 0x1400296C0 (RGNCOREOBJ--bMerge__RGNCOREOBJ--bMerge_--_2_--_lambda_1___.c)
 *     ?UploadForFloodFill@RGNCOREOBJ@@QEAAJPEBJKPEAJK@Z @ 0x1400647D0 (-UploadForFloodFill@RGNCOREOBJ@@QEAAJPEBJKPEAJK@Z.c)
 *     ?bUpload@RGNCOREOBJ@@QEAAHPEBJK@Z @ 0x140064C10 (-bUpload@RGNCOREOBJ@@QEAAHPEBJK@Z.c)
 * Callees:
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x1400185D0 (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     GreDeleteFastMutex @ 0x14001BF40 (GreDeleteFastMutex.c)
 *     ?get_pScan@REGION_CORE@@IEAAPEAVSCAN@@XZ @ 0x140029120 (-get_pScan@REGION_CORE@@IEAAPEAVSCAN@@XZ.c)
 *     ?get_sizeScan@REGION_CORE@@IEBAKXZ @ 0x14002B150 (-get_sizeScan@REGION_CORE@@IEBAKXZ.c)
 *     ?get_sizeScanAlloc@REGION_CORE@@IEBAKXZ @ 0x140065B50 (-get_sizeScanAlloc@REGION_CORE@@IEBAKXZ.c)
 *     ?set_sizeScanAlloc@REGION_CORE@@IEAAXK@Z @ 0x140065BE4 (-set_sizeScanAlloc@REGION_CORE@@IEAAXK@Z.c)
 *     memmove @ 0x14023FA40 (memmove.c)
 */

bool __fastcall RGNCOREOBJ::bExpand(REGION_CORE **this, unsigned int a2)
{
  unsigned int sizeScanAlloc; // ebx
  unsigned int sizeScan; // r14d
  __int64 v6; // rax
  struct REGION_CORE *v7; // rdx
  void *v8; // rbp
  struct SCAN *pScan; // rax
  struct REGION_CORE *v10; // rdx
  char *v11; // rax

  sizeScanAlloc = REGION_CORE::get_sizeScanAlloc(*this);
  if ( a2 <= sizeScanAlloc )
  {
LABEL_6:
    LOBYTE(v6) = 1;
    return v6;
  }
  sizeScan = REGION_CORE::get_sizeScan(*this);
  v6 = Win32AllocPoolZInitImpl(256LL, a2, 0x6E637347u);
  v8 = (void *)v6;
  if ( v6 )
  {
    if ( sizeScanAlloc < sizeScan )
      sizeScan = sizeScanAlloc;
    pScan = REGION_CORE::get_pScan(*this, v7);
    memmove(v8, pScan, sizeScan);
    v11 = (char *)REGION_CORE::get_pScan(*this, v10);
    GreDeleteFastMutex(v11);
    *(_QWORD *)*this = v8;
    REGION_CORE::set_sizeScanAlloc(*this, a2);
    goto LABEL_6;
  }
  return v6;
}
