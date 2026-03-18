/*
 * XREFs of ?GetRectCount@CTreeDirty@@QEBAIXZ @ 0x1801FBA30
 * Callers:
 *     ?AddDirtyRegion@CMonitorDirty@@QEAAXAEBVCTreeDirty@@AEBV?$span@PEBVCVisual@@$0?0@gsl@@@Z @ 0x1800C9C3C (-AddDirtyRegion@CMonitorDirty@@QEAAXAEBVCTreeDirty@@AEBV-$span@PEBVCVisual@@$0-0@gsl@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CTreeDirty::GetRectCount(CTreeDirty *this)
{
  __int64 result; // rax

  result = 1LL;
  if ( !*((_BYTE *)this + 2324) )
    return *((unsigned int *)this + 4);
  return result;
}
