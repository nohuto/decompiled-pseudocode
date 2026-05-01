/*
 * XREFs of ?ComputeDropTargets@AppResizeData@@AEAAJXZ @ 0x180536298
 * Callers:
 *     ??$MakeAndInitialize@VAppResizeData@@V1@AEAPEAUIAppLayout@@@Details@WRL@Microsoft@@YAJPEAPEAVAppResizeData@@AEAPEAUIAppLayout@@@Z @ 0x180535F24 (--$MakeAndInitialize@VAppResizeData@@V1@AEAPEAUIAppLayout@@@Details@WRL@Microsoft@@YAJPEAPEAVApp.c)
 *     ?RecomputeDropTargets@AppResizeData@@UEAAJXZ @ 0x1805369C0 (-RecomputeDropTargets@AppResizeData@@UEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ?AddDropTarget@AppResizeData@@AEAAJW4ResizeDropLocation@@AEBUCRect@Geometry@@@Z @ 0x18053615C (-AddDropTarget@AppResizeData@@AEAAJW4ResizeDropLocation@@AEBUCRect@Geometry@@@Z.c)
 *     ?ComputeLeftMinWidthMagnetRect@AppResizeData@@AEAAJPEAUCRect@Geometry@@@Z @ 0x180536558 (-ComputeLeftMinWidthMagnetRect@AppResizeData@@AEAAJPEAUCRect@Geometry@@@Z.c)
 *     ?ComputeMiddleMagnetRect@AppResizeData@@AEAAXPEAUCRect@Geometry@@@Z @ 0x180536708 (-ComputeMiddleMagnetRect@AppResizeData@@AEAAXPEAUCRect@Geometry@@@Z.c)
 *     ?ComputeRightMinWidthMagnetRect@AppResizeData@@AEAAJPEAUCRect@Geometry@@@Z @ 0x1805367A4 (-ComputeRightMinWidthMagnetRect@AppResizeData@@AEAAJPEAUCRect@Geometry@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall AppResizeData::ComputeDropTargets(AppResizeData *this)
{
  __int64 v2; // rcx
  __int32 v3; // esi
  unsigned int v4; // r12d
  unsigned int v5; // r14d
  __int32 v6; // r13d
  int v7; // edi
  __int64 v8; // rdx
  __int32 v10; // esi
  __int32 v11; // edi
  __int32 v12; // r15d
  int v13; // eax
  unsigned int v14; // r14d
  int v15; // eax
  unsigned int v16; // esi
  int v17; // ebx
  __int64 v18; // rdx
  __m128i v19; // [rsp+20h] [rbp-60h] BYREF
  __m128i v20; // [rsp+30h] [rbp-50h] BYREF
  __m128i v21; // [rsp+40h] [rbp-40h] BYREF
  _OWORD v22[2]; // [rsp+50h] [rbp-30h] BYREF
  __int64 v23; // [rsp+70h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+28h]

  v23 = 0LL;
  v2 = *((_QWORD *)this + 5);
  memset(v22, 0, sizeof(v22));
  (*(void (__fastcall **)(__int64, _OWORD *))(*(_QWORD *)v2 + 24LL))(v2, v22);
  v3 = v22[0];
  v4 = DWORD1(v22[0]);
  v5 = DWORD2(v22[0]);
  v6 = HIDWORD(v22[0]);
  v19 = 0LL;
  v7 = AppResizeData::ComputeLeftMinWidthMagnetRect(this, (struct Geometry::CRect *)&v19);
  if ( v7 < 0 )
  {
    v8 = 122LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (int)"pcshell\\twinui\\tabletmode\\lib\\appresizedata.cpp",
      (const char *)(unsigned int)v7);
    return (unsigned int)v7;
  }
  v7 = AppResizeData::AddDropTarget(this, 1, &v19);
  if ( v7 < 0 )
  {
    v8 = 123LL;
    goto LABEL_3;
  }
  v20.m128i_i32[0] = v3;
  *(__int64 *)((char *)v20.m128i_i64 + 4) = __PAIR64__(v19.m128i_u32[0], v4);
  v20.m128i_i32[3] = v6;
  v7 = AppResizeData::AddDropTarget(this, 0, &v20);
  if ( v7 < 0 )
  {
    v8 = 128LL;
    goto LABEL_3;
  }
  v21 = 0LL;
  v7 = AppResizeData::ComputeRightMinWidthMagnetRect(this, (struct Geometry::CRect *)&v21);
  if ( v7 < 0 )
  {
    v8 = 132LL;
    goto LABEL_3;
  }
  v7 = AppResizeData::AddDropTarget(this, 5, &v21);
  if ( v7 < 0 )
  {
    v8 = 133LL;
    goto LABEL_3;
  }
  v20.m128i_i64[0] = __PAIR64__(v4, v21.m128i_u32[2]);
  v20.m128i_i64[1] = __PAIR64__(v6, v5);
  v7 = AppResizeData::AddDropTarget(this, 6, &v20);
  if ( v7 < 0 )
  {
    v8 = 138LL;
    goto LABEL_3;
  }
  v20 = 0LL;
  AppResizeData::ComputeMiddleMagnetRect(this, (struct Geometry::CRect *)&v20);
  v10 = v19.m128i_i32[2];
  v11 = v21.m128i_i32[0];
  if ( v20.m128i_i32[0] < v19.m128i_i32[2] || (v12 = v20.m128i_i32[2], v20.m128i_i32[2] > v21.m128i_i32[0]) )
  {
    if ( v21.m128i_i32[0] > v19.m128i_i32[2] )
    {
      v19.m128i_i64[0] = __PAIR64__(v4, v19.m128i_u32[2]);
      v19.m128i_i64[1] = __PAIR64__(v6, v21.m128i_u32[0]);
      v17 = AppResizeData::AddDropTarget(this, 2, &v19);
      if ( v17 < 0 )
      {
        v18 = 178LL;
        goto LABEL_24;
      }
    }
  }
  else
  {
    v13 = AppResizeData::AddDropTarget(this, 3, &v20);
    v14 = v13;
    if ( v13 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x95,
        (int)"pcshell\\twinui\\tabletmode\\lib\\appresizedata.cpp",
        (const char *)(unsigned int)v13);
      return v14;
    }
    if ( v20.m128i_i32[0] > v10 )
    {
      v19.m128i_i64[0] = __PAIR64__(v4, v10);
      v19.m128i_i64[1] = __PAIR64__(v6, v20.m128i_u32[0]);
      v15 = AppResizeData::AddDropTarget(this, 2, &v19);
      v16 = v15;
      if ( v15 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x9E,
          (int)"pcshell\\twinui\\tabletmode\\lib\\appresizedata.cpp",
          (const char *)(unsigned int)v15);
        return v16;
      }
    }
    if ( v12 < v11 )
    {
      v19.m128i_i64[0] = __PAIR64__(v4, v12);
      v19.m128i_i64[1] = __PAIR64__(v6, v11);
      v17 = AppResizeData::AddDropTarget(this, 4, &v19);
      if ( v17 < 0 )
      {
        v18 = 168LL;
LABEL_24:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v18,
          (int)"pcshell\\twinui\\tabletmode\\lib\\appresizedata.cpp",
          (const char *)(unsigned int)v17);
        return (unsigned int)v17;
      }
    }
  }
  return 0LL;
}
