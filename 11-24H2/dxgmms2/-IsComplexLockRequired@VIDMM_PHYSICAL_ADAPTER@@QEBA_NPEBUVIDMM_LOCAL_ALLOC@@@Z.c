/*
 * XREFs of ?IsComplexLockRequired@VIDMM_PHYSICAL_ADAPTER@@QEBA_NPEBUVIDMM_LOCAL_ALLOC@@@Z @ 0x1401148A0
 * Callers:
 *     ?LockCommon@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@_NKPEAPEAX@Z @ 0x1400EE09C (-LockCommon@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@_NKPEAPEAX@Z.c)
 * Callees:
 *     Feature_Servicing_GraphicsKernel_CpuHostApertureFixes__private_IsEnabledDeviceUsageNoInline @ 0x14004C4B0 (Feature_Servicing_GraphicsKernel_CpuHostApertureFixes__private_IsEnabledDeviceUsageNoInline.c)
 */

bool __fastcall VIDMM_PHYSICAL_ADAPTER::IsComplexLockRequired(VIDMM_PHYSICAL_ADAPTER *this, __int64 **a2)
{
  __int64 *v2; // rbx
  __int64 v3; // rsi
  __int64 v4; // rdi
  bool result; // al

  v2 = *a2;
  v3 = **a2;
  result = 0;
  if ( *((int *)a2 + 17) <= 0 )
  {
    v4 = *(_QWORD *)(v3 + 64);
    if ( (*(_DWORD *)(*((_QWORD *)this + 6) + 6984LL) & 0x20) != 0 || (*((_DWORD *)v2 + 7) & 0x20000) != 0 )
      return 1;
    if ( ((unsigned int)Feature_Servicing_GraphicsKernel_CpuHostApertureFixes__private_IsEnabledDeviceUsageNoInline()
       || (*((_BYTE *)v2 + 36) & 1) == 0)
      && ((*(_DWORD *)v2[49] & 4) != 0 && !*(_BYTE *)(v4 + 514)
       || (*(_DWORD *)(v4 + 104) & 4) == 0
       || (!(unsigned int)Feature_Servicing_GraphicsKernel_CpuHostApertureFixes__private_IsEnabledDeviceUsageNoInline()
        || (*((_BYTE *)v2 + 36) & 1) == 0)
       && *(_QWORD *)(v3 + 144)) )
    {
      return 1;
    }
  }
  return result;
}
