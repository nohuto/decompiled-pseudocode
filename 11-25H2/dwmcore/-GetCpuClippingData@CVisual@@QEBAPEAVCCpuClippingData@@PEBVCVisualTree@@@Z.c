/*
 * XREFs of ?GetCpuClippingData@CVisual@@QEBAPEAVCCpuClippingData@@PEBVCVisualTree@@@Z @ 0x180195AA0
 * Callers:
 *     ?Update@CCpuClippingData@@QEAAJPEBVCVisualTree@@PEAVCVisual@@AEBVCScopedClipStack@@PEBVCShape@@PEBVCMILMatrix@@PEBV1@W4D2D1_ANTIALIAS_MODE@@W4CpuClippingScopeMode@@@Z @ 0x18001BD40 (-Update@CCpuClippingData@@QEAAJPEBVCVisualTree@@PEAVCVisual@@AEBVCScopedClipStack@@PEBVCShape@@P.c)
 *     ?BeginFrame@CSubDrawingContext@@AEAAJAEBVCMILMatrix@@@Z @ 0x180081A90 (-BeginFrame@CSubDrawingContext@@AEAAJAEBVCMILMatrix@@@Z.c)
 *     ?PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800E9350 (-PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?IsDrawListCacheDirty@CContent@@UEAA_NPEAVCDrawListCache@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z @ 0x180298130 (-IsDrawListCacheDirty@CContent@@UEAA_NPEAVCDrawListCache@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@@.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 **__fastcall CVisual::GetCpuClippingData(CVisual *this, const struct CVisualTree *a2)
{
  __int64 **v4; // rbx
  __int64 v6; // r8
  __int64 v7; // rax
  _BYTE *v8; // rdx
  __int64 i; // rcx
  __int64 ****v10; // rcx
  __int64 ***v11; // rcx
  __int64 **j; // rax

  v4 = 0LL;
  if ( (*(unsigned __int8 (__fastcall **)(const struct CVisualTree *))(*(_QWORD *)a2 + 184LL))(a2) )
  {
    v4 = (__int64 **)((char *)this + 328);
  }
  else
  {
    v6 = *((_QWORD *)this + 29);
    if ( *(int *)v6 < 0 )
    {
      v7 = *(unsigned int *)(v6 + 4);
      v8 = (_BYTE *)(v6 + 8);
      for ( i = 0LL; (unsigned int)i < (unsigned int)v7; ++v8 )
      {
        if ( *v8 == 1 )
          break;
        i = (unsigned int)(i + 1);
      }
      v10 = (unsigned int)i >= (unsigned int)v7 ? 0LL : (__int64 ****)(v7 + 15 + v6 + 8 * i - (((_BYTE)v7 + 15) & 7));
      v11 = *v10;
      if ( v11 )
      {
        for ( j = *v11; j != (__int64 **)v11; j = (__int64 **)*j )
        {
          if ( j[4] == (__int64 *)a2 )
          {
            v4 = j - 43;
            return v4 + 9;
          }
        }
      }
    }
  }
  return v4 + 9;
}
