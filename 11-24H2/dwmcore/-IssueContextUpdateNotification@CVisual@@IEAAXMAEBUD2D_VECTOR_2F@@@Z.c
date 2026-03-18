/*
 * XREFs of ?IssueContextUpdateNotification@CVisual@@IEAAXMAEBUD2D_VECTOR_2F@@@Z @ 0x1801550E0
 * Callers:
 *     ?PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800A38B0 (-PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?SetData@CSparseStorage@@QEAAXIIPEBX@Z @ 0x18000CBEC (-SetData@CSparseStorage@@QEAAXIIPEBX@Z.c)
 *     ?FindSlot@AllocatedStorage@CSparseStorage@@AEBAPEAVDataInfo@2@I@Z @ 0x18001BE40 (-FindSlot@AllocatedStorage@CSparseStorage@@AEBAPEAVDataInfo@2@I@Z.c)
 *     ?GetChannelCallbackId@CNotificationResource@@IEBAIXZ @ 0x180154D20 (-GetChannelCallbackId@CNotificationResource@@IEBAIXZ.c)
 *     ?GetPointInLocalSpace@CHitTestContext@@SA_NAEBUD2D_POINT_2F@@AEBVCMILMatrix@@PEAU2@@Z @ 0x180155570 (-GetPointInLocalSpace@CHitTestContext@@SA_NAEBUD2D_POINT_2F@@AEBVCMILMatrix@@PEAU2@@Z.c)
 *     ?CalculateWorldRenderingScale@CVisual@@IEAAMXZ @ 0x180155658 (-CalculateWorldRenderingScale@CVisual@@IEAAMXZ.c)
 *     ?GetNotifiedWorldRenderingScale@CVisual@@QEBAMXZ @ 0x18015571C (-GetNotifiedWorldRenderingScale@CVisual@@QEBAMXZ.c)
 *     ?SetNotifiedWorldRenderingScale@CVisual@@QEAAXM@Z @ 0x180155750 (-SetNotifiedWorldRenderingScale@CVisual@@QEAAXM@Z.c)
 *     ?SetNotifiedEffectiveLayoutSize@CVisual@@QEAAXUVector2@Numerics@Foundation@Windows@@@Z @ 0x180155798 (-SetNotifiedEffectiveLayoutSize@CVisual@@QEAAXUVector2@Numerics@Foundation@Windows@@@Z.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     sqrtf_0 @ 0x1802DF698 (sqrtf_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CVisual::IssueContextUpdateNotification(CVisual *this, float a2, const struct D2D_VECTOR_2F *a3)
{
  struct CSparseStorage::AllocatedStorage **v3; // r14
  char v4; // si
  __int64 v5; // r10
  const struct CMILMatrix *v6; // r15
  int v10; // edx
  int v11; // r9d
  struct CSparseStorage::DataInfo *Slot; // rax
  __int64 v13; // xmm0_8
  unsigned int v14; // eax
  __int64 v15; // rcx
  __m128 v16; // xmm11
  __m128 v17; // xmm12
  __m128i v18; // xmm0
  unsigned int v19; // r12d
  unsigned __int64 v20; // rcx
  unsigned __int64 v21; // rcx
  __int64 v22; // rax
  __m128 v23; // xmm1
  struct D2D_POINT_2F v24; // xmm10_8
  float v25; // xmm8_4
  float v26; // xmm1_4
  float v27; // xmm0_4
  float v28; // xmm1_4
  float v29; // xmm0_4
  __m128 y_low; // xmm7
  __m128 x_low; // xmm6
  float v32; // xmm0_4
  unsigned int v33; // edi
  struct CSparseStorage::AllocatedStorage *v34; // r10
  int v35; // edx
  int v36; // r9d
  struct CSparseStorage::DataInfo *v37; // rax
  struct D2D_POINT_2F v38; // xmm0_8
  int v39; // eax
  unsigned __int64 v40; // xmm9_8
  __int64 v41; // r10
  unsigned __int64 v42; // rcx
  struct D2D_POINT_2F v43; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v44; // [rsp+60h] [rbp-A8h]
  struct D2D_POINT_2F v45; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v46; // [rsp+70h] [rbp-98h]
  _QWORD v47[2]; // [rsp+78h] [rbp-90h] BYREF
  _BYTE v48[12]; // [rsp+88h] [rbp-80h] BYREF

  v3 = (struct CSparseStorage::AllocatedStorage **)((char *)this + 224);
  v4 = 0;
  v5 = *((_QWORD *)this + 28);
  v6 = (CVisual *)((char *)this + 608);
  v10 = 10;
  v11 = *(_DWORD *)(v5 + 4);
  if ( (v11 & 0x400000) != 0 )
  {
    Slot = CSparseStorage::AllocatedStorage::FindSlot(*((CSparseStorage::AllocatedStorage **)this + 28), 10);
    v13 = *(_QWORD *)((char *)Slot + 4);
    v14 = *((_DWORD *)Slot + 3);
    *(_QWORD *)v48 = v13;
    v15 = v13;
  }
  else
  {
    v15 = 0LL;
    v14 = 0;
  }
  v16 = (__m128)*((unsigned int *)this + 164);
  v17 = (__m128)*((unsigned int *)this + 165);
  v18 = (__m128i)*((unsigned int *)this + 166);
  *(_DWORD *)v48 = *((_DWORD *)this + 164);
  *(_DWORD *)&v48[4] = v17.m128_i32[0];
  v19 = _mm_cvtsi128_si32(v18);
  v20 = v15 - *(_QWORD *)v48;
  if ( !v20 )
    v20 = v14 - (unsigned __int64)v19;
  if ( v20 )
  {
    v43 = (struct D2D_POINT_2F)__PAIR64__(v17.m128_u32[0], v16.m128_u32[0]);
    v21 = __PAIR64__(v17.m128_u32[0], v16.m128_u32[0]) - `CVisual::SetNotifiedWorldUpVector'::`2'::sc_defaultValue;
    LODWORD(v44) = v18.m128i_i32[0];
    if ( __PAIR64__(v17.m128_u32[0], v16.m128_u32[0]) == `CVisual::SetNotifiedWorldUpVector'::`2'::sc_defaultValue )
      v21 = (unsigned int)_mm_cvtsi128_si32(v18);
    if ( v21 )
      CSparseStorage::SetData(v3, v10, 0xCu, &v43);
    else
      *(_DWORD *)(v5 + 4) = v11 & 0xFFBFFFFF;
    v4 = 1;
  }
  if ( (*((_DWORD *)*v3 + 1) & 0x800000) != 0 )
    v22 = *(_QWORD *)((char *)CSparseStorage::AllocatedStorage::FindSlot(*v3, 9) + 4);
  else
    v22 = 0LL;
  v23 = (__m128)*((unsigned int *)this + 37);
  v45.x = *((FLOAT *)this + 36);
  LODWORD(v45.y) = v23.m128_i32[0];
  v24 = (struct D2D_POINT_2F)_mm_unpacklo_ps((__m128)LODWORD(v45.x), v23).m128_u64[0];
  if ( v22 != v45 )
  {
    ((void (__fastcall *)(_QWORD, _QWORD))CVisual::SetNotifiedEffectiveLayoutSize)(this, v24);
    v4 = 1;
  }
  v25 = CVisual::CalculateWorldRenderingScale(this) * a2;
  if ( CVisual::GetNotifiedWorldRenderingScale(this) != v25 )
  {
    CVisual::SetNotifiedWorldRenderingScale(this, v25);
    v4 = 1;
  }
  v26 = *((float *)this + 156);
  v27 = *(float *)v6;
  *(_QWORD *)&v48[4] = 0LL;
  v45 = 0LL;
  v28 = (float)(v26 * 0.0) + (float)(v27 * 0.0);
  v29 = *((float *)this + 153) * 0.0;
  v43.x = (float)(v28 + *((float *)this + 164)) + a3->x;
  v43.y = (float)((float)((float)(*((float *)this + 157) * 0.0) + v29) + *((float *)this + 165)) + a3->y;
  if ( CHitTestContext::GetPointInLocalSpace(&v43, v6, &v45) )
  {
    y_low = (__m128)LODWORD(v45.y);
    x_low = (__m128)LODWORD(v45.x);
    v32 = sqrtf_0((float)(y_low.m128_f32[0] * y_low.m128_f32[0]) + (float)(x_low.m128_f32[0] * x_low.m128_f32[0]));
    if ( v32 > 0.00000011920929 )
    {
      x_low.m128_f32[0] = x_low.m128_f32[0] / v32;
      y_low.m128_f32[0] = y_low.m128_f32[0] / v32;
      v33 = _mm_cvtsi128_si32((__m128i)0LL);
      goto LABEL_20;
    }
    v33 = 0;
    *(_QWORD *)v48 = 0LL;
    x_low = (__m128)_mm_cvtsi32_si128(0);
  }
  else
  {
    *(_QWORD *)v48 = 0LL;
    v33 = 0;
    x_low = (__m128)_mm_cvtsi32_si128(0);
  }
  y_low = (__m128)*(unsigned int *)&v48[4];
LABEL_20:
  v34 = *v3;
  v35 = 11;
  v36 = *((_DWORD *)*v3 + 1);
  if ( (v36 & 0x200000) != 0 )
  {
    v37 = CSparseStorage::AllocatedStorage::FindSlot(*v3, 11);
    v38 = *(struct D2D_POINT_2F *)((char *)v37 + 4);
    v39 = *((_DWORD *)v37 + 3);
    v43 = v38;
  }
  else
  {
    v39 = 0;
    v43 = 0LL;
  }
  LODWORD(v44) = v39;
  v40 = _mm_unpacklo_ps(x_low, y_low).m128_u64[0];
  if ( v43.x == x_low.m128_f32[0] && v43.y == y_low.m128_f32[0] )
  {
    if ( !v4 )
      return;
  }
  else
  {
    *(_QWORD *)v48 = v40;
    v42 = v40 - `CVisual::SetNotifiedWorldUpVector'::`2'::sc_defaultValue;
    *(_DWORD *)&v48[8] = v33;
    if ( v40 == `CVisual::SetNotifiedWorldUpVector'::`2'::sc_defaultValue )
      v42 = v33;
    if ( v42 )
      CSparseStorage::SetData(v3, v35, 0xCu, v48);
    else
      *((_DWORD *)v34 + 1) = v36 & 0xFFDFFFFF;
  }
  if ( (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(*((_QWORD *)this + 3) + 6392LL) + 72LL))(
         *(_QWORD *)(*((_QWORD *)this + 3) + 6392LL),
         12LL) )
  {
    v47[0] = (unsigned int)CNotificationResource::GetChannelCallbackId(this);
    v47[1] = *((unsigned int *)this + 18);
    v45 = (struct D2D_POINT_2F)_mm_unpacklo_ps(v16, v17).m128_u64[0];
    *(_DWORD *)&v48[8] = v33;
    LODWORD(v46) = v19;
    *(_QWORD *)v48 = v40;
    v43 = v24;
    CoreUICallSend(v41, v47, 2LL, 12LL, 9, &unk_18032BF9C, COERCE_UNSIGNED_INT64(v25), &v43, (unsigned int)&v45);
  }
}
