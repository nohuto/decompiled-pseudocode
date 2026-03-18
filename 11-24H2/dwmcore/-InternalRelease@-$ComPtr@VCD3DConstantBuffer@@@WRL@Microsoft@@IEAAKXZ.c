/*
 * XREFs of ?InternalRelease@?$ComPtr@VCD3DConstantBuffer@@@WRL@Microsoft@@IEAAKXZ @ 0x180186F34
 * Callers:
 *     ?SetScratchConstantBuffer@CSurfaceShaderComposer@@QEAAJV?$span@$$CBE$0?0@gsl@@I@Z @ 0x180064D50 (-SetScratchConstantBuffer@CSurfaceShaderComposer@@QEAAJV-$span@$$CBE$0-0@gsl@@I@Z.c)
 *     ??1CSurfaceShaderComposer@@QEAA@XZ @ 0x180186ECC (--1CSurfaceShaderComposer@@QEAA@XZ.c)
 * Callees:
 *     ?InternalRelease@?$CMILRefCountBaseT@VIDeviceResource@@VCMilObjectDeleter@@@@IEAAKXZ @ 0x18007AB80 (-InternalRelease@-$CMILRefCountBaseT@VIDeviceResource@@VCMilObjectDeleter@@@@IEAAKXZ.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<CD3DConstantBuffer>::InternalRelease(struct CMILPoolResource **a1)
{
  struct CMILPoolResource *v1; // rdx
  __int64 result; // rax

  v1 = *a1;
  result = 0LL;
  if ( *a1 )
  {
    *a1 = 0LL;
    return CMILRefCountBaseT<IDeviceResource,CMilObjectDeleter>::InternalRelease(v1);
  }
  return result;
}
