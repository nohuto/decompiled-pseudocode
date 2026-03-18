/*
 * XREFs of ?UseSuperSample@CDDisplayRenderTarget@@UEBA_NXZ @ 0x1801FD290
 * Callers:
 *     ?AddDirtyRegion@CMonitorDirty@@QEAAXAEBVCTreeDirty@@AEBV?$span@PEBVCVisual@@$0?0@gsl@@@Z @ 0x1800C9C3C (-AddDirtyRegion@CMonitorDirty@@QEAAXAEBVCTreeDirty@@AEBV-$span@PEBVCVisual@@$0-0@gsl@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CDDisplayRenderTarget::UseSuperSample(CDDisplayRenderTarget *this)
{
  bool result; // al

  result = 0;
  if ( !*((_BYTE *)this + 19609) )
    return *((_BYTE *)this + 31067) != 0;
  return result;
}
