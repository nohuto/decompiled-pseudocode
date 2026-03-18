/*
 * XREFs of ?GetRectCount@CTreeDirty@@QEBAIXZ @ 0x1801EF790
 * Callers:
 *     ?AddDirtyRegion@CMonitorDirty@@QEAAXAEBVCTreeDirty@@AEBV?$span@PEBVCVisual@@$0?0@gsl@@@Z @ 0x18009B9DC (-AddDirtyRegion@CMonitorDirty@@QEAAXAEBVCTreeDirty@@AEBV-$span@PEBVCVisual@@$0-0@gsl@@@Z.c)
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
