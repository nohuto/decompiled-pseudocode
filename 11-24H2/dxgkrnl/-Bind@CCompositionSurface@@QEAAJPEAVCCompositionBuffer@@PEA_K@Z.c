/*
 * XREFs of ?Bind@CCompositionSurface@@QEAAJPEAVCCompositionBuffer@@PEA_K@Z @ 0x140018B8C
 * Callers:
 *     ?Bind@CCompositionSurface@@QEAAJAEBUCSM_BUFFER_INFO@@_N111PEA_K@Z @ 0x1400182C0 (-Bind@CCompositionSurface@@QEAAJAEBUCSM_BUFFER_INFO@@_N111PEA_K@Z.c)
 *     ?RebindCompositionSurfaceBuffer@CContentResource@@QEAAJPEAVCCompositionSwapchainBuffer@@@Z @ 0x140062654 (-RebindCompositionSurfaceBuffer@CContentResource@@QEAAJPEAVCCompositionSwapchainBuffer@@@Z.c)
 * Callees:
 *     ?GetActiveBuffer@CCompositionSurface@@IEBAPEAVCCompositionBuffer@@XZ @ 0x14001842C (-GetActiveBuffer@CCompositionSurface@@IEBAPEAVCCompositionBuffer@@XZ.c)
 *     Feature_DWM_MPO_Enhancement__private_IsEnabledDeviceUsageNoInline @ 0x14009D120 (Feature_DWM_MPO_Enhancement__private_IsEnabledDeviceUsageNoInline.c)
 */

__int64 __fastcall CCompositionSurface::Bind(
        CCompositionSurface *this,
        struct CCompositionBuffer *a2,
        unsigned __int64 *a3)
{
  unsigned int v4; // ebx
  __int64 v5; // rdx
  _QWORD *v6; // r9
  _QWORD *v7; // rax
  __int64 v8; // rcx
  _QWORD *v9; // r8
  __int64 v10; // rcx
  _QWORD *v11; // rax
  __int64 v12; // rcx

  v4 = 0;
  if ( CCompositionSurface::GetActiveBuffer(this) )
  {
    return (unsigned int)-1073740528;
  }
  else
  {
    v7 = (_QWORD *)((char *)this + 120);
    v8 = *((_QWORD *)this + 15);
    v9 = (_QWORD *)(v5 + 24);
    if ( *(CCompositionSurface **)(v8 + 8) != (CCompositionSurface *)((char *)this + 120) )
      __fastfail(3u);
    *v9 = v8;
    *(_QWORD *)(v5 + 32) = v7;
    *(_QWORD *)(v8 + 8) = v9;
    *v7 = v9;
    ++*((_DWORD *)this + 34);
    v10 = *((_QWORD *)this + 5) + 1LL;
    *((_QWORD *)this + 5) = v10;
    *(_QWORD *)(v5 + 8) = *((_QWORD *)this - 2);
    *(_QWORD *)(v5 + 16) = v10;
    *(_BYTE *)(v5 + 40) = 1;
    *v6 = *((_QWORD *)this + 5);
    if ( (unsigned int)Feature_DWM_MPO_Enhancement__private_IsEnabledDeviceUsageNoInline() )
    {
      v11 = (_QWORD *)((char *)this + 76);
      v12 = 5LL;
      do
      {
        *v11++ = 0LL;
        --v12;
      }
      while ( v12 );
      *((_DWORD *)this + 29) = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
    }
  }
  return v4;
}
