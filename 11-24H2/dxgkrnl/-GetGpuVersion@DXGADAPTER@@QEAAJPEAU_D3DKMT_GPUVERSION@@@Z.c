/*
 * XREFs of ?GetGpuVersion@DXGADAPTER@@QEAAJPEAU_D3DKMT_GPUVERSION@@@Z @ 0x1403EC380
 * Callers:
 *     ?DxgkQueryAdapterInfoImpl@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z @ 0x140383210 (-DxgkQueryAdapterInfoImpl@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DXGADAPTER::GetGpuVersion(DXGADAPTER *this, struct _D3DKMT_GPUVERSION *a2)
{
  __int64 PhysicalAdapterIndex; // rax
  __int64 v3; // r8
  __int64 result; // rax

  if ( a2
    && (PhysicalAdapterIndex = a2->PhysicalAdapterIndex, (unsigned int)PhysicalAdapterIndex < *((_DWORD *)this + 74)) )
  {
    v3 = *((_QWORD *)this + 374) + 344 * PhysicalAdapterIndex;
    result = 0LL;
    *(_OWORD *)a2->BiosVersion = *(_OWORD *)(v3 + 212);
    *(_OWORD *)&a2->BiosVersion[8] = *(_OWORD *)(v3 + 228);
    *(_OWORD *)a2->GpuArchitecture = *(_OWORD *)(v3 + 276);
    *(_OWORD *)&a2->GpuArchitecture[8] = *(_OWORD *)(v3 + 292);
  }
  else
  {
    WdLogSingleEntry1(3LL, this);
    result = 3221225485LL;
    WdLogGlobalForLineNumber = 12109;
  }
  return result;
}
