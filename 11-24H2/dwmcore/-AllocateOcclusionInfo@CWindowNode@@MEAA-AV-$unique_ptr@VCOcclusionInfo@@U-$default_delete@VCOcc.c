/*
 * XREFs of ?AllocateOcclusionInfo@CWindowNode@@MEAA?AV?$unique_ptr@VCOcclusionInfo@@U?$default_delete@VCOcclusionInfo@@@std@@@std@@I@Z @ 0x1801EC200
 * Callers:
 *     ?GetOcclusionInfo@CTreeData@@QEAAPEAVCOcclusionInfo@@I_N@Z @ 0x18009E720 (-GetOcclusionInfo@CTreeData@@QEAAPEAVCOcclusionInfo@@I_N@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180041E40 (--2@YAPEAX_K@Z.c)
 */

_QWORD *__fastcall CWindowNode::AllocateOcclusionInfo(__int64 a1, _QWORD *a2, int a3)
{
  _QWORD *v6; // rax

  v6 = operator new(0x38uLL);
  if ( v6 )
  {
    v6[2] = 0LL;
    *v6 = &CWindowOcclusionInfo::`vftable';
    v6[1] = a1;
    *((_DWORD *)v6 + 8) = a3;
  }
  *a2 = v6;
  return a2;
}
