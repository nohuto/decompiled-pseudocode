/*
 * XREFs of ?IsEmpty@CShape@@UEBA_NXZ @ 0x180057840
 * Callers:
 *     ?TryOptimizedCombinePaths@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x18004F5D0 (-TryOptimizedCombinePaths@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z.c)
 *     ?PushCpuClipToScope@CScopedClipStack@@QEAAJPEBVCShape@@0PEBVCMILMatrix@@W4D2D1_ANTIALIAS_MODE@@_NPEAVCCpuClipAntialiasSink@@PEA_N@Z @ 0x1800A6FE0 (-PushCpuClipToScope@CScopedClipStack@@QEAAJPEBVCShape@@0PEBVCMILMatrix@@W4D2D1_ANTIALIAS_MODE@@_.c)
 * Callees:
 *     ?GetBoundingRect@CRegion@FastRegion@@QEBA_NAEAUtagRECT@@@Z @ 0x180058110 (-GetBoundingRect@CRegion@FastRegion@@QEBA_NAEAUtagRECT@@@Z.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

bool __fastcall CShape::IsEmpty(CShape *this)
{
  __int64 v1; // rax
  void (__fastcall *v2)(CShape *, __int128 *, _QWORD); // rax
  float left; // xmm0_4
  float top; // xmm1_4
  float right; // xmm3_4
  float bottom; // xmm2_4
  struct tagRECT v8; // [rsp+20h] [rbp-38h] BYREF
  __int128 v9; // [rsp+30h] [rbp-28h] BYREF

  v1 = *(_QWORD *)this;
  v9 = 0LL;
  v2 = *(void (__fastcall **)(CShape *, __int128 *, _QWORD))(v1 + 48);
  if ( (char *)v2 == (char *)CRegionShape::GetTightBounds )
  {
    v8 = 0LL;
    if ( !FastRegion::CRegion::GetBoundingRect((CShape *)((char *)this + 16), &v8) )
      return 1;
    left = (float)v8.left;
    top = (float)v8.top;
    right = (float)v8.right;
    bottom = (float)v8.bottom;
  }
  else
  {
    v2(this, &v9, 0LL);
    bottom = *((float *)&v9 + 3);
    right = *((float *)&v9 + 2);
    top = *((float *)&v9 + 1);
    left = *(float *)&v9;
  }
  return right <= left || bottom <= top;
}
