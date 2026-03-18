/*
 * XREFs of ?UseSuperSample@CDDisplayRenderTarget@@UEBA_NXZ @ 0x1801F0600
 * Callers:
 *     ?AddDirtyRegion@CMonitorDirty@@QEAAXAEBVCTreeDirty@@AEBV?$span@PEBVCVisual@@$0?0@gsl@@@Z @ 0x18009B9DC (-AddDirtyRegion@CMonitorDirty@@QEAAXAEBVCTreeDirty@@AEBV-$span@PEBVCVisual@@$0-0@gsl@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CDDisplayRenderTarget::UseSuperSample(CDDisplayRenderTarget *this)
{
  bool result; // al

  result = 0;
  if ( !*((_BYTE *)this + 19225) )
    return *((_BYTE *)this + 30683) != 0;
  return result;
}
