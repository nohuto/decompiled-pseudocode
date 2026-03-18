/*
 * XREFs of ?bAddNullScan@RGNMEMOBJ@@AEAAHJJ@Z @ 0x1400652E8
 * Callers:
 *     ?vCreate@RGNMEMOBJ@@QEAAXAEAVEPATHOBJ@@KPEAU_RECTL@@@Z @ 0x140066420 (-vCreate@RGNMEMOBJ@@QEAAXAEAVEPATHOBJ@@KPEAU_RECTL@@@Z.c)
 * Callees:
 *     ?set_sizeScan@REGION_CORE@@IEAAXK@Z @ 0x140029050 (-set_sizeScan@REGION_CORE@@IEAAXK@Z.c)
 *     ?get_sizeScan@REGION_CORE@@IEBAKXZ @ 0x14002B150 (-get_sizeScan@REGION_CORE@@IEBAKXZ.c)
 *     ?get_sizeScanAlloc@REGION_CORE@@IEBAKXZ @ 0x140065B50 (-get_sizeScanAlloc@REGION_CORE@@IEBAKXZ.c)
 *     ?get_pscnTail@REGION_CORE@@IEAAPEAVSCAN@@XZ @ 0x140066AF0 (-get_pscnTail@REGION_CORE@@IEAAPEAVSCAN@@XZ.c)
 *     ?bExpand@RGNOBJ@@QEAAHK@Z @ 0x1400EF910 (-bExpand@RGNOBJ@@QEAAHK@Z.c)
 */

__int64 __fastcall RGNMEMOBJ::bAddNullScan(RGNMEMOBJ *this, int a2, int a3)
{
  unsigned int sizeScanAlloc; // ebx
  struct SCAN *pscnTail; // rdi
  __int64 v8; // rbx
  int sizeScan; // eax
  unsigned int v10; // r8d
  __int64 result; // rax
  unsigned int v12; // eax

  sizeScanAlloc = REGION_CORE::get_sizeScanAlloc((REGION_CORE *)(*(_QWORD *)this + 24LL));
  if ( sizeScanAlloc - (unsigned int)REGION_CORE::get_sizeScan((REGION_CORE *)(*(_QWORD *)this + 24LL)) < 0x10 )
  {
    v12 = REGION_CORE::get_sizeScanAlloc((REGION_CORE *)(*(_QWORD *)this + 24LL));
    if ( v12 + 1136 < v12 || !(unsigned int)RGNOBJ::bExpand(this, v12 + 1136) )
      return 0LL;
  }
  pscnTail = REGION_CORE::get_pscnTail((REGION_CORE *)(*(_QWORD *)this + 24LL));
  ++*(_DWORD *)(*(_QWORD *)this + 48LL);
  *((_DWORD *)pscnTail + 1) = a2;
  *((_DWORD *)pscnTail + 2) = a3;
  v8 = *(_QWORD *)this;
  sizeScan = REGION_CORE::get_sizeScan((REGION_CORE *)(*(_QWORD *)this + 24LL));
  REGION_CORE::set_sizeScan((REGION_CORE *)(v8 + 24), (struct REGION_CORE *)(unsigned int)(sizeScan + 16), v10);
  *((_DWORD *)pscnTail + 3) = 0;
  result = 1LL;
  *(_DWORD *)pscnTail = 0;
  return result;
}
